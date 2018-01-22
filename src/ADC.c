/* ADC.c              (c) 2015 Freescale Semiconductor, Inc.
 * Descriptions: ADC functions for conversion example
 * 28 Sept 2015 Pedro Aguayo: Initial version
 * 16 Dec 2015 S Mihalik, O Romero: Modified code
 */


#include "derivative.h" 				/* include peripheral declarations SKEAZ128M4 */
#include "ADC.h"
#include "stdio.h"
#include "string.h"

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


uint16_t ADC_buff[11] = {0};

void ReadAdcBlock()
{
	if (ADC_buff[0] == 0)
	{
		//Dummy the 1st channel = ADC0
		  ADC_SC1 = ADC_SC1_ADCH0_MASK;

		  //Dummy the 2nd channel = ADC1
		  ADC_SC1 = ADC_SC1_ADCH1_MASK;

		  //Dummy the 3rd channel = ADC2
		  ADC_SC1 = ADC_SC1_ADCH2_MASK;

		  //Dummy the 4th channel = ADC3
		  ADC_SC1 = ADC_SC1_ADCH1_MASK | ADC_SC1_ADCH2_MASK;

		  //Dummy the 5th channel = ADC4 & Interrupt
		  ADC_SC1 = ADC_SC1_ADCH4_MASK | ADC_SC1_AIEN_MASK;


	}
	if (ADC_buff[0] == 1)
	{
		  //Dummy the 1st channel = ADC5
		  ADC_SC1 = ADC_SC1_ADCH4_MASK | ADC_SC1_ADCH1_MASK;

		  //Dummy the 2nd channel = ADC6
		  ADC_SC1 = ADC_SC1_ADCH4_MASK | ADC_SC1_ADCH2_MASK;

		  //Dummy the 3rd channel = ADC7
		  ADC_SC1 = ADC_SC1_ADCH4_MASK | ADC_SC1_ADCH2_MASK | ADC_SC1_ADCH1_MASK;

		  //Dummy the 4th channel = ADC8
		  ADC_SC1 = ADC_SC1_ADCH8_MASK;

		  //Dummy the 5th channel = ADC9 & Interrupt
		  ADC_SC1 = ADC_SC1_ADCH8_MASK | ADC_SC1_ADCH1_MASK | ADC_SC1_AIEN_MASK;

	}
	return;
}
void ADC_IRQHandler(void)
{
	ADC_Handler();
}

void ADC_Handler()
{
	if (ADC_buff [0] == 0)
	{
		ADC_buff[0] = 1;        // set block indicator so we can evaluate the next block
		ADC_buff[1] = ADC_R;	//ADC0 is pulled from the FIFO
		ADC_buff[2] = ADC_R;	//ADC1
		ADC_buff[3] = ADC_R;	//ADC2
		ADC_buff[4] = ADC_R;	//ADC3
		ADC_buff[5] = ADC_R;	//ADC4

		ReadAdcBlock();   		// Initiated to begin the reading of the second block
		return;
	}

	if (ADC_buff [0] == 1)
	{
		ADC_buff[0] = 0;        // reset the block indicator so we read from the beginning when called
		ADC_buff[6] = ADC_R;	//ADC5
		ADC_buff[7] = ADC_R;	//ADC6
		ADC_buff[8] = ADC_R;	//ADC7
		ADC_buff[9] = ADC_R;	//ADC8
		ADC_buff[10] = ADC_R;	//ADC9

		ADC_SC1 = 0x0000001F;	// Disable module until called again

		ADC_Converter();		// Converts buff from bits to mV
		return;
	}
}

void ADC_Converter ()
{
	uint8_t i = 1;
	while (i<11)
	{
		ADC_buff[i] = (ADC_buff[i] * 5000)/0x3FF; /* Convert result to mv for 0-5V range */
		i++;
	}
	return;
}



