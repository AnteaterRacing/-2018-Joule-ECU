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
void init_ECU();

//also waits for the start sequence before sending the ready to drive signal
//TODO
void wait_for_start_seq();

void init_IRQs(void);
void init_PIT(void);
void PIT_CH0_IRQHandler(void);


#endif /* ECU_INIT_H_ */
