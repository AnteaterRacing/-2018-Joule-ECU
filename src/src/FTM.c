/* FTM.c              (c) 2015 Freescale Semiconductor, Inc.
 * Descriptions: FTM example code.
 * 28 Sept 2015 Osvaldo Romero: Initial version
 */

#include "derivative.h" /* include peripheral declarations SKEAZ128M4 */
#include "FTM.h"

uint16_t CurrentCaptureVal = 0;
uint16_t PriorCaptureVal = 0;
uint16_t DeltaCapture = 0;

void init_FTM(void) {
  SIM_SCGC |= SIM_SCGC_FTM2_MASK; /* Sys Clk Gate Ctrl: enable bus clock to FTM2 */

                         /* FTM2 module settings for desired channel modes: */
  FTM2_MODE |= FTM_MODE_WPDIS_MASK; /* Write protect to registers disabled (default) */
  FTM2_COMBINE = 0x0;    /* DECAPEN (Dual Edge Capture Mode Enable) = 0 (default) */
                         /* COMBINE (chans n & n+1) = 0 (default; independent chans) */
  FTM2_SC = 0x00000007;  /* CWMS (Center aligned PWM Select) = 0 (default, up count) */
                         /* TOIE (Timer Overflow Interrupt Ena) = 0 (default) */
                         /* CLKS (Clock source) = 0 (default, no clock; FTM disabled) */
                         /* PS (Prescaler factor) = 7. Prescaler = 2**7 = 128 */
  FTM2_MOD = 5000; /*mod value to trigger OVF interrupt */

}

void init_FTM2_ch5_IC(void) {
  FTM2_C5SC = 0x0000000C;       /* FTM2 ch5: Input Capture on rising or falling edge */
	                            /* CHIE (Chan Interrupt Ena) = 0 (default) */
	                            /* MSB:MSA (chan Mode Select) = 0b00 */
	                            /* ELSB:ELSA (chan Edge or Level Select) = 0b11 */
  SIM_PINSEL1 &= ~SIM_PINSEL1_FTM2PS5_MASK; /* Use default pad PTB5 */
}

void start_FTM_counters (void) {
  FTM1_SC |= FTM_SC_CLKS(2);  /* Start FTM1 ctr with clk source ICSFFCLK (31.25 KHz) */
  FTM2_SC |= FTM_SC_CLKS(1);  /* Start FTM2 ctr with clk source TIMER_CLK (20 MHz)*/
}

void output_compare_FTM2_ch1() {
  if (1==((FTM2_C1SC & FTM_CnSC_CHF_MASK)>>FTM_CnSC_CHF_SHIFT)) { /* If chan flag is set */
   FTM2_C1SC &= ~FTM_CnSC_CHF_MASK;  /* Clear chan flag: read reg then write 0 to CHF  */
   FTM2_C1V = FTM2_C1V + 19531 ;      /* Update compare value: add 19531 to current value*/
  }
}

void input_capture_FTM2_ch5(void) {
  if (1==((FTM2_C5SC & FTM_CnSC_CHF_MASK)>>FTM_CnSC_CHF_SHIFT)) { /* If chan flag is set */
    FTM2_C5SC &= ~FTM_CnSC_CHF_MASK;  /* Clear chan flag: read reg then write 0 to CHF bit */
    PriorCaptureVal = CurrentCaptureVal; /* Record value of prior capture */
    CurrentCaptureVal = FTM2_C5V;        /* Record value of current capture */
    DeltaCapture = CurrentCaptureVal - PriorCaptureVal;
           /* Delta Capture will be 19531 if connected to FTM2_ch1 */
  }
}
