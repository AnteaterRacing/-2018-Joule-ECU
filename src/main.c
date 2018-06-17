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
#include "I2C.h"

#define PTE7  7          						/* Port PTE7 output to blue LED */
#define PTH0 24          						/* Port PTH0 output to red LED */
#define PTH1 25          						/* Port PTH1 output to green LED */
#define Temp_Threshold 153						/* high temperature threshold to reduce power to motors 153 = 3V = 100 Celsius */
uint8_t started = 0;
uint8_t output = 0;
double scaled = 0;

//converts linear function accelerator input to exponential function output
uint8_t addCurve(uint8_t acc) {
	scaled = ((double)(acc-50))*255/205;
	output = (uint8_t)scaled;
	return output;
}

void test_PWM(uint8_t buf) {
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

void transmit_telemetry_data(void);

int main(void)
{

	init_ECU(); 				//initialize Rear ECU settings
	init_CAN_clocks();
	Init_CAN(0, CMPTX);//initialize CAN0 to FAST mode
	Config_CAN_MB(0,1,RXDF, FrontToRearDataMessageID);//messagebuffer to receive the FrontToRearDataMessage
	Config_CAN_MB(0,2,TXDF, RearToFrontDataMessageID);//messagebuffer to receive the FrontToRearTelemetryMessage
	Config_CAN_MB(0,3,RXDF, FrontToRearTelemetryMessageID);//messagebuffer to transmit the RearToFrontDataMessage
	Config_CAN_MB(0,4,RXDF, Orion1_ID);//ID 28
	Config_CAN_MB(0,5,RXDF, Orion2_ID);//ID 29
	Config_CAN_MB(0,6,RXDF, Orion3_ID);//ID 30
	Config_CAN_MB(0,7,RXDF, Orion4_ID);//ID 31
	Config_CAN_MB(0,8,RXDF, Orion5_ID);//ID 32

	//NEW BMS SETTINGS
	//5 messages, ID = {x28, x29, x30, x31, x32}
	//XXXXXXID x28: {Rolling Counter, Pack CCL, Pack CCL KW, Pack DCL, Pack DCL KW, Pack Current, Pack Voltage, Pack Open Voltage}
	//XXXXXXID x29: {Pack State of Charge, Pack Amphours, Pack Resistance, Pack Depth of Discharge, Pack Health, Pack Summed Voltage, Total Pack Cycles, Current Limit Status}
	//XXXXXXID x30: {High Temp, High Thermister  3
	//ID, Low Temp, Low Thermister ID, Avg Temp, Internal Temp, Low Cell Voltage, Low Cell Voltage ID}
	//XXXXXXXXXXXXID x31: {High Cell Voltage, High Cell Voltage ID, Average Cell Voltage, Low Cell Open Voltage, Low Cell Open Voltage ID, High Cell Open Voltage, High Cell Open Voltage ID, Avg Cell Open Voltage}
	//XXXXXXXXXXXXXID x32: {Low Cell Internal Res., Low Cell Resistance ID, High Cell Internal Res., High Cell Res. ID, Avg Cell Internal Res., Max Cell Voltage, Min Cell Voltage, BLANK, BLANK}


	//setting message sizes for transmit buffers
	data_TX_buffer[0] = RearToFrontDataMessageSize;
	data_RX_buffer[0] = FrontToRearDataMessageSize;
	telemetry_RX_buffer[0] = FrontToRearTelemetryMessageSize;
	GPIOA_PDDR |= 1 << 27; //RTDS
	GPIOA_PIDR &= ~((1<<28) | (1<<26)); //IMD Fault and BMS Fault
	GPIOA_PIDR |= 1 << 27;
	GPIOA_PCOR |= 1 << 27;
	IMD_Fault = 0;
	BMS_Fault = 0;
	BSPD_Fault = 0;

	//wait_for_start_seq();						//wait for start sequence to turn on tractive system

	//this runs continuously once the initialization has completed
	while(1) {
		CAN_ReceiveData(FrontToRearDataMessageID,data_RX_buffer);
		CAN_ReceiveData(FrontToRearTelemetryMessageID,telemetry_RX_buffer);
		CAN_ReceiveData(Orion1_ID, Orion1_RX_buffer);
		CAN_ReceiveData(Orion2_ID, Orion2_RX_buffer);
		CAN_ReceiveData(Orion3_ID, Orion3_RX_buffer);
		CAN_ReceiveData(Orion4_ID, Orion4_RX_buffer);
		CAN_ReceiveData(Orion5_ID, Orion5_RX_buffer);
		CAN_TransmitData(RearToFrontDataMessageID,data_TX_buffer);

		data_TX_buffer[Speedometer] = (uint8_t)((WheelSpeed[leftWheel]+WheelSpeed[rightWheel])/2);
		//data_TX_buffer[TractionLED] = 0; //TODO: program traction LED

		IMD_Fault  = (GPIOA_PDIR & (1<<28))  >> 28; 		//pin D4 = bit A28 = IMD
		BMS_Fault  = (GPIOA_PDIR & (1<<13))  >> 13;	//pin B5 = bit A13 = BMS    *NOTE BMS FAULT IS SHORTED WITH BSPD FAULT
		BSPD_Fault = (GPIOA_PDIR & (1<<12))  >> 12;     //pin B4 = bit A12 = BSPD

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
		//if any fault is triggered set throttle to 0
//		if (IMD_Fault || BMS_Fault || BSPD_Fault || data_RX_buffer[FrontFault]) {
//			set_Throttle_Value(0,0);
//		}
		//checking if motor temperature or accumulator temperature is above our specified unsafe threshold
//		else if (ADC_buf[0] > Temp_Threshold || ADC_buf[1] > Temp_Threshold) {
//			data_TX_buffer[MotorTempLED] = 0xFF;	//Turn on motor temp LED on dashboard
//			set_Throttle_Value(data_RX_buffer[AcceleratorL]*0.5,data_RX_buffer[AcceleratorR]*0.5); //reduce max throttle by 50%
//		}
//		else {
		set_Throttle_Value(data_RX_buffer[AcceleratorL],data_RX_buffer[AcceleratorR]);//set throttle value for motor controllers
		data_TX_buffer[5] = data_RX_buffer[AcceleratorL];
		data_TX_buffer[6] = data_RX_buffer[AcceleratorR];
//		data_TX_buffer[MotorTempLED] = 0;	//turn off motor temp LED on dashboard
//		}

		//transmit telemetry data to xBee if in running car mode
		#ifdef runningMode
		//transmit_telemetry_data();
		#endif
	}
}

//TODO: @Jeffery @Lucas test start button
//waiting for the start sequence to be pressed before starting the vehicle
//start button press and brake press = start condition.
void wait_for_start_seq() {

	set_Throttle_Value(0,0);//zeroing out throttle value (precautionary).
	GPIOA_PCOR |= 1<<27;
	while(!data_RX_buffer[StartButton]/* && ADC_buf[3] < 0x50*/) {
		CAN_TransmitData(RearToFrontDataMessageID,data_TX_buffer);
		CAN_ReceiveData(FrontToRearDataMessageID,data_RX_buffer);
	}

	GPIOB_PSOR |= 1 << 27; 	//RTDS is bit 15 of GPIOB. set RTDS on.
	delay();//leave RTDS on for 1 sec
	GPIOB_PCOR |= 1 << 27;	//set RTDS off.
}

#endif

//FRONT ECU MAIN METHOD==================================================================
#ifdef FrontECU
//Buffers to store CAN data packets
uint8_t telemetry_TX_buffer[FrontToRearTelemetryMessageSize + 1] = { 0 };
uint8_t data_RX_buffer[RearToFrontDataMessageSize + 1] = { 0 };
uint8_t data_TX_buffer[FrontToRearDataMessageSize + 1] = { 0 };
uint8_t Orion1_RX_buffer[Orion1_Size+1] = {0};
uint8_t err_status = 0;
uint8_t accval;
uint8_t steeringval;
int i = 0;
char s[3];
int main(void) {
	init_ECU();	//initialize front ECU settings
	//setting message sizes for transmit buffers
	data_TX_buffer[0] = FrontToRearDataMessageSize;
	telemetry_TX_buffer[0] = FrontToRearTelemetryMessageSize;
	data_RX_buffer[0] = RearToFrontDataMessageSize;
	init_CAN_clocks();
	err_status = Init_CAN(0, CMPTX); //initialize CAN0 to FAST mode
	Config_CAN_MB(0, 1, TXDF, FrontToRearDataMessageID); //messagebuffer to transmit the FrontToRearDataMessage
	Config_CAN_MB(0, 2, RXDF, RearToFrontDataMessageID); //messagebuffer to transmit the FrontToRearTelemetryMessage
	Config_CAN_MB(0, 3, TXDF, FrontToRearTelemetryMessageID); //messagebuffer to receive the RearToFrontDataMessage
	Config_CAN_MB(0,4,RXDF, Orion1_ID);//ID 28

	GPIOB_PIDR &= ~(1 << 15);
	GPIOA_PDDR |= 1 << 27;//imd fault led
	GPIOB_PDDR |= 1 << 26;//bms fault led
	GPIOA_PIDR |= 1 << 27;
	GPIOB_PIDR |= 1 << 26;
	GPIOA_PCOR |= 1 << 27;
	GPIOB_PCOR |= 1 << 26;
	while (1) {
		Start = (GPIOB_PDIR & (1<<15)) >> 15;
		//TODO: @Jeffery @Lucas implement fault checking on vehicle
		//if an APPS or BSE fault occurs, set the accelerator signal to 0 to prevent throttle output.
//		if(APPS_Fault(ADC_buf[0],ADC_buf[1]) || BSE_Fault(ADC_buf[3],ADC_buf[0],ADC_buf[1])){
//			data_TX_buffer[AcceleratorL] = 0;
//			data_TX_buffer[AcceleratorR] = 0;
//			data_TX_buffer[FrontFault] = 0xFF;
//			GPIOB_PCOR |= 1 << PTE7;
////			//TODO: trigger APPS or BSE fault LED
//		}
//		else {
//			GPIOB_PSOR |= 1 << PTE7;
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
		if(ADC_buf[1] > 50) {
			accval = addCurve(ADC_buf[1]);
		} else {
			accval = 0;
		}
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
	//	TorqV_LED(data_TX_buffer[AcceleratorL],data_TX_buffer[AcceleratorR]);	//Torque Vectoring LED
		data_TX_buffer[SteeringAngle] = ADC_buf[2];
		data_TX_buffer[BrakeAngle] = ADC_buf[3];			//set brake angle to value read from ADC3 (brake pot)
		data_TX_buffer[TVBias] = TorqueVectoringBias;
		data_TX_buffer[StartButton] = Start;

		CAN_TransmitData(FrontToRearDataMessageID, data_TX_buffer);
		CAN_ReceiveData(RearToFrontDataMessageID, data_RX_buffer);
		CAN_TransmitData(FrontToRearTelemetryMessageID,telemetry_TX_buffer);
		CAN_ReceiveData(Orion1_ID, Orion1_RX_buffer); //TODO: @Arnav use Rolling Counter to fault check CAN bus

		//sets fault LED values based on data from rear
		Fault_LED(data_RX_buffer[IMDFault], data_RX_buffer[BMSFault]);

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

#ifdef RearECU
#ifdef runningMode
void transmit_telemetry_data(void) {
	/** transmitting telemetry data to xBee via UART_buffer **/
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
					UART_buffer[20] = OrionL5_RX_buffer[PackVoltage];				//packVoltage
					UART_buffer[21] = OrionL5_RX_buffer[PackCurrent];				//packCurrent
					UART_buffer[22] = OrionL8_RX_buffer[High_Temp];					//packTemperature
					UART_buffer[23] = OrionL7_RX_buffer[Pack_SOC];					//state of charge

				//Steering Angle Sensor Data
					UART_buffer[24] = data_RX_buffer[SteeringAngle];				//steeringAngle

				//Brake Angle
					UART_buffer[25] = data_RX_buffer[BrakeAngle];					//brakeAngle
}
#endif
#endif
