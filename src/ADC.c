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
#include "SKEAZ1284.h"
#include "Error.h"
int flag = 1;
uint8_t currentChan = 0; 	//stores the current channel that is being converted

void init_ADC(void)  {
	int i = 0;
	for(;i<10;i++){
		ADC_buf[i] = 0;
	}
	//enable ADC interrupt service routine
	NVIC_ClearPendingIRQ(ADC0_IRQn);
	NVIC_EnableIRQ(ADC0_IRQn);
	NVIC_SetPriority(ADC0_IRQn,0);

	SIM_SCGC |= SIM_SCGC_ADC_MASK;			/* Enable bus clock to ADC module */
#ifndef AuxECU
	ADC_APCTL1 = 0x000003FF;              	/* Disables the IO Control of 0-9 ADC channel pins */
#endif
#ifdef AuxECU
	ADC_APCTL1 = 0x0000FFFF;
#endif
	ADC_SC3  = 0x00000003;					/* Select ADCACLK, no divide, 12 bit conversion */
											/* ADLPC = 0 (default): hi speed config */
											/* ADIV = 0 (default): clock rate = input clock/1 */
											/* ADLSMP = 0 (default): long sample time */
											/* MODE = 1: 10 bit conversion */
											/* ADICLK= 1:Bus clock */

	ADC_SC2 = 0x00;                  		/* SW trigger, default ref pins, no compare */
											/* ADTRG = 0 (default): SW Trigger */
											/* ACFE = 0 (default):  compare function disabled */
											/* REFSEL = 0 (default): default ref volt pin pair */

	ADC_SC1 = ADC_SC1_ADCH0_MASK | ADC_SC1_AIEN_MASK;/*Disables module to be enabled by specific function*/

}


#ifndef AuxECU
void ADC0_IRQHandler(void)
{
	flag = 0;
	ADC_buf[currentChan] = read_adc_chx();
	currentChan++;
	if(currentChan > 9){
		currentChan = 0;
	}
	//setting ADC_SC1 to begin next conversion
	switch(currentChan){
		case 0:
			ADC_SC1 = ADC_SC1_ADCH0_MASK | ADC_SC1_AIEN_MASK;
			break;
		case 1:
			ADC_SC1 = ADC_SC1_ADCH1_MASK | ADC_SC1_AIEN_MASK;
			break;
		case 2:
			ADC_SC1 = ADC_SC1_ADCH2_MASK | ADC_SC1_AIEN_MASK;
			break;
		case 3:
			ADC_SC1 = ADC_SC1_ADCH3_MASK | ADC_SC1_AIEN_MASK;
			break;
		case 4:
			ADC_SC1 = ADC_SC1_ADCH4_MASK | ADC_SC1_AIEN_MASK;
			break;
		case 5:
			ADC_SC1 = ADC_SC1_ADCH5_MASK | ADC_SC1_AIEN_MASK;
			break;
		case 6:
			ADC_SC1 = ADC_SC1_ADCH6_MASK | ADC_SC1_AIEN_MASK;
			break;
		case 7:
			ADC_SC1 = ADC_SC1_ADCH7_MASK | ADC_SC1_AIEN_MASK;
			break;
		case 8:
			ADC_SC1 = ADC_SC1_ADCH8_MASK | ADC_SC1_AIEN_MASK;
			break;
		case 9:
			ADC_SC1 = ADC_SC1_ADCH9_MASK | ADC_SC1_AIEN_MASK;
			break;
	}
}
#endif


#ifdef AuxECU
void ADC0_IRQHandler(void)
{
	flag = 0;
	ADC_buf[currentChan] = read_adc_chx();
	currentChan++;
	if(currentChan > 15){
		currentChan = 0;
	}
	//setting ADC_SC1 to begin next conversion
	switch(currentChan){
		case 0:
			ADC_SC1 = ADC_SC1_ADCH0_MASK | ADC_SC1_AIEN_MASK;
			break;
		case 1:
			ADC_SC1 = ADC_SC1_ADCH1_MASK | ADC_SC1_AIEN_MASK;
			break;
		case 2:
			ADC_SC1 = ADC_SC1_ADCH2_MASK | ADC_SC1_AIEN_MASK;
			break;
		case 3:
			ADC_SC1 = ADC_SC1_ADCH3_MASK | ADC_SC1_AIEN_MASK;
			break;
		case 4:
			ADC_SC1 = ADC_SC1_ADCH4_MASK | ADC_SC1_AIEN_MASK;
			break;
		case 5:
			ADC_SC1 = ADC_SC1_ADCH5_MASK | ADC_SC1_AIEN_MASK;
			break;
		case 6:
			ADC_SC1 = ADC_SC1_ADCH6_MASK | ADC_SC1_AIEN_MASK;
			break;
		case 7:
			ADC_SC1 = ADC_SC1_ADCH7_MASK | ADC_SC1_AIEN_MASK;
			break;
		case 8:
			ADC_SC1 = ADC_SC1_ADCH8_MASK | ADC_SC1_AIEN_MASK;
			break;
		case 9:
			ADC_SC1 = ADC_SC1_ADCH9_MASK | ADC_SC1_AIEN_MASK;
			break;
		case 10:
			ADC_SC1 = ADC_SC1_ADCH10_MASK | ADC_SC1_AIEN_MASK;
			break;
		case 11:
			ADC_SC1 = ADC_SC1_ADCH11_MASK | ADC_SC1_AIEN_MASK;
			break;
		case 12:
			ADC_SC1 = ADC_SC1_ADCH12_MASK | ADC_SC1_AIEN_MASK;
			break;
		case 13:
			ADC_SC1 = ADC_SC1_ADCH13_MASK | ADC_SC1_AIEN_MASK;
			break;
		case 14:
			ADC_SC1 = ADC_SC1_ADCH14_MASK | ADC_SC1_AIEN_MASK;
			break;
		case 15:
			ADC_SC1 = ADC_SC1_ADCH15_MASK | ADC_SC1_AIEN_MASK;
			break;

	}
}
#endif

//OLD ADC CODE:

uint32_t adcResult = 0;

void convertAdcChan(uint16_t adcChan) {
  ADC_SC1 &= ~ADC_SC1_ADCH_MASK;       /* Clear any prior ADCH bits*/
  ADC_SC1 |= ADC_SC1_ADCH(adcChan);    /* Specify next channel for conversion */
}

uint8_t adc_complete(void)  {
  return ((ADC_SC1 & ADC_SC1_COCO_MASK)>>ADC_SC1_COCO_SHIFT);	 /* Return value of Conversion Complete flag */
}

uint8_t read_adc_chx(void)  {
  adcResult =ADC_R;                            /* Read ADC conversion result (clears COCO flag) */
  return  (uint8_t) adcResult;//(uint16_t) ((5000*adcResult)/0x3FF);  /* Convert result to mv for 0-5V range */
}

uint8_t convert_to_uint8(uint16_t val){
	if(val >4000){
		return 200;
	}
	else if(val >1000){
		return 100;
	}
	else {
		return 0;
	}
}




