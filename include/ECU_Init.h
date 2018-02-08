/*
 * ECU_Init.h
 *
 *  Created on: Oct 26, 2017
 *      Author: arnav
 */

#ifndef ECU_INIT_H_
#define ECU_INIT_H_

//initializes GPIO for the ECU as well as all of the communication interfaces
//TODO
void init_ECU(uint8_t);
void init_IRQs(void);
void init_PIT(void);
void PIT_CH0_IRQHandler(void);
void FTM2_IRQHandler(void);
//initializing PWM pins, timers, and interrupts
//TODO
void init_PWM();



#endif /* ECU_INIT_H_ */
