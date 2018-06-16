/* FTM.c              (c) 2015 Freescale Semiconductor, Inc.
 * Descriptions: FTM example code.
 * 28 Sept 2015 Osvaldo Romero: Initial version
 */

#include "derivative.h" /* include peripheral declarations SKEAZ128M4 */
#include "FTM.h"
#define PTH1 25		/*Throttle signal output to left motor */
#define PTB5 13		/*Throttle signal output to right motor */
#define PTF0 8
#define PTF1 9

uint16_t CurrentCaptureVal = 0;
uint16_t PriorCaptureVal = 0;
uint16_t DeltaCapture = 0;

void init_FTM(void) {
SIM_SCGC |= SIM_SCGC_FTM2_MASK; 	/* Sys Clk Gate Ctrl: enable bus clock to FTM2 */

                         	 	 	/* FTM2 module settings for desired channel modes: */
  FTM2_MODE |= FTM_MODE_WPDIS_MASK; /* Write protect to registers disabled (default) */
  FTM2_COMBINE = 0x0;
  FTM2_SC |= FTM_SC_PS(7);  		/* PS (Prescaler factor) = 7. Prescaler = 2**6 = 64 */
  FTM2_SC |= FTM_SC_TOIE_MASK; 		//timer overflow interrupt enable
  FTM2_MOD = 256;					/*mod value to trigger OVF interrupt.*/

  FTM2_C0SC |= FTM_CnSC_MSB_MASK; 	//edge aligned pwm
  FTM2_C0SC |= FTM_CnSC_ELSB_MASK;	//high true pulses
  FTM2_C0SC &= ~FTM_CnSC_ELSA_MASK; //high true pulses
  FTM2_C0SC |= FTM_CnSC_CHIE_MASK; 	//channel interrupt enable
  FTM2_C1SC |= FTM_CnSC_MSB_MASK; 	//edge aligned pwm
  FTM2_C1SC |= FTM_CnSC_ELSB_MASK;	//high true pulses
  FTM2_C1SC &= ~FTM_CnSC_ELSA_MASK; //high true pulses
  FTM2_C1SC |= FTM_CnSC_CHIE_MASK; 	//channel interrupt enable
  FTM2_C0V = 120; 		    		//Compare match value
  FTM2_C1V = 120;
  FTM2_SC |= FTM_SC_CLKS(1);  		/* Start FTM2 ctr with clk source TIMER_CLK (20 MHz)*/
}

//initializing PWM pins, timers, and interrupts
void init_PWM(void){
	GPIOB_PDDR |= 1<<PTF0; //set data direction to output
	GPIOB_PDDR |= 1<<PTF1;
	GPIOB_PIDR &= ~(1<<PTF0); //disable inputs
	GPIOB_PIDR &= ~(1<<PTF1);
	GPIOB_PDOR &= ~(1<<PTF0); //setting initial value to 0.
	GPIOB_PDOR &= ~(1<<PTF1);
	NVIC_ClearPendingIRQ(FTM2_IRQn);
	NVIC_EnableIRQ(FTM2_IRQn);			//enable interrupt for FlexTimer2
	NVIC_SetPriority(FTM2_IRQn,0);    	/* Set Priority for FTM2 */
}

//FTM2 IRQ handler. This is called for PWM when interrupts occur
void FTM2_IRQHandler(void){
	//if overflow flag on ch0, set output high for left/right motor
	if(FTM2_SC >> FTM_SC_TOF_SHIFT) {

		if(FTM2_C0V == 0 || FTM2_C1V == 0) { //if compare match value set to 0, do not set output high
			if(FTM2_C0V == 0) {
				GPIOB_PDOR &= ~(1<<PTF0); //set output low for left motor
			}
			else {
				GPIOB_PDOR &= ~(1<<PTF1); //set output low for right motor
			}
		}
		else {
			GPIOB_PDOR |= (1<<PTF0); //set output high for left motor
			GPIOB_PDOR |= (1<<PTF1); //set output high for right motor
		}
		FTM2_SC &= ~FTM_SC_TOF_MASK; //clear overflow flag
	}
	else{
		//if compare match ch0, set output low for left motor
		if(FTM2_C0SC>>FTM_CnSC_CHF_SHIFT) {
		GPIOB_PDOR &= ~(1<<PTF0); //set output low for left motor
		FTM2_C0SC &= ~FTM_CnSC_CHF_MASK; //clear CH0 flag
		}

		//if compare match ch1, set output low for right motor
		if(FTM2_C1SC>>FTM_CnSC_CHF_SHIFT) {
			GPIOB_PDOR &= ~(1<<PTF1); //set output low for right motor
			FTM2_C1SC &= ~FTM_CnSC_CHF_MASK; //clear CH1 flag
		}
	}
}
