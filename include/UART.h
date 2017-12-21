/* UART.h              (c) 2015 Freescale Semiconductor, Inc.
 * Descriptions: UART example functions
 * 28 Sept 2015 Kushal Shah: Initial version
 */


#ifndef UART_H_
#define UART_H_

void init_UART(void);
void transmit_char(char);
void transmit_string(char* data_string);
char recieve_char(void);
void recieve_and_echo_char(void);

#endif /* UART_H_ */
