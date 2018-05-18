/* UART.c              (c) 2015 Freescale Semiconductor, Inc.
 * Descriptions: UART example functions
 * 28 Sept 2015 Kushal Shaw: Initial version
 */


#include "derivative.h"
#include "UART.h"
#define PTE7 7

uint8_t send = 0;

//RUNNING CAR MODE
#ifdef runningMode
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
	UART2_C2 |= 1<<UART_C2_TIE_SHIFT | 1<<UART_C2_TE_SHIFT;/* Enable Tx, transmit interrupt enabled */
	SIM_PINSEL1 &= ~SIM_PINSEL1_UART2PS_MASK; /* UART2PS=0 (default); */
											/* UART2 Pin Selection Tx PTD7,Rx PTD6 */

	UARTcount = 0;						/* Initialize the counter*/
	uint8_t i = 0;
	for(; i < 26; i++) { 			//initialize buffer to 0s
		UART_buffer[i] = 'a'+i;
	}



	NVIC_ClearPendingIRQ(UART2_IRQn);
	NVIC_EnableIRQ(UART2_IRQn);			//enable interrupt for UART0
	NVIC_SetPriority(UART2_IRQn,0);    	/* Set Priority for UART0 */

	UART2_D = 0xFF; 				//start the transmit interrupt loop
}
uint8_t it = 1;
void UART2_IRQHandler(void) {
	(void)UART2_S1; 									//clear TDRE by reading UART2_S1
	if(send == 3) {
		if(UARTcount > 25){									/* Buffer is of size 26, reset counter and make new line */
			UARTcount = -1;
			UART2_D = 0xFF;
		}
		else {
			if(UART_buffer[UARTcount] == 255){				/* making sure no values are 255 (start bit) */
				UART_buffer[UARTcount] -= 1;
			}
			UART2_D = UART_buffer[UARTcount];				/* Sends Data from UART_buffer[] */
		}
		UARTcount++;									/* Increment counter */
		send = 0;
	}
	else {
		send = send + it;
	}
}
#endif

//TESTING MODE
#ifdef testingMode
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
	UART2_C2 |= 1<<UART_C2_TE_SHIFT | 1<<UART_C2_RE_SHIFT; //enable TX/RX. no interrupts (use polling)
	SIM_PINSEL1 &= ~SIM_PINSEL1_UART2PS_MASK; /* UART2PS=0 (default); */
}

/* Function to Transmit single Char */
void transmit_char(char send) {
  while((UART2_S1 & UART_S1_TDRE_MASK)==0); /* Wait for transmit buffer to be empty */
  (void)UART2_S1;                    /* Read UART2_S1 register to clear TDRE */
  UART2_D=send;                      /* Send data */
}

/* Function to Transmit single int */
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

#endif
