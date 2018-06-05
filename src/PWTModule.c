/* PWT.c              (c) 2015 Freescale Semiconductor, Inc.
 * Descriptions: PWT example code
 * 28 Sept 2015 Kushal Shah: Initial version
 */


#include <PWTModule.h>
#include "derivative.h" /* include peripheral declarations SKEAZ128M4 */
#include "WheelSpeed.h"
#ifndef AuxECU

uint16_t PulseWidth = 0;

void init_PWTModule(void)  {
/*
 * This function initializes the PWT Module based on the settings we want. We want the PWT module to respond based on falling then rising edges of the input of the
 * appropriate sensor. We also want module to respond when the values are ready to be read into a buffer or if the counter reached the maximum number of clocks it can
 * count. We will notify the system through the use of the PWT_IRQN interrupt.
 */
  PWT_buffer[leftWheel] = 0;	//initializing buffer
  PWT_buffer[rightWheel] = 0;	//initializing buffer

  NVIC_ClearPendingIRQ(PWT_IRQn);
  NVIC_EnableIRQ(PWT_IRQn);			//enable interrupt for PWT_IRQn
  NVIC_SetPriority(PWT_IRQn,0);  	//set priority for PWT_IRQn

  SIM_SCGC |= SIM_SCGC_PWT_MASK; /* Enable Clock to PWT */

/* Initialize PWT for measuring falling edges */
/* We Want:									  */
/* PCLKS (PWT Clock Source Select) = 0 (default, BUS_CLK) */
/* PINSEL (PWT Pulse Input Selection) = 0 (default, PWTIN[0]) */
/* EDGE (PWT Input Edge sensitivity) = 2: */
	   /* 1st falling edge starts PW measurement. */
	   /* PW captured on all subsequent falling edges. */
/* PRE (PWT clk prescaler) = 7 (Prescale by 2**7 = 128) */
/*     Count frequency = 20 MHz/128 = 156.25 KHz */
/* PWTEN (PWT enable) = 1 (PWT module enabled) */
/* PWTIE (PWT interrupt enable) = 1 (enabling interrupts for PWT) */
/* PRDYIE (PWT pulse width data ready interrupt enabled)= 1 (interrupt when pulse is ready to read) */
/* POVIE (PWT Counter overflow interrupt enabled) = 1 (interrupt when counter overflows [car is moving less than 3 miles per hour]) */
/* PWTSR (PWT Soft Reset) = 0 (default) */
/* PWTRDY (PWT Pulse Width valid = 0 (default) */
/* PWTOV (PWT Counter OVerflow) = 0 (default, no overflow) */

  SIM_PINSEL1 &= ~SIM_PINSEL1_PWTIN0PS_MASK; /* Map PWTIN[0] to pin PTD5 (left wheel sensor) */
  SIM_PINSEL1 &= SIM_PINSEL1_PWTIN1PS_MASK;	 /* Map PWTIN[1] to pin PTH7 (right wheel sensor) */

  PWT_R1 &= ~PWT_R1_PCLKS_MASK;				// Setting PCLKS to "0"
  PWT_R1 &= ~PWT_R1_PINSEL_MASK;			// Setting PINSEL to "0" (Selects the left wheel sensor input)
  PWT_R1 &= ~PWT_R1_EDGE_MASK;
  PWT_R1 |= 1 << (PWT_R1_EDGE_SHIFT + 1);	// Setting EDGE to "10" *2 = "10" in binary
  PWT_R1 |= PWT_R1_PRE_MASK;				// Setting PRE to "111"
  PWT_R1 |= PWT_R1_PWTEN_MASK;				// Setting PWTEN to "1"
  PWT_R1 |= PWT_R1_PWTIE_MASK;				// Setting PWTIE to "1"
  PWT_R1 |= PWT_R1_PRDYIE_MASK;				// Setting PRDYIE to "1"
  PWT_R1 |= PWT_R1_POVIE_MASK; 				// Setting POVIE to "1"
  PWT_R1 &= ~PWT_R1_PWTSR_MASK;				// Setting PWTSR to "0"
}

// Interrupt handler for PWT. This is called when the counter overflows or if the pulse is registered and ready to be read.
void PWT_IRQHandler(void) {
	/* This function handles the interrupt triggered when the counter is overflowing or if the pulse width is ready to be read. The interrupt handler can handle two cases. This
	 * interrupt handler can first put the retrieved value into the correct spot in the buffer then call calculateWheelSpeed to calculate the actual speed. It also detects if the
	 * counter overflows, which happens either if the magnet is not detected for a long period of time or if the magnet sits still in the sensor's detection range for a long period
	 * of time. Finally, the interrupt handler will switch detection of the pulse width to the other sensor that is not being used currently.
	 */
	if (1 == (PWT_R1 & PWT_R1_PWTOV_MASK) >> PWT_R1_PWTOV_SHIFT){ 		// Checks for PWT Counter overflow. Happens when vehicle is running less than 3 miles per hour.
		if (0 == (PWT_R1 & PWT_R1_PINSEL_MASK) >> PWT_R1_PINSEL_SHIFT) 	// Check if the PWT is connect to the left or right wheel sensor
			WheelSpeed[leftWheel] = 0;									// If the left wheel is moving slower than about 3 miles per hour, then we set the speeds to zero.
		else
			WheelSpeed[rightWheel] = 0; 								// If the right wheel is moving slower than about 3 miles per hour, then we set the speeds to zero.
		PWT_R1 &= ~PWT_R1_PWTOV_MASK;									// Reset the overflow signal
	}

	else if (1== ((PWT_R1 & PWT_R1_PWTRDY_MASK) >> PWT_R1_PWTRDY_SHIFT)) { /* Checks if the pulse width is ready to be read */
		/*
		 * This section holds the value of the pulse width for the appropriate wheel and calls calculateWheelSpeed in order to calculate the actual wheel speed for the appropriate
		 * wheel.
		 */
		PulseWidth = (PWT_R2 & PWT_R2_NPW_MASK) >> PWT_R2_NPW_SHIFT; /* Read pulse width */
		if (0 == (PWT_R1 & PWT_R1_PINSEL_MASK) >> PWT_R1_PINSEL_SHIFT) // Check if the PWT is connect to the left or right wheel sensor
			PWT_buffer[leftWheel] = PulseWidth; /* Read Number of clocks cycles that sensors detects for left wheel*/
		else
			PWT_buffer[rightWheel] = PulseWidth; /* Read Number of clock cycles that sensors detects for right wheel*/

		calculateWheelSpeed(); /* Calculate the current wheel speed */
		PWT_R1 &= ~PWT_R1_PWTRDY_MASK; /* Clear flag: read reg then write 0 to PWTRDY */
	}

	/* This section switches the input for the PWTModule; if it was set to the left wheel sensors, it switches to the right wheel
	 * sensors and vice versa.
	 */

	if (0 == (PWT_R1 & PWT_R1_PINSEL_MASK) >> PWT_R1_PINSEL_SHIFT){ // Checks if the PWT is connected to the left wheel sensor
		PWT_R1 |= 1 << PWT_R1_PINSEL_SHIFT;	// Switches to the right wheel sensor
	}

	else{ // If it is connected to the right wheel sensor.
		PWT_R1 &= ~PWT_R1_PINSEL_MASK; // Switches to the left wheel sensor.
	}
}
#endif
