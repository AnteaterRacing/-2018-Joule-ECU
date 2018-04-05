/*
 * WheelSpeed.h
 *
 *  Created on: Apr 5, 2018
 *      Author: arnav
 */

#ifndef WHEELSPEED_H_
#define WHEELSPEED_H_

//initialize wheel speed sensor system
void init_WheelSpeed(void);

//used to access wheelSpeed array locations
#define leftWheel 0
#define rightWheel 1

uint16_t WheelSpeed[2]; //stores calculated wheel speed values

//calculates wheel speed based on PWT buffer values
void calculateWheelSpeed(void);

#endif /* WHEELSPEED_H_ */
