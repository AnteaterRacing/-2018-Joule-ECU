#ifndef MSCANCFG_H
#define MSCANCFG_H           
/******************************************************************************							              
*
*                             Copyright (C) 2013 
*
* Tongji University - Freescale Automotive Electronics Laboratory, Inc.
* 
*                            All Rights Reserved		
*														                            
* Filename:     msCANcfg.h                
*														                            
* Revision:      										                    
*														                            
* Functions:    Defines for msCAN
*														                            
* Description:  Configuration file for the msCAN module,User can carefully do 
                some configuration work to have different features of the msCAN 
                driver.
*
* Notes:        Don't change the part below DON'T CHANGE
*
******************************************************************************/

/****************************************************************************** 
* Include
******************************************************************************/
 
// Symbol Definitions -------------------------------
/* Here define the name of the used MCU equipped with msCAN module*/
#define KEA128

// MC9S12XEP100 MSCAN Module Definition ---------------------------
/* Define MSCAN channel number and channels used */
#ifdef MC9S12XEP100   
#define MSCAN0
#define MSCAN1
#define MSCAN2
#define MSCAN3
#define MSCAN4
#endif

// MC9S12G128 MSCAN Module Definition ---------------------------
/* Define MSCAN channel number and channels used */
#ifdef MC9S12G128
#define MSCAN0
#endif


//KEA128 MSCAN Module Definition-----------------------------------
/*Define MSCAN channel number and channels used*/
#ifdef KEA128
#define MSCAN0
#endif

/* "Err_Callback_Enable_CAN" define whether the Error Callback function is enabled for all msCAN modules*/
#define Err_Callback_Enable	   TRUE

/******************************************************************************
* Number of Message Buffers for msCAN module
* Define the number of Message Buffers for each msCAN module.
******************************************************************************/
#define no_of_mb_CAN0         (32)
#define no_of_mb_CAN1         (16) 
#define no_of_mb_CAN2         (16) 
#define no_of_mb_CAN3         (16)
#define no_of_mb_CAN4         (16)

/******************************************************************************
* Define whether Time Stamp is required for msCAN module messages
******************************************************************************/
#define TIMESTAMP_CAN0 TRUE
#define TIMESTAMP_CAN1 TRUE
#define TIMESTAMP_CAN2 TRUE
#define TIMESTAMP_CAN3 TRUE
#define TIMESTAMP_CAN4 TRUE
         
/* Real Time buffer will be used to store all received message, This Macro decides whether enable the function*/
#define REAL_TIME_BUFFER_ENABLE_CAN0	   FALSE
#define REAL_TIME_BUFFER_ENABLE_CAN1	   FALSE
#define REAL_TIME_BUFFER_ENABLE_CAN2	   FALSE
#define REAL_TIME_BUFFER_ENABLE_CAN3	   FALSE
#define REAL_TIME_BUFFER_ENABLE_CAN4	   FALSE

/******************************************************************************
* Define msCAN module clock source: BUSCLK or MCGERCLK
* Permitted values: BUSCLK:   Bus clock is used as clock source 
*                   MCGERCLK: Oscillator clock is used as clock source
******************************************************************************/
#define CLKSRC_CAN0 BUSCLK
#define CLKSRC_CAN1 MCGERCLK
#define CLKSRC_CAN2 MCGERCLK
#define CLKSRC_CAN3 MCGERCLK
#define CLKSRC_CAN4 MCGERCLK           

/******************************************************************************
* Define clock prescaler for msCAN module: permitted values 1 to 64
* msCAN module clock = CLKSRC_CAN / PRESCALER_CAN
* Set different Prescaler for all CAN Channels, in case the Oscillator Frequency is 20M
* Note: User can carefully change this part to get different bitrate
******************************************************************************/
#define PRESCALER_CAN0          (2)	   
#define PRESCALER_CAN1          (2)	   
#define PRESCALER_CAN2          (2)	   
#define PRESCALER_CAN3          (2)	   
#define PRESCALER_CAN4          (2)	   

/******************************************************************************
* Define msCAN module bit timing
*
* Permitted values:
*                   PHASE_SEG1_CAN: 1 to 16 time quanta
*                   PHASE_SEG2_CAN: 1 to 8 time quanta
* Bit time = (1 + TIME_SEG1_CAN + TIME_SEG2_CAN) * time quanta
* Note: User can carefully change this part to get different bitrate
******************************************************************************/
#define TIME_SEG1_CAN0          (13)
#define TIME_SEG1_CAN1          (13)
#define TIME_SEG1_CAN2          (13)
#define TIME_SEG1_CAN3          (13)
#define TIME_SEG1_CAN4          (13)
#define TIME_SEG2_CAN0          (6)
#define TIME_SEG2_CAN1          (6)
#define TIME_SEG2_CAN2          (6)
#define TIME_SEG2_CAN3          (6)
#define TIME_SEG2_CAN4          (6)


/******************************************************************************
* Define msCAN module re-synchronisation jump width
* Permitted values: 1 to smaller of 4 and PHASE_SEG1_CAN time quanta
******************************************************************************/
#define RJW_CAN0               (0)
#define RJW_CAN1               (0)
#define RJW_CAN2               (0)
#define RJW_CAN3               (0)
#define RJW_CAN4               (0)

/******************************************************************************
* Define msCAN module listen mode
* Permitted values: TRUE:  msCAN in listen mode
*                   FALSE: msCAN not in listen mode
******************************************************************************/
#define LISTEN_CAN0 FALSE
#define LISTEN_CAN1 FALSE
#define LISTEN_CAN2 FALSE
#define LISTEN_CAN3 FALSE
#define LISTEN_CAN4 FALSE

/******************************************************************************
* Define msCAN module enable
* Permitted values: TRUE:  msCAN in enabled                  
*                   FALSE: msCAN not enabled
******************************************************************************/
#define CANENABLE_CAN0 TRUE
#define CANENABLE_CAN1 TRUE
#define CANENABLE_CAN2 TRUE
#define CANENABLE_CAN3 TRUE
#define CANENABLE_CAN4 TRUE

/******************************************************************************
* Define msCAN LOOP BACK MODE
* Permitted values: TRUE:  msCAN in LOOP BACK MODE                  
*                   FALSE: msCAN not in LOOP BACK MODE
******************************************************************************/
#define LOOPBACK_CAN0 FALSE
#define LOOPBACK_CAN1 FALSE
#define LOOPBACK_CAN2 FALSE
#define LOOPBACK_CAN3 FALSE
#define LOOPBACK_CAN4 FALSE
/******************************************************************************
* Define msCAN module samples per bit
* Permitted values: TRUE:  3 samples per bit (PHASE_SEG1_CAN >= 2)
*                   FALSE: 1 sample  per bit
******************************************************************************/
#define SAMPLEX3_CAN0 TRUE
#define SAMPLEX3_CAN1 TRUE
#define SAMPLEX3_CAN2 TRUE
#define SAMPLEX3_CAN3 TRUE
#define SAMPLEX3_CAN4 TRUE

/******************************************************************************
* Define whether msCAN module is not clocked when MCU is in WAIT mode
* Note: only applies to msCAN
******************************************************************************/
#define CSWAI_CAN0 FALSE
#define CSWAI_CAN1 FALSE
#define CSWAI_CAN2 FALSE
#define CSWAI_CAN3 FALSE
#define CSWAI_CAN4 FALSE

/******************************************************************************
* Define whether activity on the CAN bus will wake-up msCAN module when in SLEEP mode
******************************************************************************/
#define WU_ENABLE_CAN0 FALSE
#define WU_ENABLE_CAN1 FALSE
#define WU_ENABLE_CAN2 FALSE
#define WU_ENABLE_CAN3 FALSE
#define WU_ENABLE_CAN4 FALSE

/******************************************************************************
* Define whether wake-up filter is applied to msCAN module when in SLEEP mode
******************************************************************************/
#define WU_FILTER_CAN0 TRUE
#define WU_FILTER_CAN1 TRUE
#define WU_FILTER_CAN2 TRUE
#define WU_FILTER_CAN3 TRUE
#define WU_FILTER_CAN4 TRUE

/*******************************************************************************
* Define Message Object Acceptance Filter size for msCAN module
* Permitted values: AF32BIT (32 bit)
*                   AF16BIT (16 bit)
*                   AF8BIT  (8 bit)
******************************************************************************/
#define ACC_FILTER_CAN0 AF32BIT
#define ACC_FILTER_CAN1 AF32BIT
#define ACC_FILTER_CAN2 AF32BIT
#define ACC_FILTER_CAN3 AF32BIT
#define ACC_FILTER_CAN4 AF32BIT

/******************************************************************************
* Define Message Object Acceptance Code for msCAN module
* These values are written into CANIDAR0 to CANIDAR7
******************************************************************************/
#define ID_CODE0_CAN0 0xFF
#define ID_CODE1_CAN0 0xFF
#define ID_CODE2_CAN0 0xFF
#define ID_CODE3_CAN0 0xFF
#define ID_CODE4_CAN0 0xFF
#define ID_CODE5_CAN0 0xFF
#define ID_CODE6_CAN0 0xFF
#define ID_CODE7_CAN0 0xFF

#define ID_CODE0_CAN1 0xFF
#define ID_CODE1_CAN1 0xFF
#define ID_CODE2_CAN1 0xFF
#define ID_CODE3_CAN1 0xFF
#define ID_CODE4_CAN1 0xFF
#define ID_CODE5_CAN1 0xFF
#define ID_CODE6_CAN1 0xFF
#define ID_CODE7_CAN1 0xFF

#define ID_CODE0_CAN2 0xFF
#define ID_CODE1_CAN2 0xFF
#define ID_CODE2_CAN2 0xFF
#define ID_CODE3_CAN2 0xFF
#define ID_CODE4_CAN2 0xFF
#define ID_CODE5_CAN2 0xFF
#define ID_CODE6_CAN2 0xFF
#define ID_CODE7_CAN2 0xFF

#define ID_CODE0_CAN3 0xFF
#define ID_CODE1_CAN3 0xFF
#define ID_CODE2_CAN3 0xFF
#define ID_CODE3_CAN3 0xFF
#define ID_CODE4_CAN3 0xFF
#define ID_CODE5_CAN3 0xFF
#define ID_CODE6_CAN3 0xFF
#define ID_CODE7_CAN3 0xFF

#define ID_CODE0_CAN4 0xFF
#define ID_CODE1_CAN4 0xFF
#define ID_CODE2_CAN4 0xFF
#define ID_CODE3_CAN4 0xFF
#define ID_CODE4_CAN4 0xFF
#define ID_CODE5_CAN4 0xFF
#define ID_CODE6_CAN4 0xFF
#define ID_CODE7_CAN4 0xFF

/******************************************************************************
* Define Message Object Acceptance Filter Mask for msCAN module
* These values are written into CIDMR0 to CIDMR7  
* Bit set = mask (ignore) corresponding bit of ID_CODEn_CAN
******************************************************************************/
#define ID_MASK0_CAN0 0xFF
#define ID_MASK1_CAN0 0xFF
#define ID_MASK2_CAN0 0xFF
#define ID_MASK3_CAN0 0xFF
#define ID_MASK4_CAN0 0xFF
#define ID_MASK5_CAN0 0xFF
#define ID_MASK6_CAN0 0xFF
#define ID_MASK7_CAN0 0xFF

#define ID_MASK0_CAN1 0xFF
#define ID_MASK1_CAN1 0xFF
#define ID_MASK2_CAN1 0xFF
#define ID_MASK3_CAN1 0xFF
#define ID_MASK4_CAN1 0xFF
#define ID_MASK5_CAN1 0xFF
#define ID_MASK6_CAN1 0xFF
#define ID_MASK7_CAN1 0xFF

#define ID_MASK0_CAN2 0xFF
#define ID_MASK1_CAN2 0xFF
#define ID_MASK2_CAN2 0xFF
#define ID_MASK3_CAN2 0xFF
#define ID_MASK4_CAN2 0xFF
#define ID_MASK5_CAN2 0xFF
#define ID_MASK6_CAN2 0xFF
#define ID_MASK7_CAN2 0xFF

#define ID_MASK0_CAN3 0xFF
#define ID_MASK1_CAN3 0xFF
#define ID_MASK2_CAN3 0xFF
#define ID_MASK3_CAN3 0xFF
#define ID_MASK4_CAN3 0xFF
#define ID_MASK5_CAN3 0xFF
#define ID_MASK6_CAN3 0xFF
#define ID_MASK7_CAN3 0xFF

#define ID_MASK0_CAN4 0xFF
#define ID_MASK1_CAN4 0xFF
#define ID_MASK2_CAN4 0xFF
#define ID_MASK3_CAN4 0xFF
#define ID_MASK4_CAN4 0xFF
#define ID_MASK5_CAN4 0xFF
#define ID_MASK6_CAN4 0xFF
#define ID_MASK7_CAN4 0xFF




/*-------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------
                                     DON'T CHANGE
                                     DON'T CHANGE
---------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------*/
#ifdef MC9S12XEP100
#define MSCAN_CHANNELS_MAX    (5)
/*Register base Address of each channel*/
#define MSCAN0_ADDR           (0x140)            
#define MSCAN1_ADDR           (0x180)
#define MSCAN2_ADDR           (0x1C0)
#define MSCAN3_ADDR           (0x200)
#define MSCAN4_ADDR           (0x280)
#endif

#ifdef MC9S12G128
#define MSCAN_CHANNELS_MAX    (1)
/*Register base Address of each channel*/
#define MSCAN0_ADDR           (0x140)
#endif

#ifdef KEA128
#define MSCAN_CHANNELS_MAX 		(1)
/*Register base Address of each channel*/
#define MSCAN0_ADDR				(0x40024000)
#endif

/*Macro definition used in the msCAN driver*/
#ifdef  MSCAN0
#define CAN0_USED             (0b00000001)
#else
#define CAN0_USED             (0b00000000)
#endif

#ifdef MSCAN1
#define CAN1_USED             (0b00000010)
#else
#define CAN1_USED             (0b00000000)
#endif

#ifdef MSCAN2
#define CAN2_USED             (0b00000100)
#else
#define CAN2_USED             (0b00000000)
#endif

#ifdef MSCAN3
#define CAN3_USED             (0b00001000)
#else
#define CAN3_USED             (0b00000000)
#endif

#ifdef MSCAN4
#define CAN4_USED             (0b00010000)
#else
#define CAN4_USED             (0b00000000)
#endif

/******************************************************************************
* Number of Message Buffers for msCAN module if module not used
******************************************************************************/
#ifndef MSCAN0
#undef  no_of_mb_CAN0
#define no_of_mb_CAN0         (0)
#endif

#ifndef MSCAN1
#undef  no_of_mb_CAN1
#define no_of_mb_CAN1         (0)
#endif

#ifndef MSCAN2
#undef  no_of_mb_CAN2
#define no_of_mb_CAN2         (0)
#endif

#ifndef MSCAN3
#undef  no_of_mb_CAN3
#define no_of_mb_CAN3         (0)
#endif

#ifndef MSCAN4
#undef  no_of_mb_CAN4
#define no_of_mb_CAN4         (0)
#endif

/*Indicate whether TIMESTAMP_CAN is used*/
#define TIMESTAMP_CAN  (TIMESTAMP_CAN0||TIMESTAMP_CAN1||TIMESTAMP_CAN2||TIMESTAMP_CAN3||TIMESTAMP_CAN4)

/*Indicate whether REAL_TIME_BUFFER is used*/
#define REAL_TIME_BUFFER_ENABLE  (REAL_TIME_BUFFER_ENABLE_CAN0||REAL_TIME_BUFFER_ENABLE_CAN1||REAL_TIME_BUFFER_ENABLE_CAN2||REAL_TIME_BUFFER_ENABLE_CAN3||REAL_TIME_BUFFER_ENABLE_CAN4)

/******************************************************************************
* Control register defines : do not change!
******************************************************************************/
#define CANCTL0_CAN0 ((CSWAI_CAN0 << 5)|(TIMESTAMP_CAN0 << 3)|(WU_ENABLE_CAN0 << 2))
#define CANCTL0_CAN1 ((CSWAI_CAN1 << 5)|(TIMESTAMP_CAN1 << 3)|(WU_ENABLE_CAN1 << 2))
#define CANCTL0_CAN2 ((CSWAI_CAN2 << 5)|(TIMESTAMP_CAN2 << 3)|(WU_ENABLE_CAN2 << 2))
#define CANCTL0_CAN3 ((CSWAI_CAN3 << 5)|(TIMESTAMP_CAN3 << 3)|(WU_ENABLE_CAN3 << 2))
#define CANCTL0_CAN4 ((CSWAI_CAN4 << 5)|(TIMESTAMP_CAN4 << 3)|(WU_ENABLE_CAN4 << 2))

#define CANCTL1_CAN0 ((CANENABLE_CAN0 << 7)|(LOOPBACK_CAN0<<5)|(WU_FILTER_CAN0 << 2)|(LISTEN_CAN0 << 4)|(CLKSRC_CAN0 << 6))
#define CANCTL1_CAN1 ((CANENABLE_CAN1 << 7)|(LOOPBACK_CAN1<<5)|(WU_FILTER_CAN1 << 2)|(LISTEN_CAN1 << 4)|(CLKSRC_CAN1 << 6))
#define CANCTL1_CAN2 ((CANENABLE_CAN2 << 7)|(LOOPBACK_CAN2<<5)|(WU_FILTER_CAN2 << 2)|(LISTEN_CAN2 << 4)|(CLKSRC_CAN2 << 6))
#define CANCTL1_CAN3 ((CANENABLE_CAN3 << 7)|(LOOPBACK_CAN3<<5)|(WU_FILTER_CAN3 << 2)|(LISTEN_CAN3 << 4)|(CLKSRC_CAN3 << 6))
#define CANCTL1_CAN4 ((CANENABLE_CAN4 << 7)|(LOOPBACK_CAN4<<5)|(WU_FILTER_CAN4 << 2)|(LISTEN_CAN4 << 4)|(CLKSRC_CAN4 << 6))

//Can Bus Timing Register 
#define CANBTR0_CAN0 ((RJW_CAN0 << 6)|(PRESCALER_CAN0-1))
#define CANBTR0_CAN1 ((RJW_CAN1 << 6)|(PRESCALER_CAN1-1))
#define CANBTR0_CAN2 ((RJW_CAN2 << 6)|(PRESCALER_CAN2-1))
#define CANBTR0_CAN3 ((RJW_CAN3 << 6)|(PRESCALER_CAN3-1))
#define CANBTR0_CAN4 ((RJW_CAN4 << 6)|(PRESCALER_CAN4-1))
					  

#define CANBTR1_CAN0 ((SAMPLEX3_CAN0 << 7)|((TIME_SEG2_CAN0-1) << 4)|(TIME_SEG1_CAN0-1))
#define CANBTR1_CAN1 ((SAMPLEX3_CAN1 << 7)|((TIME_SEG2_CAN1-1) << 4)|(TIME_SEG1_CAN1-1))
#define CANBTR1_CAN2 ((SAMPLEX3_CAN2 << 7)|((TIME_SEG2_CAN2-1) << 4)|(TIME_SEG1_CAN2-1))
#define CANBTR1_CAN3 ((SAMPLEX3_CAN3 << 7)|((TIME_SEG2_CAN3-1) << 4)|(TIME_SEG1_CAN3-1))
#define CANBTR1_CAN4 ((SAMPLEX3_CAN4 << 7)|((TIME_SEG2_CAN4-1) << 4)|(TIME_SEG1_CAN4-1))
/*****************************************************************************/
#endif        

/* end msCANcfg.h */ 
