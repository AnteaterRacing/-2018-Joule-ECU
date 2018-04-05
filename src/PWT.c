/* PWT.c              (c) 2015 Freescale Semiconductor, Inc.
 * Descriptions: PWT example code
 * 28 Sept 2015 Kushal Shah: Initial version
 */


#include "derivative.h" /* include peripheral declarations SKEAZ128M4 */
#include "PWT.h"
#include "WheelSpeed.h"

uint16_t PulseWidth = 0;

void init_PWT(void)  {

  PWT_buffer[0] = 0;//initializing buffer
  PWT_buffer[1] = 0;//initializing buffer

  //TODO: Implement/Enable Interrupt

  SIM_SCGC |= SIM_SCGC_PWT_MASK; /* Enable Clock to PWT */
  PWT_R1 = 0x00001780;  /* Initialize PWT for measuring falling edges */
                        /* PCLKS (PWT Clock Source Select) = 0 (default, BUS_CLK) */
                        /* PINSEL (PWT Pulse Input Selection) = 0 (default, PWTIN[0]) */
                        /* EDGE (PWT Input Edge sensitivity) = 2: */
	                           /* 1st falling edge starts PW measurement. */
	                           /* PW captured on all subsequent falling edges. */
                        /* PRE (PWT clk prescaler) = 7 (Prescale by 2**7 = 128) */
	                    /*     Count frequency = 20 MHz/128 = 156.25 KHz */
	                    /* PWTEN (PWT enable) = 1 (PWT module enabled) */
                        /* PWTIE (PWT interrupt enable) = 0 (default) */
                        /* PRDYIE (PWT pulse width data ready interrupt ena)= 0 (default)*/
                        /* POVIE (PWT Counter overflow interrupt ena) = 0 (default) */
                        /* PWTSR (PWT Soft Reset) = 0 (default)*/
                        /* PWTDRY (PWT Pulse Width valid = 0 (default) */
                        /* PWTOV (PWT Counter OVerflow) = 0 (default, no overflow) */
  SIM_PINSEL1 &= ~SIM_PINSEL1_PWTIN0PS_MASK; /* Map PWT to pin PTD5 (default) */
}

//conversion using polling. move this to the interrupt handler
void pulse_width_timer_PWT (void) {
  if (1==((PWT_R1 & PWT_R1_PWTRDY_MASK)>>PWT_R1_PWTRDY_SHIFT)) { /* If pulse with ready */
    PWT_R1 &= ~PWT_R1_PWTRDY_MASK;       /* Clear flag: read reg then write 0 to PWTRDY */
    PulseWidth = (PWT_R2 & PWT_R2_NPW_MASK) >> PWT_R2_NPW_SHIFT; /* Read pulse width */
           /* Pulse Width will be 19531 if connected to FTM2_ch1 */
  }
}


//Interrupt handler for PWT. This is called when PWT interrupts are triggered.
void PWT_IRQHandler(void) {
	//first put the retrieved value into the correct spot in the buffer
	//then call calculateWheelSpeed to calculate the actual speed
}
