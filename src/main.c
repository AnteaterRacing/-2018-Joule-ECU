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
//REAR ECU CODE MAIN METHOD
int main(void)
{
	init_UART();

	init_ECU(); 				//initialize Rear ECU settings

	//setting message sizes for transmit buffers
	data_TX_buffer[0] = RearToFrontDataMessageSize;
	data_RX_buffer[0] = FrontToRearDataMessageSize;
	telemetry_RX_buffer[0] = FrontToRearTelemetryMessageSize;

	//wait_for_start_seq();						//wait for start sequence to turn on tractive system

	//this runs continuously once the initialization has completed
	while(1){
//		CAN_ReceiveData(FrontToRearDataMessageID,data_RX_buffer);
//		CAN_TransmitData(RearToFrontDataMessageID,data_TX_buffer);
//		CAN_ReceiveData(FrontToRearTelemetryMessageID,telemetry_RX_buffer);
		//set_Throttle_Value(ADC_buf[1]);//data_RX_buffer[Accelerator]);

		//testing PWM output
		transmit_string("buf");
		transmit_char('1');
		transmit_char(':');
		transmit_char('0'+(ADC_buf[1]/100));
		transmit_char('0'+(ADC_buf[1]%100)/10);
		transmit_char('0'+ADC_buf[1]%10);
		transmit_char(',');
		transmit_string("\n\r");

	}
}
#endif



//FRONT ECU CODE MAIN METHOD
#ifdef FrontECU
//Buffers to store CAN data packets
uint8_t telemetry_TX_buffer[FrontToRearTelemetryMessageSize+1] = {0};
uint8_t data_RX_buffer[RearToFrontDataMessageSize+1] = {0};
uint8_t data_TX_buffer[FrontToRearDataMessageSize+1] = {0};
uint8_t data[6] = {5, 1, 2, 3, 4, 5};
uint8_t err_status = 0;
int i = 0;
char s[3];
int main(void){

	init_ECU();	//initialize front ECU settings
	//setting message sizes for transmit buffers
	data_TX_buffer[0] = FrontToRearDataMessageSize;
	telemetry_TX_buffer[0] = FrontToRearTelemetryMessageSize;

	while(1) {

		//if an APPS or BSE fault occurs, set the accelerator signal to 0 to prevent throttle output.
//		if(APPS_Fault(ADC_buf[0],ADC_buf[1]) || BSE_Fault(ADC_buf[3],ADC_buf[0],ADC_buf[1])){
//			data_TX_buffer[Accelerator] = 0;
//			data_TX_buffer[FrontFault] = 0xFF;
//			//TODO: trigger APPS or BSE fault LED
//		}
//		else {
			data_TX_buffer[Accelerator] = ADC_buf[1];		//set the throttle value to the value read from ADC0 (APPS)
			data_TX_buffer[FrontFault] = 0x00;
//		}
		data_TX_buffer[SteeringAngle] = ADC_buf[2];			//set steering angle to value read from ADC2 (steering pot)
		data_TX_buffer[BrakeAngle] = ADC_buf[3];			//set brake angle to value read from ADC3 (brake pot)
		data_TX_buffer[TVEnable] = 0x00;					//TODO: set up torque vectoring toggle somewhere on DASH & connect
		data_TX_buffer[StartButton] = 0xFF;
		//CAN_TransmitData(FrontToRearDataMessageID,data_TX_buffer);

		//for debugging
		for(i=0;i<7;i++){
			transmit_string("buf");
			transmit_char('0'+i);
			transmit_char(':');
			transmit_char('0'+(data_TX_buffer[i]/100));
			transmit_char('0'+(data_TX_buffer[i]%100)/10);
			transmit_char('0'+data_TX_buffer[i]%10);
			transmit_char(',');
		}
		transmit_string("\n\r");

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
	set_Throttle_Value(0);//zeroing out throttle value (precautionary).
	while(data_RX_buffer[StartButton]!=0xFF && ADC_buf[3] < 1000){
		CAN_ReceiveData(FrontToRearDataMessageID,data_RX_buffer);
	}

	GPIOB_PCOR |= RTDS_MASK; //RTDS is bit 15 of GPIOB. set RTDS on.
	delay();				 //leave RTDS on for 1 sec
	GPIOB_PCOR &= ~RTDS_MASK; //set RTDS off.
}
