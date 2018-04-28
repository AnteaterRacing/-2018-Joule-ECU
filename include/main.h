/*
 * main.h
 *
 *  Created on: Feb 18, 2018
 *      Author: arnav
 */

#ifndef MAIN_H_
#define MAIN_H_

//SELECT A DEFINITION TO CHOOSE FRONT OR REAR ECU PROGRAMMING:
#define RearECU
//#define FrontECU
//#define CAN_Fucked 		//used to revert to alternate settings if CAN bus is not functional
#define RTDS_MASK 32768 	//used in wait_for_start_seq()

#endif /* MAIN_H_ */
