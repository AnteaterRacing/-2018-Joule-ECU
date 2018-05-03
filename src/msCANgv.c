#ifndef MSCANGVLITE_C
#define MSCANGVLITE_C                /* this file */
/******************************************************************************							              
*
*                             Copyright (C) 2013 
*
* Tongji University - Freescale Automotive Electronics Laboratory, Inc.
* 
*                            All Rights Reserved		
*														                            
* Filename:     msCANgv.c                
*														                            
* Revision:      										                    
*														                            
* Functions:    msCAN driver global variables 
*												                            
* Description:  
*
* Notes:        
*
******************************************************************************/

/****************************************************************************
* Include 
***************************************************************************/
#include "msCANdrv.h"
#include "msCANID.h"
#include "msCANcfg.h"

/******************************************************************************
* Number of the message buffers of each can channel
******************************************************************************/
const uint8 NoOfMB[CAN_CHN_COUNT] = {
#ifdef MSCAN0
    no_of_mb_CAN0,
#endif 
#ifdef MSCAN1
    no_of_mb_CAN1,
#endif 

#ifdef MSCAN2
    no_of_mb_CAN2,
#endif 

#ifdef MSCAN3
    no_of_mb_CAN3,
#endif 

#ifdef MSCAN4
    no_of_mb_CAN4
#endif  
}; 

/******************************************************************************
* Number of predefined IDs of each can channel,0 to 255 max
******************************************************************************/
const uint8 NoOfID[CAN_CHN_COUNT] = {
#ifdef MSCAN0
    no_of_ID_CAN0,
#endif
 
#ifdef MSCAN1
    no_of_ID_CAN1,
#endif 

#ifdef MSCAN2
    no_of_ID_CAN2,
#endif 

#ifdef MSCAN3
    no_of_ID_CAN3,
#endif
 
#ifdef MSCAN4
    no_of_ID_CAN4
#endif  
};

/******************************************************************************
* Define the timestamp function of each can channel
******************************************************************************/
const uint8 TimeStampOption[CAN_CHN_COUNT]  = {
#ifdef MSCAN0
    TIMESTAMP_CAN0,
#endif 

#ifdef MSCAN1
    TIMESTAMP_CAN1,
#endif 

#ifdef MSCAN2
    TIMESTAMP_CAN2,
#endif 

#ifdef MSCAN3
    TIMESTAMP_CAN3,
#endif 

#ifdef MSCAN4
    TIMESTAMP_CAN4
#endif  
};                                 

/******************************************************************************
* Define the timestamp function of each can channel
******************************************************************************/
const uint8 REAL_TIME_BUFFER_Option[CAN_CHN_COUNT]  = {
#ifdef MSCAN0
    REAL_TIME_BUFFER_ENABLE_CAN0,
#endif 

#ifdef MSCAN1
    REAL_TIME_BUFFER_ENABLE_CAN1,
#endif 

#ifdef MSCAN2
    REAL_TIME_BUFFER_ENABLE_CAN2,
#endif 

#ifdef MSCAN3
    REAL_TIME_BUFFER_ENABLE_CAN3,
#endif 

#ifdef MSCAN4
    REAL_TIME_BUFFER_ENABLE_CAN4
#endif  
};                         
/******************************************************************************
* Create an array to store configurations of the registers of each msCAN channel
******************************************************************************/
TMSCANDef All_Def[CAN_CHN_COUNT] = 
{
#if (CAN0_USED) 
    {
        CANCTL0_CAN0,
        CANCTL1_CAN0,
        CANBTR0_CAN0,
        CANBTR1_CAN0,
        ACC_FILTER_CAN0,
        {ID_CODE0_CAN0
        ,ID_CODE1_CAN0
        ,ID_CODE2_CAN0
        ,ID_CODE3_CAN0
        ,ID_MASK0_CAN0
        ,ID_MASK1_CAN0
        ,ID_MASK2_CAN0
        ,ID_MASK3_CAN0
        ,ID_CODE4_CAN0 
        ,ID_CODE5_CAN0
        ,ID_CODE6_CAN0
        ,ID_CODE7_CAN0
        ,ID_MASK4_CAN0
        ,ID_MASK5_CAN0
        ,ID_MASK6_CAN0
        ,ID_MASK7_CAN0           
        }                                                                     
    }
#endif

#if (CAN0_USED&&CAN1_USED) 
    ,{
        CANCTL0_CAN1,
        CANCTL1_CAN1,
        CANBTR0_CAN1,
        CANBTR1_CAN1,
        ACC_FILTER_CAN1,
        {ID_CODE0_CAN1
        ,ID_CODE1_CAN1
        ,ID_CODE2_CAN1
        ,ID_CODE3_CAN1
        ,ID_MASK0_CAN1
        ,ID_MASK1_CAN1
        ,ID_MASK2_CAN1
        ,ID_MASK3_CAN1
        ,ID_CODE4_CAN1 
        ,ID_CODE5_CAN1
        ,ID_CODE6_CAN1
        ,ID_CODE7_CAN1
        ,ID_MASK4_CAN1
        ,ID_MASK5_CAN1
        ,ID_MASK6_CAN1
        ,ID_MASK7_CAN1           
        }                                                                     
    }
#elif (CAN1_USED) 
    {
        CANCTL0_CAN1,
        CANCTL1_CAN1,
        CANBTR0_CAN1,
        CANBTR1_CAN1,
        ACC_FILTER_CAN1,
        {ID_CODE0_CAN1
        ,ID_CODE1_CAN1
        ,ID_CODE2_CAN1
        ,ID_CODE3_CAN1
        ,ID_MASK0_CAN1
        ,ID_MASK1_CAN1
        ,ID_MASK2_CAN1
        ,ID_MASK3_CAN1
        ,ID_CODE4_CAN1 
        ,ID_CODE5_CAN1
        ,ID_CODE6_CAN1
        ,ID_CODE7_CAN1
        ,ID_MASK4_CAN1
        ,ID_MASK5_CAN1
        ,ID_MASK6_CAN1
        ,ID_MASK7_CAN1           
        }                                                                     
    }
#endif

#if ((CAN0_USED||CAN1_USED)&&CAN2_USED) 
    ,{
        CANCTL0_CAN2,
        CANCTL1_CAN2,
        CANBTR0_CAN2,
        CANBTR1_CAN2,
        ACC_FILTER_CAN2,
        {ID_CODE0_CAN2
        ,ID_CODE1_CAN2
        ,ID_CODE2_CAN2
        ,ID_CODE3_CAN2
        ,ID_MASK0_CAN2
        ,ID_MASK1_CAN2
        ,ID_MASK2_CAN2
        ,ID_MASK3_CAN2
        ,ID_CODE4_CAN2 
        ,ID_CODE5_CAN2
        ,ID_CODE6_CAN2
        ,ID_CODE7_CAN2
        ,ID_MASK4_CAN2
        ,ID_MASK5_CAN2
        ,ID_MASK6_CAN2
        ,ID_MASK7_CAN2           
        }                                                                     
    }
#elif (CAN2_USED) 
    {
        CANCTL0_CAN2,
        CANCTL1_CAN2,
        CANBTR0_CAN2,
        CANBTR1_CAN2,
        ACC_FILTER_CAN2,
        {ID_CODE0_CAN2
        ,ID_CODE1_CAN2
        ,ID_CODE2_CAN2
        ,ID_CODE3_CAN2
        ,ID_MASK0_CAN2
        ,ID_MASK1_CAN2
        ,ID_MASK2_CAN2
        ,ID_MASK3_CAN2
        ,ID_CODE4_CAN2 
        ,ID_CODE5_CAN2
        ,ID_CODE6_CAN2
        ,ID_CODE7_CAN2
        ,ID_MASK4_CAN2
        ,ID_MASK5_CAN2
        ,ID_MASK6_CAN2
        ,ID_MASK7_CAN2           
        }                                                                     
    }
#endif

#if ((CAN0_USED||CAN1_USED||CAN2_USED)&&CAN3_USED) 
    ,{
        CANCTL0_CAN3,
        CANCTL1_CAN3,
        CANBTR0_CAN3,
        CANBTR1_CAN3,
        ACC_FILTER_CAN3,
        {ID_CODE0_CAN3
        ,ID_CODE1_CAN3
        ,ID_CODE2_CAN3
        ,ID_CODE3_CAN3
        ,ID_MASK0_CAN3
        ,ID_MASK1_CAN3
        ,ID_MASK2_CAN3
        ,ID_MASK3_CAN3
        ,ID_CODE4_CAN3 
        ,ID_CODE5_CAN3
        ,ID_CODE6_CAN3
        ,ID_CODE7_CAN3
        ,ID_MASK4_CAN3
        ,ID_MASK5_CAN3
        ,ID_MASK6_CAN3
        ,ID_MASK7_CAN3           
        }                                                                     
    }
#elif (CAN3_USED) 
    {
        CANCTL0_CAN3,
        CANCTL1_CAN3,
        CANBTR0_CAN3,
        CANBTR1_CAN3,
        ACC_FILTER_CAN3,
        {ID_CODE0_CAN3
        ,ID_CODE1_CAN3
        ,ID_CODE2_CAN3
        ,ID_CODE3_CAN3
        ,ID_MASK0_CAN3
        ,ID_MASK1_CAN3
        ,ID_MASK2_CAN3
        ,ID_MASK3_CAN3
        ,ID_CODE4_CAN3 
        ,ID_CODE5_CAN3
        ,ID_CODE6_CAN3
        ,ID_CODE7_CAN3
        ,ID_MASK4_CAN3
        ,ID_MASK5_CAN3
        ,ID_MASK6_CAN3
        ,ID_MASK7_CAN3           
        }                                                                     
    }
#endif

#if ((CAN0_USED||CAN1_USED||CAN2_USED||CAN3_USED)&&CAN4_USED) 
    ,{
        CANCTL0_CAN4,
        CANCTL1_CAN4,
        CANBTR0_CAN4,
        CANBTR1_CAN4,
        ACC_FILTER_CAN4,
        {ID_CODE0_CAN4
        ,ID_CODE1_CAN4
        ,ID_CODE2_CAN4
        ,ID_CODE3_CAN4
        ,ID_MASK0_CAN4
        ,ID_MASK1_CAN4
        ,ID_MASK2_CAN4
        ,ID_MASK3_CAN4
        ,ID_CODE4_CAN4 
        ,ID_CODE5_CAN4
        ,ID_CODE6_CAN4
        ,ID_CODE7_CAN4
        ,ID_MASK4_CAN4
        ,ID_MASK5_CAN4
        ,ID_MASK6_CAN4
        ,ID_MASK7_CAN4           
        }                                                                     
    }
#elif (CAN4_USED) 
    {
        CANCTL0_CAN4,
        CANCTL1_CAN4,
        CANBTR0_CAN4,
        CANBTR1_CAN4,
        ACC_FILTER_CAN4,
        {ID_CODE0_CAN4
        ,ID_CODE1_CAN4
        ,ID_CODE2_CAN4
        ,ID_CODE3_CAN4
        ,ID_MASK0_CAN4
        ,ID_MASK1_CAN4
        ,ID_MASK2_CAN4
        ,ID_MASK3_CAN4
        ,ID_CODE4_CAN4 
        ,ID_CODE5_CAN4
        ,ID_CODE6_CAN4
        ,ID_CODE7_CAN4
        ,ID_MASK4_CAN4
        ,ID_MASK5_CAN4
        ,ID_MASK6_CAN4
        ,ID_MASK7_CAN4           
        }                                                                     
    }
#endif
};

/******************************************************************************
* Create an array to store the configuration pointers of each channel
******************************************************************************/
const PMSCANDef MSCANDef[CAN_CHN_COUNT] = {
#ifdef MSCAN0
    All_Def,
#endif 

#ifdef MSCAN1
    All_Def + CAN0_CHN_COUNT, 
#endif 

#ifdef MSCAN2
    All_Def + CAN01_CHN_COUNT,
#endif 

#ifdef MSCAN3
    All_Def + CAN012_CHN_COUNT,
#endif 

#ifdef MSCAN4
    All_Def + CAN0123_CHN_COUNT
#endif  
};

#endif                                 

/******************************************************************************
* Create an array to store each channel buffer pointers
******************************************************************************/
TMSCANBuffer All_Buffer[CAN_BUFFER_COUNT];

const PMSCANBuffer MSCANBuffers[CAN_CHN_COUNT] = {
#ifdef MSCAN0
    All_Buffer,
#endif
 
#ifdef MSCAN1
    All_Buffer + CAN0_BUFFER_COUNT, 
#endif
 
#ifdef MSCAN2
    All_Buffer + CAN01_BUFFER_COUNT,
#endif
 
#ifdef MSCAN3
    All_Buffer + CAN012_BUFFER_COUNT,
#endif
 
#ifdef MSCAN4
    All_Buffer + CAN0123_BUFFER_COUNT
#endif  
};

/******************************************************************************
* Create an array to store each REALTIME channel buffer, each channel will have one REALTIME Buffer
******************************************************************************/

TREALTIMEBuffer All_REALTIME_Buffer[CAN_CHN_COUNT];
const PREALTIMEBuffer REALTIMEBuffers[CAN_CHN_COUNT] = {
#ifdef MSCAN0
    All_REALTIME_Buffer,
#endif
 
#ifdef MSCAN1
    All_REALTIME_Buffer + CAN0_CHN_COUNT, 
#endif
 
#ifdef MSCAN2
    All_REALTIME_Buffer + CAN01_CHN_COUNT,
#endif
 
#ifdef MSCAN3
    All_REALTIME_Buffer + CAN012_CHN_COUNT,
#endif
 
#ifdef MSCAN4
    All_REALTIME_Buffer + CAN0123_CHN_COUNT
#endif  
};




/******************************************************************************
* Create an array to store the base address of Registers of each msCAN channel
******************************************************************************/
const pMSCANReg MSCANRegs[CAN_CHN_COUNT] = {
#ifdef MSCAN0
    (pMSCANReg) MSCAN0_ADDR,
#endif
 
#ifdef MSCAN1
    (pMSCANReg) MSCAN1_ADDR,
#endif 

#ifdef MSCAN2
    (pMSCANReg) MSCAN2_ADDR,
#endif
 
#ifdef MSCAN3
    (pMSCANReg) MSCAN3_ADDR,
#endif
 
#ifdef MSCAN4
    (pMSCANReg) MSCAN4_ADDR,
#endif  
};

/******************************************************************************
* Create an array to store status of 3 TX buffers of each channel,number of msCAN TXbuffer=3 
******************************************************************************/
TMSCANTXBuffer All_TXBuffer[CAN_CHN_COUNT * 3];	

const PMSCANTXBuffer MSCANTXBuffers[CAN_CHN_COUNT] = {

#ifdef MSCAN0
    All_TXBuffer,
#endif 

#ifdef MSCAN1
    All_TXBuffer + CAN0_CHN_COUNT * 3, 
#endif
 
#ifdef MSCAN2
    All_TXBuffer + CAN01_CHN_COUNT * 3,
#endif
 
#ifdef MSCAN3
    All_TXBuffer + CAN012_CHN_COUNT * 3,
#endif
 
#ifdef MSCAN4
    All_TXBuffer + CAN0123_CHN_COUNT * 3
#endif  
};


uint32 CCRcopy;
/* flags for driver */
uint8 DriverFlags[5]; 

/******************************************************************************
* Create an array to store the lowest priority of the queued message of each channel
******************************************************************************/                     
uint8 LowestQueuedBuffer[CAN_CHN_COUNT] = {
#ifdef MSCAN0
    0xff,
#endif
 
#ifdef MSCAN1
    0xff, 
#endif 

#ifdef MSCAN2
    0xff,
#endif 

#ifdef MSCAN3
    0xff,
#endif 

#ifdef MSCAN4
    0xff			    
#endif  
};
/******************************************************************************
* Create an array to store the priority of the aborted message of each channel
******************************************************************************/
uint8 AbortMessage[CAN_CHN_COUNT] = {
#ifdef MSCAN0
    0xff,
#endif 

#ifdef MSCAN1
    0xff, 
#endif 

#ifdef MSCAN2
    0xff,
#endif
 
#ifdef MSCAN3
    0xff,
#endif
 
#ifdef MSCAN4
    0xff
#endif  
}; 

/*The index for channels in consideration of unused channel, return 0xff if not used*/
 volatile const uint8 vChnIdx[5] = { 
 0xFF * (1 - (CAN0_USED>>0)),
 0xFF * (1 - (CAN1_USED>>1)) + (CAN1_USED>>1) * (CAN0_USED),
 0xFF * (1 - (CAN2_USED>>2)) + (CAN2_USED>>2) * (CAN0_USED +(CAN1_USED>>1)),
 0xFF * (1 - (CAN3_USED>>3)) + (CAN3_USED>>3) * (CAN0_USED + (CAN1_USED>>1) + (CAN2_USED>>2)),
 0xFF * (1 - (CAN4_USED>>4)) + (CAN4_USED>>4) * (CAN0_USED + (CAN1_USED>>1) + (CAN2_USED>>2) + (CAN3_USED>>3))
 };
 
 /*CallBack function pointers*/
#if (Err_Callback_Enable)                   
pErr_Callbacks_User_Def ErrCallbacks_User_Def[MSCAN_CHANNELS_MAX];
#endif
/* end MSCANGVLITE_C */
