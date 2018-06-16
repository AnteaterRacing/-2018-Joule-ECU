/* UART.h              (c) 2015 Freescale Semiconductor, Inc.
 * Descriptions: UART example functions
 * 28 Sept 2015 Kushal Shah: Initial version
 */

#include "derivative.h"
#include "main.h"
#ifndef UART_H_
#define UART_H_

void init_UART(void);
void transmit_char(char);
void transmit_string(char* data_string);
char recieve_char(void);
void recieve_and_echo_char(void);


//CHANGE DEFINITION TO CHOOSE UART FUNCTIONALITY
//#define runningMode 		//used for running car
#define testingMode		//used for testing other modules and general testing

#ifdef runningMode
int UARTcount;
uint8_t UART_buffer[28]; //stores captured values to send to xBee
#endif



#endif /* UART_H_ */
