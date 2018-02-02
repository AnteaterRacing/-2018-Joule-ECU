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
	//init_UART();

	__attribute__ ((unused)) uint8_t err_status;

	GPIOB_PDDR |= 1<<PTH0; 			/* Setup PTH0 as an output for RED LED */
	GPIOB_PDDR |= 1<<PTH1; 			/* Setup PTH1 as an output for GREEN LED */
	GPIOB_PDDR |= 1<<PTE7;

	GPIOB_PSOR |= 1<<PTH0; 		/* Set output port PTH0 */
	GPIOB_PSOR |= 1<<PTH1; 		/* set output port PTH1 */
	GPIOB_PSOR |= 1<<PTE7; 		/* Set output port PTE7 */


	err_status = Init_CAN(0, CMPTX); //init CAN ch0 to FAST mode
	//wait for initialization
	while(err_status != ERR_OK)
	{
		err_status = Init_CAN(0, CMPTX);
		LED_TEAL();
	}
	//turn off TEAL, syncing complete
	LED_OFF();

	int i = 0;
	int flag_1 = 0;
	int flag_2 = 0;
	//int UART_Val[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; //does not work while jumper is switched to 12V, 12V is necessary for CAN operation

	uint8_t CAN_status[3];
	uint8_t buffer_status[2];

	uint8_t dataTX_1[9] =  {8, 0, 0, 0, 0, 0, 0, 0, 0};
	uint8_t dataTX_2[9] = {8, 0, 0, 0, 0, 0, 0, 0, 0};
	uint8_t dataTX_temp[9] =  {8, 0, 0, 0, 0, 0, 0, 0, 0};
	uint8_t dataRX_1[9] = {8, 0, 0, 0, 0, 0, 0, 0, 0};
	uint8_t dataRX_2[9] = {8, 0, 0, 0, 0, 0, 0, 0, 0};

	uint8_t ZevaDataRX1[9] = {8, 0, 0, 0, 0, 0, 0, 0, 0}; //ID: 50, 53
	uint8_t ZevaDataRX2[9] = {8, 0, 0, 0, 0, 0, 0, 0, 0}; //ID: 50, 53
	uint8_t ZevaDataTX[9] = {8, 0, 0, 0, 0, 0, 0, 0, 0}; 	//ID: 51, 52
	uint8_t OrionDataRX[9] = {5, 0, 0, 0, 0, 0};  		//ID: 0x7EB (this can be changed in BMS configuration)
	uint8_t OrionDataTX[5] = {4, 0, 0, 0, 0};    			//ID: 0x7E3
	//Orion BMS will need to be configured to a baud rate of 125 kbps, and transmit data periodically.
	//Have BMS transmit data periodically, requesting of data (data polling) is not recommended(???)
	//Only one device may request data at a time, multiple devices requesting data from BMS may incur collision
	//BMS default ID: 0x7E3. this can be changed within the configuration settings
	//Multiple requests before a response may be rejected


	err_status = Config_CAN_MB(0, 0, TXDF, 1); //General TX buffer, ID1 - dataTX
	err_status = Config_CAN_MB(0, 1, RXDF, 1); //General RX buffer, ID1
	err_status = Config_CAN_MB(0, 2, TXDF, 2); //General TX buffer, ID2
	err_status = Config_CAN_MB(0, 3, RXDF, 2); //General RX buffer, ID2
	err_status = Config_CAN_MB(0, 4, TXDF, 51); //Zeva: Set Throttle
	err_status = Config_CAN_MB(0, 5, TXDF, 52); //Zeva: Receive or Request Setting
	err_status = Config_CAN_MB(0, 6, RXDF, 50); //Zeva: Status or Operating Information
	err_status = Config_CAN_MB(0, 7, RXDF, 53); //Zeva: Transmit Setting


	/*
	err_status = Config_CAN_MB(0, 8, RXDF, 0x7EB); //Orion RX (ID exceeds max)
	err_status = Config_CAN_MB(0, 9, TXDF, 0x7E3); //Orion TX, Data Request (ID exceeds max)
	*/

	//transmission&receive loop
	for(;;)
	{
		//remove to show QUEUED and ERR_OK
		//err_status = Config_CAN_MB(0, 0, RXDF, 1); //General RX buffer, ID2
		//err_status = Config_CAN_MB(0, 3, RXDF, 2); //General RX buffer, ID2

		//test inputs
		//dataTX_1[5] = 1;
		//dataTX_1[9] = 1;
		//dataTX_2[1] = 1;
		//dataTX_2[2] = 1;

		//check if dataTX needs to be transmitted/updated
		for(i = 1; i < 9; i++)
		{
			if(dataTX_1[i] != 0)
			{
				flag_1 = 1;
			}
		}

		for(i = 1; i < 9; i++)
		{
			if(dataTX_2[i] != 0)
			{
				flag_2 = 1;
			}
		}

		/*
		err_status == Check_CAN_MB_Status(0, 1, buffer_status);//check RX buffer 1
		if(buffer_status[0] == NEWDATA)
		{
			flag = 0;
		}
		err_status == Check_CAN_MB_Status(0, 3, buffer_status);
		if(buffer_status[0] == NEWDATA)
		{
			flag = 0;
		}
		*/

		//if flag is true, then load into general TX buffers and transmit
		while(flag_1 == 1 || flag_2 == 1)
		{
			err_status = Check_CAN_MB_Status(0, 0, buffer_status);
			if(buffer_status[0] != QUEUED)
			{
				err_status = Load_CAN_MB(0, 0, dataTX_1);//ch0, buff_0, dataTX_1
				//err_status = Transmit_CAN_MB(0, 0);//ch0, buff_0
			}

			//used to verify conditions
			/*
			if(err_status == ERR_OK)
			{
				//LED_GRN();
			}
			else if(err_status == ERR_QED)
			{
				//LED_BLU();
			}
			else if(err_status == OVERRUN)
			{
				//LED_WHT();
			}
			else
			{
				//LED_RED();
			}
			LED_OFF();
			*/

			/*
			err_status = Check_CAN_MB_Status(0, 2, dataTX_2); //ch0, buff2, dataTX_2
			if(buffer_status[0] != QUEUED)
			{
				err_status = Load_CAN_MB(0, 2, dataTX_2);
				err_status = Transmit_CAN_MB(0, 2);
			}
			*/

			//used to verify conditions
			/*if(err_status == ERR_OK)
			{
				//LED_GRN();
			}
			else if(err_status == ERR_QED)
			{
				//LED_BLU();
			}
			else if(err_status == OVERRUN)
			{
				//LED_WHT();
			}
			else
			{
				//LED_RED();
			}
			LED_OFF();
			*/

			err_status = Transmit_CAN_MB(0, 0);//ch0, buff_0
			//err_status = Transmit_CAN_MB(0, 2);//ch0, buff_2
			if(err_status == ERR_OK)
			{
				LED_GRN();
				//remove flag to show QED status
				flag_1 = 0;
			}
			else if(err_status == ERR_QED) //occasionally gets stuck here
			{
				LED_BLU();
			}
			else//other conditions
			{
				LED_RED();
			}

			err_status == Check_CAN_MB_Status(0, 1, buffer_status);//check RX buffer 1
			if(buffer_status[0] == NEWDATA)
			{
				flag_1 = 0;
			}
			err_status == Check_CAN_MB_Status(0, 3, buffer_status);
			if(buffer_status[0] == NEWDATA)
			{
				flag_1 = 0;
			}
		}
		flag_1 = 0;
		flag_2 = 0;
		//clear LED
		LED_OFF();


		//general RX buffer. ID1
		/*
		err_status = Check_CAN_MB_Status(0, 4, buffer_status);//ch0, buffer_4, 2 byte memory buffer. ID1

		if(buffer_status[0] == NEWDATA)
		{
			err_status = Read_CAN_MB_Data(0, 4, dataRX_1);
			UART_Val[1] = 1;
		}
		 */


		//general RX buffer. ID1
		err_status = Check_CAN_MB_Status(0, 1, buffer_status);//ch0, buffer 1, return status & mode into buffer_status. ID1
		err_status = Read_CAN_MB_Data(0, 1, dataRX_1); //ch0, buffer 1, dataRX buff
		while(err_status != ERR_OK && buffer_status[0] == NEWDATA)
		{
			err_status = Read_CAN_MB_Data(0, 1, dataRX_1);
			LED_RED();
		}

		if(err_status == ERR_OK && buffer_status[0] == READDATA)
		{
			LED_GRN();
		}
		LED_OFF();


		//general RX buffer. ID2
		err_status = Check_CAN_MB_Status(0, 3, buffer_status); //ch0, buffer 3, ID2
		err_status = Read_CAN_MB_Data(0, 3, dataRX_2); //ch0, buffer_3. ID2
		while(err_status != ERR_OK && buffer_status[0] == NEWDATA)
		{
			err_status = Read_CAN_MB_Data(0, 3, dataRX_2);
			LED_RED();
		}
		if(err_status == ERR_OK && buffer_status[0] == READDATA)
		{
			LED_GRN();
		}
		LED_OFF();


		//Zeva status buffer. ID50
		/*err_status = Check_CAN_MB_Status(0, 6, buffer_status);//ch0, buffer_6. ID50. Zeva status
		if(buffer_status[0] == NEWDATA)
		{
			err_status = Read_CAN_MB_Data(0, 6, ZevaDataRX1);
			UART_Val[3] = 1;
		}
		 */

		err_status = Read_CAN_MB_Data(0, 6, ZevaDataRX1);
		if(err_status == ERR_OK)
		{
			//UART_Val[3] = 1;
		}

		//Zeva transmit setting buffer. ID53
		/*err_status = Check_CAN_MB_Status(0, 7, buffer_status);//ch0, buffer_7. ID53. Zeva Transmit settings
		if(buffer_status[0] == NEWDATA)
		{
			err_status = Read_CAN_MB_Data(0, 7, ZevaDataRX2);
			UART_Val[4] = 1;
		}
		 */

		err_status = Read_CAN_MB_Data(0, 7, ZevaDataRX2);
		if(err_status == ERR_OK)
		{
			//UART_Val[4] = 1;
		}

		//BMS data buffer. ID0x7EB
		/*err_status = Check_CAN_MB_Status(0, 8, buffer_status);//ch0, buffer_8. ID0x7EB. Orion
		if(buffer_status[0] == NEWDATA)
		{
			err_status = Read_CAN_MB_Data(0, 8, OrionDataRX);
			UART_Val[5] = 1;
		}
		 */

		err_status = Read_CAN_MB_Data(0, 8, OrionDataRX);
		if(err_status == ERR_OK)
		{
			//UART_Val[5] = 1;
		}

		//Request BMS for state of charge
		/*
		OrionDataTX[5] = {4, 2019, 4, 22, 61455};    //from App note
		err_status = Load_CAN_MB(0, 9, OrionDataTX);    //ch0, buffer_9, data transmitted: OrionDataTX
		err_check = Transmit_CAN_MB(0, 9);              //ch0, buffer_9
		if(err_status == ERR_OK)
		{
			UART_Val[6] = 1;
		}
		 */


		//check test case (RX)
		for(i = 1; i < 9; i++)
		{
			if(dataRX_1[i] != 0)
			{
				LED_WHT();
			}
		}
		//LED_OFF();

		if(dataRX_2[1] == 1 && dataRX_2[2] == 1)
		{
			LED_WHT();
		}
		//LED_OFF();







		//check if dataTX needs to be transmitted/updated
		/*
		for(i = 1; i < 9; i++)
		{
			if(dataTX[i] != 0)
			{
				flag = 1;
				UART_Val[7] = 1;
			}
		}
		//if flag is true, then load into general TX buffer_1 and transmit
		if(flag == 1)
		{
			err_status = Load_CAN_MB(0, 1, dataTX); //currently [5] = 1, [9] = 10
			err_status = Transmit_CAN_MB(0, 1);
			if(err_status == ERR_OK)
			{
				UART_Val[8] = 1;

				//turns LED to YLW for data transmission
				GPIOB_PCOR |= 1<<PTH0;
				GPIOB_PCOR |= 1<<PTH1;
				GPIOB_PSOR |= 1<<PTE7;

				delay();
				delay();

			}
		}
		 */

		//Examines err_status and returns UART PASS/FAIL
		/*
		transmit_string("1");
		for(i = 0; i < 10; i++)
		{

			if(UART_Val[i] == 1)
			{
				transmit_string("PASS\n");
			}
			else if(UART_Val[i] == 0)
			{
				transmit_string("FAIL\n");
			}
		}
		transmit_string("10");
		 */

		//reset values
		memcpy(dataTX_1, (int [9]){8, 0, 0, 0, 0, 0, 0, 0, 0}, 9*sizeof(int));
		memcpy(dataTX_2, (int [9]){8, 0, 0, 0, 0, 0, 0, 0, 0}, 9*sizeof(int));
		memcpy(dataRX_1, (int [9]){8, 0, 0, 0, 0, 0, 0, 0, 0}, 9*sizeof(int));
		memcpy(dataRX_2, (int [9]){8, 0, 0, 0, 0, 0, 0, 0, 0}, 9*sizeof(int));
		memcpy(OrionDataRX, (int [5]){4, 0, 0, 0, 0}, 5*sizeof(int));
		flag_1 = 0;
		flag_2 = 0;
		//memcpy(UART_Val, (int[10]){0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, 10*sizeof(int));
	}




	//pseudo
	/*
	 * retrieve_data_from_peripherals(arg1, arg2, arg3, ..., arg_n)
	 * {
	 *      if(arg1, arg2, arg3, ..., arg_n == newValue)
	 *      {
	 *          newDataFlag == true;
	 *          pass_into_Data_TX(arg1, arg2, arg3, ..., arg_n);
	 *      }
	 *
	 *      else
	 *      {
	 *          newDataFlag == false;
	 *      }
	 * }




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

void LED_OFF(void)
{
	//OFF
	GPIOB_PSOR |= 1<<PTH0; //RED
	GPIOB_PSOR |= 1<<PTH1; //GRN
	GPIOB_PSOR |= 1<<PTE7; //BLU
}



