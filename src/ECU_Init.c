/*
 * ECU_Init.c
 *
 *  Created on: Oct 26, 2017
 *      Author: arnav
 */
#include <LSM9DS0.h>
#include "UART.h"
#include "derivative.h" /* include peripheral declarations SKEAZ128M4 */
#include "clocks.h"
#include "ADC.h"
#include "stdio.h"
#include "FTM.h"
#include "WheelSpeed.h"
#include "ECU_Init.h"
#include "Input_Scan.h"
#include "CAN.h"
#include "main.h"
#define PTE7  7          						/* Port PTE7 output to blue LED */
#define PTH0 24          						/* Port PTH0 output to red LED */
#define PTH1 25          						/* Port PTH1 output to green LED */


//initializes ECU subsystems
void init_ECU(){
	init_ADC(); 		//initialize Analog to Digital Converter Module
	//GPIO_Init();		//TODO: uncomment when errors resolved

	//LED initialization
	//PCOR = Port Clear Output Register, PSOR = Port Set Output Register
	//PDDR = Port Data Direction Register, PIDR = Port Input Disable Register
	//GPIOB = GPIO bank B
	GPIOB_PDDR |= 1<<PTE7 | 1<< PTH0 | 1<<PTH1;   				/* Output ports to LEDs + output pin */
	GPIOB_PIDR &= 1<<PTE7 | 1<< PTH0 | 1<<PTH1;   				/* Disable inputs (default) */
	GPIOB_PSOR |= 1<<PTE7 | 1<< PTH0 | 1<<PTH1; 				/* Turn off all LEDs */

	//init_PIT0();     				// Initialize PIT0 TODO: uncomment when errors resolved
	init_UART(); 					//Initialize UART
	//CAN_Init();					//initialize CAN bus TODO: uncomment when CAN initialization fixed
	init_PWM();				      	//initialize PWM Module and FTM components
	init_FTM ();  	              	/* Initialize FTM module*/
	init_WheelSpeed();
	init_clks_FEE_40MHz();        	/* KEA128 clks FEE, 8MHz xtal: core 40 MHz, bus 20MHz */

}

