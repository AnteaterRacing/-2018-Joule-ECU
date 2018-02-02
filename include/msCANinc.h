#ifndef MSCANINC_H
#define MSCANINC_H 
/******************************************************************************
*								              
*
*                             Copyright (C) 2013 
*
* Tongji University - Freescale Automotive Electronics Laboratory, Inc.
* 
*                            All Rights Reserved		
*														                            
* Filename:     msCANinc.h                
*														                            
* Revision:      										                    
*														                            
* Functions:    Internal Functions and Arrays definition 
*														                            
* Description:  No change by User
*
* Notes:        
*
******************************************************************************/
/****************************************************************************** 
 * Include
 ******************************************************************************/
#include "msCANstd.h"     
#include "msCANReg.h"
/******************************************************************************
 * Prototypes 
 ******************************************************************************/
 
/******************************************************************************
 * Bit defines: driverFlags
 ******************************************************************************/
#define SLEEP                 (0x01)
//#define IMASK                 (0x10)  

/******************************************************************************
 * msCAN defines 
 ******************************************************************************/
#define NO_OF_FILTER_REG      (16)		/* 8 code registers plus 8 mask registers */
#define no_of_msCAN_TXbuffer  (3)	  	/*	msCAN has 3 Tx buffers */

#define CAN_CHN_USED          (CAN0_USED | CAN1_USED | CAN2_USED | CAN3_USED | CAN4_USED)
#define CAN0_CHN_COUNT        (CAN0_USED)
#define CAN01_CHN_COUNT       (CAN0_USED + (CAN1_USED >> 1))
#define CAN012_CHN_COUNT      (CAN0_USED + (CAN1_USED >> 1) + (CAN2_USED >> 2))
#define CAN0123_CHN_COUNT     (CAN0_USED + (CAN1_USED >> 1) + (CAN2_USED >> 2) + (CAN3_USED >> 3))
#define CAN_CHN_COUNT         (CAN0_USED + (CAN1_USED >> 1) + (CAN2_USED >> 2) + (CAN3_USED >> 3) + (CAN4_USED >> 4))

#define CAN0_BUFFER_COUNT     (CAN0_USED * no_of_mb_CAN0)
#define CAN01_BUFFER_COUNT    (CAN0_USED * no_of_mb_CAN0 + (CAN1_USED >> 1) * no_of_mb_CAN1)
#define CAN012_BUFFER_COUNT   (CAN0_USED * no_of_mb_CAN0 + (CAN1_USED >> 1) * no_of_mb_CAN1 + (CAN2_USED >> 2) * no_of_mb_CAN2)
#define CAN0123_BUFFER_COUNT  (CAN0_USED * no_of_mb_CAN0 + (CAN1_USED >> 1) * no_of_mb_CAN1 + (CAN2_USED >> 2) * no_of_mb_CAN2 + (CAN3_USED >> 3) * no_of_mb_CAN3)
#define CAN_BUFFER_COUNT      (CAN0_USED * no_of_mb_CAN0 + (CAN1_USED >> 1) * no_of_mb_CAN1 + (CAN2_USED >> 2) * no_of_mb_CAN2 + (CAN3_USED >> 3) * no_of_mb_CAN3 + (CAN4_USED >> 4) *no_of_mb_CAN4)

#define CAN0_ID_COUNT         (CAN0_USED * no_of_ID_CAN0)
#define CAN01_ID_COUNT        (CAN0_USED * no_of_ID_CAN0 + (CAN1_USED >> 1) * no_of_ID_CAN1)
#define CAN012_ID_COUNT       (CAN0_USED * no_of_ID_CAN0 + (CAN1_USED >> 1) * no_of_ID_CAN1 + (CAN2_USED >> 2) * no_of_ID_CAN2)
#define CAN0123_ID_COUNT      (CAN0_USED * no_of_ID_CAN0 + (CAN1_USED >> 1) * no_of_ID_CAN1 + (CAN2_USED >> 2) * no_of_ID_CAN2 + (CAN3_USED >> 3) * no_of_ID_CAN3)
#define CAN_ID_COUNT          (no_of_ID_CAN1 +  no_of_ID_CAN0 +  no_of_ID_CAN2 +  no_of_ID_CAN3 + no_of_ID_CAN4)

/***************************************************************************
 
 * Description: Internal driver function
 *                   
 *
 * Notes:       Not cared by User
**************************************************************************/
 
void Queue_CAN_MB(uint8 AChn, uint8 ABuffer);
uint8 Read_MB_Data(uint8 AChn, uint8 ABuffer, uint8* ADataPtr);
void Load_CAN_Buff(uint8 AChn, uint8 ATX_Buff, uint8 ABuffer, uint8 AMO_ID_Ref);

/**************************************************************************/
/***************************************************************************
 
 * Description: Internal driver statement		        
 *                   
 *
 * Notes:       Not cared by User
**************************************************************************/

extern const pMSCANReg MSCANRegs[];		 
extern const PMSCANDef MSCANDef[];
extern const PMSCANBuffer MSCANBuffers[];
extern const PMSCANTXBuffer MSCANTXBuffers[];
extern const PMSCANIdentifier MSCANIdentifier[];
extern const PREALTIMEBuffer REALTIMEBuffers[];

/**************************************************************************/
#endif	

/* MSCANINC_H */
