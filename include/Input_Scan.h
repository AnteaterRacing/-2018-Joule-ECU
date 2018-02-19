/*
 * Input_Scan.h
 *
 *  Created on: Feb 8, 2018
 *      Author: Xavier
 */
#include "main.h"
#ifndef INPUT_SCAN_H_
#define INPUT_SCAN_H_

void init_PIT0(void); //initializes PIT
void PIT_CH0_IRQHandler(void); //PIT ISR
void init_GPIO(void);


//TODO: @Xavier: give these correct values
uint32_t Fault;
uint32_t Fault_Mask;

#ifdef FrontECU
#define Start_Mask 32768
#define Error_Count_Mask 8
#endif

#ifdef RearECU
#define C_D_Mask 67108864
extern uint32_t C_D;
#endif

#endif /* INPUT_SCAN_H_ */
