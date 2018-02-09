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
#define PTE7  7          						/* Port PTE7 output to blue LED */
#define PTH0 24          						/* Port PTH0 output to red LED */
#define PTH1 25          						/* Port PTH1 output to green LED */
#define PTH6 30									/* Port PTH6 for throttle output PWM*/
//#include "UART.h" 							/*include UART function definitions */
/*Macro to choose which main to run
 *
 */
//#define UserDefineNode1
//#define UserDefineNode2

void delay(void); //delay function
void err_check(uint8_t); //checks for ERR_OK and returns green or red LED flash
//void sendCANloop(uint8_t *data, uint8_t txBuffer, uint8_t rxBuffer);
void err_check(uint8_t);
void LED_GRN(void);
void LED_RED(void);
void LED_BLU(void);
void LED_TEAL(void);
void LED_WHT(void);
void LED_OFF(void);
void LED_YEL(void);

//CAN initialization
void CAN_Init(uint8_t ecu){

}

uint8_t startSignal(){
	return 0;
}

#ifdef UserDefineNode1
int main(void)
{
#define COUNTER_LIMIT 100

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
	/*write your own code here*/

	__attribute__ ((unused)) uint8_t err_status;

	GPIOB_PDDR |= 1<<PTH0; 			/* Setup PTH0 as an output for RED LED */
	GPIOB_PDDR |= 1<<PTH1; 			/* Setup PTH1 as an output for GREEN LED */
	GPIOB_PDDR |= 1<<PTE7;

	GPIOB_PSOR |= 1<<PTH0; 		/* Set output port PTH0 */
	GPIOB_PSOR |= 1<<PTH1; 		/* Clear output port PTH1 */
	GPIOB_PSOR |= 1<<PTE7; 		/* Set output port PTE7 */

	err_status = Init_CAN(0, FAST); //initialize CAN0 to FAST mode

	int i;
	uint8_t data[7] = {8, 0, 0xff, 0, 0xff, 0, 0xff}; //data to transmit. data[0] corresponds to data length
	uint8_t data_rec[7]; //receive array to store received data

	err_status = Config_CAN_MB(0, 0, RXDF, 1); //configure CAN0 ch0 as receive
	err_status = Config_CAN_MB(0, 1, TXDF, 1); //configure CAN0 ch1 as transmit
	err_status = Load_CAN_MB(0, 1, data);//load into: channel 0 buffer 1, object "data"
	err_status = Transmit_CAN_MB(0, 1);//push data into the data link layer
	err_status = Read_CAN_MB_Data(0, 0, data_rec);//channel 0 buffer 0, object "data_rec", waiting to receive data from other board
	while(err_status != ERR_OK) //waiting for successful read operation completion
	{
		err_status = Read_CAN_MB_Data(0, 0, data_rec);//channel 0 buffer 0, object "data_rec"
	}

	if(data_rec[0] == 8) //checking data length matches what was transmitted
	{
		err_status = ERR_OK;

	}
	else
	{
		err_status = ERR_MB; //toggle message buffer error flag

	}

	int counter = 0;

	for(;;) {
		counter++;

		if(counter > COUNTER_LIMIT) {
			counter = 0;
		}
	}

	/* to avoid the warning message for GHS: statement is unreachable*/
#if defined (__ghs__)
#pragma ghs nowarning 111
#endif
#if defined (__ICCARM__)
#pragma diag_suppress=Pe111
#endif
	return 0;
}
#endif

//#define NodeTemplate
#ifdef NodeTemplate
int main(void)
{
#define COUNTER_LIMIT 100

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

	SBC_Init();							/* Initialize the System Basis Chip for CAN */
	MSCAN_ModuleEn();
	EnableInterrupts;
	//init_ADC();


	__attribute__ ((unused)) uint8 err_status;

	GPIOB_PDDR |= 1<<PTH0; 			/* Setup PTH0 as an output for RED LED */
	GPIOB_PDDR |= 1<<PTH1; 			/* Setup PTH1 as an output for GREEN LED */
	GPIOB_PDDR |= 1<<PTE7;

	GPIOB_PSOR |= 1<<PTH0; 		/* Set output port PTH0 */
	GPIOB_PSOR |= 1<<PTH1; 		/* set output port PTH1 */
	GPIOB_PSOR |= 1<<PTE7; 		/* Set output port PTE7 */


	err_status = Init_CAN(0, CMPTX); //init CAN ch0 to FAST mode
	while(err_status != ERR_OK)
	{
		err_status = Init_CAN(0, CMPTX);
		LED_TEAL();

	}
	LED_OFF();


	int i = 0;
	int flag_1 = 0;
	int flag_2 = 0;
	int counterTX = 0;
	int counterRX = 0;

	uint8 CAN_status[3];
	uint8 buffer_status[2];

	uint8 dataTX_1[9] =  {8, 0, 0, 0, 0, 0, 0, 0, 0};
	uint8 dataTX_2[9] = {8, 0, 0, 0, 0, 0, 0, 0, 0};
	uint8 dataTX_temp[9] =  {8, 0, 0, 0, 0, 0, 0, 0, 0};
	uint8 dataRX_1[9] = {8, 0, 0, 0, 0, 0, 0, 0, 0};
	uint8 dataRX_2[9] = {8, 0, 0, 0, 0, 0, 0, 0, 0};
	uint8 OrionDataRX[9] = {5, 0, 0, 0, 0, 0};  		//ID: 0x7EB (this can be changed in BMS configuration)
	uint8 OrionDataTX[5] = {4, 0, 0, 0, 0};    			//ID: 0x7E3


	err_status = Config_CAN_MB(0, 0, TXDF, 1); //General TX buffer, ID1 - dataTX
	err_status = Config_CAN_MB(0, 1, RXDF, 1); //General RX buffer, ID1
	err_status = Config_CAN_MB(0, 2, TXDF, 2); //General TX buffer, ID2
	err_status = Config_CAN_MB(0, 3, RXDF, 2); //General RX buffer, ID2

	err_status = Config_CAN_MB(0, 8, RXDF, 0x7EB); //Orion RX (ID exceeds max)
	err_status = Config_CAN_MB(0, 9, TXDF, 0x7E3); //Orion TX, Data Request (ID exceeds max)

	for(;;)
	{
		//insert read ADC here or set dataTX_1 = {8, 1, 1, 1, 1, 1, 1, 1, 1}

		//ADC0_IRQHandler();

		/*
	for(i = 1; i < 11; i++)
	{
		if(ADC_buff[i] != 0)
		{
			flag_1 = 1;
		}
	}
		 */

		while((flag_1 == 1 || flag_2 == 1) & counterTX < 255)
		{
			err_status = Check_CAN_MB_Status(0, 0, buffer_status);
			if(buffer_status[0] != QUEUED || buffer_status[0] != QUEUED2)//id
			{
				err_status = Load_CAN_MB(0, 0, dataTX_1);//ch0, buff_0, dataTX_1
			}



			err_status = Check_CAN_MB_Status(0, 0, buffer_status);
			if(buffer_status[0] != VALIDDATA)
			{
				LED_RED();
			}
			else if(buffer_status[0] == VALIDDATA)
			{
				err_status = Transmit_CAN_MB(0, 0);//ch0, buff_0
				LED_GRN();
			}
			LED_OFF();
			

			
			//START, visual debug
			if(err_status == ERR_OK)
			{
				LED_GRN();
			}
			else if(err_status == ERR_QED) //occasionally gets stuck here
			{
				LED_BLU();
			}
			else if(err_status == ERR_BOFF)
			{
				err_status = Reset_CAN(0, CMPTX);
			}
			else//other conditions
			{
				LED_RED();
			}
			
			
			
			err_status = Check_CAN_MB_Status(0, 0, buffer_status);
			if(buffer_status[0] != TRANSMITTED)
			{
				//check arbitration 
			}
			else if(buffer_status[0] == TRANSMITTED)
			{
				LED_GRN();
				flag_1 = 0;
			}
			else if(buffer_status[0] == QUEUED2)
			{
				LED_YEL();
			}

			LED_OFF();
			//END



			//error checking
			err_status = Read_Tran_Err_Counter(0, &counterTX);




			if(counterTX >= 255)
			{
				err_status = Abort_CAN_MB(0, 0);//opt
			}
		}
		flag_1 = 0;
		flag_2 = 0;
		//counterTX = 0;



		//general RX buffer. ID1
		err_status = Check_CAN_MB_Status(0, 1, buffer_status);//ch0, buffer 1, return status & mode into buffer_status. ID1
		err_status = Read_CAN_MB_Data(0, 1, dataRX_1); //ch0, buffer 1, dataRX buff
		while((err_status != ERR_OK && buffer_status[0] == NEWDATA) & (counterRX <= 255))
		{
			LED_RED();

			err_status = Read_Rec_Err_Counter(0, &counterRX);

			err_status = Check_CAN_Status(0, CAN_status);
			if(counterRX >= 255)
			{
				err_status = Abort_CAN_MB(0, 1);
			}
			else if((CAN_status[2] & RSTAT0 == 1) && (CAN_status[2] & RSTAT1 == 1))
			{
				err_status = Abort_CAN_MB(0, 1);
				err_status = Reset_CAN(0, CMPTX);
			}
			err_status = Read_CAN_MB_Data(0, 1, dataRX_1);
		}




		if(err_status == ERR_OK && buffer_status[0] == READDATA)
		{
			LED_GRN();
		}
		LED_OFF();

		err_status = Check_CAN_Status(0, CAN_status);
		if((CAN_status[0] & SYNCH) == 0)
		{
			err_status = Reset_CAN(0, CMPTX);
		}




		//ADD FOR ORION BMS RX
		/*
	err_status = Check_CAN_MB_Status(0, 8, buffer_status);
	err_status = Read_CAN_MB_Data(0, 8, OrionDataRX);

	while((err_status != ERR_OK && buffer_status[0] == NEWDATA) & (counterRX <= 255)
	{
		err_status = Read_CAN_MB_Data(0, 8, OrionDataRX);
		LED_RED();

		if(err_status != ERR_OK)
		{
			err_status = Read_Rec_Err_Counter(0, counterRX);
		}
	}
	if(counterRX >= 255)
	{
		err_status = Abort_CAN_MB(0, 8);
	}
		 */




		//reset values
		memcpy(dataTX_1, (int [9]){8, 0, 0, 0, 0, 0, 0, 0, 0}, 9*sizeof(int));
		memcpy(dataTX_2, (int [9]){8, 0, 0, 0, 0, 0, 0, 0, 0}, 9*sizeof(int));
		memcpy(dataRX_1, (int [9]){8, 0, 0, 0, 0, 0, 0, 0, 0}, 9*sizeof(int));
		memcpy(dataRX_2, (int [9]){8, 0, 0, 0, 0, 0, 0, 0, 0}, 9*sizeof(int));
		memcpy(OrionDataRX, (int [5]){4, 0, 0, 0, 0}, 5*sizeof(int));
		flag_1 = 0;
		flag_2 = 0;
		counterRX = 0;
		counterTX = 0;
	}









	/* to avoid the warning message for GHS: statement is unreachable*/
#if defined (__ghs__)
#pragma ghs nowarning 111
#endif
#if defined (__ICCARM__)
#pragma diag_suppress=Pe111
#endif
	return 0;
}
#endif


#ifdef CandapterTest
int main(void)
{
#define COUNTER_LIMIT 100

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
	/*write your own code here*/

	__attribute__ ((unused)) uint8_t err_status;

	GPIOB_PDDR |= 1<<PTH0; 			/* Setup PTH0 as an output for RED LED */
	GPIOB_PDDR |= 1<<PTH1; 			/* Setup PTH1 as an output for GREEN LED */
	GPIOB_PDDR |= 1<<PTE7;

	GPIOB_PSOR |= 1<<PTH0; 		/* Set output port PTH0 */
	GPIOB_PSOR |= 1<<PTH1; 		/* Clear output port PTH1 */
	GPIOB_PSOR |= 1<<PTE7; 		/* Set output port PTE7 */

	err_status = Init_CAN(0, CMPTX); 
	
	int i;
	uint8 data_rec[5] = {4, 0, 0, 0, 0}; //DLC = 4
	uint8 buff_status[2];

	err_status = Config_CAN_MB(0, 0, RXDF, 1); //corresponds to #200 on adapter
	err_status = Config_CAN_MB(0, 1, TXDF, 2); //corresponds to #82 on adapter

	data_rec[3] = 1; //used to verify proper data transmission
	
	
	//will continually transmit from data_rec
	//receiving data will overwrite data_rec
	for(;;)
	{
		err_status = Check_CAN_MB_Status(0, 0, buff_status);

		err_status = Read_CAN_MB_Data(0, 0, data_rec);

		Load_CAN_MB(0, 1, data_rec);
		Transmit_CAN_MB(0, 1);

		//no errors occurred during testing with adapter
		if(err_status == ERR_BOFF) 
		{
			Reset_CAN(0, CMPTX);
			LED_RED();
		}
		else if(err_status == ERR_SYNCH)
		{
			LED_BLU();
		}
		else if(err_status == ERR_ID)
		{
			LED_WHT();
		}

		if(data_rec[2] == 1) //will flash green if transmitted data transmitted has value 1 at index 2
		{
			LED_GRN();
		}


	}


	int counter = 0;

	for(;;) {
		counter++;

		if(counter > COUNTER_LIMIT) {
			counter = 0;
		}
	}

	/* to avoid the warning message for GHS: statement is unreachable*/
#if defined (__ghs__)
#pragma ghs nowarning 111
#endif
#if defined (__ICCARM__)
#pragma diag_suppress=Pe111
#endif
	return 0;
}
#endif


void delay(void)
{
	uint32_t i,j;
	for(i=0 ; i<8 ; i++)
		for(j=0 ; j<65535 ; j++);
}

void err_check(uint8_t err_status)
{
	delay();
	delay();
	delay();

	if(err_status == ERR_OK)
	{
	   	GPIOB_PSOR |= 1<<PTH0; 		/* Set output port PTH0 */
	   	GPIOB_PCOR |= 1<<PTH1; 		/* Clear output port PTH1 */
	   	GPIOB_PSOR |= 1<<PTE7; 		/* Set output port PTE7 */
	}
	else
	{
	   	GPIOB_PCOR |= 1<<PTH0; 		/* Set output port PTH0 */
	   	GPIOB_PSOR |= 1<<PTH1; 		/* Clear output port PTH1 */
	   	GPIOB_PSOR |= 1<<PTE7; 		/* Set output port PTE7 */
	}

	delay();
	delay();
	delay();
	delay();
	delay();
	delay();

   	GPIOB_PSOR |= 1<<PTH0; 		/* Set output port PTH0 */
   	GPIOB_PSOR |= 1<<PTH1; 		/* Clear output port PTH1 */
   	GPIOB_PSOR |= 1<<PTE7; 		/* Set output port PTE7 */
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



