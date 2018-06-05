/* PWT.h              (c) 2015 Freescale Semiconductor, Inc.
 * Descriptions: PWT example code
 * 28 Sept 2015 Kushal Shah: Initial version
 */


#ifndef PWTMODULE_H_
#define PWTMODULE_H_
#include "derivative.h"
#include "main.h"

void init_PWTModule (void);
void pulse_width_timer_PWT (void);
void PWT_IRQHandler(void);

uint16_t PWT_buffer[2]; //stores captured PWT values

#endif /* PWTMODULE_H_ */
