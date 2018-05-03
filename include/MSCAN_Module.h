/*
 * MSCAN_Module.h
 *
 *  Created on: Apr 22, 2014
 *      Author: Kitty
 */

#ifndef MSCAN_MODULE_H_
#define MSCAN_MODULE_H_

#include "nvic.h"

void MSCAN_ModuleEn(void);
void MSCAN_RX_IRQHandler(void);
void MSCAN_TX_IRQHandler(void);

#endif /* MSCAN_MODULE_H_ */
