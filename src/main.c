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

//SELECT A DEFINITION TO CHOOSE FRONT OR REAR ECU PROGRAMMING:
#define RearECU
//#define FrontECU

//REAR ECU CODE MAIN METHOD
#ifdef RearECU
int main(void)
{
	init_ECU(); 				//initialize ECU and all pins, timers, interrupts, etc.
	wait_for_start_seq(); 		//wait for the startup sequence (brake + start button)

	//LED initialization
	//PCOR = Port Clear Output Register, PSOR = Port Set Output Register
	//PDDR = Port Data Direction Register, PIDR = Port Input Disable Register
	//GPIOB = GPIO bank B
	GPIOB_PDDR |= 1<<PTE7 | 1<< PTH0 | 1<<PTH1 | 1<<PTH6;   	/* Output ports to LEDs + output pin */
	GPIOB_PIDR &= 1<<PTE7 | 1<< PTH0 | 1<<PTH1;   				/* Disable inputs (default) */
	GPIOB_PSOR |= 1<<PTE7 | 1<< PTH0 | 1<<PTH1; 				/* Turn off all LEDs */
	//GPIOB_PCOR |= 1<<PTE7 | 1<< PTH0 | 1<<PTH1; 				/* Turn on all LEDs */


	//this runs continuously once the initialization has completed
	while(1);
}
#endif

//FRONT ECU CODE MAIN METHOD
#ifdef FrontECU
int main(void){

}
#endif
