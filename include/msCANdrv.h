#ifndef MSCANDRV_H
#define MSCANDRV_H 
/******************************************************************************						              
*
*                             Copyright (C) 2013 
*
* Tongji University - Freescale Automotive Electronics Laboratory, Inc.
* 
*                            All Rights Reserved		
*														                            
* Filename:     msCANdrv.h                
*														                            
* Revision:      										                    
*														                            
* Functions:    Basic Defines and Function Prototypes for msCAN Driver
*														                            
* Description:  This file defines some basic difines used in msCAN Driver 
*               All Function Prototypes used in msCAN Driver 
*
* Notes:        NO Change By user
*
******************************************************************************/
/****************************************************************************** 
* Include
******************************************************************************/
#include "MSCANINC.H"
#include "msCANcfg.h"
#define SEI  __asm("PUSH {R1,R2}");\
	__asm("MRS R1,PRIMASK");\
	__asm("LDR R2,=CCRcopy");  \
	__asm("STR R1,[R2,#0]");  \
	__asm("CPSID i");\
	__asm("POP {R1,R2}");

#define CLI __asm("CPSIE i");

#define EnableInterrupts __asm("CPSIE i")
#define DisableInterrupts __asm("CPSID i")

/******************************************************************************
* Identifier types
******************************************************************************/
#define CAN_STANDARD  (0)                                   /* IDE clear */
#define CAN_EXTENDED  (0x18)                                /* set SRR and IDE */
#define CAN_IDE       (0x08)                                /* IDE bit */
#define CAN_ERTR      (0x01)                                /* RTR bit for Extended ID */
#define CAN_SRTR      (0x10)                                /* RTR bit for Standard ID */

#define DATAFRAME     (0)                                   /* RTR clear */

/******************************************************************************
* Clock source specifiers
******************************************************************************/
#define BUSCLK        (1)                                   /* bit values for CLKSRC */
#define MCGERCLK      (0)

/******************************************************************************
* MSCAN Enable
******************************************************************************/
#define MSCAN_ENABLE  (1)

/******************************************************************************
* TX_buff 
******************************************************************************/
#define TX_buff0  (0x01)
#define TX_buff1  (0x02)
#define TX_buff2  (0x04)

/******************************************************************************
* Acceptance filter size: CANIDAC value
******************************************************************************/
#define AF32BIT       (0x00)
#define AF16BIT       (0x10)
#define AF8BIT        (0x20)
#define AFCLOSED      (0x30)

/******************************************************************************
* word typedef
******************************************************************************/
typedef union
{
    uint8 word;
    struct
    {
        uint8 upper;
        uint8 lower;
    }byte;
}wordType;

/******************************************************************************
* Enumerations
******************************************************************************/
enum ResetMode { 
    CMPTX,           /* 0 */
    FAST             /* 1 */
};

enum ErrorCode { 
    ERR_OK,          /* 0 */
    ERR_MODE,        /* 1 */
    ERR_CAN,         /* 2 */
    ERR_INIT,        /* 3 */
    ERR_BOFF,        /* 4 */
    ERR_NSLP,        /* 5 */
    ERR_ID,          /* 6 */
    ERR_MB,          /* 7 */
    ERR_DLC,         /* 8 */
    ERR_CONFIG,      /* 9 */
    ERR_QED,         /* 10 */
    ERR_NOTQED,      /* 11 */
    ERR_NODATA,      /* 12 */
    ERR_SYNCH,       /* 13 */
    ERR_TS,          /* 14 */
    ERR_CHN,         /* 15 */
    ERR_CHN_FUNCTION /* 16 */
};

enum MB_Mode { 
    CLOSED,          /* 0 */
    RXDF,            /* 1 */
    TXDF,            /* 2 */
    TXRF,            /* 3 */
    AUTOTXDF,        /* 4 */
    INVALID
};

enum MB_Status { 
    NODATA,          /* 0 */
    VALIDDATA,       /* 1 */
    QUEUED,          /* 2 */
    QUEUED2,         /* 3 */
    ABORTREQ,        /* 4 */
    ABORTED,         /* 5 */
    TRANSMITTED,     /* 6 */        /* this value onwards valid status for Read_CAN_MB_Time */
    NEWDATA,         /* 7 */
    READDATA,        /* 8 */
    OVERRUN          /* 9 */
};

enum Register_Status  { Register_Success,			      /* 0 */
                        Register_Failed,			      /* 1 */
                        Unregister_Success,	              /* 2 */
                        Unregister_Failed,		          /* 3 */
                      };

enum Version          { MSCANS12XEP100,
                        MSCANS12G,
                        KEA128
                      };

/******************************************************************************
* Prototypes
******************************************************************************/
uint8 Init_CAN                                       (uint8, uint8);
uint8 Reset_CAN                                      (uint8, uint8);
uint8 Sleep_CAN                                      (uint8, uint8);
uint8 Wakeup_CAN                                     (uint8);
uint8 Check_CAN_Status                               (uint8, uint8 *);
uint8 Clear_CAN_Status                               (uint8);
uint8 Config_CAN_MB									 (uint8, uint8, uint8, uint8);

uint8 Check_CAN_MB_Status                            (uint8, uint8, uint8 *);
uint8 Load_CAN_MB                                    (uint8, uint8, uint8 *);
uint8 Transmit_CAN_MB                                (uint8, uint8);
uint8 Abort_CAN_MB                                   (uint8, uint8);
uint8 Read_CAN_MB_Data                               (uint8, uint8, uint8 *);
uint8 Read_CAN_MB_Time                               (uint8, uint8, uint16 *);
uint8 Read_REALTIME_Buffers                          (uint8, uint32*, uint8*, uint8*, uint8*, uint8*, uint16*); 

void CAN_Transmit                                    (uint8);
void CAN_Receive                                     (uint8);
void CAN_Wakeup                                      (uint8);
uint8 Read_Tran_Err_Counter                          (uint8, uint8 *);
uint8 Read_Rec_Err_Counter                           (uint8, uint8 *);
void CAN_ERR                                         (uint8);

     
extern uint32 CCRcopy;
extern uint8 DriverFlags[];
extern uint8 LowestQueuedBuffer[];
extern uint8 AbortMessage[];
extern const uint8 NoOfMB[];               
extern const uint8 NoOfID[];
extern const uint8 TimeStampOption[];
extern const uint8 REAL_TIME_BUFFER_Option[];
extern volatile const uint8 vChnIdx[];          

/******************************************************************************
 * Err Callback function for msCAN module 
 ******************************************************************************/
#if (Err_Callback_Enable)

/*Predefined format for user defined Callback Functions,Format cannot be changed below*/

typedef void(*pErr_Callbacks_User_Def)(uint8 Err_status);
    
extern pErr_Callbacks_User_Def ErrCallbacks_User_Def[MSCAN_CHANNELS_MAX];
    
/*Callback function Register and Delete Register function*/

uint8 Register_Callback(const uint8 AChn,const pErr_Callbacks_User_Def);
    												  
uint8 Unregister_Callback(const uint8 AChn);
#endif 

 
/*****************************************************************************/
#endif        

/* end msCANdrv.h */
