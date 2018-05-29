/*
 * CAN.c
 *
 *  Created on: Feb 1, 2018
 *      Author: arnav
 */
/*
 * main implementation: use this 'C' sample to create your own application
 *
 */
#include "derivative.h" /* include peripheral declarations */
#include "ics.h"		/* include the CLK initialization declaration*/
#include "sbc_init.h"	/* include the SBC initialization declaration */
#include "MSCAN_Module.h"/* include the msCAN module enable declaration*/
#include "nvic.h"
#include "msCANdrv.h"
#include "msCANcfg.h"
#include "ADC.h"
#include "main.h"
#include "CAN.h"
#include "UART.h"
#define PTE7  7          						/* Port PTE7 output to blue LED */
#define PTH0 24          						/* Port PTH0 output to red LED */
#define PTH1 25          						/* Port PTH1 output to green LED */
#define PTH6 30									/* Port PTH6 for throttle output PWM*/

void delay(void); //delay function
//void sendCANloop(uint8_t *data, uint8_t txBuffer, uint8_t rxBuffer);

uint8_t err_status;

//CAN initialization for rear ECU //TODO: @Ken add new CAN messages
#ifdef RearECU
void CAN_Init(){
	init_CAN_clocks();
	err_status = Init_CAN(0, CMPTX); //initialize CAN0 to FAST mode
	Config_CAN_MB(0,1,RXDF, FrontToRearDataMessageID); //messagebuffer to receive the FrontToRearDataMessage
	Config_CAN_MB(0,2,TXDF, RearToFrontDataMessageID); //messagebuffer to receive the FrontToRearTelemetryMessage
	Config_CAN_MB(0,3,RXDF, FrontToRearTelemetryMessageID); //messagebuffer to transmit the RearToFrontDataMessage
	Config_CAN_MB(0,4,RXDF, Orion1_ID); //Orion BMS message buffers
	Config_CAN_MB(0,5,RXDF, Orion2_ID);
	Config_CAN_MB(0,6,RXDF, Orion3_ID);
	Config_CAN_MB(0,7,RXDF, Orion4_ID);
	Config_CAN_MB(0,8,RXDF, Orion5_ID);
	Config_CAN_MB(0,9,TXDF, RearTelemetryMessageID);

}
#endif

//CAN initialization for front ECU //TODO: @Ken add new CAN messages
#ifdef FrontECU
void CAN_Init() {
	init_CAN_clocks();
	err_status = Init_CAN(0, CMPTX); //initialize CAN0 to FAST mode
	Config_CAN_MB(0,1,TXDF, FrontToRearDataMessageID); //messagebuffer to transmit the FrontToRearDataMessage
	Config_CAN_MB(0,2,RXDF, RearToFrontDataMessageID); //MB to receive reartofrontdatamessage
	Config_CAN_MB(0,3,TXDF, FrontToRearTelemetryMessageID); //messagebuffer to transmit the FrontToRearTelemetryMessage
	Config_CAN_MB(0,4,RXDF, Orion1_ID);
	Config_CAN_MB(0,5,RXDF, Orion2_ID);
	Config_CAN_MB(0,6,RXDF, Orion3_ID);
	Config_CAN_MB(0,7,RXDF, Orion4_ID);
	Config_CAN_MB(0,8,RXDF, Orion5_ID);
}
#endif
//TODO: @Ken add new CAN messages
uint16_t ID_to_BUF(uint16_t ID){

	switch(ID){
	case 10: return FrontToRearDataMessageIDRef; //Front to Rear ID 10 to buffer1
	case 11: return RearToFrontDataMessageIDRef; //Rear to Front ID 11 to buffer 2
	case 12: return FrontToRearTelemetryMessageIDRef; //Front to Rear Telemetry ID 12 to buffer 3
	case 13: return RearTelemetryMessageIDRef; //ID 13 buffer 9
	case Orion1_ID: return Orion1_buffVal;
	case Orion2_ID: return Orion2_buffVal;
	case Orion3_ID: return Orion3_buffVal;
	case Orion4_ID: return Orion4_buffVal;
	case Orion5_ID: return Orion5_buffVal;
	default: return 0;
	}
}

//transmits CAN message with specified messageID
void CAN_TransmitData(uint16_t messageID, uint8_t* message) {

	Load_CAN_MB(0, ID_to_BUF(messageID), message);
	Transmit_CAN_MB(0, ID_to_BUF(messageID));
}

//receives CAN message with specified messageID
void CAN_ReceiveData(uint16_t messageID, uint8_t* message) {

	Read_CAN_MB_Data(0, ID_to_BUF(messageID), message);
}

void init_CAN_clocks() {
	/*FLL Engaged external*/
	ICS_ConfigType ics_config={0};
	ics_config.u8ClkMode=ICS_CLK_MODE_FEE;
	ics_config.bdiv=0;						/* Bdiv=1*/
	ics_config.oscConfig.bRange=1;			/*Oscillator high range*/
	ics_config.oscConfig.bIsCryst=1;		/*Oscillator clock source selected*/
	ics_config.oscConfig.bStopEnable=1;		/* Oscillator enable in stop*/
	ics_config.oscConfig.u32OscFreq=8000;	/*8 MHz oscillator*/
	ics_config.oscConfig.bEnable=1;			/*Enable external oscillator*/

	ICS_Init(&ics_config);					/* Initialize Clock */

	SBC_Init();							/* Initialize the System Basis Chip */
	MSCAN_ModuleEn();
}

void delay(void)
{
	uint32_t i,j;
	for(i=0 ; i<8 ; i++)
		for(j=0 ; j<65535 ; j++);
}

void LED_GRN(void)
{
	//ON
	GPIOB_PSOR |= 1<<PTH0; //RED
	GPIOB_PCOR |= 1<<PTH1; //GRN
	GPIOB_PSOR |= 1<<PTE7; //BLU


}

void LED_RED(void)
{
	//ON
	GPIOB_PCOR |= 1<<PTH0; //RED
	GPIOB_PSOR |= 1<<PTH1; //GRN
	GPIOB_PSOR |= 1<<PTE7; //BLU


}

void LED_BLU(void)
{
	//ON
	GPIOB_PSOR |= 1<<PTH0; //RED
	GPIOB_PSOR |= 1<<PTH1; //GRN
	GPIOB_PCOR |= 1<<PTE7; //BLU


}

void LED_TEAL(void)
{
	//ON
	GPIOB_PSOR |= 1<<PTH0; //RED
	GPIOB_PCOR |= 1<<PTH1; //GRN
	GPIOB_PCOR |= 1<<PTE7; //BLU

}

void LED_WHT(void)
{
	//ON
	GPIOB_PCOR |= 1<<PTH0; //RED
	GPIOB_PCOR |= 1<<PTH1; //GRN
	GPIOB_PCOR |= 1<<PTE7; //BLU

}

void LED_YEL(void)
{
	//ON
	GPIOB_PCOR |= 1<<PTH0; //RED
	GPIOB_PCOR |= 1<<PTH1; //GRN
	GPIOB_PSOR |= 1<<PTE7; //BLU

}
	
void LED_OFF(void)
{
	//OFF
	GPIOB_PSOR |= 1<<PTH0; //RED
	GPIOB_PSOR |= 1<<PTH1; //GRN
	GPIOB_PSOR |= 1<<PTE7; //BLU
}



