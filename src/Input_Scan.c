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

uint8_t Start; Error_Count; Error_LED;

void GPIO_Init(void)
{
<<<<<<< HEAD
							 //Front MCU Data Direction, 1 is output, 0 is input
	GPIOA_PDDR = 1 << 26 /*MTempY*/| 1 << 28/*MTempR*/| 1 << 31/*S5A*/| 1 << 18/*S7A*/
				| 1 << 19/*S1B*/| 1 << 12/*S2B*/| 1 << 13/*S3B*/| 1 << 4/*S4B*/
				| 1 << 27/*IMDFault*/| 1 << 20 /*WSFL*/| 1 << 21/*WSFR*/;
	GPIOB_PDDR = 1 << 19/*S1A*/| 1 << 18/*S2A*/| 1 << 17/*S3A*/| 1 << 18/*S4A*/
				| 1 << 25/*S6A*/| 1 << 14/*S5B*/| 1 << 13/*S6B*/| 1 << 12 /*S7B*/
				| 1 << 7/*BSPD Fault*/| 1 << 26/*BMS Fault*/| 1 << 6/*WSRL*/| 1 << 24/*WSRR*/
				| 1 << 4/*TVRL*/| 1 << 5/*TVRR*/ 1 << 3/*CS1*/ 1 << 30/*CS2*/
				| 1 << 8/*APPSL*/| 1<< 9/*APPSR*/;
	GPIOC_PDDR = 0x00000000; // no outputs on GPIOC

							 //Input Disable, 1 is output, 0 is input
	GPIOA_PIDR = 0XFFFFFFFF | 0 << 15/*Start*/;
	GPIOB_PIDR = 0XFFFFFFFF | 0 << 2/*Error*/;
	GPIOC_PIDR = 0xFFFFFFFF; // no inputs on GPIO C

return;
=======
							  //Data Direction, 1 is output, 0 is input
	GPIOA_PDDR = 2621190168; //all of the Front MCU GPIOA pins added together, Error LED signal is input A2, pin 2
	GPIOB_PDDR = 1192195064; // Front GPIOB pins, only start, F7, pin 15 is an input
	GPIOC_PDDR = 0x00;		// no outputs on GPIOC

							  //Input Disable, 1 is output, 0 is input
	GPIOA_PIDR = 8053063677; //inputs at PTD5 & PTA1
	GPIOB_PIDR = 6442450175; //inputs on PTH7 & PTF0 & PTF1
	GPIOC_PIDR = 0xFF; // no inputs on GPIO C
>>>>>>> 406ed3400a61d25d180d32d64a9536e50819ffdb
}

//TODO @Xavier: finish this definition for the Front ECU
void PIT_CH0_IRQHandler(void)
{
	//Start = GPIOB_PDIR & Start_Mask >>15 //This line threw an error: called object is not a function or function pointer
#ifdef CAN_Fucked
	Error_Count = Error_Count + GPIOA_PDIR & Error_Count_Mask >>3
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
	PIT_TFLG0 |= PIT_TFLG_TIF_MASK; 		//clear PIT0 Flag
}
#endif


#ifdef RearECU

<<<<<<< HEAD
void I2C_init(void)
{

}

void GPIO_init(void)
=======
void GPIO_Init(void)
>>>>>>> 406ed3400a61d25d180d32d64a9536e50819ffdb
{
							  //Data Direction, 1 is output, 0 is input
	GPIOA_PDDR = 134217728; //all of the Front MCU GPIOA pins added together, Error LED signal is input A2, pin 2
	GPIOB_PDDR = 768; // Front GPIOB pins, only start, F7, pin 15 is an input
	GPIOC_PDDR = 112; // GPIOC for APPS L/ R and ERROR LED

							  //Input Disable, 1 is output, 0 is input
	GPIOA_PIDR = 201326591; //inputs at PTD5 & PTA1
	GPIOB_PIDR = 4293984255; //inputs on PTH7 & PTF0 & PTF1
	GPIOC_PIDR = 0xFF; // no inputs on GPIO C

	C_D   = GPIOA_PDIR & C_D_Mask >> 26; //Find C_D to pass to ECU init

	if (C_D == 1)
		return;
	else
		//Send over CAN to send error code
		while(1)
		{
			;
		}

}

void PIT_CH0_IRQHandler(void)
{


	PIT_TFLG0 |= PIT_TFLG_TIF_MASK; 		//clear PIT0 Flag


		Fault = GPIOA_PDIR & Fault_Mask >> 28; 		// faults are read in pin D4 = bit A28 = IMD; pin D6 = bit A30 = BMS; pin D7 = bit A31 = BSPD;
		C_D   = GPIOA_PDIR & C_D_Mask >> 26;		// charge vs discharge is read in

#ifdef CAN_Fucked
	if (Fault = 0)	GPIOC_PCOR = 16;
	else if (Fault = 1)
	{
		if (Count >= 0 && Count < 5) GPIO_PSOR = 16;
		if (Count >= 5) GPIO_PCOR = 16;
	}

	else if (Fault = 4)
	{
		if (Count >= 0 && Count < 10) GPIO_PSOR = 16;
		if (Count >= 10) GPIO_PCOR = 16;
	}
	else if (Fault = 8)
	{
		if (Count >= 0 && Count < 15) GPIO_PSOR = 16;
		if (Count >= 15) GPIO_PCOR = 16;
	}
	else if (Fault = 5 || Fault = 9 || Fault = 12)
	{
		if (Count >= 0 && Count <20) GPIO_PSOR = 16;
		if (Count = 20) GPIO_PCOR = 16;
	}
	if (Count <20 ) Count ++;
	else Count = 0;


#endif
}


#endif

