
/******************************************************************************								              
*
*                             Copyright (C) 2013 
*
* Tongji University - Freescale Automotive Electronics Laboratory, Inc.
* 
*                            All Rights Reserved		
*														                            
* Filename:     msCANdrv.c                
*														                            
* Revision:      										                    
*														                            
* Functions:    All functions of msCAN driver                                 
*														                            
* Description:  The basic functions are completed in this document
*
* Notes:        
*
******************************************************************************/
#include "msCANdrv.h"               /* general defines, enums, prototypes */
#include "derivative.h"
#include "msCANcfg.h"
#define BENCHMARK
/***************************************************************************
* Function :   Init_CAN
*
* Description: Initiliase msCAN driver .
* 
* Returns:     ERR_OK if no error, otherwise error code.                   
*
* Notes:       None
*
**************************************************************************/
uint8 Init_CAN(uint8 AChn, uint8 AReMode)
{
    uint8 errorStatus,                               /* error code from Reset_CAN */
          i;                                         /* loop counter */
    uint8 AChn_Transformed;
    pMSCANReg p;
    PMSCANTXBuffer p_TXBuffer;
    
    if(AChn >= MSCAN_CHANNELS_MAX) return ERR_CHN; 
    AChn_Transformed = vChnIdx[AChn];
    if (AChn_Transformed == 0xff) return ERR_CHN;

    p = MSCANRegs[AChn_Transformed];
    p_TXBuffer = MSCANTXBuffers[AChn_Transformed];
    
    errorStatus = Reset_CAN(AChn,  AReMode);         /* reset msCAN */
    if (errorStatus != ERR_OK)
    {
        return (errorStatus);
    }
    errorStatus = CANBTR1_CAN0 ;
    errorStatus = MSCANDef[AChn_Transformed]->BTR1;
    p->CANCTL1.Byte = MSCANDef[AChn_Transformed]->CTL1;                               /* initialise hardware registers */
    p->CANBTR0.Byte = MSCANDef[AChn_Transformed]->BTR0;                                  
    p->CANBTR1.Byte = MSCANDef[AChn_Transformed]->BTR1;                                 
    p->CANIDAC.Byte = MSCANDef[AChn_Transformed]->IDAC;

    for (i = 0; i < NO_OF_FILTER_REG; i++)          
    {
        *(&MSCANRegs[AChn_Transformed]->CANIDAR0.Byte + i) = MSCANDef[AChn_Transformed]->IDFilter[i];  /* initialise hardware acceptance filter  */
    }

    p->CANCTL0.Byte &= ~INITRQ;                                                        /* clear soft reset */
    p->CANCTL0.Byte = MSCANDef[AChn_Transformed]->CTL0; 

    for (i = 0 ; i < NoOfMB[AChn_Transformed] ; i++)                                   /* configure all message buffers to CLOSED, NODATA */
    {
        (MSCANBuffers[AChn_Transformed]+i)->Mode = CLOSED;
        (MSCANBuffers[AChn_Transformed]+i)->Status = NODATA;
    }

    p_TXBuffer->mb = 0xff;                                                             /* more efficient than for loop */
    (p_TXBuffer + 1)->mb = 0xff;
    (p_TXBuffer + 2)->mb = 0xff;

    p_TXBuffer->mbp = 0xff;
    (p_TXBuffer+1)->mbp = 0xff;
    (p_TXBuffer+2)->mbp = 0xff;

    #if (no_of_msCAN_TXbuffer != 3)
    #error mb_msCAN not initialised
    #endif

    if (p->CANCTL1.Byte & INITAK) return ERR_INIT;

    CLI;                                                                               /* clear interrupt mask */
#if (Err_Callback_Enable)                                                           
    p->CANRIER.Byte = (RXFIE|OVRIE|TSTATE0|TSTATE1|RSTATE0|RSTATE1|CSCIE|WUPIE);       /* enable err interrupts */
#else								                                                   /* enable Receive Interrupts */
    p->CANRIER.Byte = RXFIE;
#endif                                 

    if ((p->CANRFLG.Byte & BUSOFF) == BUSOFF)                                          /* bus-off */
    {
        return (ERR_BOFF);
    }

    else
    {
        return (ERR_OK);
    }
}


/***************************************************************************
* Function :   Reset_CAN
*
* Description: Puts msCAN module in soft reset state.
* 
* Returns:     ERR_OK if no error, otherwise error code.                   
*
* Notes:       None
**************************************************************************/
uint8 Reset_CAN(uint8 AChn, uint8 AReMode)
{
    uint8 AChn_Transformed;
    pMSCANReg p;
    
    if(AChn >= MSCAN_CHANNELS_MAX) return ERR_CHN; 
    AChn_Transformed = vChnIdx[AChn];
    if (AChn_Transformed == 0xff) return ERR_CHN;
    
    p = MSCANRegs[AChn_Transformed];
    
    if (p->CANCTL1.Byte & INITAK) return ERR_OK;                   
    if (p->CANCTL0.Byte & INITRQ) return ERR_INIT;

    if (!((AReMode == FAST) || (AReMode == CMPTX)))
    {
        return (ERR_MODE);
    }
    SEI
    if (AReMode == CMPTX)                              /* wait for current transmission to complete */
    {
        p->CANRIER.Byte = 0;                           /* clear all interrupt enables */
        p->CANTARQ.Byte  = (~p->CANTFLG.Byte);         /* abort any scheduled transmissions */
        if (!(CCRcopy))
        {
            CLI;                                       /* restore interrupt mask */
        }

        while ((p->CANTFLG.Byte & 0x07) != 0x07)
        {                                              /* wait for all msCAN tx buffers not scheduled */
        }                                              /* this could take time of one message transmission */
    }

    p->CANCTL0.Byte = INITRQ;                          /* soft reset */
    if (!(CCRcopy))
    {
        CLI;                                           /* restore interrupt mask */
    }

    DriverFlags[AChn] = 0;                             /* clear flags */

    if (p->CANCTL1.Byte & INITAK) return ERR_OK;
    else return ERR_INIT;
}


/***************************************************************************
* Function :   Sleep_CAN
*
* Description: Puts msCAN module into low-power SLEEP mode.
* 
* Returns:     ERR_OK if no error, otherwise error code.                   
*
* Notes:       None 
*
**************************************************************************/
uint8 Sleep_CAN(uint8 AChn, uint8 AReMode)
{
    uint8 AChn_Transformed;
    pMSCANReg p;
    
    if(AChn >= MSCAN_CHANNELS_MAX) return ERR_CHN; 
    AChn_Transformed = vChnIdx[AChn];
    if (AChn_Transformed == 0xff) return ERR_CHN;
    
    p = MSCANRegs[AChn_Transformed];
    
    if (!((AReMode == FAST) || (AReMode == CMPTX)))
    {
        return (ERR_MODE);
    }

    if (p->CANCTL1.Byte & INITAK)   
    {
        return (ERR_INIT);
    }

    p->CANRFLG.Byte = WUPIF;              

    if ((AReMode == CMPTX) && (p->CANTIER.Byte & 0x07))                 
    {
        DriverFlags[AChn] |= SLEEP;                           
    }
    else                                              
    {
        p->CANCTL0.Byte |= SLPRQ;                      
        p->CANRIER.Byte |= WUPIE;                             
    }
    
    return (ERR_OK);

}

/***************************************************************************
* Function :   Wakeup_CAN
*
* Description: Wakes up the msCAN module from SLEEP mode.
* 
* Returns:     ERR_OK if no error, otherwise error code.                   
*
* Notes:       None 
*
**************************************************************************/
uint8 Wakeup_CAN(uint8 AChn)
{ 
    uint8 currentCANCTL0;
    uint8 AChn_Transformed;
    pMSCANReg p;
    
    if(AChn >= MSCAN_CHANNELS_MAX) return ERR_CHN; 					 	  /* check the channel used or not */
    AChn_Transformed = vChnIdx[AChn];
    if (AChn_Transformed == 0xff) return ERR_CHN;
    
    p = MSCANRegs[AChn_Transformed];
    
    currentCANCTL0 = p->CANCTL0.Byte;

    if (p->CANCTL1.Byte & INITAK)                                          /* initialization mode */
    {
        return (ERR_INIT);
    }

    DriverFlags[AChn] &= ~SLEEP;                                           /* clear driver sleep request flag */

    if ((currentCANCTL0 & SLPRQ) && !(p->CANCTL1.Byte & SLPAK))            /* SLPRQ set but SLPAK clear */
    {                                                           
        return (ERR_NSLP);                                                 /* not yet in Sleep mode: cannot clear SLPRQ */
    }

    else                                                                   /* in Sleep mode (or SLPRQ not set) */
    {
        SEI;
        p->CANRIER.Byte &= ~WUPIE;                                         /* clear wakeup interrupt */
        if (!(CCRcopy))
        {
            CLI;                                                           /* restore interrupt mask */
        }
        p->CANCTL0.Byte &= ~SLPRQ;                                         /* wake-up msCAN */

        return (ERR_OK);
    }

}

/***************************************************************************
* Function :   Check_CAN_Status
*
* Description: Obtains the status of the msCAN module.
* 
* Returns:     ERR_OK if no error, otherwise error code.                    
*
* Notes:       None
*
**************************************************************************/
uint8 Check_CAN_Status(uint8 AChn,uint8 *AStatusPtr)
{
    uint8 AChn_Transformed;
    pMSCANReg p;
    
    if(AChn >= MSCAN_CHANNELS_MAX) return ERR_CHN; 						 /* check the channel used or not */
    AChn_Transformed = vChnIdx[AChn];
    if (AChn_Transformed == 0xff) return ERR_CHN;
    
    p = MSCANRegs[AChn_Transformed];
    *((uint8*)(AStatusPtr))     =  p->CANCTL0.Byte;
    *((uint8*)(AStatusPtr + 1)) =  p->CANCTL1.Byte;
    *((uint8*)(AStatusPtr + 2)) =  p->CANRFLG.Byte;
    return (ERR_OK);
}

/***************************************************************************
* Function :   Clear_CAN_Status
*
* Description: Clears status flags except RXF.
* 
* Returns:     ERR_OK if no error, otherwise error code.                   
*
* Notes:       None 
*
**************************************************************************/
uint8 Clear_CAN_Status(uint8 AChn)
{
    uint8 AChn_Transformed;
    
    if(AChn >= MSCAN_CHANNELS_MAX) return ERR_CHN; 				 /* check the channel used or not */
    AChn_Transformed = vChnIdx[AChn];
    if (AChn_Transformed == 0xff) return ERR_CHN;
  
    MSCANRegs[AChn_Transformed]->CANRFLG.Byte = 0xFE;                        /* write 1's to clear all flags except RXF */
    return (ERR_OK);
}

/***************************************************************************
* Function :   Config_CAN_MB
*
* Description: Configures a Message Buffer.
* 
* Returns:     ERR_OK if no error, otherwise error code.                   
*
* Notes:       None 
*
**************************************************************************/
uint8 Config_CAN_MB(uint8 AChn, uint8 ABuffer, uint8 ACmode, uint8 AIdentifierRef)
{
    uint8 currentCANRIER, 
          currentCANTIER;
    uint8 AChn_Transformed;
    pMSCANReg p;
    
    if(AChn >= MSCAN_CHANNELS_MAX) return ERR_CHN; 						 /* check the channel used or not */
    AChn_Transformed = vChnIdx[AChn];
    if (AChn_Transformed == 0xff) return ERR_CHN;
    
    p = MSCANRegs[AChn_Transformed];
    if (AIdentifierRef >= NoOfID[AChn_Transformed])
    {
        return (ERR_ID);
    }

    if (ACmode >= INVALID)
    {
        return (ERR_MODE);
    }

    if (ABuffer >= NoOfMB[AChn_Transformed])
    {
        return (ERR_MB);
    }

    SEI;
    currentCANRIER = p->CANRIER.Byte;               /* save interrupt enables */
    currentCANTIER = p->CANTIER.Byte;                            

    p->CANRIER.Byte = 0;                            /* disable all interrupts */
    p->CANTIER.Byte = 0;

    if (!(CCRcopy))
    {
        CLI;                                                                  /* restore interrupt mask */
    }

    if((MSCANBuffers[AChn_Transformed]+ABuffer)->Status == QUEUED2)           /* message buffer in msCAN buffer */            
    {																 
        if (MSCANTXBuffers[AChn_Transformed]->mb == ABuffer)                  /* message buffer in this MSCAN buffer */ 
        {
            p->CANTARQ.Byte |= 0x01;                                          /* set ABTRQi for msCAN buffer */
        }
        else
        {
            if ((MSCANTXBuffers[AChn_Transformed] + 1)->mb == ABuffer)        /* message buffer in this MSCAN buffer */
            {
                p->CANTARQ.Byte |= 0x02;                                      /* set ABTRQi for msCAN buffer */
            }
            else                                                              /* must be (MSCANTXBuffers[AChn] + 2)->mb */
            {
                p->CANTARQ.Byte |= 0x04;                                      /* set ABTRQi for msCAN buffer */
            }
        }
    #if (no_of_msCAN_TXbuffer != 3)
    #error msCAN buffer not aborted
    #endif
    }

    (MSCANBuffers[AChn_Transformed]+ABuffer)->Mode = ACmode;
    (MSCANBuffers[AChn_Transformed]+ABuffer)->Status = NODATA;
    (MSCANBuffers[AChn_Transformed]+ABuffer)->ID = AIdentifierRef;

    p->CANRIER.Byte = currentCANRIER;              /* restore interrupts */
    p->CANTIER.Byte = currentCANTIER;

    return (ERR_OK);
}

/***************************************************************************
* Function :   Check_CAN_MB_Status
*
* Description: Obtains the status and mode of the specified message buffer.
* 
* Returns:     ERR_OK if no error, otherwise error code.                   
*
* Notes:       None 
*
**************************************************************************/
uint8 Check_CAN_MB_Status(uint8 AChn, uint8 ABuffer, uint8 *AStatusPtr)
{
    uint8 AChn_Transformed;
    
    if(AChn >= MSCAN_CHANNELS_MAX) return ERR_CHN; 						 /* check the channel used or not */
    AChn_Transformed = vChnIdx[AChn];
    if (AChn_Transformed == 0xff) return ERR_CHN;
    
    if (ABuffer >= NoOfMB[AChn_Transformed])
    {
        return (ERR_MB);
    }

    SEI;                                                                 /* disable interrupts */
    *(AStatusPtr) = (MSCANBuffers[AChn_Transformed]+ABuffer)->Status;
    *(AStatusPtr + 1) = (MSCANBuffers[AChn_Transformed]+ABuffer)->Mode;
    if (!(CCRcopy))
    {
        CLI;                                                             /* restore interrupt mask */
    }

    return (ERR_OK);
}

/***************************************************************************
* Function :   Load_CAN_MB
*
* Description: Loads a message buffer with data.
* 
* Returns:     ERR_OK if no error, otherwise error code.                   
*
* Notes:       None 
*
**************************************************************************/
uint8 Load_CAN_MB ( uint8 AChn, uint8 ABuffer, uint8 *ADataPtr)
{
    uint8 *bufferPtr;             
    uint8 dataLength, 
          i;
    uint8 AChn_Transformed;
    PMSCANBuffer p_Buffer;
    if(AChn >= MSCAN_CHANNELS_MAX) return ERR_CHN; 					   /* check the channel used or not */
    AChn_Transformed = vChnIdx[AChn];
    if (AChn_Transformed == 0xff) return ERR_CHN;
    
    p_Buffer = MSCANBuffers[AChn_Transformed];
    if (ABuffer >= NoOfMB[AChn_Transformed])
    {
        return (ERR_MB);
    }

    if (*ADataPtr > 8)
    {
        return (ERR_DLC);
    }

    if (((p_Buffer+ABuffer)->Mode != TXDF)
        && ((p_Buffer+ABuffer)->Mode != AUTOTXDF))
    {
        return (ERR_CONFIG);
    }

    if (((p_Buffer+ABuffer)->Status == QUEUED)                            /* message buffer already queued */
        || ((p_Buffer+ABuffer)->Status == QUEUED2) 
        || ((p_Buffer+ABuffer)->Status == ABORTREQ))
    {
        return (ERR_QED);
    }

    SEI;                                                                  /* disable all interrupts */
    dataLength = *ADataPtr;
    (p_Buffer+ABuffer)->DLC = dataLength;                                 /* copy DLC */

    bufferPtr = (p_Buffer+ABuffer)->Data;            
    ADataPtr++;                                                           /* increment to start of data */

    for (i = 0; i < dataLength; i++)
    {
        bufferPtr[i] = ADataPtr[i];                                       /* copy data */
    }

    if (!(CCRcopy))
    {
        CLI;                                                              /* restore interrupt mask */
    }

    (p_Buffer+ABuffer)->Status = VALIDDATA;
    return (ERR_OK);
}

/***************************************************************************
* Function :   Transmit_CAN_MB
*
* Description: Schedules a Message Buffer for transmission.
* 
* Returns:     ERR_OK if no error, otherwise error code.                   
*
* Notes:       None 
*
**************************************************************************/
uint8 Transmit_CAN_MB(uint8 AChn, uint8 ABuffer)
{   
    uint8 bufferStatus, 
          bufferMode;
    uint8 AChn_Transformed;
    pMSCANReg p;

#ifdef BENCHMARK
    
#endif
    if(AChn >= MSCAN_CHANNELS_MAX) return ERR_CHN; 
    AChn_Transformed = vChnIdx[AChn];
    if (AChn_Transformed == 0xff) return ERR_CHN; 
    	
    p = MSCANRegs[AChn_Transformed];
    
    if (p->CANCTL1.Byte & INITAK)
    {
        return (ERR_INIT);
    }
    
    if ((p->CANRFLG.Byte & BUSOFF) == BUSOFF)
    {
        return (ERR_BOFF);
    }
    if (ABuffer >= NoOfMB[AChn_Transformed])
    {
        return (ERR_MB);
    }
    
    SEI;                                                           /* mask all interrupts */
    bufferMode = (MSCANBuffers[AChn_Transformed]+ABuffer)->Mode;
    bufferStatus = (MSCANBuffers[AChn_Transformed]+ABuffer)->Status;

    if (!((bufferMode == TXDF) || (bufferMode == TXRF)))
    {
        if (!(CCRcopy))
        {
            CLI;                                                   /* restore interrupt mask */
        }
        return (ERR_CONFIG);
    }

    
    if ((bufferMode == TXDF) && (bufferStatus == NODATA))
    {
        if (!(CCRcopy))
        {
            CLI;                                                   /* restore interrupt mask */
        }
        return (ERR_NODATA);
    }
    if ((bufferStatus == QUEUED)                                   /* MB already queued */
        || (bufferStatus == QUEUED2)  
        || (bufferStatus == ABORTREQ))
    {
        if (!(CCRcopy))
        {
            CLI;                                                   /* restore interrupt mask */
        }
        return (ERR_QED);
    }
         
      
    Queue_CAN_MB ( AChn, ABuffer);                                 /* queue buffer, copy to msCAN if buffer available,   */
                                                                   /* abort msCAN buffer if all full and this buffer higher priority */
    
    if (!(CCRcopy))
    {
        CLI;                                                       /* restore interrupt mask */
    }                                          
    if (p->CANCTL1.Byte & SLPAK)                                   /* msCAN in SLEEP mode */
    {                                                           
        p->CANCTL0.Byte &= ~SLPRQ;                                 /* wake-up msCAN */
    }
    DriverFlags[AChn] &= ~SLEEP;                                   /* clear sleep request flag */

#ifdef BENCHMARK
    
#endif
    
    if (p->CANCTL0.Byte & SYNCH)
    {
        return (ERR_OK);
    }
    else
    {
        return (ERR_SYNCH);
    }
}

/***************************************************************************
* Function :   Abort_CAN_MB
*
* Description: Requests that the transmission of a queued Message Buffer 
*              is aborted.
* 
* Returns:     ERR_OK if no error, otherwise error code.                   
*
* Notes:       None 
*
**************************************************************************/
uint8 Abort_CAN_MB(uint8 AChn, uint8 ABuffer)
{
    uint8 currentCANTIER;
    uint8 AChn_Transformed;
    pMSCANReg p;
        
    if(AChn >= MSCAN_CHANNELS_MAX) return ERR_CHN; 						 /* Check the Channel used or not */
    AChn_Transformed = vChnIdx[AChn];
    if (AChn_Transformed == 0xff) return ERR_CHN;
    
    p = MSCANRegs[AChn_Transformed];
    if (p->CANCTL1.Byte & INITAK)
    {
        return (ERR_INIT);
    }
    if (ABuffer >= NoOfMB[AChn_Transformed])
    {
        return (ERR_MB);
    }
    if ((MSCANBuffers[AChn_Transformed]+ABuffer)->Mode == RXDF)
    {
        return (ERR_CONFIG);
    }

    SEI;
    currentCANTIER = p->CANTIER.Byte;
    p->CANRIER.Byte &= ~(RXFIE);        /* disable receive interrupt */
    p->CANTIER.Byte = 0;                /* disable transmit interrupts */
    if (!(CCRcopy))
    {
        CLI;                            /* restore interrupt mask */
    }

    switch ((MSCANBuffers[AChn_Transformed]+ABuffer)->Status)
    {
    case QUEUED:
        (MSCANBuffers[AChn_Transformed]+ABuffer)->Status = ABORTED;
        break;

    case QUEUED2:
        (MSCANBuffers[AChn_Transformed]+ABuffer)->Status = ABORTREQ;

        if (MSCANTXBuffers[AChn_Transformed]->mb == ABuffer)              /* Message Buffer in msCAN buffer */
        {                                                        
            p->CANTARQ.Byte |= 0x01;                                      /* set ABTRQi for msCAN buffer */
        }
        else
        {
            if ((MSCANTXBuffers[AChn_Transformed] + 1)->mb == ABuffer)    /* Message Buffer in msCAN buffer */
            {
                p->CANTARQ.Byte |= 0x02;                                  /* set ABTRQi for msCAN buffer */
            }
            else
            {
                p->CANTARQ.Byte |= 0x04;                                  /* set ABTRQi for msCAN buffer */
            }
    #if (no_of_msCAN_TXbuffer != 3)
    #error msCAN buffer not checked
    #endif
        }
        break;

    default:                                    /* not queued */
        p->CANRIER.Byte |= RXFIE;               /* restore receive interrupt */
        p->CANTIER.Byte = currentCANTIER;       /* restore transmit interrupts */
        return (ERR_NOTQED);
    }
    p->CANRIER.Byte |= RXFIE;                   /* restore receive interrupt */
    p->CANTIER.Byte = currentCANTIER;           /* restore transmit interrupts */
    return (ERR_OK);
}

/***************************************************************************
* Function :   Read_CAN_MB_Data
*
* Description: reads the data in a message buffer.
* 
* Returns:     ERR_OK if no error, otherwise error code.                   
*
* Notes:       None 
*
**************************************************************************/
uint8 Read_CAN_MB_Data(uint8 AChn, uint8 ABuffer, uint8* ADataPtr)
{
    uint8 errorStatus;
    uint8 AChn_Transformed;
           
    if(AChn >= MSCAN_CHANNELS_MAX) return ERR_CHN; 						 /* check the channel used or not */
    AChn_Transformed = vChnIdx[AChn];
    if (AChn_Transformed == 0xff) return ERR_CHN;
    
    errorStatus = Read_MB_Data (AChn, ABuffer, ADataPtr);

    MSCANRegs[AChn_Transformed]->CANRIER.Byte |= RXFIE;                  /* restore receive interrupt */
    return (errorStatus);   
}


/***************************************************************************
* Function :   Read_CAN_MB_Time
*
* Description: reads the time stamp in a message buffer.
* 
* Returns:     ERR_OK if no error, otherwise error code.                   
*
* Notes:       None 
*
**************************************************************************/
# if (TIMESTAMP_CAN)
uint8 Read_CAN_MB_Time(uint8 AChn, uint8 ABuffer, uint16 *ADataPtr)       
{
    uint8 AChn_Transformed;
               
    if(AChn >= MSCAN_CHANNELS_MAX) return ERR_CHN; 						          /* check the channel used or not */
    AChn_Transformed = vChnIdx[AChn];
    if (AChn_Transformed == 0xff) return ERR_CHN;
    
    if (!TimeStampOption[AChn_Transformed])
    {
        return (ERR_TS);
    }
    if (ABuffer >= NoOfMB[AChn_Transformed])
    {
        return (ERR_MB);
    }
    if ((MSCANBuffers[AChn_Transformed]+ABuffer)->ID == CLOSED)
    {
        return (ERR_CONFIG);
    }
    if ((MSCANBuffers[AChn_Transformed]+ABuffer)->Status < TRANSMITTED)           /* NODATA, VALIDDATA, QUEUED, QUEUED2, ABORTREQ, ABORTED */
    {
        return (ERR_NODATA);
    }

    SEI;

    *ADataPtr = (MSCANBuffers[AChn_Transformed] + ABuffer)->BufferTimeStamp_CAN;  /* copy time stamp */

    if (!(CCRcopy))
    {
        CLI;                                                                      /* restore interrupt mask */
    }

    return (ERR_OK);

}
# endif
/***************************************************************************
* Function :   Read_Rec_Err_Counter
*
* Description: Read Receive Error Counter for msCAN module
* 
* Returns:     ERR_OK if no error, otherwise error code.                   
*
* Notes:       None 
*
**************************************************************************/

uint8 Read_Rec_Err_Counter (uint8 AChn, uint8* Rec_Err_Counter) 
{
    uint8 err_status;
    uint8 AChn_Transformed;
                   
    if(AChn >= MSCAN_CHANNELS_MAX) return ERR_CHN; 					/* check the channel used or not */
    AChn_Transformed = vChnIdx[AChn];
    if (AChn_Transformed == 0xff) return ERR_CHN;
    
    err_status = Sleep_CAN(AChn,FAST);	     /*Enter sleep mode first to get a right err counter number*/
    if (err_status != ERR_OK)
    {
        return (err_status);
    }
    
    while (!(MSCANRegs[AChn_Transformed]->CANCTL1.Byte & SLPAK))  {}	 //wait till enter sleep mode
 
    *Rec_Err_Counter = MSCANRegs[AChn_Transformed]->CANRXERR.Byte;	  /*copy err counter number*/
    	
    err_status = Wakeup_CAN(AChn);	                                	/*wake up*/ 
    
    if (err_status != ERR_OK)
    {
        return (err_status);
    }
     
    return  err_status;				  
}

/***************************************************************************
* Function :   Read_Tran_Err_Counter
*
* Description: Read Transmit Error Counter for msCAN module
* 
* Returns:     ERR_OK if no error, otherwise error code.                   
*
* Notes:       None 
*
**************************************************************************/

uint8 Read_Tran_Err_Counter (uint8 AChn, uint8* Tran_Err_Counter) 
{
    uint8 err_status;
    int AChn_Transformed;
                       
    if(AChn >= MSCAN_CHANNELS_MAX) return ERR_CHN; 					 /* Check the Channel used or not*/
    AChn_Transformed = vChnIdx[AChn];
    if (AChn_Transformed == 0xff) return ERR_CHN;
        
    err_status = Sleep_CAN(AChn,FAST);		   /* enter sleep mode first to get a right err counter number*/
    if (err_status != ERR_OK)
    {
        return (err_status);
    } 
 
    while (!(MSCANRegs[AChn_Transformed]->CANCTL1.Byte & SLPAK))  {}	 //wait till enter sleep mode
 
    *Tran_Err_Counter = MSCANRegs[AChn_Transformed]->CANTXERR.Byte;	 	/* copy err counter number*/
    	
    err_status = Wakeup_CAN(AChn);			                              /*Wake up*/ 
    if (err_status != ERR_OK)
    {
        return (err_status);
    } 
    
    return err_status; 
}

/***************************************************************************
* Function :   Read_REALTIME_Buffers
*
* Description: Read RealTime Buffers for msCAN modules, The RealTime Buffers stores all received frame
* 
* Returns:     ERR_OK if no error, otherwise error code.                   
*
* Notes:       REAL_TIME_BUFFER_ENABLEx should be defined to use the function 
*
**************************************************************************/
#if (REAL_TIME_BUFFER_ENABLE == TRUE)
uint8 Read_REALTIME_Buffers(uint8 AChn, uint32* ID, uint8* ID_Type, uint8* Frame_Type, uint8* DLC, uint8* Data, uint16* TimeStamp) 
{
    uint8 i;
    uint8 AChn_Transformed;
                           
    if(AChn >= MSCAN_CHANNELS_MAX) return ERR_CHN; 						 /* check the channel used or not */
    AChn_Transformed = vChnIdx[AChn];
    if (AChn_Transformed == 0xff) return ERR_CHN;

if (!REAL_TIME_BUFFER_Option[AChn_Transformed]) 
    {
        return ERR_CHN_FUNCTION;
    }
    
    MSCANRegs[AChn_Transformed]->CANRIER.Byte &= ~RXFIE;                 /* disable channel rec interrupt */
    
    *ID = REALTIMEBuffers[AChn_Transformed]->ID;			                   /* read ID */
    *ID_Type = REALTIMEBuffers[AChn_Transformed]->ID_Type;				       /* read ID Type */
    *Frame_Type = REALTIMEBuffers[AChn_Transformed]->Frame_Type;		     /* read Frame Type */
    *DLC = REALTIMEBuffers[AChn_Transformed]->DLC; 						           /* read DLC */

if (TimeStampOption[AChn_Transformed])
    *TimeStamp = REALTIMEBuffers[AChn_Transformed]->BufferTimeStamp_CAN; /* read TimeStamp */
else {
         *TimeStamp = 0xffff;												 /* Fill the TimeStamp with 0xFFFF if TimeStamp Disabled */
     }
    for(i=0; i<*DLC; i++) 
    {
        *(Data + i) = REALTIMEBuffers[AChn_Transformed]->Data[i];        /* read data */     
    }
    
    MSCANRegs[AChn_Transformed]->CANRIER.Byte |= RXFIE;                  /* enable channel rec interrupt */
    return ERR_OK;
}

#endif

/***************************************************************************
* Function :   Read_MB_Data
*
* Description: Internal driver function
* 
* Returns:     ERR_OK if no error, otherwise error code                   
*
* Notes:       None 
*
**************************************************************************/
uint8 Read_MB_Data(uint8 AChn, uint8 ABuffer, uint8* ADataPtr)
{
    uint8 *bufferPtr;       
    uint8 dataLength, 
          i;
    uint8 AChn_Transformed = vChnIdx[AChn];
    if (ABuffer >= NoOfMB[AChn_Transformed])
    {
        return (ERR_MB);
    }
    if ((MSCANBuffers[AChn_Transformed]+ABuffer)->Mode != RXDF)
    {
        return (ERR_CONFIG);
    }
    if ((MSCANBuffers[AChn_Transformed]+ABuffer)->Status == NODATA)
    {
        return (ERR_NODATA);
    }
    SEI;                                                            /* disable all interrupts */
    MSCANRegs[AChn_Transformed]->CANRIER.Byte &= ~RXFIE;            /* disable receive interrupt */
    if (!(CCRcopy))
    {
        CLI;                                                        /* restore interrupt mask */
    }
    dataLength = (MSCANBuffers[AChn_Transformed]+ABuffer)->DLC;
    *ADataPtr = dataLength;                                         /* copy DLC */
    ADataPtr++;

    bufferPtr = (MSCANBuffers[AChn_Transformed]+ABuffer)->Data;     

    for (i = 0; i < dataLength; i++)                                /* copy data */
    {
        ADataPtr[i] = bufferPtr[i];
    }
    (MSCANBuffers[AChn_Transformed]+ABuffer)->Status = READDATA;

    return (ERR_OK);
}

/***************************************************************************
* Function :   Queue_CAN_MB
*
* Description: Internal driver function
* 
* Returns:     None                   
*
* Notes:       All interrupts must be disabled when this function is called 
*
**************************************************************************/
void Queue_CAN_MB(uint8 AChn, uint8 ABuffer)
{
    uint8 AChn_Transformed = vChnIdx[AChn];
    pMSCANReg p = MSCANRegs[AChn_Transformed];
    PMSCANTXBuffer p_TXBuffer = MSCANTXBuffers[AChn_Transformed];
    PMSCANBuffer p_buffer = MSCANBuffers[AChn_Transformed]+ABuffer;
    uint8 MB_ID_Ref = (MSCANBuffers[AChn_Transformed]+ABuffer)->ID;         /* ID_Ref of this MB = priority of MO */

    /* Variables req. only if msCAN transmit buffer is not available */
    uint8 lowestPriority, 
        lowestPriorityTXBuffer;

    /* If: All msCAN transmit buffers are already scheduled:
    * and if priority of Message Object in buffer is greater (ID_Ref is less) than any
    * Message Object already in msCAN transmit buffer, request abort transmission of the
    * msCAN tx buffer with the   lowest priority Message Object.
    */

    /* msCAN transmit buffers all scheduled */
    if (p->CANTIER.Byte == 0x07)                   /* do not use CANTFLG: TXEn could be set but interrupt not serviced yet */
    {
        if (ABuffer < LowestQueuedBuffer[AChn_Transformed])
        {
            LowestQueuedBuffer[AChn_Transformed] = ABuffer;                  /* lowest buffer # with QUEUED status, used in TxISR */
        }                                                  
        p_buffer->Status = QUEUED; 

        if (  (MB_ID_Ref < p_TXBuffer->mbp)            /* queued message object higher priority than message object in msCAN  */   
            ||(MB_ID_Ref <(p_TXBuffer+1)->mbp)
            ||(MB_ID_Ref < (p_TXBuffer+2)->mbp))                  
        {
            lowestPriority = p_TXBuffer->mbp;          /* find msCAN buffer with lowest priority message object */
            lowestPriorityTXBuffer = 0x01;

            if ((p_TXBuffer+1)->mbp > lowestPriority)
            {
                lowestPriority = (p_TXBuffer+1)->mbp;
                lowestPriorityTXBuffer = 0x02;
            }
            if ((p_TXBuffer+2)->mbp > lowestPriority)
            {
                lowestPriority = (p_TXBuffer+2)->mbp;
                lowestPriorityTXBuffer = 0x04;
            }
            p->CANTARQ.Byte |= lowestPriorityTXBuffer;     /* set ABTRQ for msCAN buffer */

            if((AbortMessage[AChn_Transformed] == 0xff) || (MB_ID_Ref < (MSCANBuffers[AChn_Transformed]+AbortMessage[AChn_Transformed])->ID))         
            {
                AbortMessage[AChn_Transformed] = ABuffer;  /* highest priority queued message buffer, causing abort */ 
            }
        }
    }

    /* Else: msCAN transmit buffer is available:
    * Find free tx buffer: copy identifier into buffer.
    * If data frame is to be transmitted, copy data and DLC into buffer, otherwise set RTR bit.
    * Write priority reg, schedule buffer and enable interrupt.
    */

    else
    {
        if (p_TXBuffer->mb == 0xff)                          /* TX_BUFF0 is empty */
        {
            p_TXBuffer->mbp = p_buffer->ID;
            p_TXBuffer->mb = ABuffer;                        /* write buffer # */
            Load_CAN_Buff(AChn, TX_buff0, ABuffer, MB_ID_Ref);
            p->CANTFLG.Byte = 0x01;                          /* write 1 to TXE to schedule buffer */
            p->CANTIER.Byte |= 0x01;                         /* enable interrupt for this buffer */
        }
        else
        {
            if ((p_TXBuffer + 1)->mb == 0xff)                /* TX_BUFF1 is empty */
            {
                (p_TXBuffer+1)->mbp = p_buffer->ID;              
                (p_TXBuffer + 1)->mb = ABuffer;              /* write buffer # */
                Load_CAN_Buff(AChn, TX_buff1, ABuffer, MB_ID_Ref);
                p->CANTFLG.Byte = 0x02;                      /* write 1 to TXE to schedule buffer */
                p->CANTIER.Byte |= 0x02;                     /* enable interrupt for this buffer */
            }                                            
            else                                             /* TX_BUFF2 is empty */
            {
                (p_TXBuffer+2)->mbp = p_buffer->ID;
                (p_TXBuffer + 2)->mb = ABuffer;              /* write buffer # */
                Load_CAN_Buff(AChn, TX_buff2, ABuffer, MB_ID_Ref);
                p->CANTFLG.Byte = 0x04;                      /* write 1 to TXE to schedule buffer */
                p->CANTIER.Byte |= 0x04;                     /* enable interrupt for this buffer */
            }
			#if (no_of_msCAN_TXbuffer != 3)
			#error msCAN buffer not checked
			#endif
        }
    }     /* end: if all msCAN transmit buffers are already scheduled */
}

/***************************************************************************
* Function :   Load_CAN_Buff
*
* Description: Internal driver function
* 
* Returns:     None                   
*
* Notes:       All interrupts must be disabled when this function is called 
*
**************************************************************************/
void Load_CAN_Buff(uint8 AChn, uint8 ATX_Buff, uint8 ABuffer, uint8 AMO_ID_Ref)
{
    uint16 *bufferData;                        
    uint16 *pData;
    uint8 dataLength; 
    uint8 AChn_Transformed = vChnIdx[AChn];
    pMSCANReg p = MSCANRegs[AChn_Transformed];
    PMSCANBuffer p_buffer = MSCANBuffers[AChn_Transformed]+ABuffer;
    PMSCANIdentifier p_ID = MSCANIdentifier[AChn_Transformed]+AMO_ID_Ref;
    
    p->CANTBSEL.Byte = ATX_Buff;                    /* select TX buffer into register space */
    
    /* copy 32-bit ID to msCAN buffer */
    p->CANTXIDR.Byte = (uint8)(p_ID->data>>24);
    p->CANTXIDR1.Byte = (uint8)(p_ID->data>>16);
    p->CANTXIDR2.Byte = (uint8)(p_ID->data>>8);
    p->CANTXIDR3.Byte = (uint8)(p_ID->data>>0);

    if (p_buffer->Mode == TXRF)                     /* remote frame to be transmitted */
    {
        if (p_ID->type == CAN_STANDARD)
        {
            p->CANTXIDR1.Byte |= 0x10;              /* set RTR in Standard Identifier */
        }
        else                                        /* extended ID */
        {
            p->CANTXIDR3.Byte |= 0x01;              /* set RTR in Extended Identifier */
        }
    }                                               /* end: if remote frame */
    else                                            /* data frame to be transmitted */
    {
        dataLength = p_buffer->DLC;
        
        p->CANTXDLR.Byte = dataLength;              /* copy DLC to msCAN buffer */

        bufferData = (uint16*)(p_buffer->Data);     

        pData = (uint16*)&(p->CANTXDSR0.Byte);
        
        *(pData++) = *(bufferData++);
        *(pData++) = *(bufferData++);
        *(pData++) = *(bufferData++);
        *(pData) = *(bufferData);                   /* copy data to msCAN buffer */                                          
    }               
    p->CANTXTBPR.Byte = p_buffer->ID;               /* set priority = ID_Ref */
    p_buffer->Status = QUEUED2;
}

/***************************************************************************
* Interrupt:   CAN_Transmit
*
* Description: msCAN transmit interrupt handler.
* 
* Returns:     None.                   
*
* Notes:       None 
*
**************************************************************************/
void CAN_Transmit(uint8 AChn)
{
    uint8 AChn_Transformed = vChnIdx[AChn];
    uint8  TX_Buff;
    uint8  interruptBufferBit,
           interruptBufferNo, 
           buffer, 
           highestPriority = 0xff, 
           highestPriorityBuffer,
           nextBuffer = LowestQueuedBuffer[AChn_Transformed];
    pMSCANReg p = MSCANRegs[AChn_Transformed];
    PMSCANTXBuffer p_TXBuffer = MSCANTXBuffers[AChn_Transformed];
    PMSCANBuffer p_Buffer = MSCANBuffers[AChn_Transformed];

#ifdef BENCHMARK
    GPIOA_PSOR |= 1; /* set bit 1 */
#endif

    /* Find buffer that caused interrupt, and write new status */

    interruptBufferBit = (p->CANTFLG.Byte & p->CANTIER.Byte);                 /* position of set bit indicates buffer */

    if (interruptBufferBit & 0x01)
    {
        interruptBufferNo = 0;
        TX_Buff = TX_buff0;
        p->CANTIER.Byte &= ~0x01;                       /* disable interrupt */
    }
    else
    {
        if (interruptBufferBit & 0x02)
        {
            interruptBufferNo = 1;
            TX_Buff = TX_buff1;
            p->CANTIER.Byte &= ~0x02;                   /* disable interrupt */
        }
        else
        {
            interruptBufferNo = 2;
            TX_Buff = TX_buff2;
            p->CANTIER.Byte &= ~0x04;                   /* disable interrupt */
        }
    #if (no_of_msCAN_TXbuffer != 3)
    #error msCAN buffer not checked
    #endif
    }
    buffer = (p_TXBuffer + interruptBufferNo)->mb;      /* buffer number */
    (p_TXBuffer + interruptBufferNo)->mb = 0xff;        /* clear Message Buffer from MB_MSCAN */
    (p_TXBuffer + interruptBufferNo)->mbp = 0xff;       /* initialise message buffer priority */

    if (p->CANTAAK.Byte & interruptBufferBit)           /* transmission aborted */
    {
        
        if ((p_Buffer + buffer)->Status == QUEUED2)     /* aborted due to higher priority queued MB */
        {                                                                 
            (p_Buffer + buffer)->Status = QUEUED;       /* set message buffer queued to put back in queue */
            if (buffer < LowestQueuedBuffer[AChn_Transformed])
            {
                nextBuffer = LowestQueuedBuffer[AChn_Transformed] = buffer;
            }
        }
        else
        {                                                     
            if ((p_Buffer + buffer)->Status == ABORTREQ)/* aborted due to AbortMB_CAN */    
            {                                                           
                (p_Buffer + buffer)->Status = ABORTED;
            }
        }                                               /* otherwise aborted due to ConfigMB_CAN */
    }
    else        /* transmission completed */
    {
        if ((p_Buffer + buffer)->Mode == TXRF)          /* transmitted remote frame */
        {                                                  
            (p_Buffer + buffer)->Mode = RXDF;           /* receive data frame */
            (p_Buffer + buffer)->Status = NODATA;
        }
        else                                            /* transmitted Data TXDF or AUTOTXDF */
        {           
            (p_Buffer + buffer)->Status = TRANSMITTED;
        }
# if (TIMESTAMP_CAN)
        if (TimeStampOption[AChn_Transformed])
        {
            p->CANTBSEL.Byte = interruptBufferBit;
            (p_Buffer + buffer)->BufferTimeStamp_CAN = p->CANTXTSR.Word;      
        }
# endif
    }              
    /* end: else transmission completed */

    /* source of interrupt now dealt with */

    /* find highest priority queued message buffer */

    if(AbortMessage[AChn_Transformed] == 0xff)                             /* no abort due to higher priority message object */
    {                                                                             
        for(buffer = LowestQueuedBuffer[AChn_Transformed]; buffer < NoOfMB[AChn_Transformed]; buffer++)             
        {                                                                       
            if ((p_Buffer + buffer)->Status == QUEUED)  
            {
                if(nextBuffer == LowestQueuedBuffer[AChn_Transformed])     /* search for next queued message buffer */
                {
                    nextBuffer = buffer;                      
                }
                if ((p_Buffer + buffer)->ID < highestPriority)             /* search for highest priority queued buffer */
                {
                    highestPriority = (p_Buffer + buffer)->ID;
                    highestPriorityBuffer = buffer;
                }
            }
        }

        if (highestPriorityBuffer == LowestQueuedBuffer[AChn_Transformed])
        {
            LowestQueuedBuffer[AChn_Transformed] = nextBuffer;            /* start of search for next TxISR */
        }
    }
    else                                                                  /* highest priority message buffer known */
    {
                                                                          /* copy the message number that caused the abort */
        highestPriorityBuffer = AbortMessage[AChn_Transformed];
        highestPriority = (p_Buffer + buffer)->ID;
        AbortMessage[AChn_Transformed] = 0xff;                            /* show that this message has been handled */
    }
    if (highestPriority == 0xff)                                          /* no message buffers queued: assume < 256 message buffers */
    {
        if (DriverFlags[AChn] & SLEEP)
        {
            if (p->CANTFLG.Byte == 0x07)                                   /* msCAN transmit buffers all transmitted */
            {
                p->CANCTL0.Byte |= SLPRQ;                                  /* set msCAN SLEEP request */
                p->CANRIER.Byte |= WUPIE;                                  /* enable wakeup interrupt */
                DriverFlags[AChn] &= ~SLEEP;                               /* clear sleep request */
            }
        }
    }
    else
        /* Message queued: copy highest priority MO into msCAN buffer and schedule transmission   */
    {
        Load_CAN_Buff (AChn ,TX_Buff, highestPriorityBuffer, (p_Buffer + highestPriorityBuffer)->ID);

        p->CANTFLG.Byte = interruptBufferBit;                              /* write 1 to TXE to schedule buffer */
        p->CANTIER.Byte |= interruptBufferBit;                             /* enable interrupt for this buffer */
        (p_TXBuffer + interruptBufferNo)->mb = highestPriorityBuffer;      /* write buffer # */
        (p_TXBuffer + interruptBufferNo)->mbp = highestPriority;           /* write priority of buffer */

    } /* end else: message buffer queued */
    #ifdef BENCHMARK
    	GPIOA_PCOR |= 1;                                                    /* clear bit 1 */
    #endif

    return;
}

/***************************************************************************
* Interrupt:   CAN_Receive
*
* Description: msCAN receive interrupt handler.
* 
* Returns:     None.                   
*
* Notes:       None 
*
**************************************************************************/
void CAN_Receive (uint8 AChn)
{
    uint32 *MO_ID8_CAN_Ptr;
    uint8 *bufferDataPtr;
    uint8 *DataPtr;         
    uint8 RX_IdentifierType, 
          RX_FrameType,
          MB_ID_Type, 
          MB_ID_Ref, 
          match,
          dataLength, 
          buffer, 
          i,
          bufferMode;
    uint8 AChn_Transformed = vChnIdx[AChn];
    pMSCANReg p = MSCANRegs[AChn_Transformed];
    PMSCANBuffer p_Buffer = MSCANBuffers[AChn_Transformed];
#ifdef BENCHMARK
    GPIOA_PTOR = 1<<16;
    GPIOA_PSOR |= 2;                                                             /* set bit 0 */
#endif

    if (DriverFlags[AChn] & SLEEP)
    {
        DriverFlags[AChn] &= ~SLEEP;                                            /* clear SLEEP request */
        p->CANRIER.Byte &= ~WUPIE;                                              /* clear wakeup interrupt enable */
    }

    /* Find received Identifier Type and Frame Type */

    RX_IdentifierType = p->CANRXIDR1.Byte & CAN_IDE;                            /* test IDE bit */

    if (RX_IdentifierType == CAN_STANDARD)                                      /* IDE clear */
    {
        RX_FrameType = p->CANRXIDR1.Byte & CAN_SRTR;                            /* test RTR bit */
    }

    else                                                                        /* extended ID */
    {
        RX_FrameType = p->CANRXIDR3.Byte & CAN_ERTR;                            /* test RTR bit */
    }

    match = FALSE;

if (REAL_TIME_BUFFER_Option[AChn_Transformed]) 
    {
        /*All received message will be stored in the realtime buffer at first and then be stored in corresponding buffers*/
        REALTIMEBuffers[AChn_Transformed]->ID_Type = RX_IdentifierType;
        REALTIMEBuffers[AChn_Transformed]->Frame_Type = RX_FrameType;
        REALTIMEBuffers[AChn_Transformed]->DLC = p->CANRXDLR.Byte & 0x0F;
    
        if (RX_IdentifierType == CAN_STANDARD) 
        {
            REALTIMEBuffers[AChn_Transformed]->ID = (((uint32)p->CANRXIDR0.Byte) <<3) | (((uint32)p->CANRXIDR1.Byte) >> 5);
        } 
        else 
        {
            REALTIMEBuffers[AChn_Transformed]->ID = (((uint32)p->CANRXIDR0.Byte) <<21) | ((((uint32)p->CANRXIDR1.Byte) & 0xE0) << 13) | ((((uint32)p->CANRXIDR1.Byte) & 0x07) << 15) | (((uint32)p->CANRXIDR2.Byte) << 7) | ((((uint32)p->CANRXIDR3.Byte) & 0xFE) >> 1);
        }
        bufferDataPtr = REALTIMEBuffers[AChn_Transformed]->Data;                     /* calculate first dimension */
        DataPtr = (unsigned char*)&(p->CANRXDSR0) ;
        for (i = 0; i < REALTIMEBuffers[AChn_Transformed]->DLC; i++)
            {
                bufferDataPtr[i] = *DataPtr;                                         /* copy data */
                DataPtr++;
            }
# if (TIMESTAMP_CAN)            
        if (TimeStampOption[AChn_Transformed]) 
        {	
		    REALTIMEBuffers[AChn_Transformed]->BufferTimeStamp_CAN = p->CANRXTSR.Word; 
        }
# endif        

    }

    /* Find matching buffer (if any): for each buffer:
    * If Data Frame received and buffer mode = RXDF 
    * or Remote Frame received and buffer mode = AUTOTXDF,
    * and if received Identifier type = buffer identifier type,
    * then compare received Identifier with buffer identifier,
    * until match found or all buffers tested.
    *
    * Note: TXRF buffers are not tested although ReceiveISR_CAN may 
    * theoretically be executed before TransmitISR_CAN
    */

    for (buffer = 0; buffer < NoOfMB[AChn_Transformed]; buffer++)
    {
        bufferMode = (MSCANBuffers[AChn_Transformed] + buffer)->Mode;

        if (   ((RX_FrameType == DATAFRAME) && (bufferMode == RXDF))
            || ((RX_FrameType != DATAFRAME) && (bufferMode == AUTOTXDF)))
        {
            MB_ID_Ref      = (p_Buffer + buffer)->ID;
            MB_ID_Type     = (MSCANIdentifier[AChn_Transformed]+MB_ID_Ref)->type & 0x08;
            MO_ID8_CAN_Ptr = (uint32*)&(MSCANIdentifier[AChn_Transformed]+MB_ID_Ref)->data;
            
            if (RX_IdentifierType == CAN_STANDARD)
            {
                if (MB_ID_Type == CAN_STANDARD)                                 /* MB_ID_Type matches */
                {
                    if (  (p->CANRXIDR0.Byte           == (*MO_ID8_CAN_Ptr&0xFF000000)>>24)    /* ID10 to ID3 match */
                        && ((p->CANRXIDR1.Byte & 0xE0) == (*MO_ID8_CAN_Ptr&0x00E00000)>>16))   /* ID2 to ID0 match */
                    {
                        match = TRUE;                                           /* match found */
                        break;
                    }
                }
            }                                                                   /* end: if identifier == STANDARD */

            else                                                                /* MO_IdentiferType == EXTENDED */
            {
                if (MB_ID_Type != CAN_STANDARD)                                 /* MB_ID_Type matches */
                {
                    if (    (p->CANRXIDR0.Byte         == MO_ID8_CAN_Ptr[3])    /* ID28 to ID21 match */
                        &&  (p->CANRXIDR1.Byte         == MO_ID8_CAN_Ptr[2])    /* ID20 to ID15 match */
                        &&  (p->CANRXIDR2.Byte         == MO_ID8_CAN_Ptr[1])    /* ID14 to ID7 match */
                        && ((p->CANRXIDR3.Byte & 0xFE) == MO_ID8_CAN_Ptr[0]))
                    	/* ID6 to ID0 match */
                    {
                        match = TRUE;                                           /* match found */
                        break;
                    }
                }                                                               /* end: if identifier type match */
            }                                                                   /* end: else identifier = extended */
        }                                                                       /* end: if buffer mode */
    }                                                                           /* end: for buffer < NO_OF_MB */

    if (match)
    {
        if (bufferMode == AUTOTXDF)
        {
            Queue_CAN_MB (AChn, buffer);                                        /* queue buffer, copy to msCAN if buffer available,   */
         /* abort msCAN buffer if all full and this buffer higher priority */
        }           

        else                                                                    /* bufferMode == RXDF */
        {
            dataLength = p->CANRXDLR.Byte & 0x0F;                               /* mask upper nibble - undefined */

            if (dataLength > 8)
            {
                dataLength = 8;
            }

            (p_Buffer + buffer)->DLC = dataLength;                              /* copy DLC */

            bufferDataPtr = (p_Buffer + buffer)->Data;                          /* calculate first dimension */
            DataPtr = (unsigned char*)&(p->CANRXDSR0) ;
            for (i = 0; i < dataLength; i++)
            {
                bufferDataPtr[i] = *DataPtr;                                    /* copy data */
                DataPtr++;
            }
# if (TIMESTAMP_CAN)
            if (TimeStampOption[AChn_Transformed])                              /* copy timestamp to Message Buffer */
            {
                (p_Buffer + buffer)->BufferTimeStamp_CAN = p->CANRXTSR.Word;
                
            }
# endif            

            if (  ((p_Buffer + buffer)->Status == READDATA)            
                ||((p_Buffer + buffer)->Status == NODATA))
            {
                (p_Buffer + buffer)->Status = NEWDATA;
            }

            else
            {
                (p_Buffer + buffer)->Status = OVERRUN;                         /* previous data not read */
            }

        }             /* end: bufferMode == RXDF */
    }                 /* end: match == TRUE */

    p->CANRFLG.Byte = RXF;                                                     /* write 1 to clear RXF */

#ifdef BENCHMARK
    GPIOA_PCOR |= 2;                                                            /* clear bit 0 */
#endif

    return;
}

/***************************************************************************
* Interrupt:   CAN_Wakeup
*
* Description: msCAn wake up interrupt handler.
* 
* Returns:     None.                   
*
* Notes:       None 
*
**************************************************************************/
void CAN_Wakeup(uint8 AChn)
{
    uint8 AChn_Transformed = vChnIdx[AChn];
    MSCANRegs[AChn_Transformed]->CANRFLG.Byte = WUPIF;                          /* clear wakeup interrupt flag */
    MSCANRegs[AChn_Transformed]->CANRIER.Byte &= ~WUPIE;                        /* clear wakeup interrupt enable */
}

/***************************************************************************
* Function :   Register_Callback
*
* Description: Register Err Callback function for a msCAN Channel
*              a User defined Callback function can not be used if not registered
* 
* Returns:     ERR_OK if no error, otherwise error code.                   
*
* Notes:       Err_Callback_Enable should be defined as TRUE to use the function 
*
**************************************************************************/

#if (Err_Callback_Enable)
uint8 Register_Callback(const uint8 AChn, const pErr_Callbacks_User_Def FUN_User_Def)  /* FUN_User_Def is a Callback function written by user */
{
    if(AChn >= MSCAN_CHANNELS_MAX) 
        {
            return ERR_CHN;
        }
    ErrCallbacks_User_Def[AChn] = FUN_User_Def;		 /* regiser the function */
    
    if(ErrCallbacks_User_Def[AChn])
  	  {
            return Register_Success;
  	  }
    return Register_Failed;
}

/***************************************************************************
* Function :   Unregister_Callback
*
* Description: Unregister an registered Err Callback function for a msCAN Channel 
*              a User defined Callback function will not be entered if Unregistered
* 
* Returns:     ERR_OK if no error, otherwise error code.                   
*
* Notes:       Err_Callback_Enable should be defined to use the function 
*
**************************************************************************/

uint8 Unregister_Callback(const uint8 AChn) 
{
    if(AChn >= MSCAN_CHANNELS_MAX) 
        {
            return ERR_CHN;
        }
    ErrCallbacks_User_Def[AChn] = ((void *) 0);		  /* unregiser the function */
    
    if(ErrCallbacks_User_Def[AChn])
        {
            return Unregister_Failed;
        }
            return Unregister_Success;
}
#endif

/***************************************************************************
* Interrupt:   CAN_ERR
*
* Description: msCAN error interrupt handler.
*              In ERR ISRs, Call the CallBack fuctions if existed and input 
*              the ERR_Status to the CallBack functions for user to use.
* 
* Returns:     None.                   
*
* Notes:       Definition of ERR_Status Can be Find in the msCAN driver Manual 
*
**************************************************************************/
 
void CAN_ERR (uint8 AChn)
{

#if (Err_Callback_Enable)

    uint8 ERR_Status;
    
    uint8 AChn_Transformed = vChnIdx[AChn];
    
    ERR_Status = (MSCANRegs[AChn_Transformed]->CANRFLG.Byte&(RSTAT1|RSTAT0|TSTAT1|TSTAT0|CSCIF|OVRIF))<<1;  /* get ERR_Status */
    
    if(ErrCallbacks_User_Def[AChn]) 
    {
        ErrCallbacks_User_Def[AChn](ERR_Status);                           /* call the ErrCallback Functions if existed */
    }
    
    MSCANRegs[AChn_Transformed]->CANRFLG.Byte |= (CSCIF|OVRIF);            /* CLEAR flags */
#endif

}



