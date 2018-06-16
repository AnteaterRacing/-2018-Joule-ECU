/*
 * Input_Scan.c
 *
 *  Created on: Feb 8, 2018
 *      Author: Xavier
 */

#include "derivative.h" /* include peripheral declarations SKEAZ128M4 */
#include "Input_Scan.h"
#include "ADC.h"
#include "main.h"

uint32_t C_D;
uint8_t Count = 0;
uint8_t valuePlus = 0;
uint8_t valueMinus = 0;
//initializes Periodic Interrupt Timer 0
void init_PIT0 (void)
{
	NVIC_ClearPendingIRQ(PIT_CH0_IRQn);  /* Clear any Pending IRQ for all PIT ch0 (#22) */
	NVIC_EnableIRQ(PIT_CH0_IRQn);        /* Set Enable IRQ for PIT_CH0 */
	NVIC_SetPriority(PIT_CH0_IRQn,0);    /* Set Priority for PIT_CH0 */

	SIM_SCGC   |= SIM_SCGC_PIT_MASK;   // enables bus clock to drive the PIT clock
	PIT_MCR     = 0x0; 				// enable the PIT module
	PIT_LDVAL0  = 2500000-1;			// set clock delay based upon 20 sample per second goal
	PIT_TCTRL0 |= PIT_TCTRL_TIE_MASK;  /* Enable interrupt */
	PIT_TCTRL0 |= PIT_TCTRL_TEN_MASK;  /* Enable (start) timer */
}


#ifdef FrontECU

uint8_t Error_Count;
uint8_t Error_LED;

void GPIO_Init(void)
{
	//TODO: uncomment and figure out why it doesnt work:
//				 //Front ECU Data Direction, 1 is output, 0 is not output
//	GPIOA_PDDR |= 1 << 26 /*MTempY*/| 1 << 28/*MTempR*/| 1 << 31/*S5A*/| 1 << 18/*S7A*/
//				| 1 << 19/*S1B*/| 1 << 12/*S2B*/| 1 << 13/*S3B*/| 1 << 4/*S4B*/
//				| 1 << 27/*IMD LED*/| 1 << 20 /*WSFL*/| 1 << 21/*WSFR*/| 1 << 3/*APPS LED*/;
//	GPIOB_PDDR |= 1 << 19/*S1A*/| 1 << 18/*S2A*/| 1 << 17/*S3A*/| 1 << 18/*S4A*/
//				| 1 << 25/*S6A*/| 1 << 14/*S5B*/| 1 << 13/*S6B*/| 1 << 12 /*S7B*/
//				| 1 << 7/*BSPD Fault*/| 1 << 26/*BMS Fault*/| 1 << 6/*WSRL*/| 1 << 24/*WSRR*/
//				| 1 << 4/*TVRL*/| 1 << 5/*TVRR*/| 1 << 3/*CS1*/| 1 << 30/*CS2*/
//				| 1 << 8/*APPSL*/| 1<< 9/*APPSR*/;

				//Front ECU Input Disable, 1 is not input , 0 is input
//	GPIOA_PIDR &= ~(1 << 15)/*Start Button Input*/;
//	GPIOB_PIDR &= ~(1 << 2)/*ErrorLED Input*/;
	GPIOB_PIDR &= ~(1<<1 | 1<<2); //Torque Vectoring Toggle Switch Inputs
	Start = 0;
	TorqueVectoringBias = 30;
}

void PIT_CH0_IRQHandler(void)
{
	//TODO: uncomment and figure out why it doesnt work:

//	valuePlus 	= (GPIOB_PDIR & (1 << 1)) >> 1;	//retrieve value from plus button
//	valueMinus	= (GPIOB_PDIR & (1 << 2)) >> 2; //retrieve value from minus button
//	//TODO: @Reza test button
//	//checking if plus or minus button was pressed
//	if ((valuePlus == 1 || valueMinus == 1) && (valuePlus != valueMinus))
//	{
//		if(valuePlus == 1 && TorqueVectoringBias < 100)//if we want to increment. no more than 100%
//		{
//			TorqueVectoringBias+=5;
//		}
//
//		else if(valueMinus == 1 && TorqueVectoringBias > 30)//if we want to decrement, no less than 30%
//		{
//			TorqueVectoringBias-=5;
//		}
//	}
//
//	Start = (GPIOB_PDIR & (1<<15)) >> 15; //Sets value of start button
	PIT_TFLG0 |= PIT_TFLG_TIF_MASK; 		//clear PIT0 Flag

#ifdef CAN_Fucked
	Error_Count = Error_Count + GPIOA_PDIR & Error_Count_Mask >>3;
	if (Count == 19) // CAN Error Display Backup
	{
		if     (Error_Count =  0) Error_LED = 0;
		else if(0 < Error_Count && Error_Count <=  5) Error_LED = 1; // IMD Error LED
		else if(5 < Error_Count && Error_Count <= 10) Error_LED = 2; // BMS Error LED
		else if(10 < Error_Count && Error_Count <= 15) Error_LED = 4; // BSPD Error LED
		else if(15 < Error_Count) Error_LED = 3; // BMS and IMD LED

		Error_Count = 0;
		Count = 0;
	}
	Count++;
#endif
}
#endif


#ifdef RearECU

void GPIO_Init(void)
{
			  //Rear ECU Data Direction, 1 is output, 0 is not output
	GPIOA_PDDR = 1 << 27/*RTDS*/ ;
//	GPIOB_PDDR = 1 << 7/*Charge LED*/;
//	GPIOC_PDDR = 1 << 4/*ErrorLED*/;

			  //Rear ECU Input Disable, 1 is not input, 0 is input
//	GPIOA_PIDR &= ~(1 << 26/*C_D*/| 1 << 28/*IMDFault*/| 1 << 30/*BMSFault*/ | 1<< 31 /*BSPDFault*/);
//	GPIOB_PIDR &= ~(1 << 31/*WSRR*/| 1 << 19/*GyroI*/| 1 << 18/*GyroData*/| 1 << 17/*Int1*/| 1 << 16/*Int2*/);
//	GPIOC_PIDR &= ~(1 << 6/*APPSL*/| 1 << 5/*APPSR*/);

//	C_D = (GPIOA_PDIR & C_D_Mask) >> 26; //Find C_D to pass to ECU init


//	if (C_D){
//		GPIOB_PSOR |= 1<< Charge_LED_Mask;
//	}
//	else {
//		GPIOB_PCOR |= 1 << Charge_LED_Mask;
//		while(1);
//	}

}

void PIT_CH0_IRQHandler(void)
{

	//checking for fault signals from LV system

	PIT_TFLG0 |= PIT_TFLG_TIF_MASK; 		//clear PIT0 Flag

#ifdef CAN_Fucked
	if (IMD_Fault == 0 && BMS_Fault == 0 && BSPD_Fault == 0)
		GPIOC_PCOR = 16;
	else if (IMD_Fault == 1 && BMS_Fault == 0 && BSPD_Fault == 0)
	{
		if (Count >= 0 && Count < 5) GPIOC_PSOR = 16;
		if (Count >= 5) GPIOC_PCOR = 16;
	}

	else if (IMD_Fault == 0 && BMS_Fault == 1 && BSPD_Fault == 0)
	{
		if (Count >= 0 && Count < 10) GPIOC_PSOR = 16;
		if (Count >= 10) GPIOC_PCOR = 16;
	}
	else if (IMD_Fault == 0 && BMS_Fault == 0 && BSPD_Fault == 1)
	{
		if (Count >= 0 && Count < 15) GPIOC_PSOR = 16;
		if (Count >= 15) GPIOC_PCOR = 16;
	}
	else
	{
		if (Count >= 0 && Count <20) GPIOC_PSOR = 16;
		if (Count == 20) GPIOC_PCOR = 16;
	}
	if (Count <20 ) Count ++;
	else Count = 0;


#endif

//Used for DOF board hardware interrupts:
//	uint8_t DOF_Int = ((GPIOB_PDIR & 1 << Gyro_Int)  >> 16) | (GPIOB_PDIR & (1 << Gyro_Data) >> 16) | ((GPIOB_PDIR & 1 << ACC_INT1)  >> 16) | ((GPIOB_PDIR & 1 << ACC_INT2) >> 16);

	//DOF_Int = (GPIOB_PDIR & Gyro_Int_Mask  >> 16) | (GPIOB_PDIR & Gyro_Data_Mask >> 16) | (GPIOB_PDIR & ACC_INT1_Mask  >> 16) | (GPIOB_PDIR & ACC_INT2_Mask  >> 16);
//	if(DOF_Int > 0 && DOF_Int < 16){
//		//pass DOF_INT to I2C handler. Gyro_int = 8; Gyro_Data = 4, ACC_Int1 = 2; ACC_INT2 = 1;
//	}
//	else{
//			return;
//	}
//
}
#endif
