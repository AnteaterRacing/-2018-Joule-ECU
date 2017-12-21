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

int pit0_flag_counter = 0;      /* Counter for PIT0 timer expirations */
int counts = 0; /*count for overflow of FTM2 */

//initializing the global interrupt service routines
void init_IRQs (void) {
  NVIC_ClearPendingIRQ(PIT_CH0_IRQn);  /* Clear any Pending IRQ for all PIT ch0 (#22) */
  NVIC_ClearPendingIRQ(FTM2_IRQn);
  NVIC_EnableIRQ(PIT_CH0_IRQn);        /* Set Enable IRQ for PIT_CH0 */
  NVIC_EnableIRQ(FTM2_IRQn);
  NVIC_SetPriority(PIT_CH0_IRQn,0);    /* Set Priority for PIT_CH0 */
  NVIC_SetPriority(FTM2_IRQn,0);    /* Set Priority for PIT_CH0 */
}

//enabling PIT and interrupt
void init_PIT(void) {
  SIM_SCGC |= SIM_SCGC_PIT_MASK;     /* Enable bus clock to PIT module */
  PIT_MCR = 0x0;                     /* Turn on PIT module, Freeze disabled */
  PIT_LDVAL0 = 20000000 - 1;         /* PIT0: Load value to count 20M bus clocks */
  PIT_TCTRL0 |= PIT_TCTRL_TIE_MASK;  /* Enable interrupt */
  PIT_TCTRL0 |= PIT_TCTRL_TEN_MASK;  /* Enable (start) timer */
}

//interrupt handler for PIT. flashes blue LED and sends UART message
void PIT_CH0_IRQHandler (void) {
  pit0_flag_counter++;            /* PIT0 expired. Increment counter */
  GPIOB_PTOR |= 1<<PTE7;          /* Toggle Output (1) on port E7 (blue LED) */
  PIT_TFLG0 |= PIT_TFLG_TIF_MASK; /* Clear PIT0 flag */
}

//TODO
void init_ECU(){

	//Initialize UART
	init_UART();
	transmit_string("running");
	//initialize ADC
	init_ADC();

	//initialize ISRs
	//init_IRQs();              /* Initialize interrupts: enable, priorities */
	//init_PIT();               /* Initialize PIT0: 1 sec timeout, IRQ enabled */


	//Initialize PWM and clocks
	init_clks_FEE_40MHz();        /* KEA128 clks FEE, 8MHz xtal: core 40 MHz, bus 20MHz */
	init_FTM ();  	            /* Enable bus clock to FTM1,2 prescaled by 128 */
	//init_FTM1_ch1_PWM();          /* PTE7 output, to blue LED */
	//init_FTM2_ch0_PWM();
	//init_FTM2_ch1_OC();        	/* PTH1 output, to green LED & J2_10 */
	//init_FTM2_ch5_IC(); 	        /* PTB5 input; connect J2_5 and J2_10  */
	//init_PWT();                   /* PTD5 input. (EVB board pin is J2-8) */
	start_FTM_counters();

}
//TODO
//waiting for the start sequence to be pressed before starting the vehicle
void wait_for_start_seq(){

}
