/* main.c              (c) 2015 Freescale Semiconductor, Inc.
 * Descriptions: UART example code for KEA Series
 * 28 Sept 2015 Kushal Shah: Initial version
 */

#include "derivative.h" /* include peripheral declarations SKEAZ128M4 */
#include "UART.h"
#include "clocks.h"
#include "ADC.h"
#include "stdio.h"
#include "FTM.h"
#include "Display.h"
#include "ECU_Init.h"
#include "ECU_Operations.h"
#include "Data_Logging.h"
#define PTE7  7          						/* Port PTE7 output to blue LED */
#define PTH0 24          						/* Port PTH0 output to red LED */
#define PTH1 25          						/* Port PTH1 output to green LED */
#define PTH6 30									/* Port PTH6 for throttle output PWM*/


//TODO
int main(void)
{
	init_ECU(); 				//initialize ECU and all pins, timers, interrupts, etc.
	wait_for_start_seq(); 	//wait for the startup sequence (brake + start button)

	//transmit_string("run");

	//LED initialization
	//PCOR = Port Clear Output Register, PSOR = Port Set Output Register
	//PDDR = Port Data Direction Register, PIDR = Port Input Disable Register
	//GPIOB = GPIO bank B
	GPIOB_PDDR |= 1<<PTE7 | 1<< PTH0 | 1<<PTH1 | 1<<PTH6;   	/* Output ports to LEDs + output pin */
	GPIOB_PIDR &= 1<<PTE7 | 1<< PTH0 | 1<<PTH1;   				/* Disable inputs (default) */
	GPIOB_PSOR |= 1<<PTE7 | 1<< PTH0 | 1<<PTH1; 				/* Turn off all LEDs */
	//GPIOB_PCOR |= 1<<PTE7 | 1<< PTH0 | 1<<PTH1; 				/* Turn on all LEDs */


	//this runs continuously once the initialization has completed
	while(1) {
		GPIOB_PSOR |= 1<<PTE7 | 1<< PTH0 | 1<<PTH1; /* Turn off all LEDs */
		print_ECU_Status_UART();
		//FTM1_C1V = acc1*0.006; //Analog input to PWM led output
		//FTM2_C0V = FTM_CnV_VAL(acc1);
		//traps program inside loop if a fault is detected. Doesn't exit until fault condition clears
		if(APPS_Fault() || BSE_Fault()){
			while(Fault_Not_Resolved()){
				//set throttle outputs to 0;
				GPIOB_PSOR |= 1<<PTE7 | 1<< PTH0 | 1<<PTH1; /* Turn off all LEDs */
				GPIOB_PCOR |= PTH0;
				transmit_string("Triggered Fault!");
			}
			transmit_string("Fault Resolved!");
		}
		//regular ECU execution
		else {
			//throttle output controlled by interrupt service routine
		}

	}
}
