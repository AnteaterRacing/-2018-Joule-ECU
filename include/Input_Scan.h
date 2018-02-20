/*
 * Input_Scan.h
 *
 *  Created on: Feb 8, 2018
 *      Author: Xavier
 */

#ifndef INPUT_SCAN_H_
#define INPUT_SCAN_H_

void init_PIT0(void); //initializes PIT
void PIT_CH0_IRQHandler(void); //PIT ISR
void init_GPIO(void);


#endif /* INPUT_SCAN_H_ */
