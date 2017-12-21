/* ADC.h              (c) 2015 Freescale Semiconductor, Inc.
 * Descriptions: ADC functions for conversion example
 * 28 Sept 2015 Pedro Aguayo: Initial version
 */

#ifndef ADC_H_
#define ADC_H_

void convertAdcChan(uint16_t);
void init_ADC(void);
uint8_t adc_complete(void);
uint32_t read_adc_chx(void);

#endif /* ADC_H_ */
