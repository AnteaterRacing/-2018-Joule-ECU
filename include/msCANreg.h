#ifndef __MSCANREG_H
#define __MSCANREG_H

/******************************************************************************								              
*
*                             Copyright (C) 2013 
*
* Tongji University - Freescale Automotive Electronics Laboratory, Inc.
* 
*                            All Rights Reserved		
*														                            
* Filename:     msCANreg.h                
*														                            
* Revision:      										                    
*														                            
* Functions:    Register definition for msCAN module
*														                            
* Description:  
*
* Notes:        The Regiser definition may have a duplicate definition when user
                generate a new project automatically, there should be a same 
                definition of the msCAN Registers, Pls use the definition below
                to run the driver rightly.
*
******************************************************************************/

/****************************************************************************** 
* Include
******************************************************************************/
#include "msCANcfg.h"
#include "msCANstd.h"
// MSCAN Register Definition ------------------------
typedef struct _MSCANReg{

    /*** CTL0 - MSCAN Control 0 Register; 0x00 ***/
    union {
        uint8 Byte;
        struct {
            uint8 _INITRQ :1;                                          /* Initialization Mode Request */
            uint8 _SLPRQ  :1;                                          /* Sleep Mode Request */
            uint8 _WUPE   :1;                                          /* Wake-Up Enable */
            uint8 _TIME   :1;                                          /* Timer Enable */
            uint8 _SYNCH  :1;                                          /* Synchronized Status */
            uint8 _CSWAI  :1;                                          /* CAN Stops in Wait Mode */
            uint8 _RXACT  :1;                                          /* Receiver Active Status */
            uint8 _RXFRM  :1;                                          /* Received Frame Flag */
        }Bits;
    }CANCTL0;

    /*** CTL1 - MSCAN Control 1 Register; 0x01 ***/
    union {
        uint8 Byte;
        struct {													   
            uint8 _INITAK      :1;                                      /* Initialization Mode Acknowledge */
            uint8 _SLPAK       :1;                                      /* Sleep Mode Acknowledge */
            uint8 _WUPM        :1;                                      /* Wake-Up Mode */
            uint8 _BORM        :1;                                      /* Bus-Off Recovery Mode */
            uint8 _LISTEN      :1;                                      /* Listen Only Mode */
            uint8 _LOOPB       :1;                                      /* Loop Back Self Test Mode */
            uint8 _CLKSRC      :1;                                      /* MSCAN Clock Source */
            uint8 _CANE        :1;                                      /* MSCAN Enable */
        }Bits;
    }CANCTL1;   
    /*** BTR0 - MSCAN Bus Timing Register 0; 0x02 ***/
    union {
        uint8 Byte;
        struct {
            uint8 BRP0        :1;                                       /* Baud Rate Prescaler 0 */
            uint8 BRP1        :1;                                       /* Baud Rate Prescaler 1 */
            uint8 BRP2        :1;                                       /* Baud Rate Prescaler 2 */
            uint8 BRP3        :1;                                       /* Baud Rate Prescaler 3 */
            uint8 BRP4        :1;                                       /* Baud Rate Prescaler 4 */
            uint8 BRP5        :1;                                       /* Baud Rate Prescaler 5 */
            uint8 SJW0        :1;                                       /* Synchronization Jump Width 0 */
            uint8 SJW1        :1;                                       /* Synchronization Jump Width 1 */
        }Bits;
        struct {
            uint8 grpBRP  :6;
            uint8 grpSJW  :2;
        } MergedBits;
    }CANBTR0;

    /*** BTR1 - MSCAN Bus Timing Register 1; 0x03 ***/  
    union {
        uint8 Byte;
        struct {
            uint8 TSEG10      :1;                                       /* Time Segment 10 */
            uint8 TSEG11      :1;                                       /* Time Segment 11 */
            uint8 TSEG12      :1;                                       /* Time Segment 12 */
            uint8 TSEG13      :1;                                       /* Time Segment 13 */
            uint8 TSEG20      :1;                                       /* Time Segment 20 */
            uint8 TSEG21      :1;                                       /* Time Segment 21 */
            uint8 TSEG22      :1;                                       /* Time Segment 22 */
            uint8 SAMP        :1;                                       /* Sampling */
        }Bits;
        struct {
            uint8 grpTSEG_10 :4;
            uint8 grpTSEG_20 :3;
            uint8         :1;
        } MergedBits;
    }CANBTR1; 

    /*** RFLG - MSCAN Receiver Flag Register; 0x04 ***/
    union {
        uint8 Byte;
        struct {
            uint8 _RXF         :1;                                       /* Receive Buffer Full */
            uint8 _OVRIF       :1;                                       /* Overrun Interrupt Flag */
            uint8 _TSTAT0      :1;                                       /* Transmitter Status Bit 0 */
            uint8 _TSTAT1      :1;                                       /* Transmitter Status Bit 1 */
            uint8 _RSTAT0      :1;                                       /* Receiver Status Bit 0 */
            uint8 _RSTAT1      :1;                                       /* Receiver Status Bit 1 */
            uint8 _CSCIF       :1;                                       /* CAN Status Change Interrupt Flag */
            uint8 _WUPIF       :1;                                       /* Wake-up Interrupt Flag */
        }Bits;
        struct {
            uint8         :1;
            uint8         :1;
            uint8 grpTSTAT :2;
            uint8 grpRSTAT :2;
            uint8         :1;
            uint8         :1;
        } MergedBits;
    }CANRFLG;  

    /*** RIER - MSCAN Receiver Interrupt Enable Register; 0x05 ***/
    union {
        uint8 Byte;
        struct {
            uint8 _RXFIE       :1;                                       /* Receiver Full Interrupt Enable */
            uint8 _OVRIE       :1;                                       /* Overrun Interrupt Enable */
            uint8 _TSTATE0     :1;                                       /* Transmitter Status Change Enable 0 */
            uint8 _TSTATE1     :1;                                       /* Transmitter Status Change Enable 1 */
            uint8 _RSTATE0     :1;                                       /* Receiver Status Change Enable 0 */
            uint8 _RSTATE1     :1;                                       /* Receiver Status Change Enable 1 */
            uint8 _CSCIE       :1;                                       /* CAN Status Change Interrupt Enable */
            uint8 _WUPIE       :1;                                       /* Wake-up Interrupt Enable */
        }Bits;
        struct {
            uint8         :1;
            uint8         :1;
            uint8 grpTSTATE :2;
            uint8 grpRSTATE :2;
            uint8         :1;
            uint8         :1;
        } MergedBits;
    }CANRIER;   

    /*** TFLG - MSCAN Transmitter Flag Register; 0x06 ***/
    union {
        uint8 Byte;
        struct {
            uint8 TXE0        :1;                                       /* Transmitter Buffer Empty 0 */
            uint8 TXE1        :1;                                       /* Transmitter Buffer Empty 1 */
            uint8 TXE2        :1;                                       /* Transmitter Buffer Empty 2 */
            uint8             :1; 
            uint8             :1; 
            uint8             :1; 
            uint8             :1; 
            uint8             :1; 
        } Bits;
        struct {
            uint8 grpTXE  :3;
            uint8         :1;
            uint8         :1;
            uint8         :1;
            uint8         :1;
            uint8         :1;
        } MergedBits;
    }CANTFLG; 

    /*** TIER - MSCAN Transmitter Interrupt Enable Register; 0x07 ***/
    union {
        uint8 Byte;
        struct {
            uint8 TXEIE0      :1;                                       /* Transmitter Empty Interrupt Enable 0 */
            uint8 TXEIE1      :1;                                       /* Transmitter Empty Interrupt Enable 1 */
            uint8 TXEIE2      :1;                                       /* Transmitter Empty Interrupt Enable 2 */
            uint8             :1; 
            uint8             :1; 
            uint8             :1; 
            uint8             :1; 
            uint8             :1; 
        }Bits;
        struct {
            uint8 grpTXEIE :3;
            uint8         :1;
            uint8         :1;
            uint8         :1;
            uint8         :1;
            uint8         :1;
        } MergedBits;
    }CANTIER;    

    /*** TARQ - MSCAN Transmitter Message Abort Request; 0x08 ***/
    union {
        uint8 Byte;
        struct {
            uint8 ABTRQ0      :1;                                       /* Abort Request 0 */
            uint8 ABTRQ1      :1;                                       /* Abort Request 1 */
            uint8 ABTRQ2      :1;                                       /* Abort Request 2 */
            uint8             :1; 
            uint8             :1; 
            uint8             :1; 
            uint8             :1; 
            uint8             :1; 
        }Bits;
        struct {
            uint8 grpABTRQ :3;
            uint8         :1;
            uint8         :1;
            uint8         :1;
            uint8         :1;
            uint8         :1;
        } MergedBits;
    }CANTARQ; 

    /*** TAAK - MSCAN Transmitter Message Abort Acknowledge; 0x09 ***/
    union {
        uint8 Byte;
        struct {
            uint8 ABTAK0      :1;                                       /* Abort Acknowledge 0 */
            uint8 ABTAK1      :1;                                       /* Abort Acknowledge 1 */
            uint8 ABTAK2      :1;                                       /* Abort Acknowledge 2 */
            uint8             :1; 
            uint8             :1; 
            uint8             :1; 
            uint8             :1; 
            uint8             :1; 
        }Bits;
        struct {
            uint8 grpABTAK :3;
            uint8         :1;
            uint8         :1;
            uint8         :1;
            uint8         :1;
            uint8         :1;
        } MergedBits;
    }CANTAAK;   

    /*** TBSEL - MSCAN Transmit Buffer Selection; 0x0A ***/
    union {
        uint8 Byte;
        struct {
            uint8 TX0         :1;                                       /* Transmit Buffer Select 0 */
            uint8 TX1         :1;                                       /* Transmit Buffer Select 1 */
            uint8 TX2         :1;                                       /* Transmit Buffer Select 2 */
            uint8             :1; 
            uint8             :1; 
            uint8             :1; 
            uint8             :1; 
            uint8             :1; 
        }Bits;
        struct {
            uint8 grpTX   :3;
            uint8         :1;
            uint8         :1;
            uint8         :1;
            uint8         :1;
            uint8         :1;
        } MergedBits;
    }CANTBSEL; 

    /*** IDAC - MSCAN Identifier Acceptance Control Register; 0x0B ***/
    union {
        uint8 Byte;
        struct {
            uint8 IDHIT0      :1;                                       /* Identifier Acceptance Hit Indicator 0 */
            uint8 IDHIT1      :1;                                       /* Identifier Acceptance Hit Indicator 1 */
            uint8 IDHIT2      :1;                                       /* Identifier Acceptance Hit Indicator 2 */
            uint8             :1; 
            uint8 IDAM0       :1;                                       /* Identifier Acceptance Mode 0 */
            uint8 IDAM1       :1;                                       /* Identifier Acceptance Mode 1 */
            uint8             :1; 
            uint8             :1; 
        }Bits;
        struct {
            uint8 grpIDHIT :3;
            uint8         :1;
            uint8 grpIDAM :2;
            uint8         :1;
            uint8         :1;
        } MergedBits;
    }CANIDAC;   

   
    
    /*** IDAC - MSCAN Reserved Register; 0x0C ***/
    union {
        uint8 Byte;
        struct {
            uint8             :1;                                      
            uint8             :1;                                     
            uint8             :1;                                       
            uint8             :1; 
            uint8             :1;                                       
            uint8             :1;                                       
            uint8             :1; 
            uint8             :1; 
        }Bits;
    }CANRSRG;   
    
    
    /*** MISC - MSCAN Miscellaneous Register; 0x0D ***/
    union {
        uint8 Byte;
        struct {
            uint8 BOHOLD      :1;                                       /* Bus-off State Hold Until User Request */
            uint8             :1; 
            uint8             :1; 
            uint8             :1; 
            uint8             :1; 
            uint8             :1; 
            uint8             :1; 
            uint8             :1; 
        }Bits;
    }CANMIS;

    /*** RXERR - MSCAN Receive Error Counter Register; 0x0E ***/
    union {
        uint8 Byte;
        struct {
            uint8 RXERR0      :1;                                       /* Bit 0 */
            uint8 RXERR1      :1;                                       /* Bit 1 */
            uint8 RXERR2      :1;                                       /* Bit 2 */
            uint8 RXERR3      :1;                                       /* Bit 3 */
            uint8 RXERR4      :1;                                       /* Bit 4 */
            uint8 RXERR5      :1;                                       /* Bit 5 */
            uint8 RXERR6      :1;                                       /* Bit 6 */
            uint8 RXERR7      :1;                                       /* Bit 7 */
        }Bits;
    }CANRXERR; 

    /*** TXERR - MSCAN0 Transmit Error Counter Register; 0x0F ***/
    union {
        uint8 Byte;
        struct {
            uint8 TXERR0      :1;                                       /* Bit 0 */
            uint8 TXERR1      :1;                                       /* Bit 1 */
            uint8 TXERR2      :1;                                       /* Bit 2 */
            uint8 TXERR3      :1;                                       /* Bit 3 */
            uint8 TXERR4      :1;                                       /* Bit 4 */
            uint8 TXERR5      :1;                                       /* Bit 5 */
            uint8 TXERR6      :1;                                       /* Bit 6 */
            uint8 TXERR7      :1;                                       /* Bit 7 */
        }Bits;
    }CANTXERR; 

    /*** IDAR0 - MSCAN Identifier Acceptance Register 0; 0x10 ***/
    union {
        uint8 Byte;
        struct {
            uint8 AC0         :1;                                       /* Acceptance Code Bit 0 */
            uint8 AC1         :1;                                       /* Acceptance Code Bit 1 */
            uint8 AC2         :1;                                       /* Acceptance Code Bit 2 */
            uint8 AC3         :1;                                       /* Acceptance Code Bit 3 */
            uint8 AC4         :1;                                       /* Acceptance Code Bit 4 */
            uint8 AC5         :1;                                       /* Acceptance Code Bit 5 */
            uint8 AC6         :1;                                       /* Acceptance Code Bit 6 */
            uint8 AC7         :1;                                       /* Acceptance Code Bit 7 */
        }Bits;
    }CANIDAR0;

    /*** IDAR1 - MSCAN Identifier Acceptance Register 1; 0x11 ***/
    union {
        uint8 Byte;
        struct {
            uint8 AC0         :1;                                       /* Acceptance Code Bit 0 */
            uint8 AC1         :1;                                       /* Acceptance Code Bit 1 */
            uint8 AC2         :1;                                       /* Acceptance Code Bit 2 */
            uint8 AC3         :1;                                       /* Acceptance Code Bit 3 */
            uint8 AC4         :1;                                       /* Acceptance Code Bit 4 */
            uint8 AC5         :1;                                       /* Acceptance Code Bit 5 */
            uint8 AC6         :1;                                       /* Acceptance Code Bit 6 */
            uint8 AC7         :1;                                       /* Acceptance Code Bit 7 */
        }Bits;
    }CANIDAR1;

    /*** IDAR2 - MSCAN Identifier Acceptance Register 2; 0x12 ***/
    union {
        uint8 Byte;
        struct {
            uint8 AC0         :1;                                       /* Acceptance Code Bit 0 */
            uint8 AC1         :1;                                       /* Acceptance Code Bit 1 */
            uint8 AC2         :1;                                       /* Acceptance Code Bit 2 */
            uint8 AC3         :1;                                       /* Acceptance Code Bit 3 */
            uint8 AC4         :1;                                       /* Acceptance Code Bit 4 */
            uint8 AC5         :1;                                       /* Acceptance Code Bit 5 */
            uint8 AC6         :1;                                       /* Acceptance Code Bit 6 */
            uint8 AC7         :1;                                       /* Acceptance Code Bit 7 */
        }Bits;
    }CANIDAR2;

    /*** IDAR3 - MSCAN Identifier Acceptance Register 3; 0x13 ***/
    union {
        uint8 Byte;
        struct {
            uint8 AC0         :1;                                       /* Acceptance Code Bit 0 */
            uint8 AC1         :1;                                       /* Acceptance Code Bit 1 */
            uint8 AC2         :1;                                       /* Acceptance Code Bit 2 */
            uint8 AC3         :1;                                       /* Acceptance Code Bit 3 */
            uint8 AC4         :1;                                       /* Acceptance Code Bit 4 */
            uint8 AC5         :1;                                       /* Acceptance Code Bit 5 */
            uint8 AC6         :1;                                       /* Acceptance Code Bit 6 */
            uint8 AC7         :1;                                       /* Acceptance Code Bit 7 */
        }Bits;
    }CANIDAR3; 

    /*** IDMR0 - MSCAN Identifier Mask Register 0; 0x14 ***/
    union {
        uint8 Byte;
        struct {
            uint8 AM0         :1;                                       /* Acceptance Mask Bit 0 */
            uint8 AM1         :1;                                       /* Acceptance Mask Bit 1 */
            uint8 AM2         :1;                                       /* Acceptance Mask Bit 2 */
            uint8 AM3         :1;                                       /* Acceptance Mask Bit 3 */
            uint8 AM4         :1;                                       /* Acceptance Mask Bit 4 */
            uint8 AM5         :1;                                       /* Acceptance Mask Bit 5 */
            uint8 AM6         :1;                                       /* Acceptance Mask Bit 6 */
            uint8 AM7         :1;                                       /* Acceptance Mask Bit 7 */
        }Bits;
    }CANIDMR0; 

    /*** IDMR1 - MSCAN Identifier Mask Register 1; 0x15 ***/
    union {
        uint8 Byte;
        struct {
            uint8 AM0         :1;                                       /* Acceptance Mask Bit 0 */
            uint8 AM1         :1;                                       /* Acceptance Mask Bit 1 */
            uint8 AM2         :1;                                       /* Acceptance Mask Bit 2 */
            uint8 AM3         :1;                                       /* Acceptance Mask Bit 3 */
            uint8 AM4         :1;                                       /* Acceptance Mask Bit 4 */
            uint8 AM5         :1;                                       /* Acceptance Mask Bit 5 */
            uint8 AM6         :1;                                       /* Acceptance Mask Bit 6 */
            uint8 AM7         :1;                                       /* Acceptance Mask Bit 7 */
        }Bits;
    }CANIDMR1;

    /*** IDMR2 - MSCAN Identifier Mask Register 2; 0x16 ***/
    union {
        uint8 Byte;
        struct {
            uint8 AM0         :1;                                       /* Acceptance Mask Bit 0 */
            uint8 AM1         :1;                                       /* Acceptance Mask Bit 1 */
            uint8 AM2         :1;                                       /* Acceptance Mask Bit 2 */
            uint8 AM3         :1;                                       /* Acceptance Mask Bit 3 */
            uint8 AM4         :1;                                       /* Acceptance Mask Bit 4 */
            uint8 AM5         :1;                                       /* Acceptance Mask Bit 5 */
            uint8 AM6         :1;                                       /* Acceptance Mask Bit 6 */
            uint8 AM7         :1;                                       /* Acceptance Mask Bit 7 */
        }Bits;
    }CANIDMR2;

    /*** IDMR3 - MSCAN Identifier Mask Register 3; 0x17 ***/
    union {
        uint8 Byte;
        struct {
            uint8 AM0         :1;                                       /* Acceptance Mask Bit 0 */
            uint8 AM1         :1;                                       /* Acceptance Mask Bit 1 */
            uint8 AM2         :1;                                       /* Acceptance Mask Bit 2 */
            uint8 AM3         :1;                                       /* Acceptance Mask Bit 3 */
            uint8 AM4         :1;                                       /* Acceptance Mask Bit 4 */
            uint8 AM5         :1;                                       /* Acceptance Mask Bit 5 */
            uint8 AM6         :1;                                       /* Acceptance Mask Bit 6 */
            uint8 AM7         :1;                                       /* Acceptance Mask Bit 7 */
        }Bits;
    }CANIDMR3;

    /*** IDAR4 - MSCAN Identifier Acceptance Register 4; 0x18 ***/
    union {
        uint8 Byte;
        struct {
            uint8 AC0         :1;                                       /* Acceptance Code Bit 0 */
            uint8 AC1         :1;                                       /* Acceptance Code Bit 1 */
            uint8 AC2         :1;                                       /* Acceptance Code Bit 2 */
            uint8 AC3         :1;                                       /* Acceptance Code Bit 3 */
            uint8 AC4         :1;                                       /* Acceptance Code Bit 4 */
            uint8 AC5         :1;                                       /* Acceptance Code Bit 5 */
            uint8 AC6         :1;                                       /* Acceptance Code Bit 6 */
            uint8 AC7         :1;                                       /* Acceptance Code Bit 7 */
        }Bits;
    }CANIDAR4;

    /*** IDAR5 - MSCAN Identifier Acceptance Register 5; 0x19 ***/
    union {
        uint8 Byte;
        struct {
            uint8 AC0         :1;                                       /* Acceptance Code Bit 0 */
            uint8 AC1         :1;                                       /* Acceptance Code Bit 1 */
            uint8 AC2         :1;                                       /* Acceptance Code Bit 2 */
            uint8 AC3         :1;                                       /* Acceptance Code Bit 3 */
            uint8 AC4         :1;                                       /* Acceptance Code Bit 4 */
            uint8 AC5         :1;                                       /* Acceptance Code Bit 5 */
            uint8 AC6         :1;                                       /* Acceptance Code Bit 6 */
            uint8 AC7         :1;                                       /* Acceptance Code Bit 7 */
        }Bits;
    }CANIDAR5;

    /*** IDAR6 - MSCAN Identifier Acceptance Register 6; 0x1A ***/
    union {
        uint8 Byte;
        struct {
            uint8 AC0         :1;                                       /* Acceptance Code Bit 0 */
            uint8 AC1         :1;                                       /* Acceptance Code Bit 1 */
            uint8 AC2         :1;                                       /* Acceptance Code Bit 2 */
            uint8 AC3         :1;                                       /* Acceptance Code Bit 3 */
            uint8 AC4         :1;                                       /* Acceptance Code Bit 4 */
            uint8 AC5         :1;                                       /* Acceptance Code Bit 5 */
            uint8 AC6         :1;                                       /* Acceptance Code Bit 6 */
            uint8 AC7         :1;                                       /* Acceptance Code Bit 7 */
        }Bits;
    }CANIDAR6;

    /*** IDAR7 - MSCAN Identifier Acceptance Register 7; 0x1B ***/
    union {
        uint8 Byte;
        struct {
            uint8 AC0         :1;                                       /* Acceptance Code Bit 0 */
            uint8 AC1         :1;                                       /* Acceptance Code Bit 1 */
            uint8 AC2         :1;                                       /* Acceptance Code Bit 2 */
            uint8 AC3         :1;                                       /* Acceptance Code Bit 3 */
            uint8 AC4         :1;                                       /* Acceptance Code Bit 4 */
            uint8 AC5         :1;                                       /* Acceptance Code Bit 5 */
            uint8 AC6         :1;                                       /* Acceptance Code Bit 6 */
            uint8 AC7         :1;                                       /* Acceptance Code Bit 7 */
        }Bits;
    }CANIDAR7; 

    /*** IDMR4 - MSCAN Identifier Mask Register 4; 0x1C ***/
    union {
        uint8 Byte;
        struct {
            uint8 AM0         :1;                                       /* Acceptance Mask Bit 0 */
            uint8 AM1         :1;                                       /* Acceptance Mask Bit 1 */
            uint8 AM2         :1;                                       /* Acceptance Mask Bit 2 */
            uint8 AM3         :1;                                       /* Acceptance Mask Bit 3 */
            uint8 AM4         :1;                                       /* Acceptance Mask Bit 4 */
            uint8 AM5         :1;                                       /* Acceptance Mask Bit 5 */
            uint8 AM6         :1;                                       /* Acceptance Mask Bit 6 */
            uint8 AM7         :1;                                       /* Acceptance Mask Bit 7 */
        }Bits;
    }CANIDMR4; 

    /*** IDMR5 - MSCAN Identifier Mask Register 5; 0x1D ***/
    union {
        uint8 Byte;
        struct {
            uint8 AM0         :1;                                       /* Acceptance Mask Bit 0 */
            uint8 AM1         :1;                                       /* Acceptance Mask Bit 1 */
            uint8 AM2         :1;                                       /* Acceptance Mask Bit 2 */
            uint8 AM3         :1;                                       /* Acceptance Mask Bit 3 */
            uint8 AM4         :1;                                       /* Acceptance Mask Bit 4 */
            uint8 AM5         :1;                                       /* Acceptance Mask Bit 5 */
            uint8 AM6         :1;                                       /* Acceptance Mask Bit 6 */
            uint8 AM7         :1;                                       /* Acceptance Mask Bit 7 */
        }Bits;
    }CANIDMR5;

    /*** IDMR6 - MSCAN Identifier Mask Register 6; 0x1E ***/
    union {
        uint8 Byte;
        struct {
            uint8 AM0         :1;                                       /* Acceptance Mask Bit 0 */
            uint8 AM1         :1;                                       /* Acceptance Mask Bit 1 */
            uint8 AM2         :1;                                       /* Acceptance Mask Bit 2 */
            uint8 AM3         :1;                                       /* Acceptance Mask Bit 3 */
            uint8 AM4         :1;                                       /* Acceptance Mask Bit 4 */
            uint8 AM5         :1;                                       /* Acceptance Mask Bit 5 */
            uint8 AM6         :1;                                       /* Acceptance Mask Bit 6 */
            uint8 AM7         :1;                                       /* Acceptance Mask Bit 7 */
        }Bits;
    }CANIDMR6;

    /*** IDMR7 - MSCAN Identifier Mask Register 7; 0x1F ***/
    union {
        uint8 Byte;
        struct {
            uint8 AM0         :1;                                       /* Acceptance Mask Bit 0 */
            uint8 AM1         :1;                                       /* Acceptance Mask Bit 1 */
            uint8 AM2         :1;                                       /* Acceptance Mask Bit 2 */
            uint8 AM3         :1;                                       /* Acceptance Mask Bit 3 */
            uint8 AM4         :1;                                       /* Acceptance Mask Bit 4 */
            uint8 AM5         :1;                                       /* Acceptance Mask Bit 5 */
            uint8 AM6         :1;                                       /* Acceptance Mask Bit 6 */
            uint8 AM7         :1;                                       /* Acceptance Mask Bit 7 */
        }Bits;
    }CANIDMR7;

    /*** RXIDR0 - MSCAN Receive Identifier Register 0; 0x20 ***/
    union {
        uint8 Byte;
        struct {
            uint8 ID21        :1;                                       /* Extended format identifier Bit 21 */
            uint8 ID22        :1;                                       /* Extended format identifier Bit 22 */
            uint8 ID23        :1;                                       /* Extended format identifier Bit 23 */
            uint8 ID24        :1;                                       /* Extended format identifier Bit 24 */
            uint8 ID25        :1;                                       /* Extended format identifier Bit 25 */
            uint8 ID26        :1;                                       /* Extended format identifier Bit 26 */
            uint8 ID27        :1;                                       /* Extended format identifier Bit 27 */
            uint8 ID28        :1;                                       /* Extended format identifier Bit 28 */
        }Bits;
    }CANRXIDR0;

    /*** RXIDR1 - MSCAN Receive Identifier Register 1; 0x21 ***/
    union {
        uint8 Byte;
        struct {
            uint8 ID15        :1;                                       /* Extended format identifier Bit 15 */
            uint8 ID16        :1;                                       /* Extended format identifier Bit 16 */
            uint8 ID17        :1;                                       /* Extended format identifier Bit 17 */
            uint8 IDE         :1;                                       /* ID Extended */
            uint8 SRR         :1;                                       /* Substitute Remote Request */
            uint8 ID18        :1;                                       /* Extended format identifier Bit 18 */
            uint8 ID19        :1;                                       /* Extended format identifier Bit 19 */
            uint8 ID20        :1;                                       /* Extended format identifier Bit 20 */
        }Bits;
        struct {
            uint8 grpID_15 :3;
            uint8         :1;
            uint8         :1;
            uint8 grpID_18 :3;
        }MergedBits;
    }CANRXIDR1;

    /*** RXIDR2 - MSCAN Receive Identifier Register 2; 0x22 ***/
    union {
        uint8 Byte;
        struct {
            uint8 ID7         :1;                                       /* Extended format identifier Bit 7 */
            uint8 ID8         :1;                                       /* Extended format identifier Bit 8 */
            uint8 ID9         :1;                                       /* Extended format identifier Bit 9 */
            uint8 ID10        :1;                                       /* Extended format identifier Bit 10 */
            uint8 ID11        :1;                                       /* Extended format identifier Bit 11 */
            uint8 ID12        :1;                                       /* Extended format identifier Bit 12 */
            uint8 ID13        :1;                                       /* Extended format identifier Bit 13 */
            uint8 ID14        :1;                                       /* Extended format identifier Bit 14 */
        }Bits;
    }CANRXIDR2;

    /*** RXIDR3 - MSCAN Receive Identifier Register 3; 0x23 ***/
    union {
        uint8 Byte;
        struct {
            uint8 RTR         :1;                                       /* Remote Transmission Request */
            uint8 ID0         :1;                                       /* Extended format identifier Bit 0 */
            uint8 ID1         :1;                                       /* Extended format identifier Bit 1 */
            uint8 ID2         :1;                                       /* Extended format identifier Bit 2 */
            uint8 ID3         :1;                                       /* Extended format identifier Bit 3 */
            uint8 ID4         :1;                                       /* Extended format identifier Bit 4 */
            uint8 ID5         :1;                                       /* Extended format identifier Bit 5 */
            uint8 ID6         :1;                                       /* Extended format identifier Bit 6 */
        }Bits;
        struct {
            uint8         :1;
            uint8 grpID   :7;
        }MergedBits;
    }CANRXIDR3;

    /*** RXDSR0 - MSCAN Receive Data Segment Register 0; 0x24 ***/
    union {
        uint8 Byte;
        struct {
            uint8 DB0         :1;                                       /* Data Bit 0 */
            uint8 DB1         :1;                                       /* Data Bit 1 */
            uint8 DB2         :1;                                       /* Data Bit 2 */
            uint8 DB3         :1;                                       /* Data Bit 3 */
            uint8 DB4         :1;                                       /* Data Bit 4 */
            uint8 DB5         :1;                                       /* Data Bit 5 */
            uint8 DB6         :1;                                       /* Data Bit 6 */
            uint8 DB7         :1;                                       /* Data Bit 7 */
        }Bits;
    }CANRXDSR0;

    /*** RXDSR1 - MSCAN Receive Data Segment Register 1; 0x25 ***/
    union {
        uint8 Byte;
        struct {
            uint8 DB0         :1;                                       /* Data Bit 0 */
            uint8 DB1         :1;                                       /* Data Bit 1 */
            uint8 DB2         :1;                                       /* Data Bit 2 */
            uint8 DB3         :1;                                       /* Data Bit 3 */
            uint8 DB4         :1;                                       /* Data Bit 4 */
            uint8 DB5         :1;                                       /* Data Bit 5 */
            uint8 DB6         :1;                                       /* Data Bit 6 */
            uint8 DB7         :1;                                       /* Data Bit 7 */
        }Bits;
    }CANRXDSR1;

    /*** RXDSR2 - MSCAN Receive Data Segment Register 2; 0x26 ***/
    union {
        uint8 Byte;
        struct {
            uint8 DB0         :1;                                       /* Data Bit 0 */
            uint8 DB1         :1;                                       /* Data Bit 1 */
            uint8 DB2         :1;                                       /* Data Bit 2 */
            uint8 DB3         :1;                                       /* Data Bit 3 */
            uint8 DB4         :1;                                       /* Data Bit 4 */
            uint8 DB5         :1;                                       /* Data Bit 5 */
            uint8 DB6         :1;                                       /* Data Bit 6 */
            uint8 DB7         :1;                                       /* Data Bit 7 */
        }Bits;
    }CANRXDSR2;

    /*** RXDSR3 - MSCAN Receive Data Segment Register 3; 0x27 ***/
    union {
        uint8 Byte;
        struct {
            uint8 DB0         :1;                                       /* Data Bit 0 */
            uint8 DB1         :1;                                       /* Data Bit 1 */
            uint8 DB2         :1;                                       /* Data Bit 2 */
            uint8 DB3         :1;                                       /* Data Bit 3 */
            uint8 DB4         :1;                                       /* Data Bit 4 */
            uint8 DB5         :1;                                       /* Data Bit 5 */
            uint8 DB6         :1;                                       /* Data Bit 6 */
            uint8 DB7         :1;                                       /* Data Bit 7 */
        }Bits;
    }CANRXDSR3;

    /*** RXDSR4 - MSCAN Receive Data Segment Register 4; 0x28 ***/
    union {
        uint8 Byte;
        struct {
            uint8 DB0         :1;                                       /* Data Bit 0 */
            uint8 DB1         :1;                                       /* Data Bit 1 */
            uint8 DB2         :1;                                       /* Data Bit 2 */
            uint8 DB3         :1;                                       /* Data Bit 3 */
            uint8 DB4         :1;                                       /* Data Bit 4 */
            uint8 DB5         :1;                                       /* Data Bit 5 */
            uint8 DB6         :1;                                       /* Data Bit 6 */
            uint8 DB7         :1;                                       /* Data Bit 7 */
        }Bits;
    }CANRXDSR4;

    /*** RXDSR5 - MSCAN Receive Data Segment Register 5; 0x29 ***/
    union {
        uint8 Byte;
        struct {
            uint8 DB0         :1;                                       /* Data Bit 0 */
            uint8 DB1         :1;                                       /* Data Bit 1 */
            uint8 DB2         :1;                                       /* Data Bit 2 */
            uint8 DB3         :1;                                       /* Data Bit 3 */
            uint8 DB4         :1;                                       /* Data Bit 4 */
            uint8 DB5         :1;                                       /* Data Bit 5 */
            uint8 DB6         :1;                                       /* Data Bit 6 */
            uint8 DB7         :1;                                       /* Data Bit 7 */
        }Bits;
    }CANRXDSR5;

    /*** RXDSR6 - MSCAN Receive Data Segment Register 6; 0x2A ***/
    union {
        uint8 Byte;
        struct {
            uint8 DB0         :1;                                       /* Data Bit 0 */
            uint8 DB1         :1;                                       /* Data Bit 1 */
            uint8 DB2         :1;                                       /* Data Bit 2 */
            uint8 DB3         :1;                                       /* Data Bit 3 */
            uint8 DB4         :1;                                       /* Data Bit 4 */
            uint8 DB5         :1;                                       /* Data Bit 5 */
            uint8 DB6         :1;                                       /* Data Bit 6 */
            uint8 DB7         :1;                                       /* Data Bit 7 */
        }Bits;
    }CANRXDSR6;

    /*** RXDSR7 - MSCAN Receive Data Segment Register 7; 0x2B ***/
    union {
        uint8 Byte;
        struct {
            uint8 DB0         :1;                                       /* Data Bit 0 */
            uint8 DB1         :1;                                       /* Data Bit 1 */
            uint8 DB2         :1;                                       /* Data Bit 2 */
            uint8 DB3         :1;                                       /* Data Bit 3 */
            uint8 DB4         :1;                                       /* Data Bit 4 */
            uint8 DB5         :1;                                       /* Data Bit 5 */
            uint8 DB6         :1;                                       /* Data Bit 6 */
            uint8 DB7         :1;                                       /* Data Bit 7 */
        }Bits;
    }CANRXDSR7;

    /*** RXDLR - MSCAN Receive Data Length Register; 0x2C ***/
    union {
        uint8 Byte;
        struct {
            uint8 DLC0        :1;                                       /* Data Length Code Bit 0 */
            uint8 DLC1        :1;                                       /* Data Length Code Bit 1 */
            uint8 DLC2        :1;                                       /* Data Length Code Bit 2 */
            uint8 DLC3        :1;                                       /* Data Length Code Bit 3 */
            uint8             :1; 
            uint8             :1; 
            uint8             :1; 
            uint8             :1; 
        } Bits;
        struct {
            uint8 grpDLC  :4;
            uint8         :1;
            uint8         :1;
            uint8         :1;
            uint8         :1;
        }MergedBits;
    }CANRXDLR;

    /*** TBPR - MSCAN Transmit Buffer Priority Register; 0x2D ***/
    union {
        uint8 Byte;
        struct {
            uint8 PRIO0       :1;                                      
            uint8 PRIO1       :1;                                     
            uint8 PRIO2       :1;                                      
            uint8 PRIO3       :1;                                      
            uint8 PRIO4       :1; 
            uint8 PRIO5       :1; 
            uint8 PRIO6       :1; 
            uint8 PRIO7       :1; 
        }Bits;
    }CANTBPR;

    /*** RXTSR - MSCAN Receive Time Stamp Register; 0x2E ***/
    union {
        uint16 Word;              
        /* Overlapped registers: */
        struct {
            /*** CAN0RXTSRH - MSCAN0 Receive Time Stamp Register High; 0x2E ***/
            union {
                uint8 Byte;
                struct {
                    uint8 TSR8        :1;                               /* Time Stamp Bit 8 */
                    uint8 TSR9        :1;                               /* Time Stamp Bit 9 */
                    uint8 TSR10       :1;                               /* Time Stamp Bit 10 */
                    uint8 TSR11       :1;                               /* Time Stamp Bit 11 */
                    uint8 TSR12       :1;                               /* Time Stamp Bit 12 */
                    uint8 TSR13       :1;                               /* Time Stamp Bit 13 */
                    uint8 TSR14       :1;                               /* Time Stamp Bit 14 */
                    uint8 TSR15       :1;                               /* Time Stamp Bit 15 */
                }Bits;
            }CANRXTSRH;

            /*** RXTSRL - MSCAN Receive Time Stamp Register Low; 0x2F ***/
            union {
                uint8 Byte;
                struct {
                    uint8 TSR0        :1;                               /* Time Stamp Bit 0 */
                    uint8 TSR1        :1;                               /* Time Stamp Bit 1 */
                    uint8 TSR2        :1;                               /* Time Stamp Bit 2 */
                    uint8 TSR3        :1;                               /* Time Stamp Bit 3 */
                    uint8 TSR4        :1;                               /* Time Stamp Bit 4 */
                    uint8 TSR5        :1;                               /* Time Stamp Bit 5 */
                    uint8 TSR6        :1;                               /* Time Stamp Bit 6 */
                    uint8 TSR7        :1;                               /* Time Stamp Bit 7 */
                }Bits;
            }CANRXTSRL;
        }Overlap_STR;

        struct {
            uint16 TSR0        :1;                                      /* Time Stamp Bit 0 */
            uint16 TSR1        :1;                                      /* Time Stamp Bit 1 */
            uint16 TSR2        :1;                                      /* Time Stamp Bit 2 */
            uint16 TSR3        :1;                                      /* Time Stamp Bit 3 */
            uint16 TSR4        :1;                                      /* Time Stamp Bit 4 */
            uint16 TSR5        :1;                                      /* Time Stamp Bit 5 */
            uint16 TSR6        :1;                                      /* Time Stamp Bit 6 */
            uint16 TSR7        :1;                                      /* Time Stamp Bit 7 */
            uint16 TSR8        :1;                                      /* Time Stamp Bit 8 */
            uint16 TSR9        :1;                                      /* Time Stamp Bit 9 */
            uint16 TSR10       :1;                                      /* Time Stamp Bit 10 */
            uint16 TSR11       :1;                                      /* Time Stamp Bit 11 */
            uint16 TSR12       :1;                                      /* Time Stamp Bit 12 */
            uint16 TSR13       :1;                                      /* Time Stamp Bit 13 */
            uint16 TSR14       :1;                                      /* Time Stamp Bit 14 */
            uint16 TSR15       :1;                                      /* Time Stamp Bit 15 */
        }Bits;
    }CANRXTSR;

    /*** TXIDR0 - MSCAN Transmit Identifier Register 0; 0x30 ***/
    union {
        uint8 Byte;
        struct {
            uint8 ID21        :1;                                       /* Extended format identifier Bit 21 */
            uint8 ID22        :1;                                       /* Extended format identifier Bit 22 */
            uint8 ID23        :1;                                       /* Extended format identifier Bit 23 */
            uint8 ID24        :1;                                       /* Extended format identifier Bit 24 */
            uint8 ID25        :1;                                       /* Extended format identifier Bit 25 */
            uint8 ID26        :1;                                       /* Extended format identifier Bit 26 */
            uint8 ID27        :1;                                       /* Extended format identifier Bit 27 */
            uint8 ID28        :1;                                       /* Extended format identifier Bit 28 */
        }Bits;
    }CANTXIDR;

    /*** TXIDR1 - MSCAN Transmit Identifier Register 1; 0x31 ***/
    union {
        uint8 Byte;
        struct {
            uint8 ID15        :1;                                       /* Extended format identifier Bit 15 */
            uint8 ID16        :1;                                       /* Extended format identifier Bit 16 */
            uint8 ID17        :1;                                       /* Extended format identifier Bit 17 */
            uint8 IDE         :1;                                       /* ID Extended */
            uint8 SRR         :1;                                       /* Substitute Remote Request */
            uint8 ID18        :1;                                       /* Extended format identifier Bit 18 */
            uint8 ID19        :1;                                       /* Extended format identifier Bit 19 */
            uint8 ID20        :1;                                       /* Extended format identifier Bit 20 */
        }Bits;
        struct {
            uint8 grpID_15 :3;
            uint8         :1;
            uint8         :1;
            uint8 grpID_18 :3;
        }MergedBits;
    }CANTXIDR1;

    /*** TXIDR2 - MSCAN Transmit Identifier Register 2; 0x32 ***/
    union {
        uint8 Byte;
        struct {
            uint8 ID7         :1;                                       /* Extended format identifier Bit 7 */
            uint8 ID8         :1;                                       /* Extended format identifier Bit 8 */
            uint8 ID9         :1;                                       /* Extended format identifier Bit 9 */
            uint8 ID10        :1;                                       /* Extended format identifier Bit 10 */
            uint8 ID11        :1;                                       /* Extended format identifier Bit 11 */
            uint8 ID12        :1;                                       /* Extended format identifier Bit 12 */
            uint8 ID13        :1;                                       /* Extended format identifier Bit 13 */
            uint8 ID14        :1;                                       /* Extended format identifier Bit 14 */
        }Bits;
    }CANTXIDR2;

    /*** TXIDR3 - MSCAN Transmit Identifier Register 3; 0x33 ***/
    union {
        uint8 Byte;
        struct {
            uint8 RTR         :1;                                       /* Remote Transmission Request */
            uint8 ID0         :1;                                       /* Extended format identifier Bit 0 */
            uint8 ID1         :1;                                       /* Extended format identifier Bit 1 */
            uint8 ID2         :1;                                       /* Extended format identifier Bit 2 */
            uint8 ID3         :1;                                       /* Extended format identifier Bit 3 */
            uint8 ID4         :1;                                       /* Extended format identifier Bit 4 */
            uint8 ID5         :1;                                       /* Extended format identifier Bit 5 */
            uint8 ID6         :1;                                       /* Extended format identifier Bit 6 */
        }Bits;
        struct {
            uint8         :1;
            uint8 grpID   :7;
        }MergedBits;
    }CANTXIDR3;

    /*** TXDSR0 - MSCAN Transmit Data Segment Register 0; 0x34 ***/
    union {
        uint8 Byte;
        struct {
            uint8 DB0         :1;                                       /* Data Bit 0 */
            uint8 DB1         :1;                                       /* Data Bit 1 */
            uint8 DB2         :1;                                       /* Data Bit 2 */
            uint8 DB3         :1;                                       /* Data Bit 3 */
            uint8 DB4         :1;                                       /* Data Bit 4 */
            uint8 DB5         :1;                                       /* Data Bit 5 */
            uint8 DB6         :1;                                       /* Data Bit 6 */
            uint8 DB7         :1;                                       /* Data Bit 7 */
        }Bits;
    }CANTXDSR0;

    /*** TXDSR1 - MSCAN Transmit Data Segment Register 1; 0x35 ***/
    union {
        uint8 Byte;
        struct {
            uint8 DB0         :1;                                       /* Data Bit 0 */
            uint8 DB1         :1;                                       /* Data Bit 1 */
            uint8 DB2         :1;                                       /* Data Bit 2 */
            uint8 DB3         :1;                                       /* Data Bit 3 */
            uint8 DB4         :1;                                       /* Data Bit 4 */
            uint8 DB5         :1;                                       /* Data Bit 5 */
            uint8 DB6         :1;                                       /* Data Bit 6 */
            uint8 DB7         :1;                                       /* Data Bit 7 */
        }Bits;
    }CANTXDSR1;

    /*** TXDSR2 - MSCAN Transmit Data Segment Register 2; 0x36 ***/
    union {
        uint8 Byte;
        struct {
            uint8 DB0         :1;                                       /* Data Bit 0 */
            uint8 DB1         :1;                                       /* Data Bit 1 */
            uint8 DB2         :1;                                       /* Data Bit 2 */
            uint8 DB3         :1;                                       /* Data Bit 3 */
            uint8 DB4         :1;                                       /* Data Bit 4 */
            uint8 DB5         :1;                                       /* Data Bit 5 */
            uint8 DB6         :1;                                       /* Data Bit 6 */
            uint8 DB7         :1;                                       /* Data Bit 7 */
        }Bits;
    }CANTXDSR2;

    /*** TXDSR3 - MSCAN Transmit Data Segment Register 3; 0x37 ***/
    union {
        uint8 Byte;
        struct {
            uint8 DB0         :1;                                       /* Data Bit 0 */
            uint8 DB1         :1;                                       /* Data Bit 1 */
            uint8 DB2         :1;                                       /* Data Bit 2 */
            uint8 DB3         :1;                                       /* Data Bit 3 */
            uint8 DB4         :1;                                       /* Data Bit 4 */
            uint8 DB5         :1;                                       /* Data Bit 5 */
            uint8 DB6         :1;                                       /* Data Bit 6 */
            uint8 DB7         :1;                                       /* Data Bit 7 */
        }Bits;
    }CANTXDSR3;

    /*** TXDSR4 - MSCAN Transmit Data Segment Register 4; 0x38 ***/
    union {
        uint8 Byte;
        struct {
            uint8 DB0         :1;                                       /* Data Bit 0 */
            uint8 DB1         :1;                                       /* Data Bit 1 */
            uint8 DB2         :1;                                       /* Data Bit 2 */
            uint8 DB3         :1;                                       /* Data Bit 3 */
            uint8 DB4         :1;                                       /* Data Bit 4 */
            uint8 DB5         :1;                                       /* Data Bit 5 */
            uint8 DB6         :1;                                       /* Data Bit 6 */
            uint8 DB7         :1;                                       /* Data Bit 7 */
        }Bits;
    }CANTXDSR4;

    /*** CAN0TXDSR5 - MSCAN0 Transmit Data Segment Register 5; 0x39 ***/
    union {
        uint8 Byte;
        struct {
            uint8 DB0         :1;                                       /* Data Bit 0 */
            uint8 DB1         :1;                                       /* Data Bit 1 */
            uint8 DB2         :1;                                       /* Data Bit 2 */
            uint8 DB3         :1;                                       /* Data Bit 3 */
            uint8 DB4         :1;                                       /* Data Bit 4 */
            uint8 DB5         :1;                                       /* Data Bit 5 */
            uint8 DB6         :1;                                       /* Data Bit 6 */
            uint8 DB7         :1;                                       /* Data Bit 7 */
        }Bits;
    }CANTXDSR5;

    /*** TXDSR6 - MSCAN Transmit Data Segment Register 6; 0x3A ***/
    union {
        uint8 Byte;
        struct {
            uint8 DB0         :1;                                       /* Data Bit 0 */
            uint8 DB1         :1;                                       /* Data Bit 1 */
            uint8 DB2         :1;                                       /* Data Bit 2 */
            uint8 DB3         :1;                                       /* Data Bit 3 */
            uint8 DB4         :1;                                       /* Data Bit 4 */
            uint8 DB5         :1;                                       /* Data Bit 5 */
            uint8 DB6         :1;                                       /* Data Bit 6 */
            uint8 DB7         :1;                                       /* Data Bit 7 */
        }Bits;
    }CANTXDSR6;

    /*** TXDSR7 - MSCAN Transmit Data Segment Register 7; 0x3B ***/
    union {
        uint8 Byte;
        struct {
            uint8 DB0         :1;                                       /* Data Bit 0 */
            uint8 DB1         :1;                                       /* Data Bit 1 */
            uint8 DB2         :1;                                       /* Data Bit 2 */
            uint8 DB3         :1;                                       /* Data Bit 3 */
            uint8 DB4         :1;                                       /* Data Bit 4 */
            uint8 DB5         :1;                                       /* Data Bit 5 */
            uint8 DB6         :1;                                       /* Data Bit 6 */
            uint8 DB7         :1;                                       /* Data Bit 7 */
        }Bits;
    }CANTXDSR7;

    /*** TXDLR - MSCAN Transmit Data Length Register; 0x3C ***/
    union {
        uint8 Byte;
        struct {
            uint8 DLC0        :1;                                       /* Data Length Code Bit 0 */
            uint8 DLC1        :1;                                       /* Data Length Code Bit 1 */
            uint8 DLC2        :1;                                       /* Data Length Code Bit 2 */
            uint8 DLC3        :1;                                       /* Data Length Code Bit 3 */
            uint8             :1; 
            uint8             :1; 
            uint8             :1; 
            uint8             :1; 
        }Bits;
        struct {
            uint8 grpDLC  :4;
            uint8         :1;
            uint8         :1;
            uint8         :1;
            uint8         :1;
        }MergedBits;
    }CANTXDLR;

    /*** TXTBPR - MSCAN Transmit Buffer Priority; 0x3D ***/
    union {
        uint8 Byte;
        struct {
            uint8 PRIO0       :1;                                       /* Transmit Buffer Priority Bit 0 */
            uint8 PRIO1       :1;                                       /* Transmit Buffer Priority Bit 1 */
            uint8 PRIO2       :1;                                       /* Transmit Buffer Priority Bit 2 */
            uint8 PRIO3       :1;                                       /* Transmit Buffer Priority Bit 3 */
            uint8 PRIO4       :1;                                       /* Transmit Buffer Priority Bit 4 */
            uint8 PRIO5       :1;                                       /* Transmit Buffer Priority Bit 5 */
            uint8 PRIO6       :1;                                       /* Transmit Buffer Priority Bit 6 */
            uint8 PRIO7       :1;                                       /* Transmit Buffer Priority Bit 7 */
        }Bits;
    }CANTXTBPR;

    /*** TXTSR - MSCAN Transmit Time Stamp Register; 0x3E ***/
    union {
        uint16 Word;
        /* Overlapped registers: */
        struct {
            /*** CAN0TXTSRH - MSCAN0 Transmit Time Stamp Register High; 0x3E ***/
            union {
                uint8 Byte;
                struct {
                    uint8 TSR8        :1;                               /* Time Stamp Bit 8 */
                    uint8 TSR9        :1;                               /* Time Stamp Bit 9 */
                    uint8 TSR10       :1;                               /* Time Stamp Bit 10 */
                    uint8 TSR11       :1;                               /* Time Stamp Bit 11 */
                    uint8 TSR12       :1;                               /* Time Stamp Bit 12 */
                    uint8 TSR13       :1;                               /* Time Stamp Bit 13 */
                    uint8 TSR14       :1;                               /* Time Stamp Bit 14 */
                    uint8 TSR15       :1;                               /* Time Stamp Bit 15 */
                }Bits;
            }CANTXTSRH;

            /*** TXTSRL - MSCAN Transmit Time Stamp Register Low; 0x3F ***/
            union {
                uint8 Byte;
                struct {
                    uint8 TSR0        :1;                               /* Time Stamp Bit 0 */
                    uint8 TSR1        :1;                               /* Time Stamp Bit 1 */
                    uint8 TSR2        :1;                               /* Time Stamp Bit 2 */
                    uint8 TSR3        :1;                               /* Time Stamp Bit 3 */
                    uint8 TSR4        :1;                               /* Time Stamp Bit 4 */
                    uint8 TSR5        :1;                               /* Time Stamp Bit 5 */
                    uint8 TSR6        :1;                               /* Time Stamp Bit 6 */
                    uint8 TSR7        :1;                               /* Time Stamp Bit 7 */
                }Bits;
            }CANTXTSRL;
        }Overlap_STR;

        struct {
            uint16 TSR0        :1;                                      /* Time Stamp Bit 0 */
            uint16 TSR1        :1;                                      /* Time Stamp Bit 1 */
            uint16 TSR2        :1;                                      /* Time Stamp Bit 2 */
            uint16 TSR3        :1;                                      /* Time Stamp Bit 3 */
            uint16 TSR4        :1;                                      /* Time Stamp Bit 4 */
            uint16 TSR5        :1;                                      /* Time Stamp Bit 5 */
            uint16 TSR6        :1;                                      /* Time Stamp Bit 6 */
            uint16 TSR7        :1;                                      /* Time Stamp Bit 7 */
            uint16 TSR8        :1;                                      /* Time Stamp Bit 8 */
            uint16 TSR9        :1;                                      /* Time Stamp Bit 9 */
            uint16 TSR10       :1;                                      /* Time Stamp Bit 10 */
            uint16 TSR11       :1;                                      /* Time Stamp Bit 11 */
            uint16 TSR12       :1;                                      /* Time Stamp Bit 12 */
            uint16 TSR13       :1;                                      /* Time Stamp Bit 13 */
            uint16 TSR14       :1;                                      /* Time Stamp Bit 14 */
            uint16 TSR15       :1;                                      /* Time Stamp Bit 15 */
        }Bits;
    }CANTXTSR;

} MSCANReg, *pMSCANReg;

// MSCAN RegDef Definition ------------------------
typedef struct _MSCANDef{
    uint8 CTL0;
    uint8 CTL1;
    uint8 BTR0;
    uint8 BTR1;
    uint8 IDAC;
    uint8 IDFilter[16];
} TMSCANDef, *PMSCANDef;

// MSCAN Buffer Definition ------------------------
typedef struct _MSCANBuffer{
    uint8 ID;
    uint8 Mode;
    uint8 Status;
    uint8 DLC;
    uint8 Data[8];
#if TIMESTAMP_CAN
    uint16 BufferTimeStamp_CAN;               
#else
    uint16 *BufferTimeStamp_CAN;              /* unused pointer */
#endif                                        /* TIMESTAMP_CAN */
} TMSCANBuffer, *PMSCANBuffer;

// MSCAN REALTIME Buffer Definition, All received message will be stored in this buffer------------------------
typedef struct _REALTIME_Buffer{
    uint32 ID;
    uint8 ID_Type;
    uint8 Frame_Type;
    uint8 DLC;
    uint8 Data[8];
#if TIMESTAMP_CAN
    uint16 BufferTimeStamp_CAN;               
#else
    uint16 *BufferTimeStamp_CAN;              /* unused pointer */
#endif                                        /* TIMESTAMP_CAN */
} TREALTIMEBuffer, *PREALTIMEBuffer;

/*MSCAN TXBuffer Definition ------------------------*/
typedef struct _MSCANTXBuffer{
    uint8 mb;                                 /* message buffer number */
    uint8 mbp;                                /* message buffer priority signed by message buffer ID Ref */
} TMSCANTXBuffer, *PMSCANTXBuffer;

/*MSCAN Identifier Definition ------------------------*/
typedef const struct _MSCANIdentifier{
    uint8 type;
    uint32 data;
} TMSCANIdentifier, *PMSCANIdentifier;

/******************************************************************************
msCAN module bit defines 
******************************************************************************/
/* CANCTL0 */
#define INITRQ  0x01
#define SLPRQ   0x02
#define WUPE    0x04
#define TIME    0x08
#define SYNCH   0x10
#define CSWAI   0x20
#define RXACT   0x40
#define RXFRM   0x80

/* CANCTL1 */
#define INITAK  0x01
#define SLPAK   0x02

/* CANRFLG */
#define RXF     0x01
#define OVRIF   0x02
#define TSTAT0  0x04
#define TSTAT1  0x08      
#define RSTAT0  0x10
#define RSTAT1  0x20
#define CSCIF   0x40
#define WUPIF   0x80
#define BUSOFF  0x0C

/* CANRIER */
#define RXFIE   0x01
#define OVRIE   0x02
#define TSTATE0 0x04
#define TSTATE1 0x08
#define RSTATE0 0x10
#define RSTATE1 0x20
#define CSCIE   0x40
#define WUPIE   0x80

/* TX BUFFERS */
#define IDR0    0x00
#define IDR1    0x01
#define IDR2    0x02
#define IDR3    0x03
#define DSR     0x04
#define DLR     0x0C
#define _TBPR    0x0D

#endif
