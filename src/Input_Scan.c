/*
 * Input_Scan.c
 *
 *  Created on: Feb 8, 2018
 *      Author: Xavier
 */

#include "derivative.h" /* include peripheral declarations SKEAZ128M4 */
#include "Input_Scan.h"
#include "ADC.h"

uint32_t C_D;

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


#ifdef FrontMCU

void GPIO_init(void)
{
							  //Data Direction, 1 is output, 0 is input
	GPIOA_PDDR = 2621190168; //all of the Front MCU GPIOA pins added together, Error LED signal is input A2, pin 2
	GPIOB_PDDR = 1192195064; // Front GPIOB pins, only start, F7, pin 15 is an input
	GPIOC_PDDR = 0x00;		// no outputs on GPIOC

							  //Input Disable, 1 is output, 0 is input
	GPIOA_PIDR = 8053063677; //inputs at PTD5 & PTA1
	GPIOB_PIDR = 6442450175; //inputs on PTH7 & PTF0 & PTF1
	GPIOC_PIDR = 0xFF; // no inputs on GPIO C


}

void PIT_CH0_IRQHandler(void)
{
	uint16_t ACC1_Input;
	uint16_t ACC2_Input;
	uint16_t Steer_Input;
	uint16_t Brake_Input;
	uint16_t TT_FL_1;
	uint16_t TT_FL_2;
	uint16_t TT_FL_3;
	uint16_t TT_FR_1;
	uint16_t TT_FR_2;
	uint16_t TT_FR_3;
	uint32_t Fault;


		PIT_TFLG0 |= PIT_TFLG_TIF_MASK; 		//clear PIT0 Flag
			MT_L = ADC_buf[0];
			MT_R = ADC_buf[1];
			TT_RL-1 = ADC_buf[2];
			TT_RL-2 = ADC_buf[3];
			TT_RL-3 = ADC_buf[4];
			TT_RR-1 = ADC_buf[5];
			TT_RR-2 = ADC_buf[6];
			TT_RR-3 = ADC_buf[7];
	PIT_TFLG0 |= PIT_TFLG_TIF_MASK; 		//clear PIT0 Flag
		ReadAdcBlock();
		//Fault = GPIOA_PDIR & Fault_Mask; 		// faults are read in
		//C_D   = GPIOA_PDIR & C_D_Mask;		// charge vs discharge is read in

		return;
}
#endif


#ifdef RearMCU

void GPIO_init(void)
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
	uint16_t MT_L;
	uint16_t MT_R;
	uint16_t TT_RL_1;
	uint16_t TT_RL_2;
	uint16_t TT_RL_3;
	uint16_t TT_RR_1;
	uint16_t TT_RR_2;
	uint16_t TT_RR_3;
	uint32_t Fault;


	PIT_TFLG0 |= PIT_TFLG_TIF_MASK; 		//clear PIT0 Flag
		MT_L = ADC_buf[0];
		MT_R = ADC_buf[1];
		TT_RL-1 = ADC_buf[2];
		TT_RL-2 = ADC_buf[3];
		TT_RL-3 = ADC_buf[4];
		TT_RR-1 = ADC_buf[5];
		TT_RR-2 = ADC_buf[6];
		TT_RR-3 = ADC_buf[7];

		Fault = GPIOA_PDIR & Fault_Mask; 		// faults are read in
		C_D   = GPIOA_PDIR & C_D_Mask >> 26;		// charge vs discharge is read in

		return;
}
#endif

