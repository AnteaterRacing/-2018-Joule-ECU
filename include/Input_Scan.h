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
void GPIO_Init(void);


#ifdef FrontECU
#define Error_Count_Mask 1 << 3
uint8_t Start;
extern uint32_t C_D;
uint8_t TorqueVectoringBias;
#endif

#ifdef RearECU

void I2C_init(void);

#define C_D_Mask 1 << 26
#define Charge_LED_Mask 7
#define BSPD_Fault_Mask 1 << 31
#define BMS_Fault_Mask 1 << 30
#define IMD_Fault_Mask 1 << 28

#define ACC_INT2  16
#define ACC_INT1  17
#define Gyro_Data 18
#define Gyro_Int  19
uint8_t IMD_Fault;
uint8_t BMS_Fault;
uint8_t BSPD_Fault;

//#define ACC_INT2_Mask 1 << 16
//#define ACC_INT1_Mask 1 << 17
//#define Gyro_Data_Mask 1 << 18
//#define Gyro_Int_Mask 1 << 19
extern uint32_t C_D;

#endif

#ifdef AuxECU
int i;
int badval;
uint8_t count;
#endif

#endif /* INPUT_SCAN_H_ */
