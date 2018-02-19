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
uint32_t Fault;

uint8_t data_RX_buffer[FrontToRearDataMessageSize+1] = {0};
uint8_t telemetry_RX_buffer[FrontToRearTelemetryMessageSize+1] = {0};
uint8_t data_TX_buffer[RearToFrontDataMessageSize+1] = {0};

//REAR ECU CODE MAIN METHOD
#ifdef RearECU
int main(void)
{
	init_ECU(Rear_ECU_CAN_Init); 				//initialize Rear ECU settings
	wait_for_start_seq();		//wait for start sequence to turn on tractive system
	data_TX_buffer[0] = RearToFrontDataMessageSize;

	//this runs continuously once the initialization has completed
	while(1){
		CAN_Receive(FrontToRearDataMessageID,data_RX_buffer);

		CAN_Transmit(RearToFrontDataMessageID,data_TX_buffer);
		CAN_Receive(FrontToRearTelemetryMessageID,telemetry_RX_buffer);
	}
}
#endif

//FRONT ECU CODE MAIN METHOD
#ifdef FrontECU

uint8_t telemetry_TX_buffer[FrontToRearTelemetryMessageSize+1] = {0};
uint8_t data_RX_buffer[RearToFrontDataMessageSize+1] = {0};
uint8_t data_TX_buffer[FrontToRearDataMessageSize+1] = {0};

int main(void){
	init_ECU(Front_ECU_CAN_Init);	//initialize front ECU settings
	wait_for_start_seq(); 		//wait for the startup sequence (brake + start button)
	data_TX_buffer[0] = FrontToRearDataMessageSize;
	telemetry_TX_buffer[0] = FrontToRearTelemetryMessageSize;
	while(1) {
		CAN_Transmit(FrontToRearDataMessageID,data_TX_buffer);
		CAN_Receive(RearToFrontDataMessageID,data_RX_buffer);
		CAN_Transmit(FrontToRearTelemetryMessageID,telemetry_RX_buffer);

	}
}
#endif
