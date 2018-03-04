/* UART.c              (c) 2015 Freescale Semiconductor, Inc.
 * Descriptions: UART example functions
 * 28 Sept 2015 Kushal Shaw: Initial version
 */


#include "derivative.h"
#include "UART.h"

/* Initialize UART at Baud Rate = 9600, 1 stop bit, 8 bit format, no parity */
void init_UART(void)  {
	SIM_SCGC |=  SIM_SCGC_UART2_MASK;  /* Enable bus clock (20MHz) in UART2 */
	UART2_BDH = 0;                     /* One stop bit; upper baud divisor bits = 0 */
	UART2_BDL = 130;                   /* For 9600 baud: baud divisor=20M/9600/16 = ~130 */
	UART2_C1  = 0;                     /* Initialize control bits for communication: */
									 /* M (9 or 8 bit select) = 0 (default, 8 bit format) */
									 /* PE (Parity Enable) = 0 (default, no parity) */
									 /* UARTSWAI (UART stops in wait mode)=0 (default, no stop)*/
									 /* WAKE (Recvr Wakeup Method) = 0 */
									 /*      (default, idle-line wakeup) */
	//UART2_C2 |= 1<<UART_C2_TIE_SHIFT | 1<<UART_C2_TE_SHIFT | 1<<UART_C2_RE_SHIFT;/* Enable Tx, Rx. transmit interrupt enabled */
	UART2_C2 = 0x0C;
	SIM_PINSEL1 &= ~SIM_PINSEL1_UART2PS_MASK; /* UART2PS=0 (default); */
											/* UART2 Pin Selection Tx PTD7,Rx PTD6 */

//	NVIC_ClearPendingIRQ(UART0_IRQn);
//	NVIC_EnableIRQ(UART0_IRQn);			//enable interrupt for UART0
//	NVIC_SetPriority(UART0_IRQn,0);    	/* Set Priority for UART0 */
}

void UART0_IRQHandler(void) {

}

/* Function to Transmit single Char */
void transmit_char(char send) {
  while((UART2_S1 & UART_S1_TDRE_MASK)==0); /* Wait for transmit buffer to be empty */
  (void)UART2_S1;                    /* Read UART2_S1 register to clear TDRE */
  UART2_D=send;                      /* Send data */
}

void transmit_uint8(uint8_t send) {
	while((UART2_S1 & UART_S1_TDRE_MASK)==0); /* Wait for transmit buffer to be empty */
	(void)UART2_S1;                    /* Read UART2_S1 register to clear TDRE */
	UART2_D=send;                      /* Send data */
}

/* Function to Transmit whole string */
void transmit_string(char data_string[])  {
  int i=0;
  while(data_string[i] != '\0')  {   /* Send chars one at a time */
    transmit_char(data_string[i]);
    i++;
  }
}

/* Function to Receive single Char */
char receive_char(void) {
  char recieve;
  while((UART2_S1 & UART_S1_RDRF_MASK)==0);  /* Wait for received buffer to be full */
  (void) UART2_S1;          /* Read UART2_S1 register to clear RDRF (after reading data) */
  recieve= UART2_D;         /* Read received data*/
  return recieve;
}

/* Function to echo the received char back to the Sender */
void recieve_and_echo_char(void)  {
  char send = receive_char();        /* Receive Char */
  transmit_char(send);               /* Transmit same char back to the sender */
  transmit_char('\n');               /* New line */
  transmit_char('\r');               /* Return */
}

