/* ADC.c              (c) 2015 Freescale Semiconductor, Inc.
 * Descriptions: ADC functions for conversion example
 * 28 Sept 2015 Pedro Aguayo: Initial version
 * 16 Dec 2015 S Mihalik, O Romero: Modified code
 */


#include "derivative.h" 				/* include peripheral declarations SKEAZ128M4 */
#include "ADC.h"

uint16_t adcResult = 0;                 /* ADC conversion result */

void init_ADC(void)  {
  SIM_SCGC |= SIM_SCGC_ADC_MASK;		/* Enable bus clock to ADC module */
  ADC_SC1 = 0x1F;                       /* Disable module (default state) */
                                        /* AIEN = 0: Interrupts disabled  */
                                        /* ADCO = 0: Continuous conversions disabled  */
                                        /* ADCH = 1F: Module disabled  */
  ADC_APCTL1 = 0x0000FFFF;              /* Enable ADC channels 10 (PTC2), 11 (PTC3) */
  ADC_SC3 = 0x00000005;                 /* Select ADCACLK, no divide, 10 bit conversion */
	                                    /* ADLPC = 0 (default): hi speed config */
	                                    /* ADIV = 0 (default): clock rate = input clock/1 */
	                                    /* ADLSMP = 0 (default): short sample time */
	                                    /* MODE = 1: 10 bit conversion */
	                                    /* ADICLK= 1:Bus clock/2 source */
  ADC_SC2 =0x00000000;                  /* SW trigger, default ref pins, no compare */
	  	  	  	  	  	  	  	  	  	/* ADTRG = 0 (default): SW Trigger */
	                                    /* ACFE = 0 (default):  compare function disabled */
	  	  	  	  	  	  	  	  	  	/* REFSEL = 0 (default): default ref volt pin pair */
}

void convertAdcChan(uint16_t adcChan) {
  ADC_SC1 &= ~ADC_SC1_ADCH_MASK;       /* Clear any prior ADCH bits*/
  ADC_SC1 |= ADC_SC1_ADCH(adcChan);    /* Specify next channel for conversion */
}

uint8_t adc_complete(void)  {
  return ((ADC_SC1 & ADC_SC1_COCO_MASK)>>ADC_SC1_COCO_SHIFT);	 /* Return value of Conversion Complete flag */
}

uint32_t read_adc_chx(void)  {
  adcResult = ADC_R;                            /* Read ADC conversion result (clears COCO flag) */
  return  (uint32_t) ((5000*adcResult)/0x3FF);  /* Convert result to mv for 0-5V range */
}

