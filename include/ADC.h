/* ADC.h              (c) 2015 Freescale Semiconductor, Inc.
 * Descriptions: ADC functions for conversion example
 * 28 Sept 2015 Pedro Aguayo: Initial version
 */

#ifndef ADC_H_
#define ADC_H_

void ReadAdcBlock(void);
void init_ADC(void);
void ADC_Handler(void);
void ADC_Converter(void);
void ADC0_IRQHandler(void);
uint16_t read_adc_chx(void);
void convertAdcChan(uint16_t adcChan);
uint8_t adc_complete(void);

/*<<<<<<< HEAD
uint16_t ADC_buf[10] = {0};

#define ADC_SC1_ADCH0_MASK 0x0
#define ADC_SC1_ADCH1_MASK 0x1
#define ADC_SC1_ADCH2_MASK 0x2
#define ADC_SC1_ADCH3_MASK 0x3
#define ADC_SC1_ADCH4_MASK 0x4
#define ADC_SC1_ADCH5_MASK 0x5
#define ADC_SC1_ADCH6_MASK 0x6
#define ADC_SC1_ADCH7_MASK 0x7
#define ADC_SC1_ADCH8_MASK 0x8
#define ADC_SC1_ADCH9_MASK 0x9
======= */
uint16_t ADC_buf[10];


#define ADC_SC1_ADCH0_MASK 0x00
#define ADC_SC1_ADCH1_MASK 0x01
#define ADC_SC1_ADCH2_MASK 0x02
#define ADC_SC1_ADCH3_MASK 0x03
#define ADC_SC1_ADCH4_MASK 0x04
#define ADC_SC1_ADCH5_MASK 0x05
#define ADC_SC1_ADCH6_MASK 0x06
#define ADC_SC1_ADCH7_MASK 0x07
#define ADC_SC1_ADCH8_MASK 0x08
#define ADC_SC1_ADCH9_MASK 0x09
/*
>>>>>>> 702a833daaad94bd10c8688dbcc756e3f9f59e2b
*/

#endif /* ADC_H_ */
