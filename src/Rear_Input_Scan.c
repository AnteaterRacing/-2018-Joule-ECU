/*
 * Rear_Input_Scan.c
 *
 *  Created on: Dec 19, 2017
 *      Author: Xavier
 */
#include "derivative.h" /* include peripheral declarations SKEAZ128M4 */
#include "Rear_Input_Scan.h"
#include "ADC.h"

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

void PIT_CH0_IRQHandler(void)
{
		PIT_TFLG0 |= PIT_TFLG_TIF_MASK; 		//clear PIT0 Flag
		ReadAdcBlock();
		//Fault = GPIOA_PDIR & Fault_Mask; 		// faults are read in
		//C_D   = GPIOA_PDIR & C_D_Mask;		// charge vs discharge is read in

		return;
}

