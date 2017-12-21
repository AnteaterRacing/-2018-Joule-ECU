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
uint32_t adcResultInMv = 0;

//Analog to Digital Converter input values:
uint32_t acc1 = 0; 			//channel 1 Pin J4-13
uint32_t acc2; 			//channel 2  Pin J4-15
uint32_t brakeAngle; 	//channel 3 Pin J5-07?
uint32_t steeringAngle; 	//channel 4	Pin J5-09

void readADCValues(void){
	convertAdcChan(0);                 	/* Convert Channel AD1 Pin: J4-13*/
	while(adc_complete()==0){}          /* Wait for conversion complete flag */
	acc1 = read_adc_chx();     			/* Get channel's conversion results in mv */

	convertAdcChan(1);                 	/* Convert Channel AD2 */
	while(adc_complete()==0){}          /* Wait for conversion complete flag */
	acc2 = read_adc_chx();     			/* Get channel's conversion results in mv */

	convertAdcChan(2);                 	/* Convert Channel AD3 */
	while(adc_complete()==0){}          /* Wait for conversion complete flag */
	brakeAngle = read_adc_chx();     	/* Get channel's conversion results in mv */

	convertAdcChan(3);                 	/* Convert Channel AD4*/
	while(adc_complete()==0){}          /* Wait for conversion complete flag */
	steeringAngle = read_adc_chx();     /* Get channel's conversion results in mv */

	convertAdcChan(10);                 /* Convert Channel AD10 to pot on EVB */
	while(adc_complete()==0){}          /* Wait for conversion complete flag */
	adcResultInMv = read_adc_chx();     /* Get channel's conversion results in mv */

}

int main(void)
{
	init_ECU(); 				//initialize ECU and all pins, timers, interrupts, etc.
	//wait_for_start_seq(); 	//wait for the startup sequence (brake + start button)

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

		readADCValues(); 			//reading the ADC values from the ADC input pins.
		FTM1_C1V = acc1*0.006; //Analog input to PWM led output
		//FTM2_C0V = FTM_CnV_VAL(acc1);
		//traps program inside loop if a fault is detected. Doesn't exit until fault condition clears
		if(APPS_Fault() || APBS_Fault()){
			while(Fault_Not_Resolved()){
				GPIOB_PSOR |= 1<<PTE7 | 1<< PTH0 | 1<<PTH1; /* Turn off all LEDs */
				GPIOB_PCOR |= PTH0;
				transmit_string("Triggered Fault!");
				GPIOB_PCOR |= PTH0;
			}
		}

		//regular ECU execution
		else {
			//throttle output controlled by interrupt service routine

			//prints out the value of acc1 to console between 0-5V
			char c1 = (acc1/1000+48);
			transmit_string("acc1=");
			transmit_char(c1);
			transmit_char(' ');
			char c2 = (acc2/1000+48);
			transmit_string(" acc2=");
			transmit_char(c2);
			transmit_char(' ');
			char c3 = (brakeAngle/1000+48);
			transmit_string(" brake=");
			transmit_char(c3);
			transmit_char(' ');
			char c4 = (steeringAngle/1000+48);
			transmit_string(" steering=");
			transmit_char(c4);
			transmit_char('\r');
		}

	}
}
