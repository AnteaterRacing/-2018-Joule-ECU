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
#define PTE7  7          						/* Port PTE7 output to blue LED */
#define PTH0 24          						/* Port PTH0 output to red LED */
#define PTH1 25          						/* Port PTH1 output to green LED */
#define PTF0 8
#define PTF1 9
int pit0_flag_counter = 0;      /* Counter for PIT0 timer expirations */


//initializing the global interrupt service routines
void init_IRQs (void) {
  NVIC_ClearPendingIRQ(PIT_CH0_IRQn);  /* Clear any Pending IRQ for all PIT ch0 (#22) */
  NVIC_EnableIRQ(PIT_CH0_IRQn);        /* Set Enable IRQ for PIT_CH0 */
  NVIC_SetPriority(PIT_CH0_IRQn,0);    /* Set Priority for PIT_CH0 */

  NVIC_ClearPendingIRQ(FTM2_IRQn);
  NVIC_EnableIRQ(FTM2_IRQn);			//enable interrupt for FlexTimer2
  NVIC_SetPriority(FTM2_IRQn,0);    	/* Set Priority for FTM2 */
}

//enabling PIT and interrupt
void init_PIT(void) {
  SIM_SCGC |= SIM_SCGC_PIT_MASK;     /* Enable bus clock to PIT module */
  PIT_MCR = 0x0;                     /* Turn on PIT module, Freeze disabled */
  PIT_LDVAL0 = 20000000 - 1;         /* PIT0: Load value to count 20M bus clocks */
  PIT_TCTRL0 |= PIT_TCTRL_TIE_MASK;  /* Enable interrupt */
  PIT_TCTRL0 |= PIT_TCTRL_TEN_MASK;  /* Enable (start) timer */
}

//initializing PWM pins, timers, and interrupts
//TODO
void init_PWM(void){
	GPIOB_PDDR |= 1<<PTF0 | 1<<PTF1; //set data direction to output
	GPIOB_PIDR &= ~(1<<PTF0 | 1<<PTF1); //disable inputs
	GPIOB_PDOR &= ~(1<<PTF0 | 1<<PTF1); //setting initial value to 0.
}

////interrupt handler for PIT. flashes blue LED and sends UART message
//void PIT_CH0_IRQHandler (void) {
//  pit0_flag_counter++;            /* PIT0 expired. Increment counter */
//  GPIOB_PTOR |= 1<<PTE7;          /* Toggle Output (1) on port E7 (blue LED) */
//  PIT_TFLG0 |= PIT_TFLG_TIF_MASK; /* Clear PIT0 flag */
//}

//FTM2 IRQ handler. This is called for PWM when interrupts occur
void FTM2_IRQHandler(void){
	//if overflow flag on ch0, set output high for left motor
	if(FTM2_SC >> FTM_SC_TOF_SHIFT) {
		GPIOB_PDOR |= 1<<PTF0; //set output high for left motor
		GPIOB_PDOR |= 1<<PTF0; //set output high for right motor
		FTM2_SC &= ~FTM_SC_TOF_MASK; //clear overflow flag
	}
	//if compare match ch0, set output low for left motor
	else if(FTM2_C0SC>>FTM_CnSC_CHF_SHIFT) {
		GPIOB_PDOR &= ~(1<<PTF0); //set output low for left motor
		FTM2_C0SC &= ~FTM_CnSC_CHF_MASK; //clear CH0 flag
	}
	else {
		GPIOB_PDOR &= ~(1<<PTF1); //set output low for right motor
		FTM2_C1SC &= ~FTM_CnSC_CHF_MASK; //clear CH1 flag
	}
}

//TODO
void init_ECU(){

	init_UART(); 	//Initialize UART
	init_ADC(); 	//initialize Analog to Digital Converter Module
	init_PWM();		//initalize PWM Module and FTM components
	init_IRQs();	//initializing the interrupt service routines
	init_PIT();     /* Initialize PIT0: 1 sec timeout, IRQ enabled */

	//Initialize PWM and clocks
	init_clks_FEE_40MHz();        /* KEA128 clks FEE, 8MHz xtal: core 40 MHz, bus 20MHz */
	init_FTM ();  	            /* Enable bus clock to FTM1,2 prescaled by 128 */

}

