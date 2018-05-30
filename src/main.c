/* main.c              (c) 2015 Freescale Semiconductor, Inc.
 * Descriptions: UART example code for KEA Series
 * 28 Sept 2015 Kushal Shah: Initial version
 */

#include "derivative.h" /* include peripheral declarations SKEAZ128M4 */
#include "UART.h"
#include "clocks.h"
#include "ADC.h"
#include "stdio.h"
#include "FTM.h"
#include "ECU_Init.h"
#include "ECU_Operations.h"
#include "CAN.h"
#include "main.h"
#include "Input_Scan.h"
#include "MSCAN_Module.h"
#include "msCANdrv.h"
#include "msCANcfg.h"
#include <math.h>
#include "WheelSpeed.h"

#define PTE7  7          						/* Port PTE7 output to blue LED */
#define PTH0 24          						/* Port PTH0 output to red LED */
#define PTH1 25          						/* Port PTH1 output to green LED */
#define Temp_Threshold 153						/* high temperature threshold to reduce power to motors 153 = 3V = 100 Celsius */

void test_ADC(uint8_t buf) {
	//testing PWM output
	transmit_string("buf");
	transmit_char('0' + buf);
	transmit_char(':');
	transmit_char('0' + (ADC_buf[buf] / 100));
	transmit_char('0' + (ADC_buf[buf] % 100) / 10);
	transmit_char('0' + ADC_buf[buf] % 10);
	transmit_char(',');
	transmit_string("\n\r");
}

//REAR ECU MAIN METHOD==================================================================
#ifdef RearECU

//Buffers to store CAN data packets
uint8_t data_RX_buffer[FrontToRearDataMessageSize+1] = {0};
uint8_t telemetry_RX_buffer[FrontToRearTelemetryMessageSize+1] = {0};
uint8_t data_TX_buffer[RearToFrontDataMessageSize+1] = {0};
uint8_t Orion1_RX_buffer[Orion1_Size+1] = {0};
uint8_t Orion2_RX_buffer[Orion2_Size+1] = {0};
uint8_t Orion3_RX_buffer[Orion3_Size+1] = {0};
uint8_t Orion4_RX_buffer[Orion4_Size+1] = {0};
uint8_t Orion5_RX_buffer[Orion5_Size+1] = {0};
uint8_t telemetry_TX_buffer[RearTelemetryMessageSize+1] = {0};
uint16_t heartbeatcounter = 0;
uint8_t heartbeat = 0;
uint8_t transmit_timer = 0;


void transmit_telemetry_data(void);

int main(void)
{

	init_ECU(); 				//initialize Rear ECU settings

	//setting message sizes for transmit buffers
	data_TX_buffer[0] = RearToFrontDataMessageSize;
	data_RX_buffer[0] = FrontToRearDataMessageSize;
	telemetry_RX_buffer[0] = FrontToRearTelemetryMessageSize;
	telemetry_TX_buffer[0] = RearTelemetryMessageSize;

	//wait_for_start_seq();						//wait for start sequence to turn on tractive system

	//this runs continuously once the initialization has completed
	while(1) {
		//transmit rate reduced to one transmission every ~30ms
		if(transmit_timer > 100) {
			CAN_TransmitData(RearTelemetryMessageID, telemetry_TX_buffer);
			CAN_TransmitData(RearToFrontDataMessageID,data_TX_buffer);
			transmit_timer = 0;
		}
		else {
			transmit_timer++;
		}
		CAN_ReceiveData(FrontToRearDataMessageID,data_RX_buffer);
		CAN_ReceiveData(FrontToRearTelemetryMessageID,telemetry_RX_buffer);
		CAN_ReceiveData(Orion1_ID, Orion1_RX_buffer);
		CAN_ReceiveData(Orion2_ID, Orion2_RX_buffer);
		CAN_ReceiveData(Orion3_ID, Orion3_RX_buffer);
		CAN_ReceiveData(Orion4_ID, Orion4_RX_buffer);
		CAN_ReceiveData(Orion5_ID, Orion5_RX_buffer);

		data_TX_buffer[Speedometer] = (uint8_t)((WheelSpeed[leftWheel]+WheelSpeed[rightWheel])/2);
		//data_TX_buffer[TractionLED] = 0; //TODO: program traction LED

		//checking for IMD, BMS, & BSPD Faults:
		if(IMD_Fault) {
			data_TX_buffer[IMDFault] = 0xFF;
		} else {
			data_TX_buffer[IMDFault] = 0x00;
		}
		if(BMS_Fault) {
			data_TX_buffer[BMSFault] = 0xFF;
		} else {
			data_TX_buffer[BMSFault] = 0x00;
		}
		if(BSPD_Fault) {
			data_TX_buffer[BSPDFault] = 0xFF;
		} else {
			data_TX_buffer[BSPDFault] = 0x00;
		}
		//if any external fault is triggered set throttle to 0
//		if (IMD_Fault || BMS_Fault || BSPD_Fault || data_RX_buffer[FrontFault]) {
//			set_Throttle_Value(0,0);
//		}
		//check for disconnection from front ecu over CAN and stop throttle if disconnect occurs
		//since new data is received every 100 cycles at minimum, this checks for 5 missed messages before shutting off throttle
		//this results in an automatic throttle shutoff within 150ms of CAN bus failure
		if(heartbeat == data_RX_buffer[Heartbeat]) {
			if(heartbeatcounter > 500){
				set_Throttle_Value(0,0); //disable throttle
				data_TX_buffer[5] = 0;//used for testing TODO: remove this
				data_TX_buffer[6] = 0;//used for testing TODO: remove this
			}
			else {
				heartbeatcounter++;
			}
		}
		else {
			heartbeatcounter = 0;
			heartbeat = data_RX_buffer[Heartbeat];
			set_Throttle_Value(data_RX_buffer[AcceleratorL],data_RX_buffer[AcceleratorR]);//set throttle value for motor controllers
			data_TX_buffer[5] = data_RX_buffer[AcceleratorL]; //used for testing TODO: remove this
			data_TX_buffer[6] = data_RX_buffer[AcceleratorR]; //used for testing TODO: remove this
		}


		//checking if motor temperature or accumulator temperature is above our specified unsafe threshold
		//max temperature for motors 100C
		//max temperature for Accumulator cells 50C
//		else if (ADC_buf[0] > Temp_Threshold || ADC_buf[1] > Temp_Threshold || Orion3_RX_buffer[High_Temperature] > 50) {
//			data_TX_buffer[MotorTempLED] = 0xFF;	//Turn on motor temp LED on dashboard
//			set_Throttle_Value(data_RX_buffer[AcceleratorL]*0.5,data_RX_buffer[AcceleratorR]*0.5); //reduce max throttle by 50%
//		}
//		else {
//		data_TX_buffer[MotorTempLED] = 0;	//turn off motor temp LED on dashboard
//		}



		//transmit telemetry data over CAN for testing
		telemetry_TX_buffer[WheelSpeed_L] = WheelSpeed[leftWheel];
		telemetry_TX_buffer[WheelSpeed_R] = WheelSpeed[rightWheel];
		telemetry_TX_buffer[TireTemp_L1] = ADC_buf[2];//TTL1
		telemetry_TX_buffer[TireTemp_L2] = ADC_buf[3];//TTL2
		telemetry_TX_buffer[TireTemp_L3] = ADC_buf[4];//TTL3
		telemetry_TX_buffer[TireTemp_R1] = ADC_buf[5];//TTR1
		telemetry_TX_buffer[TireTemp_R2] = ADC_buf[6];//TTR2
		telemetry_TX_buffer[TireTemp_R3] = ADC_buf[7];//TTR3

		//transmit telemetry data to xBee if in running car mode
		#ifdef runningMode
		transmit_telemetry_data();
		#endif
	}
}

//TODO: @Jeffery @Lucas test start button
//waiting for the start sequence to be pressed before starting the vehicle
//start button press and brake press = start condition.
void wait_for_start_seq() {

	set_Throttle_Value(0,0);//zeroing out throttle value (precautionary).

	while(!data_RX_buffer[StartButton] && ADC_buf[3] < 1000) {
		CAN_ReceiveData(FrontToRearDataMessageID,data_RX_buffer);
	}

	GPIOB_PCOR |= RTDS_MASK; 	//RTDS is bit 15 of GPIOB. set RTDS on.
	delay();//leave RTDS on for 1 sec
	GPIOB_PSOR |= RTDS_MASK;	//set RTDS off.
}

/** transmitting telemetry data to xBee via UART_buffer **/
#ifdef runningMode
void transmit_telemetry_data(void) {
				//Tire Temperature Sensor Data
					//Rear
					UART_buffer[0] = ADC_buf[5];					//TTBR1 (TireTemp_R1)
					UART_buffer[1] = ADC_buf[6];					//TTBR2 (TireTemp_R2)
					UART_buffer[2] = ADC_buf[7];	 				//TTBR3 (TireTemp_R3)

					UART_buffer[3] = ADC_buf[2];					//TTBR1 (TireTemp_L1)
					UART_buffer[4] = ADC_buf[3];					//TTBR2 (TireTemp_L2)
					UART_buffer[5] = ADC_buf[4];					//TTBR3 (TireTemp_L3)

					//Front
					UART_buffer[6] = telemetry_RX_buffer[TireTemp_R1];				//TTFR1 (TireTemp_R1)
					UART_buffer[7] = telemetry_RX_buffer[TireTemp_R2];				//TTFR2 (TireTemp_R2)
					UART_buffer[8] = telemetry_RX_buffer[TireTemp_R3];				//TTFR3 (TireTemp_R3)

					UART_buffer[9]  = telemetry_RX_buffer[TireTemp_L1];				//TTFL1 (TireTemp_L1)
					UART_buffer[10] = telemetry_RX_buffer[TireTemp_L2];				//TTFL2 (TireTemp_L2)
					UART_buffer[11] = telemetry_RX_buffer[TireTemp_L3];				//TTFL3 (TireTemp_L3)

				//Motor Temperature Sensor Data
					UART_buffer[12] = ADC_buf[0];									//MT1 (L)
					UART_buffer[13] = ADC_buf[1];									//MT2 (R)

				//Wheel Speed Sensor Data
					UART_buffer[14] = WheelSpeed[rightWheel];						//WSBR
					UART_buffer[15] = WheelSpeed[leftWheel];						//WSBL
					UART_buffer[16] = telemetry_RX_buffer[WheelSpeed_R];			//WSFR
					UART_buffer[17] = telemetry_RX_buffer[WheelSpeed_L];			//WSFL

				//Throttle Position Sensor Data
					UART_buffer[18] = data_RX_buffer[AcceleratorR];					//throttleR
					UART_buffer[19] = data_RX_buffer[AcceleratorL];					//throttleL

				//Battery Pack Voltage, Current, and Temperature Sensor Data
					UART_buffer[20] = Orion2_RX_buffer[Pack_Instant_Voltage];
					UART_buffer[21] = Orion2_RX_buffer[Pack_Instant_Voltage2];		//packVoltage
					UART_buffer[22] = Orion1_RX_buffer[Pack_Current];
					UART_buffer[23] = Orion1_RX_buffer[Pack_Current2]; 				//packCurrent
					UART_buffer[24] = Orion3_RX_buffer[High_Temperature];			//packTemperature
					UART_buffer[25] = Orion2_RX_buffer[Pack_SOC];					//state of charge

				//Steering Angle Sensor Data
					UART_buffer[26] = data_RX_buffer[SteeringAngle];				//steeringAngle

				//Brake Angle
					UART_buffer[27] = data_RX_buffer[BrakeAngle];					//brakeAngle
}
#endif

#endif

//FRONT ECU MAIN METHOD==================================================================
#ifdef FrontECU
//Buffers to store CAN data packets
uint8_t telemetry_TX_buffer[FrontToRearTelemetryMessageSize + 1] = { 0 };
uint8_t data_RX_buffer[RearToFrontDataMessageSize + 1] = { 0 };
uint8_t data_TX_buffer[FrontToRearDataMessageSize + 1] = { 0 };
uint8_t telemetry_RX_buffer[RearTelemetryMessageSize+1] = {0};
uint8_t Orion1_RX_buffer[Orion1_Size+1] = {0};
uint8_t accval;
uint8_t steeringval;
uint8_t heartbeat = 0;
uint16_t current = 0;
double scaled = 0;
uint8_t output = 0;
uint8_t transmit_timer = 0;

//converts linear function accelerator input to exponential function output
uint8_t addCurve(uint8_t acc) {
	//scaling using 1.01^x function (less exponential)
	//double scaled = 21.85 * pow(1.01, acc) - 21.85;
	//uint8_t output = (uint8_t) (scaled);
	//return output;

	scaled = 0;

	if(acc <= 64){
		scaled = pow(acc, 2) / 32;
	}
	else if (acc > 64 && acc <= 192){
		scaled = (log(acc - 50.18) / log(1.0185)) - 15.3;
	}
	else if (acc > 192){
		scaled = 255;
	}
	//default = 0

	output = (uint8_t) (scaled);
	return output;


}
//NEW THROTTLE CURVE
//	if(acc > 212){ //TODO: @arnav test
//		return 255;
//	}

//	else{
//		//scaling using 1.02^x function (more exponential)
//		double scaled = 136 * pow(1.005, acc) - 137;
//		uint8_t output = (uint8_t) (scaled);
//		return output;
//	}
//}

int main(void) {
	init_ECU();	//initialize front ECU settings
	//setting message sizes for transmit buffers
	data_TX_buffer[0] = FrontToRearDataMessageSize;
	telemetry_TX_buffer[0] = FrontToRearTelemetryMessageSize;
	data_RX_buffer[0] = RearToFrontDataMessageSize;
	telemetry_RX_buffer[0] = RearTelemetryMessageSize;


	//setting outputs
//	GPIOA_PDDR |= 1 << 26 /*PTD2*/| 1 << 28/*PTD4*/| 1 << 31/*PTD7*/| 1 << 18/*PTC2*/;


	while (1) {
		if(transmit_timer > 100) {
			CAN_TransmitData(FrontToRearDataMessageID, data_TX_buffer);
			CAN_TransmitData(RearToFrontDataMessageID,data_TX_buffer);
			CAN_TransmitData(FrontToRearTelemetryMessageID,telemetry_TX_buffer);
			transmit_timer = 0;
		}
		else {
			transmit_timer++;
		}

		CAN_ReceiveData(RearToFrontDataMessageID, data_RX_buffer);
		CAN_ReceiveData(Orion1_ID, Orion1_RX_buffer);
		CAN_ReceiveData(RearTelemetryMessageID, telemetry_RX_buffer);

		//rolling counter to determine if CAN bus failure occurs
		if(heartbeat==255){
			heartbeat = 0;
		}
		else{
			heartbeat++;
		}
		//TODO: @Jeffery @Lucas implement fault checking on vehicle
		//if an APPS or BSE fault occurs, set the accelerator signal to 0 to prevent throttle output.
//		if(APPS_Fault(ADC_buf[0],ADC_buf[1]) || BSE_Fault(ADC_buf[3],ADC_buf[0],ADC_buf[1])){
//			data_TX_buffer[AcceleratorL] = 0;
//			data_TX_buffer[AcceleratorR] = 0;
//			data_TX_buffer[FrontFault] = 0xFF;
//			//TODO: trigger APPS or BSE fault LED
//		}
//		else {

		/*TorqueVectoringBias params*/
		/*Resting -> Depressed
		4B - 60 brakes

		Steering Values
		C2 - full right
		71 -center
		15 - full left
		*/
		float B = TorqueVectoringBias/10;
		float A = 1 - B;
//		float C = -A;
		accval = addCurve(ADC_buf[1]);
		steeringval = ADC_buf[2]; //steering potentiometer value
		steeringval = steeringval + 7; //offset to compensate for sensor placement error
		//TORQUE VECTORING BASIC ALGORITHM
		//TODO: @Reza test this functionality based on NEW Steering Pot
		if (steeringval < 108) { //left turn
			data_TX_buffer[AcceleratorR] = accval * ((A / 107) * steeringval + B); //A and B added
			data_TX_buffer[AcceleratorL] = accval;

		} else if (steeringval > 148) { 				//right turn
			data_TX_buffer[AcceleratorR] = accval;
			data_TX_buffer[AcceleratorL] = accval * ((-A / 107) * (steeringval - 148) + 1);  //-A added, 1 is always 1

		} else { //on center steering. deadzone between 108 and 148
			data_TX_buffer[AcceleratorR] = accval;
			data_TX_buffer[AcceleratorL] = accval;
		}

			data_TX_buffer[FrontFault] = 0x00;
//		}
		TorqV_LED(data_TX_buffer[AcceleratorL],data_TX_buffer[AcceleratorR]);	//Torque Vectoring LED
		data_TX_buffer[SteeringAngle] = ADC_buf[2];
		data_TX_buffer[BrakeAngle] = ADC_buf[3];			//set brake angle to value read from ADC3 (brake pot)
		data_TX_buffer[TVBias] = TorqueVectoringBias;
		data_TX_buffer[StartButton] = Start;
		data_TX_buffer[Heartbeat] = heartbeat;

		//sets fault LED values based on data from rear
//		Fault_LED(data_RX_buffer[IMDFault], data_RX_buffer[BMSFault], data_RX_buffer[BSPDFault], data_TX_buffer[FrontFault]);

		//transmitting telemetry data to rear ECU
		telemetry_TX_buffer[WheelSpeed_L] = WheelSpeed[leftWheel];
		telemetry_TX_buffer[WheelSpeed_R] = WheelSpeed[rightWheel];
		telemetry_TX_buffer[TireTemp_L1] = ADC_buf[4];
		telemetry_TX_buffer[TireTemp_L2] = ADC_buf[5];
		telemetry_TX_buffer[TireTemp_L3] = ADC_buf[6];
		telemetry_TX_buffer[TireTemp_R1] = ADC_buf[7];
		telemetry_TX_buffer[TireTemp_R2] = ADC_buf[8];
		telemetry_TX_buffer[TireTemp_R3] = ADC_buf[9];
	}
}
#endif
