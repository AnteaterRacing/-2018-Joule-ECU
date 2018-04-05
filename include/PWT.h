/* PWT.h              (c) 2015 Freescale Semiconductor, Inc.
 * Descriptions: PWT example code
 * 28 Sept 2015 Kushal Shah: Initial version
 */


#ifndef PWT_H_
#define PWT_H_

void init_PWT (void);
void pulse_width_timer_PWT (void);
void PWT_IRQHandler(void);

uint16_t PWT_buffer[2]; //stores captured PWT values

#endif /* PWT_H_ */
