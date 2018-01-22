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
	 SIM_SCGC   |= SIM_SCGC_PIT_MASK;  // enables bus clock to drive the PIT clock
	 PIT_MCR    |= SIM_SCGC_PIT_MASK; // enable the PIT module
	 PIT_LDVAL0  = 2500000;			 // set clock delay based upon 20 sample per second goal
	 PIT_TCTRL0 |= 3;				//enable PIT0 timer and interrupt

}

void PIT0_IRQ_Handler(void)
{
//TODO for Xavier
//	if((PIT_TFLG0  & 1) == 1) // read overflow flag on bit 1
//	{
//		PIT_TFLG0 &= 0x00000000; // reset overflow flag
//		ReadAdcBlock();
//		Fault = GPIOA_PDIR & Fault_Mask; // faults are read in
//		C_D   = GPIOA_PDIR & C_D_Mask;		// charge vs discharge is read in
//
//		return;
//	}
}

