/* ADC.c              (c) 2015 Freescale Semiconductor, Inc.
 * Descriptions: ADC functions for conversion example
 * 28 Sept 2015 Pedro Aguayo: Initial version
 * 16 Dec 2015 S Mihalik, O Romero: Modified code
 */


#include "derivative.h" 				/* include peripheral declarations SKEAZ128M4 */
#include "ADC.h"
#include "stdio.h"
#include "string.h"
#include "UART.h"

uint16_t ADC_buff[11] = {0};

void init_ADC(void)  {
  SIM_SCGC |= SIM_SCGC_ADC_MASK;		/* Enable bus clock to ADC module */

  ADC_APCTL1 = 0x0000FFFF;              /* Disables the IO Control of all ADC channel pins */

  ADC_SC3 = 0x00000008;                 /* Select ADCACLK, no divide, 12 bit conversion */
  	                                    /* ADLPC = 0 (default): hi speed config */
  	                                    /* ADIV = 0 (default): clock rate = input clock/1 */
  	                                    /* ADLSMP = 0 (default): long sample time */
  	                                    /* MODE = 1: 12 bit conversion */
  	                                    /* ADICLK= 1:Bus clock */

  ADC_SC4 =0x00000044;                  /* 5 level FIFO = 100*/
  	  	  	  	  	  	  	  	  	  	/* FIFO Scan Enabled = 1*/

  ADC_SC2 =0x00000000;                  /* SW trigger, default ref pins, no compare */
  	  	  	  	  	  	  	  	  	  	/* ADTRG = 0 (default): SW Trigger */
  	                                    /* ACFE = 0 (default):  compare function disabled */
  	  	  	  	  	  	  	  	  	  	/* REFSEL = 0 (default): default ref volt pin pair */

  ADC_SC1 = 0x0000001F;					/*Disables module to be enabled by specific function*/

}

void ReadAdcBlock()
{
	  //PTF6 = ADC4 
		  ADC_SC1 = ADC_SC1_ADCH4_MASK | ADC_SC1_AIEN_MASK;
	
}

	return;
}


void ADC0_IRQHandler(void)
{

	if (ADC_buff [0] == 0)
	{
		ADC_buff[0] = 1;        // set block indicator so we can evaluate the next block
		ADC_buff[5] = ADC_R;	//ADC4

		
		transmit_string("ADC");
		transmit_char(ADC_buff[5]/1000 + 48);
		return;
	}

	
}








