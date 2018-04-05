/*
 * I2C.h
 *
 *  Created on: Apr 5, 2018
 *      Author: arnav
 */

#ifndef I2C_H_
#define I2C_H_

void init_I2C(void); //initialize I2C module

void I2C0_IRQHandler(void); //handle I2C interrupts

//TODO: create data buffer to store received values

#endif /* I2C_H_ */
