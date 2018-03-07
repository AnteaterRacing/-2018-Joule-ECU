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
#include "Display.h"
#include "ECU_Init.h"
#include "ECU_Operations.h"
#include "Data_Logging.h"
#include "CAN.h"
#include "main.h"
#include "Input_Scan.h"
#include "MSCAN_Module.h"
#include "msCANdrv.h"
#include "msCANcfg.h"

#define PTE7  7          						/* Port PTE7 output to blue LED */
#define PTH0 24          						/* Port PTH0 output to red LED */
#define PTH1 25          						/* Port PTH1 output to green LED */
uint16_t MT_L;
uint16_t MT_R;
uint16_t TT_RL_1;
uint16_t TT_RL_2;
uint16_t TT_RL_3;
uint16_t TT_RR_1;
uint16_t TT_RR_2;
uint16_t TT_RR_3;
uint8_t started = 0;

#ifdef RearECU

//Buffers to store CAN data packets
uint8_t data_RX_buffer[FrontToRearDataMessageSize+1] = {0};
uint8_t telemetry_RX_buffer[FrontToRearTelemetryMessageSize+1] = {0};
uint8_t data_TX_buffer[RearToFrontDataMessageSize+1] = {0};
uint8_t OrionL5_RX_buffer[OrionL5_Size+1] = {0};
uint8_t OrionL7_RX_buffer[OrionL7_Size+1] = {0};
uint8_t OrionL8_RX_buffer[OrionL8_Size+1] = {0};

//REAR ECU CODE MAIN METHOD
int main(void)
{

	init_ECU(); 				//initialize Rear ECU settings
	
	//CAN_Init();
	init_CAN_clocks();
	Init_CAN(0, CMPTX); //initialize CAN0 to FAST mode
	Config_CAN_MB(0,1,RXDF, FrontToRearDataMessageID); //messagebuffer to receive the FrontToRearDataMessage
	Config_CAN_MB(0,2,TXDF, RearToFrontDataMessageID); //messagebuffer to receive the FrontToRearTelemetryMessage
	Config_CAN_MB(0,3,RXDF, FrontToRearTelemetryMessageID); //messagebuffer to transmit the RearToFrontDataMessage
	Config_CAN_MB(0,4,RXDF, OrionL5_ID);//length: 5; {Pack Current, IN USE, PACK INSTANT VOLTAGE, IN USE, CRC CHECKSUM}
	Config_CAN_MB(0,5,RXDF, OrionL7_ID);//length: 7; {Pack DCL, Pack CCL, Blank, Simulated Simulated SOC
	Config_CAN_MB(0,6,RXDF, OrionL8_ID);//length: 8; {relay state, pack soc, pack resistance, in use, pack open voltage, in use, pack amphours, crc checksum}


	//setting message sizes for transmit buffers
	data_TX_buffer[0] = RearToFrontDataMessageSize;
	data_RX_buffer[0] = FrontToRearDataMessageSize;
	telemetry_RX_buffer[0] = FrontToRearTelemetryMessageSize;
	OrionL5_RX_buffer[0] = OrionL5_Size;
	OrionL7_RX_buffer[0] = OrionL7_Size;
	OrionL8_RX_buffer[0] = OrionL8_Size;
	
	int counter = 0;
	//wait_for_start_seq();						//wait for start sequence to turn on tractive system

	//this runs continuously once the initialization has completed
	while(1){
		GPIOB_PSOR |= 1<<PTE7 | 1<< PTH0 | 1<<PTH1;//clear LED
		CAN_ReceiveData(FrontToRearDataMessageID,data_RX_buffer);
		CAN_TransmitData(RearToFrontDataMessageID,data_TX_buffer);
		CAN_ReceiveData(FrontToRearTelemetryMessageID,telemetry_RX_buffer);
		CAN_ReceiveData(OrionL5_ID, OrionL5_RX_buffer);
		CAN_ReceiveData(OrionL7_ID, OrionL7_RX_buffer);
		CAN_ReceiveData(OrionL8_ID, OrionL8_RX_buffer);
		
		//check for missed CAN messages before continuing. //

		set_Throttle_Value(data_RX_buffer[AcceleratorL],data_RX_buffer[AcceleratorR]);

		//testing PWM output
//		transmit_string("buf");
//		transmit_char('1');
//		transmit_char(':');
//		transmit_char('0'+(ADC_buf[1]/100));
//		transmit_char('0'+(ADC_buf[1]%100)/10);
//		transmit_char('0'+ADC_buf[1]%10);
//		transmit_char(',');
//		transmit_string("\n\r");
	}
}
#endif



//FRONT ECU CODE MAIN METHOD
#ifdef FrontECU
//Buffers to store CAN data packets
uint8_t telemetry_TX_buffer[FrontToRearTelemetryMessageSize+1] = {0};
uint8_t data_RX_buffer[RearToFrontDataMessageSize+1] = {0};
uint8_t data_TX_buffer[FrontToRearDataMessageSize+1] = {0};
uint8_t OrionL5_RX_buffer[OrionL5_Size+1] = {0};
uint8_t OrionL7_RX_buffer[OrionL7_Size+1] = {0};
uint8_t OrionL8_RX_buffer[OrionL8_Size+1] = {0};
uint8_t data[6] = {5, 1, 2, 3, 4, 5};
uint8_t err_status = 0;
uint8_t accval;
uint8_t steeringval;
int i = 0;
char s[3];
int main(void){

	init_ECU();	//initialize front ECU settings
	//setting message sizes for transmit buffers
	data_TX_buffer[0] = FrontToRearDataMessageSize;
	telemetry_TX_buffer[0] = FrontToRearTelemetryMessageSize;
	data_RX_buffer[0] = RearToFrontDataMessageSize;
	OrionL5_RX_buffer[0] = OrionL5_Size;
	OrionL7_RX_buffer[0] = OrionL7_Size;
	OrionL8_RX_buffer[0] = OrionL8_Size;
	
	init_CAN_clocks();
	err_status = Init_CAN(0, CMPTX); //initialize CAN0 to FAST mode
	Config_CAN_MB(0,1,TXDF, FrontToRearDataMessageID); //messagebuffer to transmit the FrontToRearDataMessage
	Config_CAN_MB(0,2,RXDF, RearToFrontDataMessageID); //messagebuffer to transmit the FrontToRearTelemetryMessage
	Config_CAN_MB(0,3,TXDF, FrontToRearTelemetryMessageID); //messagebuffer to receive the RearToFrontDataMessage
	Config_CAN_MB(0,4,RXDF, OrionL5_ID);//length: 5; {Pack Current, IN USE, PACK INSTANT VOLTAGE, IN USE, CRC CHECKSUM}
	Config_CAN_MB(0,5,RXDF, OrionL7_ID);//length: 7; {Pack DCL, Pack CCL, Blank, Simulated Simulated SOC
	Config_CAN_MB(0,6,RXDF, OrionL8_ID);//length: 8; {relay state, pack soc, pack resistance, in use, pack open voltage, in use, pack amphours, crc checksum}

		

	while(1) {

		//if an APPS or BSE fault occurs, set the accelerator signal to 0 to prevent throttle output.
//		if(APPS_Fault(ADC_buf[0],ADC_buf[1]) || BSE_Fault(ADC_buf[3],ADC_buf[0],ADC_buf[1])){
//			data_TX_buffer[Accelerator] = 0;
//			data_TX_buffer[FrontFault] = 0xFF;
//			//TODO: trigger APPS or BSE fault LED
//		}
//		else {
			accval = ADC_buf[1];
			steeringval = ADC_buf[2];

			//TORQUE VECTORING BASIC ALGORITHM
			if(steeringval < 128){ //left turn
				data_TX_buffer[AcceleratorL] = accval*((0.3/127)*steeringval + 0.7);
				data_TX_buffer[AcceleratorR] = accval;

			}
			else { 				//right turn
				data_TX_buffer[AcceleratorL] = accval;
				data_TX_buffer[AcceleratorR] = accval*((-0.3/128)*(steeringval-128) + 1);

			}
//			data_TX_buffer[FrontFault] = 0x00;
////		}
//		data_TX_buffer[BrakeAngle] = ADC_buf[3];			//set brake angle to value read from ADC3 (brake pot)
//		data_TX_buffer[TVEnable] = 0x00;					//TODO: set up torque vectoring toggle somewhere on DASH & connect
//		data_TX_buffer[StartButton] = 0xFF;
		CAN_TransmitData(FrontToRearDataMessageID,data_TX_buffer);
		CAN_ReceiveData(RearToFrontDataMessageID,data_RX_buffer);
		//for debugging
//		for(i=0;i<7;i++){
//			transmit_string("buf");
//			transmit_char('0'+i);
//			transmit_char(':');
//			transmit_char('0'+(data_TX_buffer[i]/100));
//			transmit_char('0'+(data_TX_buffer[i]%100)/10);
//			transmit_char('0'+data_TX_buffer[i]%10);
//			transmit_char(',');
//		}
//		transmit_string("\n\r");

		//TODO: set LED values/Speedometer based on received data from rear
		//CAN_ReceiveData(RearToFrontDataMessageID,data_RX_buffer);

		//TODO: convert/transmit wheelspeed data
//		telemetry_TX_buffer[WheelSpeed_L] = 0x00;
//		telemetry_TX_buffer[WheelSpeed_R] = 0x00;
//		telemetry_TX_buffer[TireTemp_L1] = ADC_buf[4];
//		telemetry_TX_buffer[TireTemp_L2] = ADC_buf[5];
//		telemetry_TX_buffer[TireTemp_L3] = ADC_buf[6];
//		telemetry_TX_buffer[TireTemp_R1] = ADC_buf[7];
//		telemetry_TX_buffer[TireTemp_R2] = ADC_buf[8];
//		telemetry_TX_buffer[TireTemp_R3] = ADC_buf[9];
		//CAN_TransmitData(FrontToRearTelemetryMessageID,telemetry_TX_buffer);

	}
}
#endif

//waiting for the start sequence to be pressed before starting the vehicle
void wait_for_start_seq(){
	//waiting for start button press and brake to be depressed.
	set_Throttle_Value(0,0);//zeroing out throttle value (precautionary).
	while(data_RX_buffer[StartButton]!=0xFF && ADC_buf[3] < 1000){
		CAN_ReceiveData(FrontToRearDataMessageID,data_RX_buffer);
	}

	GPIOB_PCOR |= RTDS_MASK; //RTDS is bit 15 of GPIOB. set RTDS on.
	delay();				 //leave RTDS on for 1 sec
	GPIOB_PCOR &= ~RTDS_MASK; //set RTDS off.
}
