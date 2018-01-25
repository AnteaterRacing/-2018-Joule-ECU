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

#define ADC_SC1_ADCH0_MASK 0
#define ADC_SC1_ADCH1_MASK 1
#define ADC_SC1_ADCH2_MASK 2
#define ADC_SC1_ADCH4_MASK 4
#define ADC_SC1_ADCH8_MASK 8

#endif /* ADC_H_ */
