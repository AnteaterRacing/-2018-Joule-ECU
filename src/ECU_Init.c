/*
 * ECU_Init.c
 *
 *  Created on: Oct 26, 2017
 *      Author: arnav
 */
#include "UART.h"
#include "derivative.h" /* include peripheral declarations SKEAZ128M4 */
#include "clocks.h"
#include "ADC.h"
#include "stdio.h"
#include "FTM.h"
#include "PWT.h"
#include "ECU_Init.h"
#include "Input_Scan.h"
#include "Input_Scan.c"
#include "CAN.h"
#include "main.h"
#define PTE7  7          						/* Port PTE7 output to blue LED */
#define PTH0 24          						/* Port PTH0 output to red LED */
#define PTH1 25          						/* Port PTH1 output to green LED */
#define PTF0 8									/*Throttle signal output to left motor */
#define PTF1 9									/*Throttle signal output to right motor */

//initializing PWM pins, timers, and interrupts
void init_PWM(void){
	GPIOB_PDDR |= 1<<PTF0 | 1<<PTF1; //set data direction to output
	GPIOB_PIDR &= ~(1<<PTF0 | 1<<PTF1); //disable inputs
	GPIOB_PDOR &= ~(1<<PTF0 | 1<<PTF1); //setting initial value to 0.
	NVIC_ClearPendingIRQ(FTM2_IRQn);
	NVIC_EnableIRQ(FTM2_IRQn);			//enable interrupt for FlexTimer2
	NVIC_SetPriority(FTM2_IRQn,0);    	/* Set Priority for FTM2 */
}

//FTM2 IRQ handler. This is called for PWM when interrupts occur
void FTM2_IRQHandler(void){

	//if overflow flag on ch0, set output high for left motor
	if(FTM2_SC >> FTM_SC_TOF_SHIFT) {
		GPIOB_PDOR |= 1<<PTF0; //set output high for left motor
		GPIOB_PDOR |= 1<<PTF1; //set output high for right motor
		FTM2_SC &= ~FTM_SC_TOF_MASK; //clear overflow flag
	}
	//if compare match ch0, set output low for left motor
	else if(FTM2_C0SC>>FTM_CnSC_CHF_SHIFT) {
		GPIOB_PDOR &= ~(1<<PTF0); //set output low for left motor
		FTM2_C0SC &= ~FTM_CnSC_CHF_MASK; //clear CH0 flag
	}
	//if compare match ch1, set output low for right motor
	else {
		GPIOB_PDOR &= ~(1<<PTF1); //set output low for right motor
		FTM2_C1SC &= ~FTM_CnSC_CHF_MASK; //clear CH1 flag
	}
}


//initializes ECU subsystems
void init_ECU(){
	init_ADC(); 		//initialize Analog to Digital Converter Module
	GPIO_Init();

	//LED initialization
	//PCOR = Port Clear Output Register, PSOR = Port Set Output Register
	//PDDR = Port Data Direction Register, PIDR = Port Input Disable Register
	//GPIOB = GPIO bank B
	GPIOB_PDDR |= 1<<PTE7 | 1<< PTH0 | 1<<PTH1;   				/* Output ports to LEDs + output pin */
	GPIOB_PIDR &= 1<<PTE7 | 1<< PTH0 | 1<<PTH1;   				/* Disable inputs (default) */
	GPIOB_PSOR |= 1<<PTE7 | 1<< PTH0 | 1<<PTH1; 				/* Turn off all LEDs */

	init_PIT0();     			// Initialize PIT0
	//init_UART(); 				//Initialize UART
	CAN_Init();				//initialize CAN bus
	init_PWM();				      //initialize PWM Module and FTM components
	init_FTM ();  	              /* Enable bus clock to FTM1,2 prescaled by 128 */
	init_clks_FEE_40MHz();        /* KEA128 clks FEE, 8MHz xtal: core 40 MHz, bus 20MHz */

}

