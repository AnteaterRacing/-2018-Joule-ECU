#ifndef MSCANIDA_H
#define MSCANIDA_H 
/******************************************************************************
*
*                             Copyright (C) 2013 
*
* Tongji University - Freescale Automotive Electronics Laboratory, Inc.
* 
*                            All Rights Reserved		
*	                            
* Filename:     msCANIDa.h                
*														                            
* Revision:      										                    
*														                            
* Functions:    Get Correct msCAN ID Field for each Message Object
*														                            
* Description:  No change by user       
*
* Notes:        
*
******************************************************************************/      
/****************************************************************************** 
 * Include
 ******************************************************************************/

/****************************************************************************** 
 * Pack Message Object Base ID, ID type, and Extended ID into 32 bit unsigned int
 * so that bit positions match msCAN registers IDR0 - IDR3. 
 ******************************************************************************/
 
 /*****************************************************************************

 *CAN0

*****************************************************************************/
/* Message Object 0 */
#if (MO0_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO0_IDR_CAN0   ((uint32)(MO0_ID_CAN0) << 21)
#else                         
#define MO0_IDR_CAN0  (((MO0_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO0_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 1 */
#if (MO1_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO1_IDR_CAN0   ((uint32)(MO1_ID_CAN0) << 21)
#else                         
#define MO1_IDR_CAN0  (((MO1_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO1_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 2 */
#if (MO2_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO2_IDR_CAN0   ((uint32)(MO2_ID_CAN0) << 21)
#else                         
#define MO2_IDR_CAN0  (((MO2_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO2_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 3 */
#if (MO3_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO3_IDR_CAN0   ((uint32)(MO3_ID_CAN0) << 21)
#else                         
#define MO3_IDR_CAN0  (((MO3_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO3_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 4 */
#if (MO4_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO4_IDR_CAN0   ((uint32)(MO4_ID_CAN0) << 21)
#else                         
#define MO4_IDR_CAN0  (((MO4_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO4_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 5 */
#if (MO5_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO5_IDR_CAN0   ((uint32)(MO5_ID_CAN0) << 21)
#else                         
#define MO5_IDR_CAN0  (((MO5_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO5_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 6 */
#if (MO6_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO6_IDR_CAN0   ((uint32)(MO6_ID_CAN0) << 21)
#else                         
#define MO6_IDR_CAN0  (((MO6_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO6_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 7 */
#if (MO7_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO7_IDR_CAN0   ((uint32)(MO7_ID_CAN0) << 21)
#else                         
#define MO7_IDR_CAN0  (((MO7_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO7_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 8 */
#if (MO8_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO8_IDR_CAN0   ((uint32)(MO8_ID_CAN0) << 21)
#else                         
#define MO8_IDR_CAN0  (((MO8_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO8_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 9 */
#if (MO9_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO9_IDR_CAN0   ((uint32)(MO9_ID_CAN0) << 21)
#else                         
#define MO9_IDR_CAN0  (((MO9_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO9_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 10 */
#if (MO10_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO10_IDR_CAN0   ((uint32)(MO10_ID_CAN0) << 21)
#else                         
#define MO10_IDR_CAN0  (((MO10_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO10_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 11 */
#if (MO11_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO11_IDR_CAN0   ((uint32)(MO11_ID_CAN0) << 21)
#else                         
#define MO11_IDR_CAN0  (((MO11_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO11_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 12 */
#if (MO12_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO12_IDR_CAN0   ((uint32)(MO12_ID_CAN0) << 21)
#else                         
#define MO12_IDR_CAN0  (((MO12_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO12_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 13 */
#if (MO13_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO13_IDR_CAN0   ((uint32)(MO13_ID_CAN0) << 21)
#else                         
#define MO13_IDR_CAN0  (((MO13_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO13_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 14 */
#if (MO14_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO14_IDR_CAN0   ((uint32)(MO14_ID_CAN0) << 21)
#else                         
#define MO14_IDR_CAN0  (((MO14_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO14_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 15 */
#if (MO15_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO15_IDR_CAN0   ((uint32)(MO15_ID_CAN0) << 21)
#else                         
#define MO15_IDR_CAN0  (((MO15_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO15_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 16 */
#if (MO16_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO16_IDR_CAN0   ((uint32)(MO16_ID_CAN0) << 21)
#else                         
#define MO16_IDR_CAN0  (((MO16_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO16_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 17 */
#if (MO17_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO17_IDR_CAN0   ((uint32)(MO17_ID_CAN0) << 21)
#else                         
#define MO17_IDR_CAN0  (((MO17_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO17_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 18 */
#if (MO18_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO18_IDR_CAN0   ((uint32)(MO18_ID_CAN0) << 21)
#else                         
#define MO18_IDR_CAN0  (((MO18_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO18_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 19 */
#if (MO19_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO19_IDR_CAN0   ((uint32)(MO19_ID_CAN0) << 21)
#else                         
#define MO19_IDR_CAN0  (((MO19_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO19_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 20 */
#if (MO20_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO20_IDR_CAN0   ((uint32)(MO20_ID_CAN0) << 21)
#else                         
#define MO20_IDR_CAN0  (((MO20_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO20_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 21 */
#if (MO21_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO21_IDR_CAN0   ((uint32)(MO21_ID_CAN0) << 21)
#else                         
#define MO21_IDR_CAN0  (((MO21_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO21_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 22 */
#if (MO22_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO22_IDR_CAN0   ((uint32)(MO22_ID_CAN0) << 21)
#else                         
#define MO22_IDR_CAN0  (((MO22_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO22_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 23 */
#if (MO23_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO23_IDR_CAN0   ((uint32)(MO23_ID_CAN0) << 21)
#else                         
#define MO23_IDR_CAN0  (((MO23_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO23_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 24 */
#if (MO24_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO24_IDR_CAN0   ((uint32)(MO24_ID_CAN0) << 21)
#else                         
#define MO24_IDR_CAN0  (((MO24_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO24_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 25 */
#if (MO25_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO25_IDR_CAN0   ((uint32)(MO25_ID_CAN0) << 21)
#else                         
#define MO25_IDR_CAN0  (((MO25_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO25_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 26 */
#if (MO26_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO26_IDR_CAN0   ((uint32)(MO26_ID_CAN0) << 21)
#else                         
#define MO26_IDR_CAN0  (((MO26_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO26_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 27 */
#if (MO27_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO27_IDR_CAN0   ((uint32)(MO27_ID_CAN0) << 21)
#else                         
#define MO27_IDR_CAN0  (((MO27_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO27_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 28 */
#if (MO28_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO28_IDR_CAN0   ((uint32)(MO28_ID_CAN0) << 21)
#else                         
#define MO28_IDR_CAN0  (((MO28_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO28_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 29 */
#if (MO29_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO29_IDR_CAN0   ((uint32)(MO29_ID_CAN0) << 21)
#else                         
#define MO29_IDR_CAN0  (((MO29_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO29_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 30 */
#if (MO30_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO30_IDR_CAN0   ((uint32)(MO30_ID_CAN0) << 21)
#else                         
#define MO30_IDR_CAN0  (((MO30_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO30_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 31 */
#if (MO31_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO31_IDR_CAN0   ((uint32)(MO31_ID_CAN0) << 21)
#else                         
#define MO31_IDR_CAN0  (((MO31_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO31_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 32 */
#if (MO32_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO32_IDR_CAN0   ((uint32)(MO32_ID_CAN0) << 21)
#else                         
#define MO32_IDR_CAN0  (((MO32_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO32_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 33 */
#if (MO33_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO33_IDR_CAN0   ((uint32)(MO33_ID_CAN0) << 21)
#else                         
#define MO33_IDR_CAN0  (((MO33_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO33_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 34 */
#if (MO34_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO34_IDR_CAN0   ((uint32)(MO34_ID_CAN0) << 21)
#else                         
#define MO34_IDR_CAN0  (((MO34_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO34_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 35 */
#if (MO35_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO35_IDR_CAN0   ((uint32)(MO35_ID_CAN0) << 21)
#else                         
#define MO35_IDR_CAN0  (((MO35_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO35_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 36 */
#if (MO36_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO36_IDR_CAN0   ((uint32)(MO36_ID_CAN0) << 21)
#else                         
#define MO36_IDR_CAN0  (((MO36_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO36_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 37 */
#if (MO37_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO37_IDR_CAN0   ((uint32)(MO37_ID_CAN0) << 21)
#else                         
#define MO37_IDR_CAN0  (((MO37_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO37_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 38 */
#if (MO38_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO38_IDR_CAN0   ((uint32)(MO38_ID_CAN0) << 21)
#else                         
#define MO38_IDR_CAN0  (((MO38_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO38_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 39 */
#if (MO39_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO39_IDR_CAN0   ((uint32)(MO39_ID_CAN0) << 21)
#else                         
#define MO39_IDR_CAN0  (((MO39_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO39_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 40 */
#if (MO40_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO40_IDR_CAN0   ((uint32)(MO40_ID_CAN0) << 21)
#else                         
#define MO40_IDR_CAN0  (((MO40_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO40_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 41 */
#if (MO41_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO41_IDR_CAN0   ((uint32)(MO41_ID_CAN0) << 21)
#else                         
#define MO41_IDR_CAN0  (((MO41_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO41_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 42 */
#if (MO42_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO42_IDR_CAN0   ((uint32)(MO42_ID_CAN0) << 21)
#else                         
#define MO42_IDR_CAN0  (((MO42_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO42_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 43 */
#if (MO43_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO43_IDR_CAN0   ((uint32)(MO43_ID_CAN0) << 21)
#else                         
#define MO43_IDR_CAN0  (((MO43_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO43_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 44 */
#if (MO44_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO44_IDR_CAN0   ((uint32)(MO44_ID_CAN0) << 21)
#else                         
#define MO44_IDR_CAN0  (((MO44_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO44_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 45 */
#if (MO45_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO45_IDR_CAN0   ((uint32)(MO45_ID_CAN0) << 21)
#else                         
#define MO45_IDR_CAN0  (((MO45_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO45_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 46 */
#if (MO46_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO46_IDR_CAN0   ((uint32)(MO46_ID_CAN0) << 21)
#else                         
#define MO46_IDR_CAN0  (((MO46_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO46_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 47 */
#if (MO47_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO47_IDR_CAN0   ((uint32)(MO47_ID_CAN0) << 21)
#else                         
#define MO47_IDR_CAN0  (((MO47_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO47_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 48 */
#if (MO48_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO48_IDR_CAN0   ((uint32)(MO48_ID_CAN0) << 21)
#else                         
#define MO48_IDR_CAN0  (((MO48_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO48_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 49 */
#if (MO49_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO49_IDR_CAN0   ((uint32)(MO49_ID_CAN0) << 21)
#else                         
#define MO49_IDR_CAN0  (((MO49_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO49_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 50 */
#if (MO50_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO50_IDR_CAN0   ((uint32)(MO50_ID_CAN0) << 21)
#else                         
#define MO50_IDR_CAN0  (((MO50_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO50_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 51 */
#if (MO51_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO51_IDR_CAN0   ((uint32)(MO51_ID_CAN0) << 21)
#else                         
#define MO51_IDR_CAN0  (((MO51_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO51_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 52 */
#if (MO52_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO52_IDR_CAN0   ((uint32)(MO52_ID_CAN0) << 21)
#else                         
#define MO52_IDR_CAN0  (((MO52_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO52_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 53 */
#if (MO53_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO53_IDR_CAN0   ((uint32)(MO53_ID_CAN0) << 21)
#else                         
#define MO53_IDR_CAN0  (((MO53_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO53_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 54 */
#if (MO54_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO54_IDR_CAN0   ((uint32)(MO54_ID_CAN0) << 21)
#else                         
#define MO54_IDR_CAN0  (((MO54_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO54_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 55 */
#if (MO55_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO55_IDR_CAN0   ((uint32)(MO55_ID_CAN0) << 21)
#else                         
#define MO55_IDR_CAN0  (((MO55_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO55_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 56 */
#if (MO56_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO56_IDR_CAN0   ((uint32)(MO56_ID_CAN0) << 21)
#else                         
#define MO56_IDR_CAN0  (((MO56_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO56_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 57 */
#if (MO57_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO57_IDR_CAN0   ((uint32)(MO57_ID_CAN0) << 21)
#else                         
#define MO57_IDR_CAN0  (((MO57_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO57_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 58 */
#if (MO58_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO58_IDR_CAN0   ((uint32)(MO58_ID_CAN0) << 21)
#else                         
#define MO58_IDR_CAN0  (((MO58_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO58_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 59 */
#if (MO59_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO59_IDR_CAN0   ((uint32)(MO59_ID_CAN0) << 21)
#else                         
#define MO59_IDR_CAN0  (((MO59_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO59_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 60 */
#if (MO60_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO60_IDR_CAN0   ((uint32)(MO60_ID_CAN0) << 21)
#else                         
#define MO60_IDR_CAN0  (((MO60_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO60_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 61 */
#if (MO61_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO61_IDR_CAN0   ((uint32)(MO61_ID_CAN0) << 21)
#else                         
#define MO61_IDR_CAN0  (((MO61_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO61_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 62 */
#if (MO62_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO62_IDR_CAN0   ((uint32)(MO62_ID_CAN0) << 21)
#else                         
#define MO62_IDR_CAN0  (((MO62_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO62_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 63 */
#if (MO63_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO63_IDR_CAN0   ((uint32)(MO63_ID_CAN0) << 21)
#else                         
#define MO63_IDR_CAN0  (((MO63_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO63_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 64 */
#if (MO64_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO64_IDR_CAN0   ((uint32)(MO64_ID_CAN0) << 21)
#else                         
#define MO64_IDR_CAN0  (((MO64_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO64_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 65 */
#if (MO65_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO65_IDR_CAN0   ((uint32)(MO65_ID_CAN0) << 21)
#else                         
#define MO65_IDR_CAN0  (((MO65_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO65_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 66 */
#if (MO66_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO66_IDR_CAN0   ((uint32)(MO66_ID_CAN0) << 21)
#else                         
#define MO66_IDR_CAN0  (((MO66_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO66_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 67 */
#if (MO67_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO67_IDR_CAN0   ((uint32)(MO67_ID_CAN0) << 21)
#else                         
#define MO67_IDR_CAN0  (((MO67_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO67_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 68 */
#if (MO68_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO68_IDR_CAN0   ((uint32)(MO68_ID_CAN0) << 21)
#else                         
#define MO68_IDR_CAN0  (((MO68_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO68_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 69 */
#if (MO69_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO69_IDR_CAN0   ((uint32)(MO69_ID_CAN0) << 21)
#else                         
#define MO69_IDR_CAN0  (((MO69_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO69_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 70 */
#if (MO70_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO70_IDR_CAN0   ((uint32)(MO70_ID_CAN0) << 21)
#else                         
#define MO70_IDR_CAN0  (((MO70_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO70_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 71 */
#if (MO71_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO71_IDR_CAN0   ((uint32)(MO71_ID_CAN0) << 21)
#else                         
#define MO71_IDR_CAN0  (((MO71_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO71_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 72 */
#if (MO72_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO72_IDR_CAN0   ((uint32)(MO72_ID_CAN0) << 21)
#else                         
#define MO72_IDR_CAN0  (((MO72_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO72_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 73 */
#if (MO73_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO73_IDR_CAN0   ((uint32)(MO73_ID_CAN0) << 21)
#else                         
#define MO73_IDR_CAN0  (((MO73_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO73_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 74 */
#if (MO74_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO74_IDR_CAN0   ((uint32)(MO74_ID_CAN0) << 21)
#else                         
#define MO74_IDR_CAN0  (((MO74_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO74_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 75 */
#if (MO75_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO75_IDR_CAN0   ((uint32)(MO75_ID_CAN0) << 21)
#else                         
#define MO75_IDR_CAN0  (((MO75_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO75_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 76 */
#if (MO76_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO76_IDR_CAN0   ((uint32)(MO76_ID_CAN0) << 21)
#else                         
#define MO76_IDR_CAN0  (((MO76_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO76_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 77 */
#if (MO77_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO77_IDR_CAN0   ((uint32)(MO77_ID_CAN0) << 21)
#else                         
#define MO77_IDR_CAN0  (((MO77_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO77_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 78 */
#if (MO78_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO78_IDR_CAN0   ((uint32)(MO78_ID_CAN0) << 21)
#else                         
#define MO78_IDR_CAN0  (((MO78_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO78_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 79 */
#if (MO79_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO79_IDR_CAN0   ((uint32)(MO79_ID_CAN0) << 21)
#else                         
#define MO79_IDR_CAN0  (((MO79_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO79_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 80 */
#if (MO80_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO80_IDR_CAN0   ((uint32)(MO80_ID_CAN0) << 21)
#else                         
#define MO80_IDR_CAN0  (((MO80_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO80_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 81 */
#if (MO81_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO81_IDR_CAN0   ((uint32)(MO81_ID_CAN0) << 21)
#else                         
#define MO81_IDR_CAN0  (((MO81_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO81_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 82 */
#if (MO82_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO82_IDR_CAN0   ((uint32)(MO82_ID_CAN0) << 21)
#else                         
#define MO82_IDR_CAN0  (((MO82_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO82_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 83 */
#if (MO83_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO83_IDR_CAN0   ((uint32)(MO83_ID_CAN0) << 21)
#else                         
#define MO83_IDR_CAN0  (((MO83_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO83_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 84 */
#if (MO84_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO84_IDR_CAN0   ((uint32)(MO84_ID_CAN0) << 21)
#else                         
#define MO84_IDR_CAN0  (((MO84_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO84_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 85 */
#if (MO85_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO85_IDR_CAN0   ((uint32)(MO85_ID_CAN0) << 21)
#else                         
#define MO85_IDR_CAN0  (((MO85_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO85_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 86 */
#if (MO86_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO86_IDR_CAN0   ((uint32)(MO86_ID_CAN0) << 21)
#else                         
#define MO86_IDR_CAN0  (((MO86_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO86_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 87 */
#if (MO87_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO87_IDR_CAN0   ((uint32)(MO87_ID_CAN0) << 21)
#else                         
#define MO87_IDR_CAN0  (((MO87_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO87_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 88 */
#if (MO88_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO88_IDR_CAN0   ((uint32)(MO88_ID_CAN0) << 21)
#else                         
#define MO88_IDR_CAN0  (((MO88_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO88_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 89 */
#if (MO89_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO89_IDR_CAN0   ((uint32)(MO89_ID_CAN0) << 21)
#else                         
#define MO89_IDR_CAN0  (((MO89_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO89_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 90 */
#if (MO90_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO90_IDR_CAN0   ((uint32)(MO90_ID_CAN0) << 21)
#else                         
#define MO90_IDR_CAN0  (((MO90_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO90_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 91 */
#if (MO91_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO91_IDR_CAN0   ((uint32)(MO91_ID_CAN0) << 21)
#else                         
#define MO91_IDR_CAN0  (((MO91_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO91_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 92 */
#if (MO92_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO92_IDR_CAN0   ((uint32)(MO92_ID_CAN0) << 21)
#else                         
#define MO92_IDR_CAN0  (((MO92_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO92_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 93 */
#if (MO93_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO93_IDR_CAN0   ((uint32)(MO93_ID_CAN0) << 21)
#else                         
#define MO93_IDR_CAN0  (((MO93_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO93_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 94 */
#if (MO94_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO94_IDR_CAN0   ((uint32)(MO94_ID_CAN0) << 21)
#else                         
#define MO94_IDR_CAN0  (((MO94_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO94_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 95 */
#if (MO95_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO95_IDR_CAN0   ((uint32)(MO95_ID_CAN0) << 21)
#else                         
#define MO95_IDR_CAN0  (((MO95_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO95_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 96 */
#if (MO96_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO96_IDR_CAN0   ((uint32)(MO96_ID_CAN0) << 21)
#else                         
#define MO96_IDR_CAN0  (((MO96_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO96_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 97 */
#if (MO97_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO97_IDR_CAN0   ((uint32)(MO97_ID_CAN0) << 21)
#else                         
#define MO97_IDR_CAN0  (((MO97_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO97_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 98 */
#if (MO98_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO98_IDR_CAN0   ((uint32)(MO98_ID_CAN0) << 21)
#else                         
#define MO98_IDR_CAN0  (((MO98_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO98_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 99 */
#if (MO99_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO99_IDR_CAN0   ((uint32)(MO99_ID_CAN0) << 21)
#else                         
#define MO99_IDR_CAN0  (((MO99_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO99_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 100 */
#if (MO100_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO100_IDR_CAN0   ((uint32)(MO100_ID_CAN0) << 21)
#else                         
#define MO100_IDR_CAN0  (((MO100_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO100_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 101 */
#if (MO101_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO101_IDR_CAN0   ((uint32)(MO101_ID_CAN0) << 21)
#else                         
#define MO101_IDR_CAN0  (((MO101_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO101_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 102 */
#if (MO102_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO102_IDR_CAN0   ((uint32)(MO102_ID_CAN0) << 21)
#else                         
#define MO102_IDR_CAN0  (((MO102_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO102_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 103 */
#if (MO103_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO103_IDR_CAN0   ((uint32)(MO103_ID_CAN0) << 21)
#else                         
#define MO103_IDR_CAN0  (((MO103_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO103_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 104 */
#if (MO104_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO104_IDR_CAN0   ((uint32)(MO104_ID_CAN0) << 21)
#else                         
#define MO104_IDR_CAN0  (((MO104_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO104_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 105 */
#if (MO105_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO105_IDR_CAN0   ((uint32)(MO105_ID_CAN0) << 21)
#else                         
#define MO105_IDR_CAN0  (((MO105_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO105_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 106 */
#if (MO106_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO106_IDR_CAN0   ((uint32)(MO106_ID_CAN0) << 21)
#else                         
#define MO106_IDR_CAN0  (((MO106_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO106_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 107 */
#if (MO107_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO107_IDR_CAN0   ((uint32)(MO107_ID_CAN0) << 21)
#else                         
#define MO107_IDR_CAN0  (((MO107_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO107_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 108 */
#if (MO108_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO108_IDR_CAN0   ((uint32)(MO108_ID_CAN0) << 21)
#else                         
#define MO108_IDR_CAN0  (((MO108_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO108_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 109 */
#if (MO109_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO109_IDR_CAN0   ((uint32)(MO109_ID_CAN0) << 21)
#else                         
#define MO109_IDR_CAN0  (((MO109_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO109_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 110 */
#if (MO110_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO110_IDR_CAN0   ((uint32)(MO110_ID_CAN0) << 21)
#else                         
#define MO110_IDR_CAN0  (((MO110_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO110_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 111 */
#if (MO111_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO111_IDR_CAN0   ((uint32)(MO111_ID_CAN0) << 21)
#else                         
#define MO111_IDR_CAN0  (((MO111_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO111_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 112 */
#if (MO112_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO112_IDR_CAN0   ((uint32)(MO112_ID_CAN0) << 21)
#else                         
#define MO112_IDR_CAN0  (((MO112_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO112_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 113 */
#if (MO113_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO113_IDR_CAN0   ((uint32)(MO113_ID_CAN0) << 21)
#else                         
#define MO113_IDR_CAN0  (((MO113_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO113_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 114 */
#if (MO114_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO114_IDR_CAN0   ((uint32)(MO114_ID_CAN0) << 21)
#else                         
#define MO114_IDR_CAN0  (((MO114_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO114_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 115 */
#if (MO115_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO115_IDR_CAN0   ((uint32)(MO115_ID_CAN0) << 21)
#else                         
#define MO115_IDR_CAN0  (((MO115_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO115_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 116 */
#if (MO116_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO116_IDR_CAN0   ((uint32)(MO116_ID_CAN0) << 21)
#else                         
#define MO116_IDR_CAN0  (((MO116_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO116_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 117 */
#if (MO117_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO117_IDR_CAN0   ((uint32)(MO117_ID_CAN0) << 21)
#else                         
#define MO117_IDR_CAN0  (((MO117_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO117_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 118 */
#if (MO118_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO118_IDR_CAN0   ((uint32)(MO118_ID_CAN0) << 21)
#else                         
#define MO118_IDR_CAN0  (((MO118_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO118_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 119 */
#if (MO119_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO119_IDR_CAN0   ((uint32)(MO119_ID_CAN0) << 21)
#else                         
#define MO119_IDR_CAN0  (((MO119_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO119_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 120 */
#if (MO120_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO120_IDR_CAN0   ((uint32)(MO120_ID_CAN0) << 21)
#else                         
#define MO120_IDR_CAN0  (((MO120_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO120_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 121 */
#if (MO121_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO121_IDR_CAN0   ((uint32)(MO121_ID_CAN0) << 21)
#else                         
#define MO121_IDR_CAN0  (((MO121_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO121_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 122 */
#if (MO122_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO122_IDR_CAN0   ((uint32)(MO122_ID_CAN0) << 21)
#else                         
#define MO122_IDR_CAN0  (((MO122_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO122_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 123 */
#if (MO123_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO123_IDR_CAN0   ((uint32)(MO123_ID_CAN0) << 21)
#else                         
#define MO123_IDR_CAN0  (((MO123_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO123_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 124 */
#if (MO124_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO124_IDR_CAN0   ((uint32)(MO124_ID_CAN0) << 21)
#else                         
#define MO124_IDR_CAN0  (((MO124_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO124_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 125 */
#if (MO125_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO125_IDR_CAN0   ((uint32)(MO125_ID_CAN0) << 21)
#else                         
#define MO125_IDR_CAN0  (((MO125_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO125_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 126 */
#if (MO126_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO126_IDR_CAN0   ((uint32)(MO126_ID_CAN0) << 21)
#else                         
#define MO126_IDR_CAN0  (((MO126_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO126_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 127 */
#if (MO127_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO127_IDR_CAN0   ((uint32)(MO127_ID_CAN0) << 21)
#else                         
#define MO127_IDR_CAN0  (((MO127_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO127_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 128 */
#if (MO128_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO128_IDR_CAN0   ((uint32)(MO128_ID_CAN0) << 21)
#else                         
#define MO128_IDR_CAN0  (((MO128_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO128_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 129 */
#if (MO129_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO129_IDR_CAN0   ((uint32)(MO129_ID_CAN0) << 21)
#else                         
#define MO129_IDR_CAN0  (((MO129_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO129_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 130 */
#if (MO130_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO130_IDR_CAN0   ((uint32)(MO130_ID_CAN0) << 21)
#else                         
#define MO130_IDR_CAN0  (((MO130_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO130_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 131 */
#if (MO131_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO131_IDR_CAN0   ((uint32)(MO131_ID_CAN0) << 21)
#else                         
#define MO131_IDR_CAN0  (((MO131_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO131_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 132 */
#if (MO132_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO132_IDR_CAN0   ((uint32)(MO132_ID_CAN0) << 21)
#else                         
#define MO132_IDR_CAN0  (((MO132_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO132_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 133 */
#if (MO133_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO133_IDR_CAN0   ((uint32)(MO133_ID_CAN0) << 21)
#else                         
#define MO133_IDR_CAN0  (((MO133_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO133_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 134 */
#if (MO134_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO134_IDR_CAN0   ((uint32)(MO134_ID_CAN0) << 21)
#else                         
#define MO134_IDR_CAN0  (((MO134_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO134_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 135 */
#if (MO135_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO135_IDR_CAN0   ((uint32)(MO135_ID_CAN0) << 21)
#else                         
#define MO135_IDR_CAN0  (((MO135_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO135_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 136 */
#if (MO136_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO136_IDR_CAN0   ((uint32)(MO136_ID_CAN0) << 21)
#else                         
#define MO136_IDR_CAN0  (((MO136_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO136_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 137 */
#if (MO137_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO137_IDR_CAN0   ((uint32)(MO137_ID_CAN0) << 21)
#else                         
#define MO137_IDR_CAN0  (((MO137_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO137_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 138 */
#if (MO138_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO138_IDR_CAN0   ((uint32)(MO138_ID_CAN0) << 21)
#else                         
#define MO138_IDR_CAN0  (((MO138_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO138_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 139 */
#if (MO139_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO139_IDR_CAN0   ((uint32)(MO139_ID_CAN0) << 21)
#else                         
#define MO139_IDR_CAN0  (((MO139_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO139_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 140 */
#if (MO140_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO140_IDR_CAN0   ((uint32)(MO140_ID_CAN0) << 21)
#else                         
#define MO140_IDR_CAN0  (((MO140_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO140_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 141 */
#if (MO141_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO141_IDR_CAN0   ((uint32)(MO141_ID_CAN0) << 21)
#else                         
#define MO141_IDR_CAN0  (((MO141_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO141_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 142 */
#if (MO142_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO142_IDR_CAN0   ((uint32)(MO142_ID_CAN0) << 21)
#else                         
#define MO142_IDR_CAN0  (((MO142_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO142_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 143 */
#if (MO143_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO143_IDR_CAN0   ((uint32)(MO143_ID_CAN0) << 21)
#else                         
#define MO143_IDR_CAN0  (((MO143_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO143_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 144 */
#if (MO144_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO144_IDR_CAN0   ((uint32)(MO144_ID_CAN0) << 21)
#else                         
#define MO144_IDR_CAN0  (((MO144_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO144_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 145 */
#if (MO145_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO145_IDR_CAN0   ((uint32)(MO145_ID_CAN0) << 21)
#else                         
#define MO145_IDR_CAN0  (((MO145_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO145_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 146 */
#if (MO146_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO146_IDR_CAN0   ((uint32)(MO146_ID_CAN0) << 21)
#else                         
#define MO146_IDR_CAN0  (((MO146_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO146_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 147 */
#if (MO147_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO147_IDR_CAN0   ((uint32)(MO147_ID_CAN0) << 21)
#else                         
#define MO147_IDR_CAN0  (((MO147_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO147_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 148 */
#if (MO148_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO148_IDR_CAN0   ((uint32)(MO148_ID_CAN0) << 21)
#else                         
#define MO148_IDR_CAN0  (((MO148_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO148_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 149 */
#if (MO149_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO149_IDR_CAN0   ((uint32)(MO149_ID_CAN0) << 21)
#else                         
#define MO149_IDR_CAN0  (((MO149_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO149_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 150 */
#if (MO150_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO150_IDR_CAN0   ((uint32)(MO150_ID_CAN0) << 21)
#else                         
#define MO150_IDR_CAN0  (((MO150_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO150_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 151 */
#if (MO151_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO151_IDR_CAN0   ((uint32)(MO151_ID_CAN0) << 21)
#else                         
#define MO151_IDR_CAN0  (((MO151_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO151_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 152 */
#if (MO152_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO152_IDR_CAN0   ((uint32)(MO152_ID_CAN0) << 21)
#else                         
#define MO152_IDR_CAN0  (((MO152_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO152_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 153 */
#if (MO153_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO153_IDR_CAN0   ((uint32)(MO153_ID_CAN0) << 21)
#else                         
#define MO153_IDR_CAN0  (((MO153_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO153_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 154 */
#if (MO154_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO154_IDR_CAN0   ((uint32)(MO154_ID_CAN0) << 21)
#else                         
#define MO154_IDR_CAN0  (((MO154_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO154_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 155 */
#if (MO155_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO155_IDR_CAN0   ((uint32)(MO155_ID_CAN0) << 21)
#else                         
#define MO155_IDR_CAN0  (((MO155_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO155_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 156 */
#if (MO156_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO156_IDR_CAN0   ((uint32)(MO156_ID_CAN0) << 21)
#else                         
#define MO156_IDR_CAN0  (((MO156_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO156_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 157 */
#if (MO157_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO157_IDR_CAN0   ((uint32)(MO157_ID_CAN0) << 21)
#else                         
#define MO157_IDR_CAN0  (((MO157_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO157_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 158 */
#if (MO158_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO158_IDR_CAN0   ((uint32)(MO158_ID_CAN0) << 21)
#else                         
#define MO158_IDR_CAN0  (((MO158_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO158_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 159 */
#if (MO159_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO159_IDR_CAN0   ((uint32)(MO159_ID_CAN0) << 21)
#else                         
#define MO159_IDR_CAN0  (((MO159_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO159_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 160 */
#if (MO160_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO160_IDR_CAN0   ((uint32)(MO160_ID_CAN0) << 21)
#else                         
#define MO160_IDR_CAN0  (((MO160_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO160_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 161 */
#if (MO161_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO161_IDR_CAN0   ((uint32)(MO161_ID_CAN0) << 21)
#else                         
#define MO161_IDR_CAN0  (((MO161_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO161_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 162 */
#if (MO162_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO162_IDR_CAN0   ((uint32)(MO162_ID_CAN0) << 21)
#else                         
#define MO162_IDR_CAN0  (((MO162_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO162_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 163 */
#if (MO163_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO163_IDR_CAN0   ((uint32)(MO163_ID_CAN0) << 21)
#else                         
#define MO163_IDR_CAN0  (((MO163_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO163_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 164 */
#if (MO164_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO164_IDR_CAN0   ((uint32)(MO164_ID_CAN0) << 21)
#else                         
#define MO164_IDR_CAN0  (((MO164_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO164_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 165 */
#if (MO165_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO165_IDR_CAN0   ((uint32)(MO165_ID_CAN0) << 21)
#else                         
#define MO165_IDR_CAN0  (((MO165_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO165_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 166 */
#if (MO166_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO166_IDR_CAN0   ((uint32)(MO166_ID_CAN0) << 21)
#else                         
#define MO166_IDR_CAN0  (((MO166_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO166_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 167 */
#if (MO167_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO167_IDR_CAN0   ((uint32)(MO167_ID_CAN0) << 21)
#else                         
#define MO167_IDR_CAN0  (((MO167_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO167_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 168 */
#if (MO168_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO168_IDR_CAN0   ((uint32)(MO168_ID_CAN0) << 21)
#else                         
#define MO168_IDR_CAN0  (((MO168_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO168_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 169 */
#if (MO169_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO169_IDR_CAN0   ((uint32)(MO169_ID_CAN0) << 21)
#else                         
#define MO169_IDR_CAN0  (((MO169_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO169_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 170 */
#if (MO170_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO170_IDR_CAN0   ((uint32)(MO170_ID_CAN0) << 21)
#else                         
#define MO170_IDR_CAN0  (((MO170_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO170_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 171 */
#if (MO171_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO171_IDR_CAN0   ((uint32)(MO171_ID_CAN0) << 21)
#else                         
#define MO171_IDR_CAN0  (((MO171_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO171_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 172 */
#if (MO172_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO172_IDR_CAN0   ((uint32)(MO172_ID_CAN0) << 21)
#else                         
#define MO172_IDR_CAN0  (((MO172_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO172_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 173 */
#if (MO173_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO173_IDR_CAN0   ((uint32)(MO173_ID_CAN0) << 21)
#else                         
#define MO173_IDR_CAN0  (((MO173_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO173_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 174 */
#if (MO174_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO174_IDR_CAN0   ((uint32)(MO174_ID_CAN0) << 21)
#else                         
#define MO174_IDR_CAN0  (((MO174_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO174_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 175 */
#if (MO175_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO175_IDR_CAN0   ((uint32)(MO175_ID_CAN0) << 21)
#else                         
#define MO175_IDR_CAN0  (((MO175_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO175_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 176 */
#if (MO176_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO176_IDR_CAN0   ((uint32)(MO176_ID_CAN0) << 21)
#else                         
#define MO176_IDR_CAN0  (((MO176_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO176_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 177 */
#if (MO177_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO177_IDR_CAN0   ((uint32)(MO177_ID_CAN0) << 21)
#else                         
#define MO177_IDR_CAN0  (((MO177_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO177_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 178 */
#if (MO178_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO178_IDR_CAN0   ((uint32)(MO178_ID_CAN0) << 21)
#else                         
#define MO178_IDR_CAN0  (((MO178_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO178_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 179 */
#if (MO179_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO179_IDR_CAN0   ((uint32)(MO179_ID_CAN0) << 21)
#else                         
#define MO179_IDR_CAN0  (((MO179_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO179_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 180 */
#if (MO180_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO180_IDR_CAN0   ((uint32)(MO180_ID_CAN0) << 21)
#else                         
#define MO180_IDR_CAN0  (((MO180_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO180_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 181 */
#if (MO181_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO181_IDR_CAN0   ((uint32)(MO181_ID_CAN0) << 21)
#else                         
#define MO181_IDR_CAN0  (((MO181_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO181_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 182 */
#if (MO182_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO182_IDR_CAN0   ((uint32)(MO182_ID_CAN0) << 21)
#else                         
#define MO182_IDR_CAN0  (((MO182_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO182_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 183 */
#if (MO183_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO183_IDR_CAN0   ((uint32)(MO183_ID_CAN0) << 21)
#else                         
#define MO183_IDR_CAN0  (((MO183_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO183_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 184 */
#if (MO184_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO184_IDR_CAN0   ((uint32)(MO184_ID_CAN0) << 21)
#else                         
#define MO184_IDR_CAN0  (((MO184_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO184_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 185 */
#if (MO185_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO185_IDR_CAN0   ((uint32)(MO185_ID_CAN0) << 21)
#else                         
#define MO185_IDR_CAN0  (((MO185_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO185_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 186 */
#if (MO186_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO186_IDR_CAN0   ((uint32)(MO186_ID_CAN0) << 21)
#else                         
#define MO186_IDR_CAN0  (((MO186_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO186_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 187 */
#if (MO187_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO187_IDR_CAN0   ((uint32)(MO187_ID_CAN0) << 21)
#else                         
#define MO187_IDR_CAN0  (((MO187_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO187_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 188 */
#if (MO188_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO188_IDR_CAN0   ((uint32)(MO188_ID_CAN0) << 21)
#else                         
#define MO188_IDR_CAN0  (((MO188_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO188_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 189 */
#if (MO189_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO189_IDR_CAN0   ((uint32)(MO189_ID_CAN0) << 21)
#else                         
#define MO189_IDR_CAN0  (((MO189_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO189_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 190 */
#if (MO190_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO190_IDR_CAN0   ((uint32)(MO190_ID_CAN0) << 21)
#else                         
#define MO190_IDR_CAN0  (((MO190_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO190_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 191 */
#if (MO191_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO191_IDR_CAN0   ((uint32)(MO191_ID_CAN0) << 21)
#else                         
#define MO191_IDR_CAN0  (((MO191_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO191_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 192 */
#if (MO192_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO192_IDR_CAN0   ((uint32)(MO192_ID_CAN0) << 21)
#else                         
#define MO192_IDR_CAN0  (((MO192_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO192_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 193 */
#if (MO193_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO193_IDR_CAN0   ((uint32)(MO193_ID_CAN0) << 21)
#else                         
#define MO193_IDR_CAN0  (((MO193_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO193_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 194 */
#if (MO194_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO194_IDR_CAN0   ((uint32)(MO194_ID_CAN0) << 21)
#else                         
#define MO194_IDR_CAN0  (((MO194_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO194_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 195 */
#if (MO195_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO195_IDR_CAN0   ((uint32)(MO195_ID_CAN0) << 21)
#else                         
#define MO195_IDR_CAN0  (((MO195_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO195_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 196 */
#if (MO196_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO196_IDR_CAN0   ((uint32)(MO196_ID_CAN0) << 21)
#else                         
#define MO196_IDR_CAN0  (((MO196_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO196_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 197 */
#if (MO197_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO197_IDR_CAN0   ((uint32)(MO197_ID_CAN0) << 21)
#else                         
#define MO197_IDR_CAN0  (((MO197_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO197_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 198 */
#if (MO198_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO198_IDR_CAN0   ((uint32)(MO198_ID_CAN0) << 21)
#else                         
#define MO198_IDR_CAN0  (((MO198_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO198_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 199 */
#if (MO199_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO199_IDR_CAN0   ((uint32)(MO199_ID_CAN0) << 21)
#else                         
#define MO199_IDR_CAN0  (((MO199_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO199_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 200 */
#if (MO200_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO200_IDR_CAN0   ((uint32)(MO200_ID_CAN0) << 21)
#else                         
#define MO200_IDR_CAN0  (((MO200_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO200_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 201 */
#if (MO201_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO201_IDR_CAN0   ((uint32)(MO201_ID_CAN0) << 21)
#else                         
#define MO201_IDR_CAN0  (((MO201_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO201_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 202 */
#if (MO202_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO202_IDR_CAN0   ((uint32)(MO202_ID_CAN0) << 21)
#else                         
#define MO202_IDR_CAN0  (((MO202_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO202_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 203 */
#if (MO203_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO203_IDR_CAN0   ((uint32)(MO203_ID_CAN0) << 21)
#else                         
#define MO203_IDR_CAN0  (((MO203_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO203_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 204 */
#if (MO204_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO204_IDR_CAN0   ((uint32)(MO204_ID_CAN0) << 21)
#else                         
#define MO204_IDR_CAN0  (((MO204_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO204_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 205 */
#if (MO205_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO205_IDR_CAN0   ((uint32)(MO205_ID_CAN0) << 21)
#else                         
#define MO205_IDR_CAN0  (((MO205_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO205_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 206 */
#if (MO206_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO206_IDR_CAN0   ((uint32)(MO206_ID_CAN0) << 21)
#else                         
#define MO206_IDR_CAN0  (((MO206_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO206_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 207 */
#if (MO207_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO207_IDR_CAN0   ((uint32)(MO207_ID_CAN0) << 21)
#else                         
#define MO207_IDR_CAN0  (((MO207_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO207_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 208 */
#if (MO208_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO208_IDR_CAN0   ((uint32)(MO208_ID_CAN0) << 21)
#else                         
#define MO208_IDR_CAN0  (((MO208_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO208_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 209 */
#if (MO209_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO209_IDR_CAN0   ((uint32)(MO209_ID_CAN0) << 21)
#else                         
#define MO209_IDR_CAN0  (((MO209_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO209_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 210 */
#if (MO210_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO210_IDR_CAN0   ((uint32)(MO210_ID_CAN0) << 21)
#else                         
#define MO210_IDR_CAN0  (((MO210_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO210_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 211 */
#if (MO211_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO211_IDR_CAN0   ((uint32)(MO211_ID_CAN0) << 21)
#else                         
#define MO211_IDR_CAN0  (((MO211_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO211_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 212 */
#if (MO212_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO212_IDR_CAN0   ((uint32)(MO212_ID_CAN0) << 21)
#else                         
#define MO212_IDR_CAN0  (((MO212_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO212_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 213 */
#if (MO213_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO213_IDR_CAN0   ((uint32)(MO213_ID_CAN0) << 21)
#else                         
#define MO213_IDR_CAN0  (((MO213_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO213_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 214 */
#if (MO214_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO214_IDR_CAN0   ((uint32)(MO214_ID_CAN0) << 21)
#else                         
#define MO214_IDR_CAN0  (((MO214_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO214_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 215 */
#if (MO215_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO215_IDR_CAN0   ((uint32)(MO215_ID_CAN0) << 21)
#else                         
#define MO215_IDR_CAN0  (((MO215_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO215_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 216 */
#if (MO216_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO216_IDR_CAN0   ((uint32)(MO216_ID_CAN0) << 21)
#else                         
#define MO216_IDR_CAN0  (((MO216_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO216_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 217 */
#if (MO217_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO217_IDR_CAN0   ((uint32)(MO217_ID_CAN0) << 21)
#else                         
#define MO217_IDR_CAN0  (((MO217_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO217_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 218 */
#if (MO218_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO218_IDR_CAN0   ((uint32)(MO218_ID_CAN0) << 21)
#else                         
#define MO218_IDR_CAN0  (((MO218_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO218_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 219 */
#if (MO219_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO219_IDR_CAN0   ((uint32)(MO219_ID_CAN0) << 21)
#else                         
#define MO219_IDR_CAN0  (((MO219_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO219_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 220 */
#if (MO220_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO220_IDR_CAN0   ((uint32)(MO220_ID_CAN0) << 21)
#else                         
#define MO220_IDR_CAN0  (((MO220_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO220_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 221 */
#if (MO221_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO221_IDR_CAN0   ((uint32)(MO221_ID_CAN0) << 21)
#else                         
#define MO221_IDR_CAN0  (((MO221_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO221_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 222 */
#if (MO222_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO222_IDR_CAN0   ((uint32)(MO222_ID_CAN0) << 21)
#else                         
#define MO222_IDR_CAN0  (((MO222_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO222_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 223 */
#if (MO223_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO223_IDR_CAN0   ((uint32)(MO223_ID_CAN0) << 21)
#else                         
#define MO223_IDR_CAN0  (((MO223_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO223_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 224 */
#if (MO224_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO224_IDR_CAN0   ((uint32)(MO224_ID_CAN0) << 21)
#else                         
#define MO224_IDR_CAN0  (((MO224_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO224_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 225 */
#if (MO225_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO225_IDR_CAN0   ((uint32)(MO225_ID_CAN0) << 21)
#else                         
#define MO225_IDR_CAN0  (((MO225_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO225_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 226 */
#if (MO226_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO226_IDR_CAN0   ((uint32)(MO226_ID_CAN0) << 21)
#else                         
#define MO226_IDR_CAN0  (((MO226_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO226_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 227 */
#if (MO227_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO227_IDR_CAN0   ((uint32)(MO227_ID_CAN0) << 21)
#else                         
#define MO227_IDR_CAN0  (((MO227_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO227_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 228 */
#if (MO228_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO228_IDR_CAN0   ((uint32)(MO228_ID_CAN0) << 21)
#else                         
#define MO228_IDR_CAN0  (((MO228_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO228_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 229 */
#if (MO229_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO229_IDR_CAN0   ((uint32)(MO229_ID_CAN0) << 21)
#else                         
#define MO229_IDR_CAN0  (((MO229_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO229_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 230 */
#if (MO230_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO230_IDR_CAN0   ((uint32)(MO230_ID_CAN0) << 21)
#else                         
#define MO230_IDR_CAN0  (((MO230_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO230_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 231 */
#if (MO231_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO231_IDR_CAN0   ((uint32)(MO231_ID_CAN0) << 21)
#else                         
#define MO231_IDR_CAN0  (((MO231_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO231_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 232 */
#if (MO232_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO232_IDR_CAN0   ((uint32)(MO232_ID_CAN0) << 21)
#else                         
#define MO232_IDR_CAN0  (((MO232_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO232_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 233 */
#if (MO233_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO233_IDR_CAN0   ((uint32)(MO233_ID_CAN0) << 21)
#else                         
#define MO233_IDR_CAN0  (((MO233_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO233_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 234 */
#if (MO234_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO234_IDR_CAN0   ((uint32)(MO234_ID_CAN0) << 21)
#else                         
#define MO234_IDR_CAN0  (((MO234_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO234_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 235 */
#if (MO235_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO235_IDR_CAN0   ((uint32)(MO235_ID_CAN0) << 21)
#else                         
#define MO235_IDR_CAN0  (((MO235_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO235_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 236 */
#if (MO236_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO236_IDR_CAN0   ((uint32)(MO236_ID_CAN0) << 21)
#else                         
#define MO236_IDR_CAN0  (((MO236_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO236_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 237 */
#if (MO237_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO237_IDR_CAN0   ((uint32)(MO237_ID_CAN0) << 21)
#else                         
#define MO237_IDR_CAN0  (((MO237_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO237_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 238 */
#if (MO238_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO238_IDR_CAN0   ((uint32)(MO238_ID_CAN0) << 21)
#else                         
#define MO238_IDR_CAN0  (((MO238_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO238_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 239 */
#if (MO239_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO239_IDR_CAN0   ((uint32)(MO239_ID_CAN0) << 21)
#else                         
#define MO239_IDR_CAN0  (((MO239_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO239_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 240 */
#if (MO240_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO240_IDR_CAN0   ((uint32)(MO240_ID_CAN0) << 21)
#else                         
#define MO240_IDR_CAN0  (((MO240_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO240_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 241 */
#if (MO241_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO241_IDR_CAN0   ((uint32)(MO241_ID_CAN0) << 21)
#else                         
#define MO241_IDR_CAN0  (((MO241_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO241_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 242 */
#if (MO242_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO242_IDR_CAN0   ((uint32)(MO242_ID_CAN0) << 21)
#else                         
#define MO242_IDR_CAN0  (((MO242_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO242_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 243 */
#if (MO243_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO243_IDR_CAN0   ((uint32)(MO243_ID_CAN0) << 21)
#else                         
#define MO243_IDR_CAN0  (((MO243_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO243_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 244 */
#if (MO244_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO244_IDR_CAN0   ((uint32)(MO244_ID_CAN0) << 21)
#else                         
#define MO244_IDR_CAN0  (((MO244_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO244_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 245 */
#if (MO245_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO245_IDR_CAN0   ((uint32)(MO245_ID_CAN0) << 21)
#else                         
#define MO245_IDR_CAN0  (((MO245_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO245_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 246 */
#if (MO246_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO246_IDR_CAN0   ((uint32)(MO246_ID_CAN0) << 21)
#else                         
#define MO246_IDR_CAN0  (((MO246_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO246_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 247 */
#if (MO247_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO247_IDR_CAN0   ((uint32)(MO247_ID_CAN0) << 21)
#else                         
#define MO247_IDR_CAN0  (((MO247_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO247_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 248 */
#if (MO248_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO248_IDR_CAN0   ((uint32)(MO248_ID_CAN0) << 21)
#else                         
#define MO248_IDR_CAN0  (((MO248_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO248_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 249 */
#if (MO249_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO249_IDR_CAN0   ((uint32)(MO249_ID_CAN0) << 21)
#else                         
#define MO249_IDR_CAN0  (((MO249_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO249_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 250 */
#if (MO250_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO250_IDR_CAN0   ((uint32)(MO250_ID_CAN0) << 21)
#else                         
#define MO250_IDR_CAN0  (((MO250_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO250_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 251 */
#if (MO251_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO251_IDR_CAN0   ((uint32)(MO251_ID_CAN0) << 21)
#else                         
#define MO251_IDR_CAN0  (((MO251_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO251_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 252 */
#if (MO252_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO252_IDR_CAN0   ((uint32)(MO252_ID_CAN0) << 21)
#else                         
#define MO252_IDR_CAN0  (((MO252_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO252_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 253 */
#if (MO253_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO253_IDR_CAN0   ((uint32)(MO253_ID_CAN0) << 21)
#else                         
#define MO253_IDR_CAN0  (((MO253_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO253_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

/* Message Object 254 */
#if (MO254_ID_TYPE_CAN0 == CAN_STANDARD)
#define MO254_IDR_CAN0   ((uint32)(MO254_ID_CAN0) << 21)
#else                         
#define MO254_IDR_CAN0  (((MO254_ID_CAN0 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO254_ID_CAN0 & 0x0003FFFFL) << 1))
#endif

 /*****************************************************************************

 *CAN1

*****************************************************************************/
/* Message Object 0 */
#if (MO0_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO0_IDR_CAN1   ((uint32)(MO0_ID_CAN1) << 21)
#else                         
#define MO0_IDR_CAN1  (((MO0_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO0_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 1 */
#if (MO1_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO1_IDR_CAN1   ((uint32)(MO1_ID_CAN1) << 21)
#else                         
#define MO1_IDR_CAN1  (((MO1_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO1_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 2 */
#if (MO2_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO2_IDR_CAN1   ((uint32)(MO2_ID_CAN1) << 21)
#else                         
#define MO2_IDR_CAN1  (((MO2_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO2_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 3 */
#if (MO3_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO3_IDR_CAN1   ((uint32)(MO3_ID_CAN1) << 21)
#else                         
#define MO3_IDR_CAN1  (((MO3_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO3_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 4 */
#if (MO4_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO4_IDR_CAN1   ((uint32)(MO4_ID_CAN1) << 21)
#else                         
#define MO4_IDR_CAN1  (((MO4_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO4_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 5 */
#if (MO5_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO5_IDR_CAN1   ((uint32)(MO5_ID_CAN1) << 21)
#else                         
#define MO5_IDR_CAN1  (((MO5_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO5_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 6 */
#if (MO6_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO6_IDR_CAN1   ((uint32)(MO6_ID_CAN1) << 21)
#else                         
#define MO6_IDR_CAN1  (((MO6_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO6_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 7 */
#if (MO7_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO7_IDR_CAN1   ((uint32)(MO7_ID_CAN1) << 21)
#else                         
#define MO7_IDR_CAN1  (((MO7_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO7_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 8 */
#if (MO8_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO8_IDR_CAN1   ((uint32)(MO8_ID_CAN1) << 21)
#else                         
#define MO8_IDR_CAN1  (((MO8_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO8_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 9 */
#if (MO9_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO9_IDR_CAN1   ((uint32)(MO9_ID_CAN1) << 21)
#else                         
#define MO9_IDR_CAN1  (((MO9_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO9_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 10 */
#if (MO10_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO10_IDR_CAN1   ((uint32)(MO10_ID_CAN1) << 21)
#else                         
#define MO10_IDR_CAN1  (((MO10_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO10_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 11 */
#if (MO11_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO11_IDR_CAN1   ((uint32)(MO11_ID_CAN1) << 21)
#else                         
#define MO11_IDR_CAN1  (((MO11_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO11_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 12 */
#if (MO12_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO12_IDR_CAN1   ((uint32)(MO12_ID_CAN1) << 21)
#else                         
#define MO12_IDR_CAN1  (((MO12_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO12_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 13 */
#if (MO13_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO13_IDR_CAN1   ((uint32)(MO13_ID_CAN1) << 21)
#else                         
#define MO13_IDR_CAN1  (((MO13_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO13_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 14 */
#if (MO14_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO14_IDR_CAN1   ((uint32)(MO14_ID_CAN1) << 21)
#else                         
#define MO14_IDR_CAN1  (((MO14_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO14_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 15 */
#if (MO15_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO15_IDR_CAN1   ((uint32)(MO15_ID_CAN1) << 21)
#else                         
#define MO15_IDR_CAN1  (((MO15_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO15_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 16 */
#if (MO16_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO16_IDR_CAN1   ((uint32)(MO16_ID_CAN1) << 21)
#else                         
#define MO16_IDR_CAN1  (((MO16_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO16_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 17 */
#if (MO17_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO17_IDR_CAN1   ((uint32)(MO17_ID_CAN1) << 21)
#else                         
#define MO17_IDR_CAN1  (((MO17_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO17_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 18 */
#if (MO18_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO18_IDR_CAN1   ((uint32)(MO18_ID_CAN1) << 21)
#else                         
#define MO18_IDR_CAN1  (((MO18_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO18_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 19 */
#if (MO19_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO19_IDR_CAN1   ((uint32)(MO19_ID_CAN1) << 21)
#else                         
#define MO19_IDR_CAN1  (((MO19_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO19_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 20 */
#if (MO20_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO20_IDR_CAN1   ((uint32)(MO20_ID_CAN1) << 21)
#else                         
#define MO20_IDR_CAN1  (((MO20_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO20_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 21 */
#if (MO21_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO21_IDR_CAN1   ((uint32)(MO21_ID_CAN1) << 21)
#else                         
#define MO21_IDR_CAN1  (((MO21_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO21_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 22 */
#if (MO22_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO22_IDR_CAN1   ((uint32)(MO22_ID_CAN1) << 21)
#else                         
#define MO22_IDR_CAN1  (((MO22_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO22_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 23 */
#if (MO23_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO23_IDR_CAN1   ((uint32)(MO23_ID_CAN1) << 21)
#else                         
#define MO23_IDR_CAN1  (((MO23_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO23_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 24 */
#if (MO24_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO24_IDR_CAN1   ((uint32)(MO24_ID_CAN1) << 21)
#else                         
#define MO24_IDR_CAN1  (((MO24_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO24_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 25 */
#if (MO25_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO25_IDR_CAN1   ((uint32)(MO25_ID_CAN1) << 21)
#else                         
#define MO25_IDR_CAN1  (((MO25_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO25_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 26 */
#if (MO26_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO26_IDR_CAN1   ((uint32)(MO26_ID_CAN1) << 21)
#else                         
#define MO26_IDR_CAN1  (((MO26_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO26_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 27 */
#if (MO27_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO27_IDR_CAN1   ((uint32)(MO27_ID_CAN1) << 21)
#else                         
#define MO27_IDR_CAN1  (((MO27_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO27_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 28 */
#if (MO28_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO28_IDR_CAN1   ((uint32)(MO28_ID_CAN1) << 21)
#else                         
#define MO28_IDR_CAN1  (((MO28_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO28_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 29 */
#if (MO29_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO29_IDR_CAN1   ((uint32)(MO29_ID_CAN1) << 21)
#else                         
#define MO29_IDR_CAN1  (((MO29_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO29_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 30 */
#if (MO30_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO30_IDR_CAN1   ((uint32)(MO30_ID_CAN1) << 21)
#else                         
#define MO30_IDR_CAN1  (((MO30_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO30_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 31 */
#if (MO31_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO31_IDR_CAN1   ((uint32)(MO31_ID_CAN1) << 21)
#else                         
#define MO31_IDR_CAN1  (((MO31_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO31_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 32 */
#if (MO32_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO32_IDR_CAN1   ((uint32)(MO32_ID_CAN1) << 21)
#else                         
#define MO32_IDR_CAN1  (((MO32_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO32_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 33 */
#if (MO33_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO33_IDR_CAN1   ((uint32)(MO33_ID_CAN1) << 21)
#else                         
#define MO33_IDR_CAN1  (((MO33_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO33_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 34 */
#if (MO34_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO34_IDR_CAN1   ((uint32)(MO34_ID_CAN1) << 21)
#else                         
#define MO34_IDR_CAN1  (((MO34_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO34_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 35 */
#if (MO35_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO35_IDR_CAN1   ((uint32)(MO35_ID_CAN1) << 21)
#else                         
#define MO35_IDR_CAN1  (((MO35_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO35_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 36 */
#if (MO36_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO36_IDR_CAN1   ((uint32)(MO36_ID_CAN1) << 21)
#else                         
#define MO36_IDR_CAN1  (((MO36_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO36_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 37 */
#if (MO37_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO37_IDR_CAN1   ((uint32)(MO37_ID_CAN1) << 21)
#else                         
#define MO37_IDR_CAN1  (((MO37_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO37_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 38 */
#if (MO38_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO38_IDR_CAN1   ((uint32)(MO38_ID_CAN1) << 21)
#else                         
#define MO38_IDR_CAN1  (((MO38_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO38_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 39 */
#if (MO39_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO39_IDR_CAN1   ((uint32)(MO39_ID_CAN1) << 21)
#else                         
#define MO39_IDR_CAN1  (((MO39_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO39_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 40 */
#if (MO40_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO40_IDR_CAN1   ((uint32)(MO40_ID_CAN1) << 21)
#else                         
#define MO40_IDR_CAN1  (((MO40_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO40_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 41 */
#if (MO41_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO41_IDR_CAN1   ((uint32)(MO41_ID_CAN1) << 21)
#else                         
#define MO41_IDR_CAN1  (((MO41_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO41_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 42 */
#if (MO42_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO42_IDR_CAN1   ((uint32)(MO42_ID_CAN1) << 21)
#else                         
#define MO42_IDR_CAN1  (((MO42_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO42_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 43 */
#if (MO43_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO43_IDR_CAN1   ((uint32)(MO43_ID_CAN1) << 21)
#else                         
#define MO43_IDR_CAN1  (((MO43_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO43_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 44 */
#if (MO44_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO44_IDR_CAN1   ((uint32)(MO44_ID_CAN1) << 21)
#else                         
#define MO44_IDR_CAN1  (((MO44_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO44_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 45 */
#if (MO45_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO45_IDR_CAN1   ((uint32)(MO45_ID_CAN1) << 21)
#else                         
#define MO45_IDR_CAN1  (((MO45_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO45_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 46 */
#if (MO46_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO46_IDR_CAN1   ((uint32)(MO46_ID_CAN1) << 21)
#else                         
#define MO46_IDR_CAN1  (((MO46_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO46_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 47 */
#if (MO47_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO47_IDR_CAN1   ((uint32)(MO47_ID_CAN1) << 21)
#else                         
#define MO47_IDR_CAN1  (((MO47_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO47_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 48 */
#if (MO48_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO48_IDR_CAN1   ((uint32)(MO48_ID_CAN1) << 21)
#else                         
#define MO48_IDR_CAN1  (((MO48_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO48_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 49 */
#if (MO49_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO49_IDR_CAN1   ((uint32)(MO49_ID_CAN1) << 21)
#else                         
#define MO49_IDR_CAN1  (((MO49_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO49_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 50 */
#if (MO50_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO50_IDR_CAN1   ((uint32)(MO50_ID_CAN1) << 21)
#else                         
#define MO50_IDR_CAN1  (((MO50_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO50_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 51 */
#if (MO51_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO51_IDR_CAN1   ((uint32)(MO51_ID_CAN1) << 21)
#else                         
#define MO51_IDR_CAN1  (((MO51_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO51_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 52 */
#if (MO52_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO52_IDR_CAN1   ((uint32)(MO52_ID_CAN1) << 21)
#else                         
#define MO52_IDR_CAN1  (((MO52_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO52_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 53 */
#if (MO53_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO53_IDR_CAN1   ((uint32)(MO53_ID_CAN1) << 21)
#else                         
#define MO53_IDR_CAN1  (((MO53_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO53_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 54 */
#if (MO54_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO54_IDR_CAN1   ((uint32)(MO54_ID_CAN1) << 21)
#else                         
#define MO54_IDR_CAN1  (((MO54_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO54_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 55 */
#if (MO55_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO55_IDR_CAN1   ((uint32)(MO55_ID_CAN1) << 21)
#else                         
#define MO55_IDR_CAN1  (((MO55_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO55_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 56 */
#if (MO56_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO56_IDR_CAN1   ((uint32)(MO56_ID_CAN1) << 21)
#else                         
#define MO56_IDR_CAN1  (((MO56_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO56_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 57 */
#if (MO57_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO57_IDR_CAN1   ((uint32)(MO57_ID_CAN1) << 21)
#else                         
#define MO57_IDR_CAN1  (((MO57_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO57_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 58 */
#if (MO58_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO58_IDR_CAN1   ((uint32)(MO58_ID_CAN1) << 21)
#else                         
#define MO58_IDR_CAN1  (((MO58_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO58_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 59 */
#if (MO59_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO59_IDR_CAN1   ((uint32)(MO59_ID_CAN1) << 21)
#else                         
#define MO59_IDR_CAN1  (((MO59_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO59_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 60 */
#if (MO60_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO60_IDR_CAN1   ((uint32)(MO60_ID_CAN1) << 21)
#else                         
#define MO60_IDR_CAN1  (((MO60_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO60_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 61 */
#if (MO61_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO61_IDR_CAN1   ((uint32)(MO61_ID_CAN1) << 21)
#else                         
#define MO61_IDR_CAN1  (((MO61_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO61_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 62 */
#if (MO62_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO62_IDR_CAN1   ((uint32)(MO62_ID_CAN1) << 21)
#else                         
#define MO62_IDR_CAN1  (((MO62_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO62_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 63 */
#if (MO63_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO63_IDR_CAN1   ((uint32)(MO63_ID_CAN1) << 21)
#else                         
#define MO63_IDR_CAN1  (((MO63_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO63_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 64 */
#if (MO64_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO64_IDR_CAN1   ((uint32)(MO64_ID_CAN1) << 21)
#else                         
#define MO64_IDR_CAN1  (((MO64_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO64_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 65 */
#if (MO65_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO65_IDR_CAN1   ((uint32)(MO65_ID_CAN1) << 21)
#else                         
#define MO65_IDR_CAN1  (((MO65_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO65_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 66 */
#if (MO66_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO66_IDR_CAN1   ((uint32)(MO66_ID_CAN1) << 21)
#else                         
#define MO66_IDR_CAN1  (((MO66_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO66_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 67 */
#if (MO67_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO67_IDR_CAN1   ((uint32)(MO67_ID_CAN1) << 21)
#else                         
#define MO67_IDR_CAN1  (((MO67_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO67_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 68 */
#if (MO68_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO68_IDR_CAN1   ((uint32)(MO68_ID_CAN1) << 21)
#else                         
#define MO68_IDR_CAN1  (((MO68_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO68_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 69 */
#if (MO69_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO69_IDR_CAN1   ((uint32)(MO69_ID_CAN1) << 21)
#else                         
#define MO69_IDR_CAN1  (((MO69_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO69_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 70 */
#if (MO70_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO70_IDR_CAN1   ((uint32)(MO70_ID_CAN1) << 21)
#else                         
#define MO70_IDR_CAN1  (((MO70_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO70_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 71 */
#if (MO71_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO71_IDR_CAN1   ((uint32)(MO71_ID_CAN1) << 21)
#else                         
#define MO71_IDR_CAN1  (((MO71_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO71_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 72 */
#if (MO72_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO72_IDR_CAN1   ((uint32)(MO72_ID_CAN1) << 21)
#else                         
#define MO72_IDR_CAN1  (((MO72_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO72_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 73 */
#if (MO73_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO73_IDR_CAN1   ((uint32)(MO73_ID_CAN1) << 21)
#else                         
#define MO73_IDR_CAN1  (((MO73_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO73_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 74 */
#if (MO74_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO74_IDR_CAN1   ((uint32)(MO74_ID_CAN1) << 21)
#else                         
#define MO74_IDR_CAN1  (((MO74_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO74_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 75 */
#if (MO75_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO75_IDR_CAN1   ((uint32)(MO75_ID_CAN1) << 21)
#else                         
#define MO75_IDR_CAN1  (((MO75_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO75_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 76 */
#if (MO76_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO76_IDR_CAN1   ((uint32)(MO76_ID_CAN1) << 21)
#else                         
#define MO76_IDR_CAN1  (((MO76_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO76_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 77 */
#if (MO77_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO77_IDR_CAN1   ((uint32)(MO77_ID_CAN1) << 21)
#else                         
#define MO77_IDR_CAN1  (((MO77_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO77_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 78 */
#if (MO78_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO78_IDR_CAN1   ((uint32)(MO78_ID_CAN1) << 21)
#else                         
#define MO78_IDR_CAN1  (((MO78_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO78_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 79 */
#if (MO79_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO79_IDR_CAN1   ((uint32)(MO79_ID_CAN1) << 21)
#else                         
#define MO79_IDR_CAN1  (((MO79_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO79_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 80 */
#if (MO80_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO80_IDR_CAN1   ((uint32)(MO80_ID_CAN1) << 21)
#else                         
#define MO80_IDR_CAN1  (((MO80_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO80_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 81 */
#if (MO81_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO81_IDR_CAN1   ((uint32)(MO81_ID_CAN1) << 21)
#else                         
#define MO81_IDR_CAN1  (((MO81_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO81_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 82 */
#if (MO82_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO82_IDR_CAN1   ((uint32)(MO82_ID_CAN1) << 21)
#else                         
#define MO82_IDR_CAN1  (((MO82_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO82_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 83 */
#if (MO83_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO83_IDR_CAN1   ((uint32)(MO83_ID_CAN1) << 21)
#else                         
#define MO83_IDR_CAN1  (((MO83_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO83_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 84 */
#if (MO84_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO84_IDR_CAN1   ((uint32)(MO84_ID_CAN1) << 21)
#else                         
#define MO84_IDR_CAN1  (((MO84_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO84_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 85 */
#if (MO85_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO85_IDR_CAN1   ((uint32)(MO85_ID_CAN1) << 21)
#else                         
#define MO85_IDR_CAN1  (((MO85_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO85_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 86 */
#if (MO86_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO86_IDR_CAN1   ((uint32)(MO86_ID_CAN1) << 21)
#else                         
#define MO86_IDR_CAN1  (((MO86_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO86_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 87 */
#if (MO87_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO87_IDR_CAN1   ((uint32)(MO87_ID_CAN1) << 21)
#else                         
#define MO87_IDR_CAN1  (((MO87_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO87_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 88 */
#if (MO88_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO88_IDR_CAN1   ((uint32)(MO88_ID_CAN1) << 21)
#else                         
#define MO88_IDR_CAN1  (((MO88_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO88_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 89 */
#if (MO89_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO89_IDR_CAN1   ((uint32)(MO89_ID_CAN1) << 21)
#else                         
#define MO89_IDR_CAN1  (((MO89_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO89_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 90 */
#if (MO90_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO90_IDR_CAN1   ((uint32)(MO90_ID_CAN1) << 21)
#else                         
#define MO90_IDR_CAN1  (((MO90_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO90_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 91 */
#if (MO91_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO91_IDR_CAN1   ((uint32)(MO91_ID_CAN1) << 21)
#else                         
#define MO91_IDR_CAN1  (((MO91_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO91_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 92 */
#if (MO92_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO92_IDR_CAN1   ((uint32)(MO92_ID_CAN1) << 21)
#else                         
#define MO92_IDR_CAN1  (((MO92_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO92_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 93 */
#if (MO93_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO93_IDR_CAN1   ((uint32)(MO93_ID_CAN1) << 21)
#else                         
#define MO93_IDR_CAN1  (((MO93_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO93_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 94 */
#if (MO94_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO94_IDR_CAN1   ((uint32)(MO94_ID_CAN1) << 21)
#else                         
#define MO94_IDR_CAN1  (((MO94_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO94_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 95 */
#if (MO95_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO95_IDR_CAN1   ((uint32)(MO95_ID_CAN1) << 21)
#else                         
#define MO95_IDR_CAN1  (((MO95_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO95_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 96 */
#if (MO96_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO96_IDR_CAN1   ((uint32)(MO96_ID_CAN1) << 21)
#else                         
#define MO96_IDR_CAN1  (((MO96_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO96_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 97 */
#if (MO97_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO97_IDR_CAN1   ((uint32)(MO97_ID_CAN1) << 21)
#else                         
#define MO97_IDR_CAN1  (((MO97_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO97_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 98 */
#if (MO98_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO98_IDR_CAN1   ((uint32)(MO98_ID_CAN1) << 21)
#else                         
#define MO98_IDR_CAN1  (((MO98_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO98_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 99 */
#if (MO99_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO99_IDR_CAN1   ((uint32)(MO99_ID_CAN1) << 21)
#else                         
#define MO99_IDR_CAN1  (((MO99_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO99_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 100 */
#if (MO100_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO100_IDR_CAN1   ((uint32)(MO100_ID_CAN1) << 21)
#else                         
#define MO100_IDR_CAN1  (((MO100_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO100_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 101 */
#if (MO101_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO101_IDR_CAN1   ((uint32)(MO101_ID_CAN1) << 21)
#else                         
#define MO101_IDR_CAN1  (((MO101_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO101_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 102 */
#if (MO102_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO102_IDR_CAN1   ((uint32)(MO102_ID_CAN1) << 21)
#else                         
#define MO102_IDR_CAN1  (((MO102_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO102_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 103 */
#if (MO103_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO103_IDR_CAN1   ((uint32)(MO103_ID_CAN1) << 21)
#else                         
#define MO103_IDR_CAN1  (((MO103_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO103_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 104 */
#if (MO104_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO104_IDR_CAN1   ((uint32)(MO104_ID_CAN1) << 21)
#else                         
#define MO104_IDR_CAN1  (((MO104_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO104_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 105 */
#if (MO105_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO105_IDR_CAN1   ((uint32)(MO105_ID_CAN1) << 21)
#else                         
#define MO105_IDR_CAN1  (((MO105_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO105_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 106 */
#if (MO106_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO106_IDR_CAN1   ((uint32)(MO106_ID_CAN1) << 21)
#else                         
#define MO106_IDR_CAN1  (((MO106_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO106_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 107 */
#if (MO107_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO107_IDR_CAN1   ((uint32)(MO107_ID_CAN1) << 21)
#else                         
#define MO107_IDR_CAN1  (((MO107_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO107_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 108 */
#if (MO108_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO108_IDR_CAN1   ((uint32)(MO108_ID_CAN1) << 21)
#else                         
#define MO108_IDR_CAN1  (((MO108_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO108_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 109 */
#if (MO109_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO109_IDR_CAN1   ((uint32)(MO109_ID_CAN1) << 21)
#else                         
#define MO109_IDR_CAN1  (((MO109_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO109_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 110 */
#if (MO110_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO110_IDR_CAN1   ((uint32)(MO110_ID_CAN1) << 21)
#else                         
#define MO110_IDR_CAN1  (((MO110_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO110_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 111 */
#if (MO111_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO111_IDR_CAN1   ((uint32)(MO111_ID_CAN1) << 21)
#else                         
#define MO111_IDR_CAN1  (((MO111_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO111_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 112 */
#if (MO112_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO112_IDR_CAN1   ((uint32)(MO112_ID_CAN1) << 21)
#else                         
#define MO112_IDR_CAN1  (((MO112_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO112_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 113 */
#if (MO113_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO113_IDR_CAN1   ((uint32)(MO113_ID_CAN1) << 21)
#else                         
#define MO113_IDR_CAN1  (((MO113_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO113_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 114 */
#if (MO114_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO114_IDR_CAN1   ((uint32)(MO114_ID_CAN1) << 21)
#else                         
#define MO114_IDR_CAN1  (((MO114_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO114_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 115 */
#if (MO115_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO115_IDR_CAN1   ((uint32)(MO115_ID_CAN1) << 21)
#else                         
#define MO115_IDR_CAN1  (((MO115_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO115_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 116 */
#if (MO116_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO116_IDR_CAN1   ((uint32)(MO116_ID_CAN1) << 21)
#else                         
#define MO116_IDR_CAN1  (((MO116_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO116_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 117 */
#if (MO117_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO117_IDR_CAN1   ((uint32)(MO117_ID_CAN1) << 21)
#else                         
#define MO117_IDR_CAN1  (((MO117_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO117_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 118 */
#if (MO118_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO118_IDR_CAN1   ((uint32)(MO118_ID_CAN1) << 21)
#else                         
#define MO118_IDR_CAN1  (((MO118_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO118_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 119 */
#if (MO119_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO119_IDR_CAN1   ((uint32)(MO119_ID_CAN1) << 21)
#else                         
#define MO119_IDR_CAN1  (((MO119_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO119_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 120 */
#if (MO120_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO120_IDR_CAN1   ((uint32)(MO120_ID_CAN1) << 21)
#else                         
#define MO120_IDR_CAN1  (((MO120_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO120_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 121 */
#if (MO121_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO121_IDR_CAN1   ((uint32)(MO121_ID_CAN1) << 21)
#else                         
#define MO121_IDR_CAN1  (((MO121_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO121_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 122 */
#if (MO122_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO122_IDR_CAN1   ((uint32)(MO122_ID_CAN1) << 21)
#else                         
#define MO122_IDR_CAN1  (((MO122_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO122_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 123 */
#if (MO123_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO123_IDR_CAN1   ((uint32)(MO123_ID_CAN1) << 21)
#else                         
#define MO123_IDR_CAN1  (((MO123_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO123_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 124 */
#if (MO124_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO124_IDR_CAN1   ((uint32)(MO124_ID_CAN1) << 21)
#else                         
#define MO124_IDR_CAN1  (((MO124_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO124_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 125 */
#if (MO125_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO125_IDR_CAN1   ((uint32)(MO125_ID_CAN1) << 21)
#else                         
#define MO125_IDR_CAN1  (((MO125_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO125_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 126 */
#if (MO126_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO126_IDR_CAN1   ((uint32)(MO126_ID_CAN1) << 21)
#else                         
#define MO126_IDR_CAN1  (((MO126_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO126_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 127 */
#if (MO127_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO127_IDR_CAN1   ((uint32)(MO127_ID_CAN1) << 21)
#else                         
#define MO127_IDR_CAN1  (((MO127_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO127_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 128 */
#if (MO128_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO128_IDR_CAN1   ((uint32)(MO128_ID_CAN1) << 21)
#else                         
#define MO128_IDR_CAN1  (((MO128_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO128_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 129 */
#if (MO129_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO129_IDR_CAN1   ((uint32)(MO129_ID_CAN1) << 21)
#else                         
#define MO129_IDR_CAN1  (((MO129_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO129_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 130 */
#if (MO130_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO130_IDR_CAN1   ((uint32)(MO130_ID_CAN1) << 21)
#else                         
#define MO130_IDR_CAN1  (((MO130_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO130_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 131 */
#if (MO131_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO131_IDR_CAN1   ((uint32)(MO131_ID_CAN1) << 21)
#else                         
#define MO131_IDR_CAN1  (((MO131_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO131_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 132 */
#if (MO132_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO132_IDR_CAN1   ((uint32)(MO132_ID_CAN1) << 21)
#else                         
#define MO132_IDR_CAN1  (((MO132_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO132_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 133 */
#if (MO133_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO133_IDR_CAN1   ((uint32)(MO133_ID_CAN1) << 21)
#else                         
#define MO133_IDR_CAN1  (((MO133_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO133_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 134 */
#if (MO134_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO134_IDR_CAN1   ((uint32)(MO134_ID_CAN1) << 21)
#else                         
#define MO134_IDR_CAN1  (((MO134_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO134_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 135 */
#if (MO135_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO135_IDR_CAN1   ((uint32)(MO135_ID_CAN1) << 21)
#else                         
#define MO135_IDR_CAN1  (((MO135_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO135_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 136 */
#if (MO136_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO136_IDR_CAN1   ((uint32)(MO136_ID_CAN1) << 21)
#else                         
#define MO136_IDR_CAN1  (((MO136_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO136_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 137 */
#if (MO137_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO137_IDR_CAN1   ((uint32)(MO137_ID_CAN1) << 21)
#else                         
#define MO137_IDR_CAN1  (((MO137_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO137_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 138 */
#if (MO138_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO138_IDR_CAN1   ((uint32)(MO138_ID_CAN1) << 21)
#else                         
#define MO138_IDR_CAN1  (((MO138_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO138_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 139 */
#if (MO139_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO139_IDR_CAN1   ((uint32)(MO139_ID_CAN1) << 21)
#else                         
#define MO139_IDR_CAN1  (((MO139_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO139_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 140 */
#if (MO140_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO140_IDR_CAN1   ((uint32)(MO140_ID_CAN1) << 21)
#else                         
#define MO140_IDR_CAN1  (((MO140_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO140_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 141 */
#if (MO141_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO141_IDR_CAN1   ((uint32)(MO141_ID_CAN1) << 21)
#else                         
#define MO141_IDR_CAN1  (((MO141_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO141_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 142 */
#if (MO142_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO142_IDR_CAN1   ((uint32)(MO142_ID_CAN1) << 21)
#else                         
#define MO142_IDR_CAN1  (((MO142_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO142_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 143 */
#if (MO143_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO143_IDR_CAN1   ((uint32)(MO143_ID_CAN1) << 21)
#else                         
#define MO143_IDR_CAN1  (((MO143_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO143_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 144 */
#if (MO144_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO144_IDR_CAN1   ((uint32)(MO144_ID_CAN1) << 21)
#else                         
#define MO144_IDR_CAN1  (((MO144_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO144_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 145 */
#if (MO145_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO145_IDR_CAN1   ((uint32)(MO145_ID_CAN1) << 21)
#else                         
#define MO145_IDR_CAN1  (((MO145_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO145_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 146 */
#if (MO146_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO146_IDR_CAN1   ((uint32)(MO146_ID_CAN1) << 21)
#else                         
#define MO146_IDR_CAN1  (((MO146_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO146_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 147 */
#if (MO147_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO147_IDR_CAN1   ((uint32)(MO147_ID_CAN1) << 21)
#else                         
#define MO147_IDR_CAN1  (((MO147_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO147_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 148 */
#if (MO148_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO148_IDR_CAN1   ((uint32)(MO148_ID_CAN1) << 21)
#else                         
#define MO148_IDR_CAN1  (((MO148_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO148_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 149 */
#if (MO149_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO149_IDR_CAN1   ((uint32)(MO149_ID_CAN1) << 21)
#else                         
#define MO149_IDR_CAN1  (((MO149_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO149_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 150 */
#if (MO150_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO150_IDR_CAN1   ((uint32)(MO150_ID_CAN1) << 21)
#else                         
#define MO150_IDR_CAN1  (((MO150_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO150_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 151 */
#if (MO151_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO151_IDR_CAN1   ((uint32)(MO151_ID_CAN1) << 21)
#else                         
#define MO151_IDR_CAN1  (((MO151_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO151_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 152 */
#if (MO152_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO152_IDR_CAN1   ((uint32)(MO152_ID_CAN1) << 21)
#else                         
#define MO152_IDR_CAN1  (((MO152_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO152_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 153 */
#if (MO153_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO153_IDR_CAN1   ((uint32)(MO153_ID_CAN1) << 21)
#else                         
#define MO153_IDR_CAN1  (((MO153_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO153_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 154 */
#if (MO154_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO154_IDR_CAN1   ((uint32)(MO154_ID_CAN1) << 21)
#else                         
#define MO154_IDR_CAN1  (((MO154_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO154_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 155 */
#if (MO155_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO155_IDR_CAN1   ((uint32)(MO155_ID_CAN1) << 21)
#else                         
#define MO155_IDR_CAN1  (((MO155_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO155_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 156 */
#if (MO156_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO156_IDR_CAN1   ((uint32)(MO156_ID_CAN1) << 21)
#else                         
#define MO156_IDR_CAN1  (((MO156_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO156_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 157 */
#if (MO157_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO157_IDR_CAN1   ((uint32)(MO157_ID_CAN1) << 21)
#else                         
#define MO157_IDR_CAN1  (((MO157_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO157_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 158 */
#if (MO158_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO158_IDR_CAN1   ((uint32)(MO158_ID_CAN1) << 21)
#else                         
#define MO158_IDR_CAN1  (((MO158_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO158_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 159 */
#if (MO159_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO159_IDR_CAN1   ((uint32)(MO159_ID_CAN1) << 21)
#else                         
#define MO159_IDR_CAN1  (((MO159_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO159_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 160 */
#if (MO160_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO160_IDR_CAN1   ((uint32)(MO160_ID_CAN1) << 21)
#else                         
#define MO160_IDR_CAN1  (((MO160_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO160_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 161 */
#if (MO161_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO161_IDR_CAN1   ((uint32)(MO161_ID_CAN1) << 21)
#else                         
#define MO161_IDR_CAN1  (((MO161_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO161_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 162 */
#if (MO162_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO162_IDR_CAN1   ((uint32)(MO162_ID_CAN1) << 21)
#else                         
#define MO162_IDR_CAN1  (((MO162_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO162_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 163 */
#if (MO163_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO163_IDR_CAN1   ((uint32)(MO163_ID_CAN1) << 21)
#else                         
#define MO163_IDR_CAN1  (((MO163_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO163_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 164 */
#if (MO164_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO164_IDR_CAN1   ((uint32)(MO164_ID_CAN1) << 21)
#else                         
#define MO164_IDR_CAN1  (((MO164_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO164_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 165 */
#if (MO165_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO165_IDR_CAN1   ((uint32)(MO165_ID_CAN1) << 21)
#else                         
#define MO165_IDR_CAN1  (((MO165_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO165_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 166 */
#if (MO166_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO166_IDR_CAN1   ((uint32)(MO166_ID_CAN1) << 21)
#else                         
#define MO166_IDR_CAN1  (((MO166_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO166_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 167 */
#if (MO167_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO167_IDR_CAN1   ((uint32)(MO167_ID_CAN1) << 21)
#else                         
#define MO167_IDR_CAN1  (((MO167_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO167_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 168 */
#if (MO168_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO168_IDR_CAN1   ((uint32)(MO168_ID_CAN1) << 21)
#else                         
#define MO168_IDR_CAN1  (((MO168_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO168_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 169 */
#if (MO169_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO169_IDR_CAN1   ((uint32)(MO169_ID_CAN1) << 21)
#else                         
#define MO169_IDR_CAN1  (((MO169_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO169_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 170 */
#if (MO170_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO170_IDR_CAN1   ((uint32)(MO170_ID_CAN1) << 21)
#else                         
#define MO170_IDR_CAN1  (((MO170_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO170_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 171 */
#if (MO171_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO171_IDR_CAN1   ((uint32)(MO171_ID_CAN1) << 21)
#else                         
#define MO171_IDR_CAN1  (((MO171_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO171_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 172 */
#if (MO172_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO172_IDR_CAN1   ((uint32)(MO172_ID_CAN1) << 21)
#else                         
#define MO172_IDR_CAN1  (((MO172_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO172_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 173 */
#if (MO173_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO173_IDR_CAN1   ((uint32)(MO173_ID_CAN1) << 21)
#else                         
#define MO173_IDR_CAN1  (((MO173_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO173_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 174 */
#if (MO174_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO174_IDR_CAN1   ((uint32)(MO174_ID_CAN1) << 21)
#else                         
#define MO174_IDR_CAN1  (((MO174_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO174_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 175 */
#if (MO175_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO175_IDR_CAN1   ((uint32)(MO175_ID_CAN1) << 21)
#else                         
#define MO175_IDR_CAN1  (((MO175_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO175_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 176 */
#if (MO176_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO176_IDR_CAN1   ((uint32)(MO176_ID_CAN1) << 21)
#else                         
#define MO176_IDR_CAN1  (((MO176_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO176_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 177 */
#if (MO177_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO177_IDR_CAN1   ((uint32)(MO177_ID_CAN1) << 21)
#else                         
#define MO177_IDR_CAN1  (((MO177_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO177_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 178 */
#if (MO178_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO178_IDR_CAN1   ((uint32)(MO178_ID_CAN1) << 21)
#else                         
#define MO178_IDR_CAN1  (((MO178_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO178_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 179 */
#if (MO179_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO179_IDR_CAN1   ((uint32)(MO179_ID_CAN1) << 21)
#else                         
#define MO179_IDR_CAN1  (((MO179_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO179_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 180 */
#if (MO180_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO180_IDR_CAN1   ((uint32)(MO180_ID_CAN1) << 21)
#else                         
#define MO180_IDR_CAN1  (((MO180_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO180_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 181 */
#if (MO181_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO181_IDR_CAN1   ((uint32)(MO181_ID_CAN1) << 21)
#else                         
#define MO181_IDR_CAN1  (((MO181_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO181_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 182 */
#if (MO182_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO182_IDR_CAN1   ((uint32)(MO182_ID_CAN1) << 21)
#else                         
#define MO182_IDR_CAN1  (((MO182_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO182_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 183 */
#if (MO183_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO183_IDR_CAN1   ((uint32)(MO183_ID_CAN1) << 21)
#else                         
#define MO183_IDR_CAN1  (((MO183_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO183_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 184 */
#if (MO184_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO184_IDR_CAN1   ((uint32)(MO184_ID_CAN1) << 21)
#else                         
#define MO184_IDR_CAN1  (((MO184_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO184_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 185 */
#if (MO185_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO185_IDR_CAN1   ((uint32)(MO185_ID_CAN1) << 21)
#else                         
#define MO185_IDR_CAN1  (((MO185_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO185_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 186 */
#if (MO186_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO186_IDR_CAN1   ((uint32)(MO186_ID_CAN1) << 21)
#else                         
#define MO186_IDR_CAN1  (((MO186_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO186_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 187 */
#if (MO187_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO187_IDR_CAN1   ((uint32)(MO187_ID_CAN1) << 21)
#else                         
#define MO187_IDR_CAN1  (((MO187_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO187_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 188 */
#if (MO188_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO188_IDR_CAN1   ((uint32)(MO188_ID_CAN1) << 21)
#else                         
#define MO188_IDR_CAN1  (((MO188_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO188_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 189 */
#if (MO189_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO189_IDR_CAN1   ((uint32)(MO189_ID_CAN1) << 21)
#else                         
#define MO189_IDR_CAN1  (((MO189_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO189_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 190 */
#if (MO190_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO190_IDR_CAN1   ((uint32)(MO190_ID_CAN1) << 21)
#else                         
#define MO190_IDR_CAN1  (((MO190_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO190_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 191 */
#if (MO191_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO191_IDR_CAN1   ((uint32)(MO191_ID_CAN1) << 21)
#else                         
#define MO191_IDR_CAN1  (((MO191_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO191_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 192 */
#if (MO192_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO192_IDR_CAN1   ((uint32)(MO192_ID_CAN1) << 21)
#else                         
#define MO192_IDR_CAN1  (((MO192_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO192_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 193 */
#if (MO193_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO193_IDR_CAN1   ((uint32)(MO193_ID_CAN1) << 21)
#else                         
#define MO193_IDR_CAN1  (((MO193_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO193_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 194 */
#if (MO194_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO194_IDR_CAN1   ((uint32)(MO194_ID_CAN1) << 21)
#else                         
#define MO194_IDR_CAN1  (((MO194_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO194_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 195 */
#if (MO195_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO195_IDR_CAN1   ((uint32)(MO195_ID_CAN1) << 21)
#else                         
#define MO195_IDR_CAN1  (((MO195_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO195_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 196 */
#if (MO196_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO196_IDR_CAN1   ((uint32)(MO196_ID_CAN1) << 21)
#else                         
#define MO196_IDR_CAN1  (((MO196_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO196_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 197 */
#if (MO197_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO197_IDR_CAN1   ((uint32)(MO197_ID_CAN1) << 21)
#else                         
#define MO197_IDR_CAN1  (((MO197_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO197_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 198 */
#if (MO198_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO198_IDR_CAN1   ((uint32)(MO198_ID_CAN1) << 21)
#else                         
#define MO198_IDR_CAN1  (((MO198_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO198_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 199 */
#if (MO199_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO199_IDR_CAN1   ((uint32)(MO199_ID_CAN1) << 21)
#else                         
#define MO199_IDR_CAN1  (((MO199_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO199_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 200 */
#if (MO200_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO200_IDR_CAN1   ((uint32)(MO200_ID_CAN1) << 21)
#else                         
#define MO200_IDR_CAN1  (((MO200_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO200_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 201 */
#if (MO201_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO201_IDR_CAN1   ((uint32)(MO201_ID_CAN1) << 21)
#else                         
#define MO201_IDR_CAN1  (((MO201_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO201_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 202 */
#if (MO202_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO202_IDR_CAN1   ((uint32)(MO202_ID_CAN1) << 21)
#else                         
#define MO202_IDR_CAN1  (((MO202_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO202_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 203 */
#if (MO203_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO203_IDR_CAN1   ((uint32)(MO203_ID_CAN1) << 21)
#else                         
#define MO203_IDR_CAN1  (((MO203_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO203_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 204 */
#if (MO204_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO204_IDR_CAN1   ((uint32)(MO204_ID_CAN1) << 21)
#else                         
#define MO204_IDR_CAN1  (((MO204_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO204_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 205 */
#if (MO205_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO205_IDR_CAN1   ((uint32)(MO205_ID_CAN1) << 21)
#else                         
#define MO205_IDR_CAN1  (((MO205_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO205_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 206 */
#if (MO206_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO206_IDR_CAN1   ((uint32)(MO206_ID_CAN1) << 21)
#else                         
#define MO206_IDR_CAN1  (((MO206_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO206_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 207 */
#if (MO207_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO207_IDR_CAN1   ((uint32)(MO207_ID_CAN1) << 21)
#else                         
#define MO207_IDR_CAN1  (((MO207_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO207_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 208 */
#if (MO208_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO208_IDR_CAN1   ((uint32)(MO208_ID_CAN1) << 21)
#else                         
#define MO208_IDR_CAN1  (((MO208_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO208_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 209 */
#if (MO209_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO209_IDR_CAN1   ((uint32)(MO209_ID_CAN1) << 21)
#else                         
#define MO209_IDR_CAN1  (((MO209_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO209_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 210 */
#if (MO210_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO210_IDR_CAN1   ((uint32)(MO210_ID_CAN1) << 21)
#else                         
#define MO210_IDR_CAN1  (((MO210_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO210_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 211 */
#if (MO211_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO211_IDR_CAN1   ((uint32)(MO211_ID_CAN1) << 21)
#else                         
#define MO211_IDR_CAN1  (((MO211_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO211_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 212 */
#if (MO212_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO212_IDR_CAN1   ((uint32)(MO212_ID_CAN1) << 21)
#else                         
#define MO212_IDR_CAN1  (((MO212_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO212_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 213 */
#if (MO213_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO213_IDR_CAN1   ((uint32)(MO213_ID_CAN1) << 21)
#else                         
#define MO213_IDR_CAN1  (((MO213_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO213_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 214 */
#if (MO214_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO214_IDR_CAN1   ((uint32)(MO214_ID_CAN1) << 21)
#else                         
#define MO214_IDR_CAN1  (((MO214_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO214_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 215 */
#if (MO215_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO215_IDR_CAN1   ((uint32)(MO215_ID_CAN1) << 21)
#else                         
#define MO215_IDR_CAN1  (((MO215_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO215_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 216 */
#if (MO216_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO216_IDR_CAN1   ((uint32)(MO216_ID_CAN1) << 21)
#else                         
#define MO216_IDR_CAN1  (((MO216_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO216_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 217 */
#if (MO217_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO217_IDR_CAN1   ((uint32)(MO217_ID_CAN1) << 21)
#else                         
#define MO217_IDR_CAN1  (((MO217_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO217_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 218 */
#if (MO218_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO218_IDR_CAN1   ((uint32)(MO218_ID_CAN1) << 21)
#else                         
#define MO218_IDR_CAN1  (((MO218_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO218_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 219 */
#if (MO219_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO219_IDR_CAN1   ((uint32)(MO219_ID_CAN1) << 21)
#else                         
#define MO219_IDR_CAN1  (((MO219_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO219_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 220 */
#if (MO220_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO220_IDR_CAN1   ((uint32)(MO220_ID_CAN1) << 21)
#else                         
#define MO220_IDR_CAN1  (((MO220_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO220_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 221 */
#if (MO221_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO221_IDR_CAN1   ((uint32)(MO221_ID_CAN1) << 21)
#else                         
#define MO221_IDR_CAN1  (((MO221_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO221_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 222 */
#if (MO222_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO222_IDR_CAN1   ((uint32)(MO222_ID_CAN1) << 21)
#else                         
#define MO222_IDR_CAN1  (((MO222_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO222_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 223 */
#if (MO223_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO223_IDR_CAN1   ((uint32)(MO223_ID_CAN1) << 21)
#else                         
#define MO223_IDR_CAN1  (((MO223_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO223_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 224 */
#if (MO224_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO224_IDR_CAN1   ((uint32)(MO224_ID_CAN1) << 21)
#else                         
#define MO224_IDR_CAN1  (((MO224_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO224_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 225 */
#if (MO225_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO225_IDR_CAN1   ((uint32)(MO225_ID_CAN1) << 21)
#else                         
#define MO225_IDR_CAN1  (((MO225_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO225_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 226 */
#if (MO226_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO226_IDR_CAN1   ((uint32)(MO226_ID_CAN1) << 21)
#else                         
#define MO226_IDR_CAN1  (((MO226_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO226_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 227 */
#if (MO227_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO227_IDR_CAN1   ((uint32)(MO227_ID_CAN1) << 21)
#else                         
#define MO227_IDR_CAN1  (((MO227_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO227_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 228 */
#if (MO228_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO228_IDR_CAN1   ((uint32)(MO228_ID_CAN1) << 21)
#else                         
#define MO228_IDR_CAN1  (((MO228_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO228_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 229 */
#if (MO229_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO229_IDR_CAN1   ((uint32)(MO229_ID_CAN1) << 21)
#else                         
#define MO229_IDR_CAN1  (((MO229_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO229_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 230 */
#if (MO230_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO230_IDR_CAN1   ((uint32)(MO230_ID_CAN1) << 21)
#else                         
#define MO230_IDR_CAN1  (((MO230_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO230_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 231 */
#if (MO231_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO231_IDR_CAN1   ((uint32)(MO231_ID_CAN1) << 21)
#else                         
#define MO231_IDR_CAN1  (((MO231_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO231_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 232 */
#if (MO232_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO232_IDR_CAN1   ((uint32)(MO232_ID_CAN1) << 21)
#else                         
#define MO232_IDR_CAN1  (((MO232_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO232_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 233 */
#if (MO233_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO233_IDR_CAN1   ((uint32)(MO233_ID_CAN1) << 21)
#else                         
#define MO233_IDR_CAN1  (((MO233_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO233_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 234 */
#if (MO234_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO234_IDR_CAN1   ((uint32)(MO234_ID_CAN1) << 21)
#else                         
#define MO234_IDR_CAN1  (((MO234_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO234_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 235 */
#if (MO235_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO235_IDR_CAN1   ((uint32)(MO235_ID_CAN1) << 21)
#else                         
#define MO235_IDR_CAN1  (((MO235_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO235_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 236 */
#if (MO236_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO236_IDR_CAN1   ((uint32)(MO236_ID_CAN1) << 21)
#else                         
#define MO236_IDR_CAN1  (((MO236_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO236_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 237 */
#if (MO237_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO237_IDR_CAN1   ((uint32)(MO237_ID_CAN1) << 21)
#else                         
#define MO237_IDR_CAN1  (((MO237_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO237_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 238 */
#if (MO238_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO238_IDR_CAN1   ((uint32)(MO238_ID_CAN1) << 21)
#else                         
#define MO238_IDR_CAN1  (((MO238_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO238_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 239 */
#if (MO239_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO239_IDR_CAN1   ((uint32)(MO239_ID_CAN1) << 21)
#else                         
#define MO239_IDR_CAN1  (((MO239_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO239_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 240 */
#if (MO240_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO240_IDR_CAN1   ((uint32)(MO240_ID_CAN1) << 21)
#else                         
#define MO240_IDR_CAN1  (((MO240_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO240_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 241 */
#if (MO241_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO241_IDR_CAN1   ((uint32)(MO241_ID_CAN1) << 21)
#else                         
#define MO241_IDR_CAN1  (((MO241_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO241_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 242 */
#if (MO242_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO242_IDR_CAN1   ((uint32)(MO242_ID_CAN1) << 21)
#else                         
#define MO242_IDR_CAN1  (((MO242_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO242_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 243 */
#if (MO243_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO243_IDR_CAN1   ((uint32)(MO243_ID_CAN1) << 21)
#else                         
#define MO243_IDR_CAN1  (((MO243_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO243_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 244 */
#if (MO244_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO244_IDR_CAN1   ((uint32)(MO244_ID_CAN1) << 21)
#else                         
#define MO244_IDR_CAN1  (((MO244_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO244_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 245 */
#if (MO245_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO245_IDR_CAN1   ((uint32)(MO245_ID_CAN1) << 21)
#else                         
#define MO245_IDR_CAN1  (((MO245_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO245_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 246 */
#if (MO246_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO246_IDR_CAN1   ((uint32)(MO246_ID_CAN1) << 21)
#else                         
#define MO246_IDR_CAN1  (((MO246_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO246_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 247 */
#if (MO247_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO247_IDR_CAN1   ((uint32)(MO247_ID_CAN1) << 21)
#else                         
#define MO247_IDR_CAN1  (((MO247_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO247_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 248 */
#if (MO248_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO248_IDR_CAN1   ((uint32)(MO248_ID_CAN1) << 21)
#else                         
#define MO248_IDR_CAN1  (((MO248_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO248_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 249 */
#if (MO249_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO249_IDR_CAN1   ((uint32)(MO249_ID_CAN1) << 21)
#else                         
#define MO249_IDR_CAN1  (((MO249_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO249_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 250 */
#if (MO250_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO250_IDR_CAN1   ((uint32)(MO250_ID_CAN1) << 21)
#else                         
#define MO250_IDR_CAN1  (((MO250_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO250_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 251 */
#if (MO251_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO251_IDR_CAN1   ((uint32)(MO251_ID_CAN1) << 21)
#else                         
#define MO251_IDR_CAN1  (((MO251_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO251_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 252 */
#if (MO252_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO252_IDR_CAN1   ((uint32)(MO252_ID_CAN1) << 21)
#else                         
#define MO252_IDR_CAN1  (((MO252_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO252_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 253 */
#if (MO253_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO253_IDR_CAN1   ((uint32)(MO253_ID_CAN1) << 21)
#else                         
#define MO253_IDR_CAN1  (((MO253_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO253_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

/* Message Object 254 */
#if (MO254_ID_TYPE_CAN1 == CAN_STANDARD)
#define MO254_IDR_CAN1   ((uint32)(MO254_ID_CAN1) << 21)
#else                         
#define MO254_IDR_CAN1  (((MO254_ID_CAN1 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO254_ID_CAN1 & 0x0003FFFFL) << 1))
#endif

 /*****************************************************************************

 *CAN2

*****************************************************************************/
/* Message Object 0 */
#if (MO0_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO0_IDR_CAN2   ((uint32)(MO0_ID_CAN2) << 21)
#else                         
#define MO0_IDR_CAN2  (((MO0_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO0_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 1 */
#if (MO1_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO1_IDR_CAN2   ((uint32)(MO1_ID_CAN2) << 21)
#else                         
#define MO1_IDR_CAN2  (((MO1_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO1_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 2 */
#if (MO2_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO2_IDR_CAN2   ((uint32)(MO2_ID_CAN2) << 21)
#else                         
#define MO2_IDR_CAN2  (((MO2_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO2_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 3 */
#if (MO3_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO3_IDR_CAN2   ((uint32)(MO3_ID_CAN2) << 21)
#else                         
#define MO3_IDR_CAN2  (((MO3_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO3_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 4 */
#if (MO4_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO4_IDR_CAN2   ((uint32)(MO4_ID_CAN2) << 21)
#else                         
#define MO4_IDR_CAN2  (((MO4_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO4_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 5 */
#if (MO5_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO5_IDR_CAN2   ((uint32)(MO5_ID_CAN2) << 21)
#else                         
#define MO5_IDR_CAN2  (((MO5_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO5_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 6 */
#if (MO6_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO6_IDR_CAN2   ((uint32)(MO6_ID_CAN2) << 21)
#else                         
#define MO6_IDR_CAN2  (((MO6_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO6_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 7 */
#if (MO7_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO7_IDR_CAN2   ((uint32)(MO7_ID_CAN2) << 21)
#else                         
#define MO7_IDR_CAN2  (((MO7_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO7_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 8 */
#if (MO8_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO8_IDR_CAN2   ((uint32)(MO8_ID_CAN2) << 21)
#else                         
#define MO8_IDR_CAN2  (((MO8_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO8_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 9 */
#if (MO9_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO9_IDR_CAN2   ((uint32)(MO9_ID_CAN2) << 21)
#else                         
#define MO9_IDR_CAN2  (((MO9_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO9_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 10 */
#if (MO10_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO10_IDR_CAN2   ((uint32)(MO10_ID_CAN2) << 21)
#else                         
#define MO10_IDR_CAN2  (((MO10_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO10_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 11 */
#if (MO11_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO11_IDR_CAN2   ((uint32)(MO11_ID_CAN2) << 21)
#else                         
#define MO11_IDR_CAN2  (((MO11_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO11_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 12 */
#if (MO12_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO12_IDR_CAN2   ((uint32)(MO12_ID_CAN2) << 21)
#else                         
#define MO12_IDR_CAN2  (((MO12_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO12_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 13 */
#if (MO13_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO13_IDR_CAN2   ((uint32)(MO13_ID_CAN2) << 21)
#else                         
#define MO13_IDR_CAN2  (((MO13_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO13_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 14 */
#if (MO14_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO14_IDR_CAN2   ((uint32)(MO14_ID_CAN2) << 21)
#else                         
#define MO14_IDR_CAN2  (((MO14_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO14_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 15 */
#if (MO15_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO15_IDR_CAN2   ((uint32)(MO15_ID_CAN2) << 21)
#else                         
#define MO15_IDR_CAN2  (((MO15_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO15_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 16 */
#if (MO16_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO16_IDR_CAN2   ((uint32)(MO16_ID_CAN2) << 21)
#else                         
#define MO16_IDR_CAN2  (((MO16_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO16_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 17 */
#if (MO17_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO17_IDR_CAN2   ((uint32)(MO17_ID_CAN2) << 21)
#else                         
#define MO17_IDR_CAN2  (((MO17_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO17_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 18 */
#if (MO18_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO18_IDR_CAN2   ((uint32)(MO18_ID_CAN2) << 21)
#else                         
#define MO18_IDR_CAN2  (((MO18_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO18_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 19 */
#if (MO19_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO19_IDR_CAN2   ((uint32)(MO19_ID_CAN2) << 21)
#else                         
#define MO19_IDR_CAN2  (((MO19_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO19_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 20 */
#if (MO20_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO20_IDR_CAN2   ((uint32)(MO20_ID_CAN2) << 21)
#else                         
#define MO20_IDR_CAN2  (((MO20_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO20_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 21 */
#if (MO21_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO21_IDR_CAN2   ((uint32)(MO21_ID_CAN2) << 21)
#else                         
#define MO21_IDR_CAN2  (((MO21_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO21_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 22 */
#if (MO22_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO22_IDR_CAN2   ((uint32)(MO22_ID_CAN2) << 21)
#else                         
#define MO22_IDR_CAN2  (((MO22_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO22_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 23 */
#if (MO23_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO23_IDR_CAN2   ((uint32)(MO23_ID_CAN2) << 21)
#else                         
#define MO23_IDR_CAN2  (((MO23_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO23_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 24 */
#if (MO24_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO24_IDR_CAN2   ((uint32)(MO24_ID_CAN2) << 21)
#else                         
#define MO24_IDR_CAN2  (((MO24_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO24_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 25 */
#if (MO25_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO25_IDR_CAN2   ((uint32)(MO25_ID_CAN2) << 21)
#else                         
#define MO25_IDR_CAN2  (((MO25_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO25_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 26 */
#if (MO26_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO26_IDR_CAN2   ((uint32)(MO26_ID_CAN2) << 21)
#else                         
#define MO26_IDR_CAN2  (((MO26_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO26_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 27 */
#if (MO27_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO27_IDR_CAN2   ((uint32)(MO27_ID_CAN2) << 21)
#else                         
#define MO27_IDR_CAN2  (((MO27_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO27_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 28 */
#if (MO28_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO28_IDR_CAN2   ((uint32)(MO28_ID_CAN2) << 21)
#else                         
#define MO28_IDR_CAN2  (((MO28_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO28_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 29 */
#if (MO29_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO29_IDR_CAN2   ((uint32)(MO29_ID_CAN2) << 21)
#else                         
#define MO29_IDR_CAN2  (((MO29_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO29_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 30 */
#if (MO30_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO30_IDR_CAN2   ((uint32)(MO30_ID_CAN2) << 21)
#else                         
#define MO30_IDR_CAN2  (((MO30_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO30_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 31 */
#if (MO31_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO31_IDR_CAN2   ((uint32)(MO31_ID_CAN2) << 21)
#else                         
#define MO31_IDR_CAN2  (((MO31_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO31_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 32 */
#if (MO32_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO32_IDR_CAN2   ((uint32)(MO32_ID_CAN2) << 21)
#else                         
#define MO32_IDR_CAN2  (((MO32_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO32_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 33 */
#if (MO33_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO33_IDR_CAN2   ((uint32)(MO33_ID_CAN2) << 21)
#else                         
#define MO33_IDR_CAN2  (((MO33_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO33_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 34 */
#if (MO34_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO34_IDR_CAN2   ((uint32)(MO34_ID_CAN2) << 21)
#else                         
#define MO34_IDR_CAN2  (((MO34_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO34_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 35 */
#if (MO35_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO35_IDR_CAN2   ((uint32)(MO35_ID_CAN2) << 21)
#else                         
#define MO35_IDR_CAN2  (((MO35_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO35_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 36 */
#if (MO36_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO36_IDR_CAN2   ((uint32)(MO36_ID_CAN2) << 21)
#else                         
#define MO36_IDR_CAN2  (((MO36_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO36_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 37 */
#if (MO37_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO37_IDR_CAN2   ((uint32)(MO37_ID_CAN2) << 21)
#else                         
#define MO37_IDR_CAN2  (((MO37_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO37_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 38 */
#if (MO38_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO38_IDR_CAN2   ((uint32)(MO38_ID_CAN2) << 21)
#else                         
#define MO38_IDR_CAN2  (((MO38_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO38_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 39 */
#if (MO39_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO39_IDR_CAN2   ((uint32)(MO39_ID_CAN2) << 21)
#else                         
#define MO39_IDR_CAN2  (((MO39_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO39_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 40 */
#if (MO40_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO40_IDR_CAN2   ((uint32)(MO40_ID_CAN2) << 21)
#else                         
#define MO40_IDR_CAN2  (((MO40_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO40_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 41 */
#if (MO41_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO41_IDR_CAN2   ((uint32)(MO41_ID_CAN2) << 21)
#else                         
#define MO41_IDR_CAN2  (((MO41_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO41_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 42 */
#if (MO42_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO42_IDR_CAN2   ((uint32)(MO42_ID_CAN2) << 21)
#else                         
#define MO42_IDR_CAN2  (((MO42_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO42_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 43 */
#if (MO43_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO43_IDR_CAN2   ((uint32)(MO43_ID_CAN2) << 21)
#else                         
#define MO43_IDR_CAN2  (((MO43_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO43_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 44 */
#if (MO44_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO44_IDR_CAN2   ((uint32)(MO44_ID_CAN2) << 21)
#else                         
#define MO44_IDR_CAN2  (((MO44_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO44_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 45 */
#if (MO45_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO45_IDR_CAN2   ((uint32)(MO45_ID_CAN2) << 21)
#else                         
#define MO45_IDR_CAN2  (((MO45_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO45_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 46 */
#if (MO46_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO46_IDR_CAN2   ((uint32)(MO46_ID_CAN2) << 21)
#else                         
#define MO46_IDR_CAN2  (((MO46_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO46_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 47 */
#if (MO47_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO47_IDR_CAN2   ((uint32)(MO47_ID_CAN2) << 21)
#else                         
#define MO47_IDR_CAN2  (((MO47_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO47_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 48 */
#if (MO48_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO48_IDR_CAN2   ((uint32)(MO48_ID_CAN2) << 21)
#else                         
#define MO48_IDR_CAN2  (((MO48_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO48_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 49 */
#if (MO49_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO49_IDR_CAN2   ((uint32)(MO49_ID_CAN2) << 21)
#else                         
#define MO49_IDR_CAN2  (((MO49_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO49_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 50 */
#if (MO50_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO50_IDR_CAN2   ((uint32)(MO50_ID_CAN2) << 21)
#else                         
#define MO50_IDR_CAN2  (((MO50_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO50_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 51 */
#if (MO51_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO51_IDR_CAN2   ((uint32)(MO51_ID_CAN2) << 21)
#else                         
#define MO51_IDR_CAN2  (((MO51_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO51_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 52 */
#if (MO52_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO52_IDR_CAN2   ((uint32)(MO52_ID_CAN2) << 21)
#else                         
#define MO52_IDR_CAN2  (((MO52_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO52_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 53 */
#if (MO53_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO53_IDR_CAN2   ((uint32)(MO53_ID_CAN2) << 21)
#else                         
#define MO53_IDR_CAN2  (((MO53_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO53_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 54 */
#if (MO54_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO54_IDR_CAN2   ((uint32)(MO54_ID_CAN2) << 21)
#else                         
#define MO54_IDR_CAN2  (((MO54_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO54_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 55 */
#if (MO55_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO55_IDR_CAN2   ((uint32)(MO55_ID_CAN2) << 21)
#else                         
#define MO55_IDR_CAN2  (((MO55_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO55_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 56 */
#if (MO56_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO56_IDR_CAN2   ((uint32)(MO56_ID_CAN2) << 21)
#else                         
#define MO56_IDR_CAN2  (((MO56_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO56_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 57 */
#if (MO57_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO57_IDR_CAN2   ((uint32)(MO57_ID_CAN2) << 21)
#else                         
#define MO57_IDR_CAN2  (((MO57_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO57_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 58 */
#if (MO58_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO58_IDR_CAN2   ((uint32)(MO58_ID_CAN2) << 21)
#else                         
#define MO58_IDR_CAN2  (((MO58_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO58_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 59 */
#if (MO59_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO59_IDR_CAN2   ((uint32)(MO59_ID_CAN2) << 21)
#else                         
#define MO59_IDR_CAN2  (((MO59_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO59_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 60 */
#if (MO60_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO60_IDR_CAN2   ((uint32)(MO60_ID_CAN2) << 21)
#else                         
#define MO60_IDR_CAN2  (((MO60_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO60_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 61 */
#if (MO61_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO61_IDR_CAN2   ((uint32)(MO61_ID_CAN2) << 21)
#else                         
#define MO61_IDR_CAN2  (((MO61_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO61_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 62 */
#if (MO62_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO62_IDR_CAN2   ((uint32)(MO62_ID_CAN2) << 21)
#else                         
#define MO62_IDR_CAN2  (((MO62_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO62_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 63 */
#if (MO63_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO63_IDR_CAN2   ((uint32)(MO63_ID_CAN2) << 21)
#else                         
#define MO63_IDR_CAN2  (((MO63_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO63_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 64 */
#if (MO64_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO64_IDR_CAN2   ((uint32)(MO64_ID_CAN2) << 21)
#else                         
#define MO64_IDR_CAN2  (((MO64_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO64_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 65 */
#if (MO65_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO65_IDR_CAN2   ((uint32)(MO65_ID_CAN2) << 21)
#else                         
#define MO65_IDR_CAN2  (((MO65_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO65_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 66 */
#if (MO66_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO66_IDR_CAN2   ((uint32)(MO66_ID_CAN2) << 21)
#else                         
#define MO66_IDR_CAN2  (((MO66_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO66_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 67 */
#if (MO67_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO67_IDR_CAN2   ((uint32)(MO67_ID_CAN2) << 21)
#else                         
#define MO67_IDR_CAN2  (((MO67_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO67_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 68 */
#if (MO68_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO68_IDR_CAN2   ((uint32)(MO68_ID_CAN2) << 21)
#else                         
#define MO68_IDR_CAN2  (((MO68_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO68_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 69 */
#if (MO69_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO69_IDR_CAN2   ((uint32)(MO69_ID_CAN2) << 21)
#else                         
#define MO69_IDR_CAN2  (((MO69_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO69_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 70 */
#if (MO70_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO70_IDR_CAN2   ((uint32)(MO70_ID_CAN2) << 21)
#else                         
#define MO70_IDR_CAN2  (((MO70_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO70_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 71 */
#if (MO71_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO71_IDR_CAN2   ((uint32)(MO71_ID_CAN2) << 21)
#else                         
#define MO71_IDR_CAN2  (((MO71_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO71_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 72 */
#if (MO72_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO72_IDR_CAN2   ((uint32)(MO72_ID_CAN2) << 21)
#else                         
#define MO72_IDR_CAN2  (((MO72_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO72_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 73 */
#if (MO73_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO73_IDR_CAN2   ((uint32)(MO73_ID_CAN2) << 21)
#else                         
#define MO73_IDR_CAN2  (((MO73_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO73_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 74 */
#if (MO74_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO74_IDR_CAN2   ((uint32)(MO74_ID_CAN2) << 21)
#else                         
#define MO74_IDR_CAN2  (((MO74_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO74_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 75 */
#if (MO75_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO75_IDR_CAN2   ((uint32)(MO75_ID_CAN2) << 21)
#else                         
#define MO75_IDR_CAN2  (((MO75_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO75_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 76 */
#if (MO76_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO76_IDR_CAN2   ((uint32)(MO76_ID_CAN2) << 21)
#else                         
#define MO76_IDR_CAN2  (((MO76_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO76_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 77 */
#if (MO77_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO77_IDR_CAN2   ((uint32)(MO77_ID_CAN2) << 21)
#else                         
#define MO77_IDR_CAN2  (((MO77_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO77_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 78 */
#if (MO78_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO78_IDR_CAN2   ((uint32)(MO78_ID_CAN2) << 21)
#else                         
#define MO78_IDR_CAN2  (((MO78_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO78_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 79 */
#if (MO79_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO79_IDR_CAN2   ((uint32)(MO79_ID_CAN2) << 21)
#else                         
#define MO79_IDR_CAN2  (((MO79_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO79_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 80 */
#if (MO80_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO80_IDR_CAN2   ((uint32)(MO80_ID_CAN2) << 21)
#else                         
#define MO80_IDR_CAN2  (((MO80_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO80_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 81 */
#if (MO81_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO81_IDR_CAN2   ((uint32)(MO81_ID_CAN2) << 21)
#else                         
#define MO81_IDR_CAN2  (((MO81_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO81_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 82 */
#if (MO82_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO82_IDR_CAN2   ((uint32)(MO82_ID_CAN2) << 21)
#else                         
#define MO82_IDR_CAN2  (((MO82_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO82_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 83 */
#if (MO83_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO83_IDR_CAN2   ((uint32)(MO83_ID_CAN2) << 21)
#else                         
#define MO83_IDR_CAN2  (((MO83_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO83_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 84 */
#if (MO84_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO84_IDR_CAN2   ((uint32)(MO84_ID_CAN2) << 21)
#else                         
#define MO84_IDR_CAN2  (((MO84_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO84_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 85 */
#if (MO85_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO85_IDR_CAN2   ((uint32)(MO85_ID_CAN2) << 21)
#else                         
#define MO85_IDR_CAN2  (((MO85_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO85_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 86 */
#if (MO86_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO86_IDR_CAN2   ((uint32)(MO86_ID_CAN2) << 21)
#else                         
#define MO86_IDR_CAN2  (((MO86_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO86_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 87 */
#if (MO87_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO87_IDR_CAN2   ((uint32)(MO87_ID_CAN2) << 21)
#else                         
#define MO87_IDR_CAN2  (((MO87_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO87_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 88 */
#if (MO88_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO88_IDR_CAN2   ((uint32)(MO88_ID_CAN2) << 21)
#else                         
#define MO88_IDR_CAN2  (((MO88_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO88_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 89 */
#if (MO89_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO89_IDR_CAN2   ((uint32)(MO89_ID_CAN2) << 21)
#else                         
#define MO89_IDR_CAN2  (((MO89_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO89_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 90 */
#if (MO90_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO90_IDR_CAN2   ((uint32)(MO90_ID_CAN2) << 21)
#else                         
#define MO90_IDR_CAN2  (((MO90_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO90_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 91 */
#if (MO91_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO91_IDR_CAN2   ((uint32)(MO91_ID_CAN2) << 21)
#else                         
#define MO91_IDR_CAN2  (((MO91_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO91_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 92 */
#if (MO92_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO92_IDR_CAN2   ((uint32)(MO92_ID_CAN2) << 21)
#else                         
#define MO92_IDR_CAN2  (((MO92_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO92_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 93 */
#if (MO93_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO93_IDR_CAN2   ((uint32)(MO93_ID_CAN2) << 21)
#else                         
#define MO93_IDR_CAN2  (((MO93_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO93_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 94 */
#if (MO94_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO94_IDR_CAN2   ((uint32)(MO94_ID_CAN2) << 21)
#else                         
#define MO94_IDR_CAN2  (((MO94_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO94_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 95 */
#if (MO95_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO95_IDR_CAN2   ((uint32)(MO95_ID_CAN2) << 21)
#else                         
#define MO95_IDR_CAN2  (((MO95_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO95_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 96 */
#if (MO96_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO96_IDR_CAN2   ((uint32)(MO96_ID_CAN2) << 21)
#else                         
#define MO96_IDR_CAN2  (((MO96_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO96_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 97 */
#if (MO97_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO97_IDR_CAN2   ((uint32)(MO97_ID_CAN2) << 21)
#else                         
#define MO97_IDR_CAN2  (((MO97_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO97_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 98 */
#if (MO98_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO98_IDR_CAN2   ((uint32)(MO98_ID_CAN2) << 21)
#else                         
#define MO98_IDR_CAN2  (((MO98_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO98_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 99 */
#if (MO99_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO99_IDR_CAN2   ((uint32)(MO99_ID_CAN2) << 21)
#else                         
#define MO99_IDR_CAN2  (((MO99_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO99_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 100 */
#if (MO100_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO100_IDR_CAN2   ((uint32)(MO100_ID_CAN2) << 21)
#else                         
#define MO100_IDR_CAN2  (((MO100_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO100_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 101 */
#if (MO101_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO101_IDR_CAN2   ((uint32)(MO101_ID_CAN2) << 21)
#else                         
#define MO101_IDR_CAN2  (((MO101_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO101_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 102 */
#if (MO102_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO102_IDR_CAN2   ((uint32)(MO102_ID_CAN2) << 21)
#else                         
#define MO102_IDR_CAN2  (((MO102_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO102_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 103 */
#if (MO103_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO103_IDR_CAN2   ((uint32)(MO103_ID_CAN2) << 21)
#else                         
#define MO103_IDR_CAN2  (((MO103_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO103_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 104 */
#if (MO104_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO104_IDR_CAN2   ((uint32)(MO104_ID_CAN2) << 21)
#else                         
#define MO104_IDR_CAN2  (((MO104_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO104_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 105 */
#if (MO105_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO105_IDR_CAN2   ((uint32)(MO105_ID_CAN2) << 21)
#else                         
#define MO105_IDR_CAN2  (((MO105_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO105_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 106 */
#if (MO106_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO106_IDR_CAN2   ((uint32)(MO106_ID_CAN2) << 21)
#else                         
#define MO106_IDR_CAN2  (((MO106_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO106_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 107 */
#if (MO107_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO107_IDR_CAN2   ((uint32)(MO107_ID_CAN2) << 21)
#else                         
#define MO107_IDR_CAN2  (((MO107_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO107_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 108 */
#if (MO108_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO108_IDR_CAN2   ((uint32)(MO108_ID_CAN2) << 21)
#else                         
#define MO108_IDR_CAN2  (((MO108_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO108_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 109 */
#if (MO109_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO109_IDR_CAN2   ((uint32)(MO109_ID_CAN2) << 21)
#else                         
#define MO109_IDR_CAN2  (((MO109_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO109_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 110 */
#if (MO110_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO110_IDR_CAN2   ((uint32)(MO110_ID_CAN2) << 21)
#else                         
#define MO110_IDR_CAN2  (((MO110_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO110_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 111 */
#if (MO111_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO111_IDR_CAN2   ((uint32)(MO111_ID_CAN2) << 21)
#else                         
#define MO111_IDR_CAN2  (((MO111_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO111_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 112 */
#if (MO112_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO112_IDR_CAN2   ((uint32)(MO112_ID_CAN2) << 21)
#else                         
#define MO112_IDR_CAN2  (((MO112_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO112_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 113 */
#if (MO113_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO113_IDR_CAN2   ((uint32)(MO113_ID_CAN2) << 21)
#else                         
#define MO113_IDR_CAN2  (((MO113_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO113_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 114 */
#if (MO114_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO114_IDR_CAN2   ((uint32)(MO114_ID_CAN2) << 21)
#else                         
#define MO114_IDR_CAN2  (((MO114_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO114_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 115 */
#if (MO115_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO115_IDR_CAN2   ((uint32)(MO115_ID_CAN2) << 21)
#else                         
#define MO115_IDR_CAN2  (((MO115_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO115_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 116 */
#if (MO116_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO116_IDR_CAN2   ((uint32)(MO116_ID_CAN2) << 21)
#else                         
#define MO116_IDR_CAN2  (((MO116_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO116_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 117 */
#if (MO117_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO117_IDR_CAN2   ((uint32)(MO117_ID_CAN2) << 21)
#else                         
#define MO117_IDR_CAN2  (((MO117_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO117_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 118 */
#if (MO118_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO118_IDR_CAN2   ((uint32)(MO118_ID_CAN2) << 21)
#else                         
#define MO118_IDR_CAN2  (((MO118_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO118_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 119 */
#if (MO119_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO119_IDR_CAN2   ((uint32)(MO119_ID_CAN2) << 21)
#else                         
#define MO119_IDR_CAN2  (((MO119_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO119_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 120 */
#if (MO120_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO120_IDR_CAN2   ((uint32)(MO120_ID_CAN2) << 21)
#else                         
#define MO120_IDR_CAN2  (((MO120_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO120_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 121 */
#if (MO121_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO121_IDR_CAN2   ((uint32)(MO121_ID_CAN2) << 21)
#else                         
#define MO121_IDR_CAN2  (((MO121_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO121_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 122 */
#if (MO122_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO122_IDR_CAN2   ((uint32)(MO122_ID_CAN2) << 21)
#else                         
#define MO122_IDR_CAN2  (((MO122_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO122_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 123 */
#if (MO123_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO123_IDR_CAN2   ((uint32)(MO123_ID_CAN2) << 21)
#else                         
#define MO123_IDR_CAN2  (((MO123_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO123_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 124 */
#if (MO124_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO124_IDR_CAN2   ((uint32)(MO124_ID_CAN2) << 21)
#else                         
#define MO124_IDR_CAN2  (((MO124_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO124_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 125 */
#if (MO125_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO125_IDR_CAN2   ((uint32)(MO125_ID_CAN2) << 21)
#else                         
#define MO125_IDR_CAN2  (((MO125_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO125_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 126 */
#if (MO126_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO126_IDR_CAN2   ((uint32)(MO126_ID_CAN2) << 21)
#else                         
#define MO126_IDR_CAN2  (((MO126_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO126_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 127 */
#if (MO127_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO127_IDR_CAN2   ((uint32)(MO127_ID_CAN2) << 21)
#else                         
#define MO127_IDR_CAN2  (((MO127_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO127_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 128 */
#if (MO128_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO128_IDR_CAN2   ((uint32)(MO128_ID_CAN2) << 21)
#else                         
#define MO128_IDR_CAN2  (((MO128_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO128_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 129 */
#if (MO129_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO129_IDR_CAN2   ((uint32)(MO129_ID_CAN2) << 21)
#else                         
#define MO129_IDR_CAN2  (((MO129_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO129_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 130 */
#if (MO130_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO130_IDR_CAN2   ((uint32)(MO130_ID_CAN2) << 21)
#else                         
#define MO130_IDR_CAN2  (((MO130_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO130_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 131 */
#if (MO131_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO131_IDR_CAN2   ((uint32)(MO131_ID_CAN2) << 21)
#else                         
#define MO131_IDR_CAN2  (((MO131_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO131_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 132 */
#if (MO132_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO132_IDR_CAN2   ((uint32)(MO132_ID_CAN2) << 21)
#else                         
#define MO132_IDR_CAN2  (((MO132_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO132_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 133 */
#if (MO133_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO133_IDR_CAN2   ((uint32)(MO133_ID_CAN2) << 21)
#else                         
#define MO133_IDR_CAN2  (((MO133_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO133_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 134 */
#if (MO134_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO134_IDR_CAN2   ((uint32)(MO134_ID_CAN2) << 21)
#else                         
#define MO134_IDR_CAN2  (((MO134_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO134_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 135 */
#if (MO135_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO135_IDR_CAN2   ((uint32)(MO135_ID_CAN2) << 21)
#else                         
#define MO135_IDR_CAN2  (((MO135_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO135_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 136 */
#if (MO136_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO136_IDR_CAN2   ((uint32)(MO136_ID_CAN2) << 21)
#else                         
#define MO136_IDR_CAN2  (((MO136_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO136_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 137 */
#if (MO137_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO137_IDR_CAN2   ((uint32)(MO137_ID_CAN2) << 21)
#else                         
#define MO137_IDR_CAN2  (((MO137_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO137_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 138 */
#if (MO138_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO138_IDR_CAN2   ((uint32)(MO138_ID_CAN2) << 21)
#else                         
#define MO138_IDR_CAN2  (((MO138_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO138_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 139 */
#if (MO139_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO139_IDR_CAN2   ((uint32)(MO139_ID_CAN2) << 21)
#else                         
#define MO139_IDR_CAN2  (((MO139_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO139_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 140 */
#if (MO140_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO140_IDR_CAN2   ((uint32)(MO140_ID_CAN2) << 21)
#else                         
#define MO140_IDR_CAN2  (((MO140_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO140_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 141 */
#if (MO141_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO141_IDR_CAN2   ((uint32)(MO141_ID_CAN2) << 21)
#else                         
#define MO141_IDR_CAN2  (((MO141_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO141_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 142 */
#if (MO142_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO142_IDR_CAN2   ((uint32)(MO142_ID_CAN2) << 21)
#else                         
#define MO142_IDR_CAN2  (((MO142_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO142_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 143 */
#if (MO143_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO143_IDR_CAN2   ((uint32)(MO143_ID_CAN2) << 21)
#else                         
#define MO143_IDR_CAN2  (((MO143_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO143_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 144 */
#if (MO144_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO144_IDR_CAN2   ((uint32)(MO144_ID_CAN2) << 21)
#else                         
#define MO144_IDR_CAN2  (((MO144_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO144_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 145 */
#if (MO145_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO145_IDR_CAN2   ((uint32)(MO145_ID_CAN2) << 21)
#else                         
#define MO145_IDR_CAN2  (((MO145_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO145_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 146 */
#if (MO146_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO146_IDR_CAN2   ((uint32)(MO146_ID_CAN2) << 21)
#else                         
#define MO146_IDR_CAN2  (((MO146_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO146_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 147 */
#if (MO147_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO147_IDR_CAN2   ((uint32)(MO147_ID_CAN2) << 21)
#else                         
#define MO147_IDR_CAN2  (((MO147_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO147_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 148 */
#if (MO148_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO148_IDR_CAN2   ((uint32)(MO148_ID_CAN2) << 21)
#else                         
#define MO148_IDR_CAN2  (((MO148_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO148_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 149 */
#if (MO149_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO149_IDR_CAN2   ((uint32)(MO149_ID_CAN2) << 21)
#else                         
#define MO149_IDR_CAN2  (((MO149_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO149_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 150 */
#if (MO150_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO150_IDR_CAN2   ((uint32)(MO150_ID_CAN2) << 21)
#else                         
#define MO150_IDR_CAN2  (((MO150_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO150_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 151 */
#if (MO151_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO151_IDR_CAN2   ((uint32)(MO151_ID_CAN2) << 21)
#else                         
#define MO151_IDR_CAN2  (((MO151_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO151_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 152 */
#if (MO152_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO152_IDR_CAN2   ((uint32)(MO152_ID_CAN2) << 21)
#else                         
#define MO152_IDR_CAN2  (((MO152_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO152_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 153 */
#if (MO153_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO153_IDR_CAN2   ((uint32)(MO153_ID_CAN2) << 21)
#else                         
#define MO153_IDR_CAN2  (((MO153_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO153_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 154 */
#if (MO154_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO154_IDR_CAN2   ((uint32)(MO154_ID_CAN2) << 21)
#else                         
#define MO154_IDR_CAN2  (((MO154_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO154_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 155 */
#if (MO155_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO155_IDR_CAN2   ((uint32)(MO155_ID_CAN2) << 21)
#else                         
#define MO155_IDR_CAN2  (((MO155_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO155_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 156 */
#if (MO156_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO156_IDR_CAN2   ((uint32)(MO156_ID_CAN2) << 21)
#else                         
#define MO156_IDR_CAN2  (((MO156_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO156_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 157 */
#if (MO157_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO157_IDR_CAN2   ((uint32)(MO157_ID_CAN2) << 21)
#else                         
#define MO157_IDR_CAN2  (((MO157_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO157_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 158 */
#if (MO158_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO158_IDR_CAN2   ((uint32)(MO158_ID_CAN2) << 21)
#else                         
#define MO158_IDR_CAN2  (((MO158_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO158_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 159 */
#if (MO159_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO159_IDR_CAN2   ((uint32)(MO159_ID_CAN2) << 21)
#else                         
#define MO159_IDR_CAN2  (((MO159_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO159_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 160 */
#if (MO160_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO160_IDR_CAN2   ((uint32)(MO160_ID_CAN2) << 21)
#else                         
#define MO160_IDR_CAN2  (((MO160_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO160_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 161 */
#if (MO161_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO161_IDR_CAN2   ((uint32)(MO161_ID_CAN2) << 21)
#else                         
#define MO161_IDR_CAN2  (((MO161_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO161_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 162 */
#if (MO162_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO162_IDR_CAN2   ((uint32)(MO162_ID_CAN2) << 21)
#else                         
#define MO162_IDR_CAN2  (((MO162_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO162_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 163 */
#if (MO163_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO163_IDR_CAN2   ((uint32)(MO163_ID_CAN2) << 21)
#else                         
#define MO163_IDR_CAN2  (((MO163_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO163_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 164 */
#if (MO164_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO164_IDR_CAN2   ((uint32)(MO164_ID_CAN2) << 21)
#else                         
#define MO164_IDR_CAN2  (((MO164_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO164_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 165 */
#if (MO165_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO165_IDR_CAN2   ((uint32)(MO165_ID_CAN2) << 21)
#else                         
#define MO165_IDR_CAN2  (((MO165_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO165_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 166 */
#if (MO166_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO166_IDR_CAN2   ((uint32)(MO166_ID_CAN2) << 21)
#else                         
#define MO166_IDR_CAN2  (((MO166_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO166_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 167 */
#if (MO167_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO167_IDR_CAN2   ((uint32)(MO167_ID_CAN2) << 21)
#else                         
#define MO167_IDR_CAN2  (((MO167_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO167_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 168 */
#if (MO168_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO168_IDR_CAN2   ((uint32)(MO168_ID_CAN2) << 21)
#else                         
#define MO168_IDR_CAN2  (((MO168_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO168_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 169 */
#if (MO169_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO169_IDR_CAN2   ((uint32)(MO169_ID_CAN2) << 21)
#else                         
#define MO169_IDR_CAN2  (((MO169_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO169_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 170 */
#if (MO170_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO170_IDR_CAN2   ((uint32)(MO170_ID_CAN2) << 21)
#else                         
#define MO170_IDR_CAN2  (((MO170_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO170_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 171 */
#if (MO171_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO171_IDR_CAN2   ((uint32)(MO171_ID_CAN2) << 21)
#else                         
#define MO171_IDR_CAN2  (((MO171_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO171_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 172 */
#if (MO172_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO172_IDR_CAN2   ((uint32)(MO172_ID_CAN2) << 21)
#else                         
#define MO172_IDR_CAN2  (((MO172_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO172_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 173 */
#if (MO173_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO173_IDR_CAN2   ((uint32)(MO173_ID_CAN2) << 21)
#else                         
#define MO173_IDR_CAN2  (((MO173_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO173_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 174 */
#if (MO174_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO174_IDR_CAN2   ((uint32)(MO174_ID_CAN2) << 21)
#else                         
#define MO174_IDR_CAN2  (((MO174_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO174_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 175 */
#if (MO175_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO175_IDR_CAN2   ((uint32)(MO175_ID_CAN2) << 21)
#else                         
#define MO175_IDR_CAN2  (((MO175_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO175_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 176 */
#if (MO176_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO176_IDR_CAN2   ((uint32)(MO176_ID_CAN2) << 21)
#else                         
#define MO176_IDR_CAN2  (((MO176_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO176_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 177 */
#if (MO177_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO177_IDR_CAN2   ((uint32)(MO177_ID_CAN2) << 21)
#else                         
#define MO177_IDR_CAN2  (((MO177_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO177_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 178 */
#if (MO178_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO178_IDR_CAN2   ((uint32)(MO178_ID_CAN2) << 21)
#else                         
#define MO178_IDR_CAN2  (((MO178_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO178_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 179 */
#if (MO179_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO179_IDR_CAN2   ((uint32)(MO179_ID_CAN2) << 21)
#else                         
#define MO179_IDR_CAN2  (((MO179_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO179_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 180 */
#if (MO180_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO180_IDR_CAN2   ((uint32)(MO180_ID_CAN2) << 21)
#else                         
#define MO180_IDR_CAN2  (((MO180_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO180_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 181 */
#if (MO181_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO181_IDR_CAN2   ((uint32)(MO181_ID_CAN2) << 21)
#else                         
#define MO181_IDR_CAN2  (((MO181_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO181_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 182 */
#if (MO182_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO182_IDR_CAN2   ((uint32)(MO182_ID_CAN2) << 21)
#else                         
#define MO182_IDR_CAN2  (((MO182_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO182_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 183 */
#if (MO183_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO183_IDR_CAN2   ((uint32)(MO183_ID_CAN2) << 21)
#else                         
#define MO183_IDR_CAN2  (((MO183_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO183_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 184 */
#if (MO184_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO184_IDR_CAN2   ((uint32)(MO184_ID_CAN2) << 21)
#else                         
#define MO184_IDR_CAN2  (((MO184_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO184_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 185 */
#if (MO185_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO185_IDR_CAN2   ((uint32)(MO185_ID_CAN2) << 21)
#else                         
#define MO185_IDR_CAN2  (((MO185_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO185_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 186 */
#if (MO186_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO186_IDR_CAN2   ((uint32)(MO186_ID_CAN2) << 21)
#else                         
#define MO186_IDR_CAN2  (((MO186_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO186_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 187 */
#if (MO187_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO187_IDR_CAN2   ((uint32)(MO187_ID_CAN2) << 21)
#else                         
#define MO187_IDR_CAN2  (((MO187_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO187_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 188 */
#if (MO188_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO188_IDR_CAN2   ((uint32)(MO188_ID_CAN2) << 21)
#else                         
#define MO188_IDR_CAN2  (((MO188_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO188_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 189 */
#if (MO189_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO189_IDR_CAN2   ((uint32)(MO189_ID_CAN2) << 21)
#else                         
#define MO189_IDR_CAN2  (((MO189_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO189_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 190 */
#if (MO190_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO190_IDR_CAN2   ((uint32)(MO190_ID_CAN2) << 21)
#else                         
#define MO190_IDR_CAN2  (((MO190_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO190_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 191 */
#if (MO191_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO191_IDR_CAN2   ((uint32)(MO191_ID_CAN2) << 21)
#else                         
#define MO191_IDR_CAN2  (((MO191_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO191_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 192 */
#if (MO192_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO192_IDR_CAN2   ((uint32)(MO192_ID_CAN2) << 21)
#else                         
#define MO192_IDR_CAN2  (((MO192_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO192_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 193 */
#if (MO193_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO193_IDR_CAN2   ((uint32)(MO193_ID_CAN2) << 21)
#else                         
#define MO193_IDR_CAN2  (((MO193_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO193_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 194 */
#if (MO194_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO194_IDR_CAN2   ((uint32)(MO194_ID_CAN2) << 21)
#else                         
#define MO194_IDR_CAN2  (((MO194_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO194_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 195 */
#if (MO195_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO195_IDR_CAN2   ((uint32)(MO195_ID_CAN2) << 21)
#else                         
#define MO195_IDR_CAN2  (((MO195_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO195_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 196 */
#if (MO196_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO196_IDR_CAN2   ((uint32)(MO196_ID_CAN2) << 21)
#else                         
#define MO196_IDR_CAN2  (((MO196_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO196_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 197 */
#if (MO197_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO197_IDR_CAN2   ((uint32)(MO197_ID_CAN2) << 21)
#else                         
#define MO197_IDR_CAN2  (((MO197_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO197_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 198 */
#if (MO198_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO198_IDR_CAN2   ((uint32)(MO198_ID_CAN2) << 21)
#else                         
#define MO198_IDR_CAN2  (((MO198_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO198_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 199 */
#if (MO199_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO199_IDR_CAN2   ((uint32)(MO199_ID_CAN2) << 21)
#else                         
#define MO199_IDR_CAN2  (((MO199_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO199_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 200 */
#if (MO200_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO200_IDR_CAN2   ((uint32)(MO200_ID_CAN2) << 21)
#else                         
#define MO200_IDR_CAN2  (((MO200_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO200_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 201 */
#if (MO201_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO201_IDR_CAN2   ((uint32)(MO201_ID_CAN2) << 21)
#else                         
#define MO201_IDR_CAN2  (((MO201_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO201_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 202 */
#if (MO202_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO202_IDR_CAN2   ((uint32)(MO202_ID_CAN2) << 21)
#else                         
#define MO202_IDR_CAN2  (((MO202_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO202_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 203 */
#if (MO203_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO203_IDR_CAN2   ((uint32)(MO203_ID_CAN2) << 21)
#else                         
#define MO203_IDR_CAN2  (((MO203_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO203_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 204 */
#if (MO204_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO204_IDR_CAN2   ((uint32)(MO204_ID_CAN2) << 21)
#else                         
#define MO204_IDR_CAN2  (((MO204_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO204_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 205 */
#if (MO205_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO205_IDR_CAN2   ((uint32)(MO205_ID_CAN2) << 21)
#else                         
#define MO205_IDR_CAN2  (((MO205_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO205_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 206 */
#if (MO206_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO206_IDR_CAN2   ((uint32)(MO206_ID_CAN2) << 21)
#else                         
#define MO206_IDR_CAN2  (((MO206_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO206_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 207 */
#if (MO207_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO207_IDR_CAN2   ((uint32)(MO207_ID_CAN2) << 21)
#else                         
#define MO207_IDR_CAN2  (((MO207_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO207_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 208 */
#if (MO208_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO208_IDR_CAN2   ((uint32)(MO208_ID_CAN2) << 21)
#else                         
#define MO208_IDR_CAN2  (((MO208_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO208_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 209 */
#if (MO209_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO209_IDR_CAN2   ((uint32)(MO209_ID_CAN2) << 21)
#else                         
#define MO209_IDR_CAN2  (((MO209_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO209_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 210 */
#if (MO210_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO210_IDR_CAN2   ((uint32)(MO210_ID_CAN2) << 21)
#else                         
#define MO210_IDR_CAN2  (((MO210_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO210_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 211 */
#if (MO211_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO211_IDR_CAN2   ((uint32)(MO211_ID_CAN2) << 21)
#else                         
#define MO211_IDR_CAN2  (((MO211_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO211_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 212 */
#if (MO212_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO212_IDR_CAN2   ((uint32)(MO212_ID_CAN2) << 21)
#else                         
#define MO212_IDR_CAN2  (((MO212_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO212_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 213 */
#if (MO213_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO213_IDR_CAN2   ((uint32)(MO213_ID_CAN2) << 21)
#else                         
#define MO213_IDR_CAN2  (((MO213_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO213_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 214 */
#if (MO214_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO214_IDR_CAN2   ((uint32)(MO214_ID_CAN2) << 21)
#else                         
#define MO214_IDR_CAN2  (((MO214_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO214_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 215 */
#if (MO215_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO215_IDR_CAN2   ((uint32)(MO215_ID_CAN2) << 21)
#else                         
#define MO215_IDR_CAN2  (((MO215_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO215_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 216 */
#if (MO216_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO216_IDR_CAN2   ((uint32)(MO216_ID_CAN2) << 21)
#else                         
#define MO216_IDR_CAN2  (((MO216_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO216_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 217 */
#if (MO217_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO217_IDR_CAN2   ((uint32)(MO217_ID_CAN2) << 21)
#else                         
#define MO217_IDR_CAN2  (((MO217_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO217_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 218 */
#if (MO218_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO218_IDR_CAN2   ((uint32)(MO218_ID_CAN2) << 21)
#else                         
#define MO218_IDR_CAN2  (((MO218_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO218_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 219 */
#if (MO219_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO219_IDR_CAN2   ((uint32)(MO219_ID_CAN2) << 21)
#else                         
#define MO219_IDR_CAN2  (((MO219_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO219_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 220 */
#if (MO220_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO220_IDR_CAN2   ((uint32)(MO220_ID_CAN2) << 21)
#else                         
#define MO220_IDR_CAN2  (((MO220_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO220_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 221 */
#if (MO221_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO221_IDR_CAN2   ((uint32)(MO221_ID_CAN2) << 21)
#else                         
#define MO221_IDR_CAN2  (((MO221_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO221_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 222 */
#if (MO222_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO222_IDR_CAN2   ((uint32)(MO222_ID_CAN2) << 21)
#else                         
#define MO222_IDR_CAN2  (((MO222_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO222_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 223 */
#if (MO223_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO223_IDR_CAN2   ((uint32)(MO223_ID_CAN2) << 21)
#else                         
#define MO223_IDR_CAN2  (((MO223_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO223_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 224 */
#if (MO224_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO224_IDR_CAN2   ((uint32)(MO224_ID_CAN2) << 21)
#else                         
#define MO224_IDR_CAN2  (((MO224_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO224_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 225 */
#if (MO225_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO225_IDR_CAN2   ((uint32)(MO225_ID_CAN2) << 21)
#else                         
#define MO225_IDR_CAN2  (((MO225_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO225_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 226 */
#if (MO226_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO226_IDR_CAN2   ((uint32)(MO226_ID_CAN2) << 21)
#else                         
#define MO226_IDR_CAN2  (((MO226_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO226_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 227 */
#if (MO227_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO227_IDR_CAN2   ((uint32)(MO227_ID_CAN2) << 21)
#else                         
#define MO227_IDR_CAN2  (((MO227_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO227_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 228 */
#if (MO228_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO228_IDR_CAN2   ((uint32)(MO228_ID_CAN2) << 21)
#else                         
#define MO228_IDR_CAN2  (((MO228_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO228_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 229 */
#if (MO229_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO229_IDR_CAN2   ((uint32)(MO229_ID_CAN2) << 21)
#else                         
#define MO229_IDR_CAN2  (((MO229_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO229_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 230 */
#if (MO230_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO230_IDR_CAN2   ((uint32)(MO230_ID_CAN2) << 21)
#else                         
#define MO230_IDR_CAN2  (((MO230_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO230_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 231 */
#if (MO231_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO231_IDR_CAN2   ((uint32)(MO231_ID_CAN2) << 21)
#else                         
#define MO231_IDR_CAN2  (((MO231_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO231_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 232 */
#if (MO232_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO232_IDR_CAN2   ((uint32)(MO232_ID_CAN2) << 21)
#else                         
#define MO232_IDR_CAN2  (((MO232_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO232_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 233 */
#if (MO233_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO233_IDR_CAN2   ((uint32)(MO233_ID_CAN2) << 21)
#else                         
#define MO233_IDR_CAN2  (((MO233_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO233_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 234 */
#if (MO234_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO234_IDR_CAN2   ((uint32)(MO234_ID_CAN2) << 21)
#else                         
#define MO234_IDR_CAN2  (((MO234_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO234_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 235 */
#if (MO235_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO235_IDR_CAN2   ((uint32)(MO235_ID_CAN2) << 21)
#else                         
#define MO235_IDR_CAN2  (((MO235_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO235_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 236 */
#if (MO236_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO236_IDR_CAN2   ((uint32)(MO236_ID_CAN2) << 21)
#else                         
#define MO236_IDR_CAN2  (((MO236_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO236_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 237 */
#if (MO237_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO237_IDR_CAN2   ((uint32)(MO237_ID_CAN2) << 21)
#else                         
#define MO237_IDR_CAN2  (((MO237_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO237_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 238 */
#if (MO238_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO238_IDR_CAN2   ((uint32)(MO238_ID_CAN2) << 21)
#else                         
#define MO238_IDR_CAN2  (((MO238_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO238_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 239 */
#if (MO239_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO239_IDR_CAN2   ((uint32)(MO239_ID_CAN2) << 21)
#else                         
#define MO239_IDR_CAN2  (((MO239_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO239_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 240 */
#if (MO240_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO240_IDR_CAN2   ((uint32)(MO240_ID_CAN2) << 21)
#else                         
#define MO240_IDR_CAN2  (((MO240_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO240_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 241 */
#if (MO241_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO241_IDR_CAN2   ((uint32)(MO241_ID_CAN2) << 21)
#else                         
#define MO241_IDR_CAN2  (((MO241_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO241_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 242 */
#if (MO242_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO242_IDR_CAN2   ((uint32)(MO242_ID_CAN2) << 21)
#else                         
#define MO242_IDR_CAN2  (((MO242_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO242_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 243 */
#if (MO243_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO243_IDR_CAN2   ((uint32)(MO243_ID_CAN2) << 21)
#else                         
#define MO243_IDR_CAN2  (((MO243_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO243_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 244 */
#if (MO244_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO244_IDR_CAN2   ((uint32)(MO244_ID_CAN2) << 21)
#else                         
#define MO244_IDR_CAN2  (((MO244_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO244_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 245 */
#if (MO245_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO245_IDR_CAN2   ((uint32)(MO245_ID_CAN2) << 21)
#else                         
#define MO245_IDR_CAN2  (((MO245_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO245_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 246 */
#if (MO246_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO246_IDR_CAN2   ((uint32)(MO246_ID_CAN2) << 21)
#else                         
#define MO246_IDR_CAN2  (((MO246_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO246_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 247 */
#if (MO247_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO247_IDR_CAN2   ((uint32)(MO247_ID_CAN2) << 21)
#else                         
#define MO247_IDR_CAN2  (((MO247_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO247_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 248 */
#if (MO248_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO248_IDR_CAN2   ((uint32)(MO248_ID_CAN2) << 21)
#else                         
#define MO248_IDR_CAN2  (((MO248_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO248_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 249 */
#if (MO249_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO249_IDR_CAN2   ((uint32)(MO249_ID_CAN2) << 21)
#else                         
#define MO249_IDR_CAN2  (((MO249_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO249_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 250 */
#if (MO250_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO250_IDR_CAN2   ((uint32)(MO250_ID_CAN2) << 21)
#else                         
#define MO250_IDR_CAN2  (((MO250_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO250_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 251 */
#if (MO251_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO251_IDR_CAN2   ((uint32)(MO251_ID_CAN2) << 21)
#else                         
#define MO251_IDR_CAN2  (((MO251_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO251_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 252 */
#if (MO252_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO252_IDR_CAN2   ((uint32)(MO252_ID_CAN2) << 21)
#else                         
#define MO252_IDR_CAN2  (((MO252_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO252_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 253 */
#if (MO253_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO253_IDR_CAN2   ((uint32)(MO253_ID_CAN2) << 21)
#else                         
#define MO253_IDR_CAN2  (((MO253_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO253_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

/* Message Object 254 */
#if (MO254_ID_TYPE_CAN2 == CAN_STANDARD)
#define MO254_IDR_CAN2   ((uint32)(MO254_ID_CAN2) << 21)
#else                         
#define MO254_IDR_CAN2  (((MO254_ID_CAN2 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO254_ID_CAN2 & 0x0003FFFFL) << 1))
#endif

 /*****************************************************************************

 *CAN3

*****************************************************************************/
/* Message Object 0 */
#if (MO0_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO0_IDR_CAN3   ((uint32)(MO0_ID_CAN3) << 21)
#else                         
#define MO0_IDR_CAN3  (((MO0_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO0_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 1 */
#if (MO1_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO1_IDR_CAN3   ((uint32)(MO1_ID_CAN3) << 21)
#else                         
#define MO1_IDR_CAN3  (((MO1_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO1_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 2 */
#if (MO2_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO2_IDR_CAN3   ((uint32)(MO2_ID_CAN3) << 21)
#else                         
#define MO2_IDR_CAN3  (((MO2_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO2_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 3 */
#if (MO3_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO3_IDR_CAN3   ((uint32)(MO3_ID_CAN3) << 21)
#else                         
#define MO3_IDR_CAN3  (((MO3_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO3_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 4 */
#if (MO4_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO4_IDR_CAN3   ((uint32)(MO4_ID_CAN3) << 21)
#else                         
#define MO4_IDR_CAN3  (((MO4_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO4_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 5 */
#if (MO5_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO5_IDR_CAN3   ((uint32)(MO5_ID_CAN3) << 21)
#else                         
#define MO5_IDR_CAN3  (((MO5_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO5_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 6 */
#if (MO6_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO6_IDR_CAN3   ((uint32)(MO6_ID_CAN3) << 21)
#else                         
#define MO6_IDR_CAN3  (((MO6_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO6_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 7 */
#if (MO7_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO7_IDR_CAN3   ((uint32)(MO7_ID_CAN3) << 21)
#else                         
#define MO7_IDR_CAN3  (((MO7_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO7_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 8 */
#if (MO8_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO8_IDR_CAN3   ((uint32)(MO8_ID_CAN3) << 21)
#else                         
#define MO8_IDR_CAN3  (((MO8_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO8_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 9 */
#if (MO9_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO9_IDR_CAN3   ((uint32)(MO9_ID_CAN3) << 21)
#else                         
#define MO9_IDR_CAN3  (((MO9_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO9_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 10 */
#if (MO10_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO10_IDR_CAN3   ((uint32)(MO10_ID_CAN3) << 21)
#else                         
#define MO10_IDR_CAN3  (((MO10_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO10_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 11 */
#if (MO11_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO11_IDR_CAN3   ((uint32)(MO11_ID_CAN3) << 21)
#else                         
#define MO11_IDR_CAN3  (((MO11_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO11_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 12 */
#if (MO12_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO12_IDR_CAN3   ((uint32)(MO12_ID_CAN3) << 21)
#else                         
#define MO12_IDR_CAN3  (((MO12_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO12_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 13 */
#if (MO13_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO13_IDR_CAN3   ((uint32)(MO13_ID_CAN3) << 21)
#else                         
#define MO13_IDR_CAN3  (((MO13_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO13_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 14 */
#if (MO14_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO14_IDR_CAN3   ((uint32)(MO14_ID_CAN3) << 21)
#else                         
#define MO14_IDR_CAN3  (((MO14_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO14_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 15 */
#if (MO15_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO15_IDR_CAN3   ((uint32)(MO15_ID_CAN3) << 21)
#else                         
#define MO15_IDR_CAN3  (((MO15_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO15_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 16 */
#if (MO16_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO16_IDR_CAN3   ((uint32)(MO16_ID_CAN3) << 21)
#else                         
#define MO16_IDR_CAN3  (((MO16_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO16_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 17 */
#if (MO17_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO17_IDR_CAN3   ((uint32)(MO17_ID_CAN3) << 21)
#else                         
#define MO17_IDR_CAN3  (((MO17_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO17_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 18 */
#if (MO18_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO18_IDR_CAN3   ((uint32)(MO18_ID_CAN3) << 21)
#else                         
#define MO18_IDR_CAN3  (((MO18_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO18_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 19 */
#if (MO19_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO19_IDR_CAN3   ((uint32)(MO19_ID_CAN3) << 21)
#else                         
#define MO19_IDR_CAN3  (((MO19_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO19_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 20 */
#if (MO20_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO20_IDR_CAN3   ((uint32)(MO20_ID_CAN3) << 21)
#else                         
#define MO20_IDR_CAN3  (((MO20_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO20_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 21 */
#if (MO21_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO21_IDR_CAN3   ((uint32)(MO21_ID_CAN3) << 21)
#else                         
#define MO21_IDR_CAN3  (((MO21_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO21_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 22 */
#if (MO22_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO22_IDR_CAN3   ((uint32)(MO22_ID_CAN3) << 21)
#else                         
#define MO22_IDR_CAN3  (((MO22_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO22_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 23 */
#if (MO23_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO23_IDR_CAN3   ((uint32)(MO23_ID_CAN3) << 21)
#else                         
#define MO23_IDR_CAN3  (((MO23_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO23_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 24 */
#if (MO24_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO24_IDR_CAN3   ((uint32)(MO24_ID_CAN3) << 21)
#else                         
#define MO24_IDR_CAN3  (((MO24_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO24_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 25 */
#if (MO25_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO25_IDR_CAN3   ((uint32)(MO25_ID_CAN3) << 21)
#else                         
#define MO25_IDR_CAN3  (((MO25_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO25_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 26 */
#if (MO26_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO26_IDR_CAN3   ((uint32)(MO26_ID_CAN3) << 21)
#else                         
#define MO26_IDR_CAN3  (((MO26_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO26_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 27 */
#if (MO27_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO27_IDR_CAN3   ((uint32)(MO27_ID_CAN3) << 21)
#else                         
#define MO27_IDR_CAN3  (((MO27_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO27_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 28 */
#if (MO28_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO28_IDR_CAN3   ((uint32)(MO28_ID_CAN3) << 21)
#else                         
#define MO28_IDR_CAN3  (((MO28_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO28_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 29 */
#if (MO29_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO29_IDR_CAN3   ((uint32)(MO29_ID_CAN3) << 21)
#else                         
#define MO29_IDR_CAN3  (((MO29_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO29_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 30 */
#if (MO30_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO30_IDR_CAN3   ((uint32)(MO30_ID_CAN3) << 21)
#else                         
#define MO30_IDR_CAN3  (((MO30_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO30_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 31 */
#if (MO31_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO31_IDR_CAN3   ((uint32)(MO31_ID_CAN3) << 21)
#else                         
#define MO31_IDR_CAN3  (((MO31_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO31_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 32 */
#if (MO32_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO32_IDR_CAN3   ((uint32)(MO32_ID_CAN3) << 21)
#else                         
#define MO32_IDR_CAN3  (((MO32_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO32_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 33 */
#if (MO33_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO33_IDR_CAN3   ((uint32)(MO33_ID_CAN3) << 21)
#else                         
#define MO33_IDR_CAN3  (((MO33_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO33_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 34 */
#if (MO34_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO34_IDR_CAN3   ((uint32)(MO34_ID_CAN3) << 21)
#else                         
#define MO34_IDR_CAN3  (((MO34_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO34_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 35 */
#if (MO35_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO35_IDR_CAN3   ((uint32)(MO35_ID_CAN3) << 21)
#else                         
#define MO35_IDR_CAN3  (((MO35_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO35_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 36 */
#if (MO36_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO36_IDR_CAN3   ((uint32)(MO36_ID_CAN3) << 21)
#else                         
#define MO36_IDR_CAN3  (((MO36_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO36_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 37 */
#if (MO37_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO37_IDR_CAN3   ((uint32)(MO37_ID_CAN3) << 21)
#else                         
#define MO37_IDR_CAN3  (((MO37_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO37_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 38 */
#if (MO38_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO38_IDR_CAN3   ((uint32)(MO38_ID_CAN3) << 21)
#else                         
#define MO38_IDR_CAN3  (((MO38_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO38_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 39 */
#if (MO39_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO39_IDR_CAN3   ((uint32)(MO39_ID_CAN3) << 21)
#else                         
#define MO39_IDR_CAN3  (((MO39_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO39_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 40 */
#if (MO40_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO40_IDR_CAN3   ((uint32)(MO40_ID_CAN3) << 21)
#else                         
#define MO40_IDR_CAN3  (((MO40_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO40_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 41 */
#if (MO41_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO41_IDR_CAN3   ((uint32)(MO41_ID_CAN3) << 21)
#else                         
#define MO41_IDR_CAN3  (((MO41_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO41_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 42 */
#if (MO42_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO42_IDR_CAN3   ((uint32)(MO42_ID_CAN3) << 21)
#else                         
#define MO42_IDR_CAN3  (((MO42_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO42_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 43 */
#if (MO43_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO43_IDR_CAN3   ((uint32)(MO43_ID_CAN3) << 21)
#else                         
#define MO43_IDR_CAN3  (((MO43_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO43_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 44 */
#if (MO44_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO44_IDR_CAN3   ((uint32)(MO44_ID_CAN3) << 21)
#else                         
#define MO44_IDR_CAN3  (((MO44_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO44_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 45 */
#if (MO45_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO45_IDR_CAN3   ((uint32)(MO45_ID_CAN3) << 21)
#else                         
#define MO45_IDR_CAN3  (((MO45_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO45_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 46 */
#if (MO46_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO46_IDR_CAN3   ((uint32)(MO46_ID_CAN3) << 21)
#else                         
#define MO46_IDR_CAN3  (((MO46_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO46_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 47 */
#if (MO47_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO47_IDR_CAN3   ((uint32)(MO47_ID_CAN3) << 21)
#else                         
#define MO47_IDR_CAN3  (((MO47_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO47_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 48 */
#if (MO48_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO48_IDR_CAN3   ((uint32)(MO48_ID_CAN3) << 21)
#else                         
#define MO48_IDR_CAN3  (((MO48_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO48_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 49 */
#if (MO49_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO49_IDR_CAN3   ((uint32)(MO49_ID_CAN3) << 21)
#else                         
#define MO49_IDR_CAN3  (((MO49_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO49_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 50 */
#if (MO50_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO50_IDR_CAN3   ((uint32)(MO50_ID_CAN3) << 21)
#else                         
#define MO50_IDR_CAN3  (((MO50_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO50_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 51 */
#if (MO51_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO51_IDR_CAN3   ((uint32)(MO51_ID_CAN3) << 21)
#else                         
#define MO51_IDR_CAN3  (((MO51_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO51_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 52 */
#if (MO52_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO52_IDR_CAN3   ((uint32)(MO52_ID_CAN3) << 21)
#else                         
#define MO52_IDR_CAN3  (((MO52_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO52_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 53 */
#if (MO53_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO53_IDR_CAN3   ((uint32)(MO53_ID_CAN3) << 21)
#else                         
#define MO53_IDR_CAN3  (((MO53_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO53_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 54 */
#if (MO54_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO54_IDR_CAN3   ((uint32)(MO54_ID_CAN3) << 21)
#else                         
#define MO54_IDR_CAN3  (((MO54_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO54_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 55 */
#if (MO55_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO55_IDR_CAN3   ((uint32)(MO55_ID_CAN3) << 21)
#else                         
#define MO55_IDR_CAN3  (((MO55_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO55_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 56 */
#if (MO56_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO56_IDR_CAN3   ((uint32)(MO56_ID_CAN3) << 21)
#else                         
#define MO56_IDR_CAN3  (((MO56_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO56_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 57 */
#if (MO57_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO57_IDR_CAN3   ((uint32)(MO57_ID_CAN3) << 21)
#else                         
#define MO57_IDR_CAN3  (((MO57_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO57_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 58 */
#if (MO58_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO58_IDR_CAN3   ((uint32)(MO58_ID_CAN3) << 21)
#else                         
#define MO58_IDR_CAN3  (((MO58_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO58_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 59 */
#if (MO59_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO59_IDR_CAN3   ((uint32)(MO59_ID_CAN3) << 21)
#else                         
#define MO59_IDR_CAN3  (((MO59_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO59_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 60 */
#if (MO60_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO60_IDR_CAN3   ((uint32)(MO60_ID_CAN3) << 21)
#else                         
#define MO60_IDR_CAN3  (((MO60_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO60_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 61 */
#if (MO61_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO61_IDR_CAN3   ((uint32)(MO61_ID_CAN3) << 21)
#else                         
#define MO61_IDR_CAN3  (((MO61_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO61_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 62 */
#if (MO62_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO62_IDR_CAN3   ((uint32)(MO62_ID_CAN3) << 21)
#else                         
#define MO62_IDR_CAN3  (((MO62_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO62_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 63 */
#if (MO63_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO63_IDR_CAN3   ((uint32)(MO63_ID_CAN3) << 21)
#else                         
#define MO63_IDR_CAN3  (((MO63_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO63_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 64 */
#if (MO64_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO64_IDR_CAN3   ((uint32)(MO64_ID_CAN3) << 21)
#else                         
#define MO64_IDR_CAN3  (((MO64_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO64_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 65 */
#if (MO65_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO65_IDR_CAN3   ((uint32)(MO65_ID_CAN3) << 21)
#else                         
#define MO65_IDR_CAN3  (((MO65_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO65_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 66 */
#if (MO66_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO66_IDR_CAN3   ((uint32)(MO66_ID_CAN3) << 21)
#else                         
#define MO66_IDR_CAN3  (((MO66_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO66_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 67 */
#if (MO67_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO67_IDR_CAN3   ((uint32)(MO67_ID_CAN3) << 21)
#else                         
#define MO67_IDR_CAN3  (((MO67_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO67_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 68 */
#if (MO68_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO68_IDR_CAN3   ((uint32)(MO68_ID_CAN3) << 21)
#else                         
#define MO68_IDR_CAN3  (((MO68_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO68_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 69 */
#if (MO69_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO69_IDR_CAN3   ((uint32)(MO69_ID_CAN3) << 21)
#else                         
#define MO69_IDR_CAN3  (((MO69_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO69_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 70 */
#if (MO70_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO70_IDR_CAN3   ((uint32)(MO70_ID_CAN3) << 21)
#else                         
#define MO70_IDR_CAN3  (((MO70_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO70_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 71 */
#if (MO71_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO71_IDR_CAN3   ((uint32)(MO71_ID_CAN3) << 21)
#else                         
#define MO71_IDR_CAN3  (((MO71_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO71_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 72 */
#if (MO72_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO72_IDR_CAN3   ((uint32)(MO72_ID_CAN3) << 21)
#else                         
#define MO72_IDR_CAN3  (((MO72_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO72_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 73 */
#if (MO73_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO73_IDR_CAN3   ((uint32)(MO73_ID_CAN3) << 21)
#else                         
#define MO73_IDR_CAN3  (((MO73_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO73_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 74 */
#if (MO74_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO74_IDR_CAN3   ((uint32)(MO74_ID_CAN3) << 21)
#else                         
#define MO74_IDR_CAN3  (((MO74_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO74_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 75 */
#if (MO75_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO75_IDR_CAN3   ((uint32)(MO75_ID_CAN3) << 21)
#else                         
#define MO75_IDR_CAN3  (((MO75_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO75_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 76 */
#if (MO76_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO76_IDR_CAN3   ((uint32)(MO76_ID_CAN3) << 21)
#else                         
#define MO76_IDR_CAN3  (((MO76_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO76_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 77 */
#if (MO77_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO77_IDR_CAN3   ((uint32)(MO77_ID_CAN3) << 21)
#else                         
#define MO77_IDR_CAN3  (((MO77_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO77_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 78 */
#if (MO78_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO78_IDR_CAN3   ((uint32)(MO78_ID_CAN3) << 21)
#else                         
#define MO78_IDR_CAN3  (((MO78_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO78_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 79 */
#if (MO79_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO79_IDR_CAN3   ((uint32)(MO79_ID_CAN3) << 21)
#else                         
#define MO79_IDR_CAN3  (((MO79_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO79_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 80 */
#if (MO80_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO80_IDR_CAN3   ((uint32)(MO80_ID_CAN3) << 21)
#else                         
#define MO80_IDR_CAN3  (((MO80_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO80_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 81 */
#if (MO81_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO81_IDR_CAN3   ((uint32)(MO81_ID_CAN3) << 21)
#else                         
#define MO81_IDR_CAN3  (((MO81_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO81_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 82 */
#if (MO82_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO82_IDR_CAN3   ((uint32)(MO82_ID_CAN3) << 21)
#else                         
#define MO82_IDR_CAN3  (((MO82_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO82_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 83 */
#if (MO83_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO83_IDR_CAN3   ((uint32)(MO83_ID_CAN3) << 21)
#else                         
#define MO83_IDR_CAN3  (((MO83_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO83_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 84 */
#if (MO84_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO84_IDR_CAN3   ((uint32)(MO84_ID_CAN3) << 21)
#else                         
#define MO84_IDR_CAN3  (((MO84_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO84_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 85 */
#if (MO85_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO85_IDR_CAN3   ((uint32)(MO85_ID_CAN3) << 21)
#else                         
#define MO85_IDR_CAN3  (((MO85_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO85_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 86 */
#if (MO86_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO86_IDR_CAN3   ((uint32)(MO86_ID_CAN3) << 21)
#else                         
#define MO86_IDR_CAN3  (((MO86_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO86_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 87 */
#if (MO87_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO87_IDR_CAN3   ((uint32)(MO87_ID_CAN3) << 21)
#else                         
#define MO87_IDR_CAN3  (((MO87_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO87_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 88 */
#if (MO88_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO88_IDR_CAN3   ((uint32)(MO88_ID_CAN3) << 21)
#else                         
#define MO88_IDR_CAN3  (((MO88_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO88_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 89 */
#if (MO89_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO89_IDR_CAN3   ((uint32)(MO89_ID_CAN3) << 21)
#else                         
#define MO89_IDR_CAN3  (((MO89_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO89_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 90 */
#if (MO90_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO90_IDR_CAN3   ((uint32)(MO90_ID_CAN3) << 21)
#else                         
#define MO90_IDR_CAN3  (((MO90_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO90_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 91 */
#if (MO91_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO91_IDR_CAN3   ((uint32)(MO91_ID_CAN3) << 21)
#else                         
#define MO91_IDR_CAN3  (((MO91_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO91_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 92 */
#if (MO92_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO92_IDR_CAN3   ((uint32)(MO92_ID_CAN3) << 21)
#else                         
#define MO92_IDR_CAN3  (((MO92_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO92_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 93 */
#if (MO93_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO93_IDR_CAN3   ((uint32)(MO93_ID_CAN3) << 21)
#else                         
#define MO93_IDR_CAN3  (((MO93_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO93_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 94 */
#if (MO94_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO94_IDR_CAN3   ((uint32)(MO94_ID_CAN3) << 21)
#else                         
#define MO94_IDR_CAN3  (((MO94_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO94_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 95 */
#if (MO95_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO95_IDR_CAN3   ((uint32)(MO95_ID_CAN3) << 21)
#else                         
#define MO95_IDR_CAN3  (((MO95_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO95_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 96 */
#if (MO96_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO96_IDR_CAN3   ((uint32)(MO96_ID_CAN3) << 21)
#else                         
#define MO96_IDR_CAN3  (((MO96_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO96_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 97 */
#if (MO97_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO97_IDR_CAN3   ((uint32)(MO97_ID_CAN3) << 21)
#else                         
#define MO97_IDR_CAN3  (((MO97_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO97_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 98 */
#if (MO98_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO98_IDR_CAN3   ((uint32)(MO98_ID_CAN3) << 21)
#else                         
#define MO98_IDR_CAN3  (((MO98_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO98_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 99 */
#if (MO99_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO99_IDR_CAN3   ((uint32)(MO99_ID_CAN3) << 21)
#else                         
#define MO99_IDR_CAN3  (((MO99_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO99_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 100 */
#if (MO100_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO100_IDR_CAN3   ((uint32)(MO100_ID_CAN3) << 21)
#else                         
#define MO100_IDR_CAN3  (((MO100_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO100_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 101 */
#if (MO101_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO101_IDR_CAN3   ((uint32)(MO101_ID_CAN3) << 21)
#else                         
#define MO101_IDR_CAN3  (((MO101_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO101_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 102 */
#if (MO102_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO102_IDR_CAN3   ((uint32)(MO102_ID_CAN3) << 21)
#else                         
#define MO102_IDR_CAN3  (((MO102_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO102_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 103 */
#if (MO103_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO103_IDR_CAN3   ((uint32)(MO103_ID_CAN3) << 21)
#else                         
#define MO103_IDR_CAN3  (((MO103_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO103_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 104 */
#if (MO104_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO104_IDR_CAN3   ((uint32)(MO104_ID_CAN3) << 21)
#else                         
#define MO104_IDR_CAN3  (((MO104_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO104_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 105 */
#if (MO105_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO105_IDR_CAN3   ((uint32)(MO105_ID_CAN3) << 21)
#else                         
#define MO105_IDR_CAN3  (((MO105_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO105_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 106 */
#if (MO106_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO106_IDR_CAN3   ((uint32)(MO106_ID_CAN3) << 21)
#else                         
#define MO106_IDR_CAN3  (((MO106_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO106_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 107 */
#if (MO107_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO107_IDR_CAN3   ((uint32)(MO107_ID_CAN3) << 21)
#else                         
#define MO107_IDR_CAN3  (((MO107_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO107_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 108 */
#if (MO108_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO108_IDR_CAN3   ((uint32)(MO108_ID_CAN3) << 21)
#else                         
#define MO108_IDR_CAN3  (((MO108_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO108_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 109 */
#if (MO109_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO109_IDR_CAN3   ((uint32)(MO109_ID_CAN3) << 21)
#else                         
#define MO109_IDR_CAN3  (((MO109_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO109_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 110 */
#if (MO110_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO110_IDR_CAN3   ((uint32)(MO110_ID_CAN3) << 21)
#else                         
#define MO110_IDR_CAN3  (((MO110_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO110_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 111 */
#if (MO111_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO111_IDR_CAN3   ((uint32)(MO111_ID_CAN3) << 21)
#else                         
#define MO111_IDR_CAN3  (((MO111_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO111_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 112 */
#if (MO112_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO112_IDR_CAN3   ((uint32)(MO112_ID_CAN3) << 21)
#else                         
#define MO112_IDR_CAN3  (((MO112_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO112_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 113 */
#if (MO113_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO113_IDR_CAN3   ((uint32)(MO113_ID_CAN3) << 21)
#else                         
#define MO113_IDR_CAN3  (((MO113_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO113_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 114 */
#if (MO114_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO114_IDR_CAN3   ((uint32)(MO114_ID_CAN3) << 21)
#else                         
#define MO114_IDR_CAN3  (((MO114_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO114_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 115 */
#if (MO115_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO115_IDR_CAN3   ((uint32)(MO115_ID_CAN3) << 21)
#else                         
#define MO115_IDR_CAN3  (((MO115_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO115_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 116 */
#if (MO116_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO116_IDR_CAN3   ((uint32)(MO116_ID_CAN3) << 21)
#else                         
#define MO116_IDR_CAN3  (((MO116_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO116_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 117 */
#if (MO117_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO117_IDR_CAN3   ((uint32)(MO117_ID_CAN3) << 21)
#else                         
#define MO117_IDR_CAN3  (((MO117_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO117_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 118 */
#if (MO118_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO118_IDR_CAN3   ((uint32)(MO118_ID_CAN3) << 21)
#else                         
#define MO118_IDR_CAN3  (((MO118_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO118_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 119 */
#if (MO119_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO119_IDR_CAN3   ((uint32)(MO119_ID_CAN3) << 21)
#else                         
#define MO119_IDR_CAN3  (((MO119_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO119_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 120 */
#if (MO120_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO120_IDR_CAN3   ((uint32)(MO120_ID_CAN3) << 21)
#else                         
#define MO120_IDR_CAN3  (((MO120_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO120_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 121 */
#if (MO121_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO121_IDR_CAN3   ((uint32)(MO121_ID_CAN3) << 21)
#else                         
#define MO121_IDR_CAN3  (((MO121_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO121_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 122 */
#if (MO122_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO122_IDR_CAN3   ((uint32)(MO122_ID_CAN3) << 21)
#else                         
#define MO122_IDR_CAN3  (((MO122_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO122_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 123 */
#if (MO123_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO123_IDR_CAN3   ((uint32)(MO123_ID_CAN3) << 21)
#else                         
#define MO123_IDR_CAN3  (((MO123_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO123_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 124 */
#if (MO124_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO124_IDR_CAN3   ((uint32)(MO124_ID_CAN3) << 21)
#else                         
#define MO124_IDR_CAN3  (((MO124_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO124_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 125 */
#if (MO125_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO125_IDR_CAN3   ((uint32)(MO125_ID_CAN3) << 21)
#else                         
#define MO125_IDR_CAN3  (((MO125_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO125_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 126 */
#if (MO126_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO126_IDR_CAN3   ((uint32)(MO126_ID_CAN3) << 21)
#else                         
#define MO126_IDR_CAN3  (((MO126_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO126_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 127 */
#if (MO127_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO127_IDR_CAN3   ((uint32)(MO127_ID_CAN3) << 21)
#else                         
#define MO127_IDR_CAN3  (((MO127_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO127_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 128 */
#if (MO128_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO128_IDR_CAN3   ((uint32)(MO128_ID_CAN3) << 21)
#else                         
#define MO128_IDR_CAN3  (((MO128_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO128_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 129 */
#if (MO129_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO129_IDR_CAN3   ((uint32)(MO129_ID_CAN3) << 21)
#else                         
#define MO129_IDR_CAN3  (((MO129_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO129_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 130 */
#if (MO130_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO130_IDR_CAN3   ((uint32)(MO130_ID_CAN3) << 21)
#else                         
#define MO130_IDR_CAN3  (((MO130_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO130_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 131 */
#if (MO131_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO131_IDR_CAN3   ((uint32)(MO131_ID_CAN3) << 21)
#else                         
#define MO131_IDR_CAN3  (((MO131_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO131_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 132 */
#if (MO132_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO132_IDR_CAN3   ((uint32)(MO132_ID_CAN3) << 21)
#else                         
#define MO132_IDR_CAN3  (((MO132_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO132_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 133 */
#if (MO133_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO133_IDR_CAN3   ((uint32)(MO133_ID_CAN3) << 21)
#else                         
#define MO133_IDR_CAN3  (((MO133_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO133_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 134 */
#if (MO134_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO134_IDR_CAN3   ((uint32)(MO134_ID_CAN3) << 21)
#else                         
#define MO134_IDR_CAN3  (((MO134_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO134_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 135 */
#if (MO135_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO135_IDR_CAN3   ((uint32)(MO135_ID_CAN3) << 21)
#else                         
#define MO135_IDR_CAN3  (((MO135_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO135_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 136 */
#if (MO136_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO136_IDR_CAN3   ((uint32)(MO136_ID_CAN3) << 21)
#else                         
#define MO136_IDR_CAN3  (((MO136_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO136_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 137 */
#if (MO137_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO137_IDR_CAN3   ((uint32)(MO137_ID_CAN3) << 21)
#else                         
#define MO137_IDR_CAN3  (((MO137_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO137_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 138 */
#if (MO138_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO138_IDR_CAN3   ((uint32)(MO138_ID_CAN3) << 21)
#else                         
#define MO138_IDR_CAN3  (((MO138_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO138_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 139 */
#if (MO139_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO139_IDR_CAN3   ((uint32)(MO139_ID_CAN3) << 21)
#else                         
#define MO139_IDR_CAN3  (((MO139_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO139_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 140 */
#if (MO140_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO140_IDR_CAN3   ((uint32)(MO140_ID_CAN3) << 21)
#else                         
#define MO140_IDR_CAN3  (((MO140_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO140_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 141 */
#if (MO141_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO141_IDR_CAN3   ((uint32)(MO141_ID_CAN3) << 21)
#else                         
#define MO141_IDR_CAN3  (((MO141_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO141_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 142 */
#if (MO142_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO142_IDR_CAN3   ((uint32)(MO142_ID_CAN3) << 21)
#else                         
#define MO142_IDR_CAN3  (((MO142_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO142_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 143 */
#if (MO143_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO143_IDR_CAN3   ((uint32)(MO143_ID_CAN3) << 21)
#else                         
#define MO143_IDR_CAN3  (((MO143_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO143_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 144 */
#if (MO144_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO144_IDR_CAN3   ((uint32)(MO144_ID_CAN3) << 21)
#else                         
#define MO144_IDR_CAN3  (((MO144_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO144_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 145 */
#if (MO145_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO145_IDR_CAN3   ((uint32)(MO145_ID_CAN3) << 21)
#else                         
#define MO145_IDR_CAN3  (((MO145_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO145_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 146 */
#if (MO146_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO146_IDR_CAN3   ((uint32)(MO146_ID_CAN3) << 21)
#else                         
#define MO146_IDR_CAN3  (((MO146_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO146_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 147 */
#if (MO147_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO147_IDR_CAN3   ((uint32)(MO147_ID_CAN3) << 21)
#else                         
#define MO147_IDR_CAN3  (((MO147_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO147_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 148 */
#if (MO148_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO148_IDR_CAN3   ((uint32)(MO148_ID_CAN3) << 21)
#else                         
#define MO148_IDR_CAN3  (((MO148_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO148_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 149 */
#if (MO149_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO149_IDR_CAN3   ((uint32)(MO149_ID_CAN3) << 21)
#else                         
#define MO149_IDR_CAN3  (((MO149_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO149_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 150 */
#if (MO150_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO150_IDR_CAN3   ((uint32)(MO150_ID_CAN3) << 21)
#else                         
#define MO150_IDR_CAN3  (((MO150_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO150_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 151 */
#if (MO151_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO151_IDR_CAN3   ((uint32)(MO151_ID_CAN3) << 21)
#else                         
#define MO151_IDR_CAN3  (((MO151_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO151_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 152 */
#if (MO152_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO152_IDR_CAN3   ((uint32)(MO152_ID_CAN3) << 21)
#else                         
#define MO152_IDR_CAN3  (((MO152_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO152_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 153 */
#if (MO153_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO153_IDR_CAN3   ((uint32)(MO153_ID_CAN3) << 21)
#else                         
#define MO153_IDR_CAN3  (((MO153_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO153_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 154 */
#if (MO154_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO154_IDR_CAN3   ((uint32)(MO154_ID_CAN3) << 21)
#else                         
#define MO154_IDR_CAN3  (((MO154_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO154_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 155 */
#if (MO155_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO155_IDR_CAN3   ((uint32)(MO155_ID_CAN3) << 21)
#else                         
#define MO155_IDR_CAN3  (((MO155_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO155_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 156 */
#if (MO156_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO156_IDR_CAN3   ((uint32)(MO156_ID_CAN3) << 21)
#else                         
#define MO156_IDR_CAN3  (((MO156_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO156_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 157 */
#if (MO157_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO157_IDR_CAN3   ((uint32)(MO157_ID_CAN3) << 21)
#else                         
#define MO157_IDR_CAN3  (((MO157_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO157_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 158 */
#if (MO158_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO158_IDR_CAN3   ((uint32)(MO158_ID_CAN3) << 21)
#else                         
#define MO158_IDR_CAN3  (((MO158_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO158_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 159 */
#if (MO159_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO159_IDR_CAN3   ((uint32)(MO159_ID_CAN3) << 21)
#else                         
#define MO159_IDR_CAN3  (((MO159_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO159_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 160 */
#if (MO160_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO160_IDR_CAN3   ((uint32)(MO160_ID_CAN3) << 21)
#else                         
#define MO160_IDR_CAN3  (((MO160_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO160_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 161 */
#if (MO161_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO161_IDR_CAN3   ((uint32)(MO161_ID_CAN3) << 21)
#else                         
#define MO161_IDR_CAN3  (((MO161_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO161_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 162 */
#if (MO162_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO162_IDR_CAN3   ((uint32)(MO162_ID_CAN3) << 21)
#else                         
#define MO162_IDR_CAN3  (((MO162_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO162_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 163 */
#if (MO163_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO163_IDR_CAN3   ((uint32)(MO163_ID_CAN3) << 21)
#else                         
#define MO163_IDR_CAN3  (((MO163_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO163_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 164 */
#if (MO164_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO164_IDR_CAN3   ((uint32)(MO164_ID_CAN3) << 21)
#else                         
#define MO164_IDR_CAN3  (((MO164_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO164_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 165 */
#if (MO165_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO165_IDR_CAN3   ((uint32)(MO165_ID_CAN3) << 21)
#else                         
#define MO165_IDR_CAN3  (((MO165_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO165_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 166 */
#if (MO166_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO166_IDR_CAN3   ((uint32)(MO166_ID_CAN3) << 21)
#else                         
#define MO166_IDR_CAN3  (((MO166_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO166_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 167 */
#if (MO167_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO167_IDR_CAN3   ((uint32)(MO167_ID_CAN3) << 21)
#else                         
#define MO167_IDR_CAN3  (((MO167_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO167_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 168 */
#if (MO168_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO168_IDR_CAN3   ((uint32)(MO168_ID_CAN3) << 21)
#else                         
#define MO168_IDR_CAN3  (((MO168_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO168_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 169 */
#if (MO169_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO169_IDR_CAN3   ((uint32)(MO169_ID_CAN3) << 21)
#else                         
#define MO169_IDR_CAN3  (((MO169_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO169_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 170 */
#if (MO170_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO170_IDR_CAN3   ((uint32)(MO170_ID_CAN3) << 21)
#else                         
#define MO170_IDR_CAN3  (((MO170_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO170_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 171 */
#if (MO171_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO171_IDR_CAN3   ((uint32)(MO171_ID_CAN3) << 21)
#else                         
#define MO171_IDR_CAN3  (((MO171_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO171_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 172 */
#if (MO172_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO172_IDR_CAN3   ((uint32)(MO172_ID_CAN3) << 21)
#else                         
#define MO172_IDR_CAN3  (((MO172_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO172_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 173 */
#if (MO173_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO173_IDR_CAN3   ((uint32)(MO173_ID_CAN3) << 21)
#else                         
#define MO173_IDR_CAN3  (((MO173_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO173_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 174 */
#if (MO174_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO174_IDR_CAN3   ((uint32)(MO174_ID_CAN3) << 21)
#else                         
#define MO174_IDR_CAN3  (((MO174_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO174_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 175 */
#if (MO175_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO175_IDR_CAN3   ((uint32)(MO175_ID_CAN3) << 21)
#else                         
#define MO175_IDR_CAN3  (((MO175_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO175_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 176 */
#if (MO176_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO176_IDR_CAN3   ((uint32)(MO176_ID_CAN3) << 21)
#else                         
#define MO176_IDR_CAN3  (((MO176_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO176_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 177 */
#if (MO177_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO177_IDR_CAN3   ((uint32)(MO177_ID_CAN3) << 21)
#else                         
#define MO177_IDR_CAN3  (((MO177_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO177_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 178 */
#if (MO178_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO178_IDR_CAN3   ((uint32)(MO178_ID_CAN3) << 21)
#else                         
#define MO178_IDR_CAN3  (((MO178_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO178_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 179 */
#if (MO179_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO179_IDR_CAN3   ((uint32)(MO179_ID_CAN3) << 21)
#else                         
#define MO179_IDR_CAN3  (((MO179_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO179_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 180 */
#if (MO180_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO180_IDR_CAN3   ((uint32)(MO180_ID_CAN3) << 21)
#else                         
#define MO180_IDR_CAN3  (((MO180_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO180_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 181 */
#if (MO181_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO181_IDR_CAN3   ((uint32)(MO181_ID_CAN3) << 21)
#else                         
#define MO181_IDR_CAN3  (((MO181_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO181_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 182 */
#if (MO182_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO182_IDR_CAN3   ((uint32)(MO182_ID_CAN3) << 21)
#else                         
#define MO182_IDR_CAN3  (((MO182_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO182_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 183 */
#if (MO183_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO183_IDR_CAN3   ((uint32)(MO183_ID_CAN3) << 21)
#else                         
#define MO183_IDR_CAN3  (((MO183_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO183_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 184 */
#if (MO184_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO184_IDR_CAN3   ((uint32)(MO184_ID_CAN3) << 21)
#else                         
#define MO184_IDR_CAN3  (((MO184_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO184_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 185 */
#if (MO185_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO185_IDR_CAN3   ((uint32)(MO185_ID_CAN3) << 21)
#else                         
#define MO185_IDR_CAN3  (((MO185_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO185_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 186 */
#if (MO186_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO186_IDR_CAN3   ((uint32)(MO186_ID_CAN3) << 21)
#else                         
#define MO186_IDR_CAN3  (((MO186_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO186_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 187 */
#if (MO187_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO187_IDR_CAN3   ((uint32)(MO187_ID_CAN3) << 21)
#else                         
#define MO187_IDR_CAN3  (((MO187_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO187_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 188 */
#if (MO188_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO188_IDR_CAN3   ((uint32)(MO188_ID_CAN3) << 21)
#else                         
#define MO188_IDR_CAN3  (((MO188_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO188_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 189 */
#if (MO189_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO189_IDR_CAN3   ((uint32)(MO189_ID_CAN3) << 21)
#else                         
#define MO189_IDR_CAN3  (((MO189_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO189_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 190 */
#if (MO190_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO190_IDR_CAN3   ((uint32)(MO190_ID_CAN3) << 21)
#else                         
#define MO190_IDR_CAN3  (((MO190_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO190_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 191 */
#if (MO191_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO191_IDR_CAN3   ((uint32)(MO191_ID_CAN3) << 21)
#else                         
#define MO191_IDR_CAN3  (((MO191_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO191_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 192 */
#if (MO192_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO192_IDR_CAN3   ((uint32)(MO192_ID_CAN3) << 21)
#else                         
#define MO192_IDR_CAN3  (((MO192_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO192_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 193 */
#if (MO193_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO193_IDR_CAN3   ((uint32)(MO193_ID_CAN3) << 21)
#else                         
#define MO193_IDR_CAN3  (((MO193_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO193_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 194 */
#if (MO194_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO194_IDR_CAN3   ((uint32)(MO194_ID_CAN3) << 21)
#else                         
#define MO194_IDR_CAN3  (((MO194_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO194_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 195 */
#if (MO195_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO195_IDR_CAN3   ((uint32)(MO195_ID_CAN3) << 21)
#else                         
#define MO195_IDR_CAN3  (((MO195_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO195_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 196 */
#if (MO196_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO196_IDR_CAN3   ((uint32)(MO196_ID_CAN3) << 21)
#else                         
#define MO196_IDR_CAN3  (((MO196_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO196_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 197 */
#if (MO197_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO197_IDR_CAN3   ((uint32)(MO197_ID_CAN3) << 21)
#else                         
#define MO197_IDR_CAN3  (((MO197_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO197_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 198 */
#if (MO198_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO198_IDR_CAN3   ((uint32)(MO198_ID_CAN3) << 21)
#else                         
#define MO198_IDR_CAN3  (((MO198_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO198_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 199 */
#if (MO199_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO199_IDR_CAN3   ((uint32)(MO199_ID_CAN3) << 21)
#else                         
#define MO199_IDR_CAN3  (((MO199_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO199_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 200 */
#if (MO200_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO200_IDR_CAN3   ((uint32)(MO200_ID_CAN3) << 21)
#else                         
#define MO200_IDR_CAN3  (((MO200_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO200_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 201 */
#if (MO201_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO201_IDR_CAN3   ((uint32)(MO201_ID_CAN3) << 21)
#else                         
#define MO201_IDR_CAN3  (((MO201_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO201_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 202 */
#if (MO202_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO202_IDR_CAN3   ((uint32)(MO202_ID_CAN3) << 21)
#else                         
#define MO202_IDR_CAN3  (((MO202_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO202_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 203 */
#if (MO203_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO203_IDR_CAN3   ((uint32)(MO203_ID_CAN3) << 21)
#else                         
#define MO203_IDR_CAN3  (((MO203_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO203_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 204 */
#if (MO204_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO204_IDR_CAN3   ((uint32)(MO204_ID_CAN3) << 21)
#else                         
#define MO204_IDR_CAN3  (((MO204_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO204_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 205 */
#if (MO205_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO205_IDR_CAN3   ((uint32)(MO205_ID_CAN3) << 21)
#else                         
#define MO205_IDR_CAN3  (((MO205_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO205_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 206 */
#if (MO206_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO206_IDR_CAN3   ((uint32)(MO206_ID_CAN3) << 21)
#else                         
#define MO206_IDR_CAN3  (((MO206_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO206_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 207 */
#if (MO207_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO207_IDR_CAN3   ((uint32)(MO207_ID_CAN3) << 21)
#else                         
#define MO207_IDR_CAN3  (((MO207_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO207_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 208 */
#if (MO208_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO208_IDR_CAN3   ((uint32)(MO208_ID_CAN3) << 21)
#else                         
#define MO208_IDR_CAN3  (((MO208_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO208_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 209 */
#if (MO209_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO209_IDR_CAN3   ((uint32)(MO209_ID_CAN3) << 21)
#else                         
#define MO209_IDR_CAN3  (((MO209_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO209_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 210 */
#if (MO210_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO210_IDR_CAN3   ((uint32)(MO210_ID_CAN3) << 21)
#else                         
#define MO210_IDR_CAN3  (((MO210_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO210_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 211 */
#if (MO211_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO211_IDR_CAN3   ((uint32)(MO211_ID_CAN3) << 21)
#else                         
#define MO211_IDR_CAN3  (((MO211_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO211_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 212 */
#if (MO212_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO212_IDR_CAN3   ((uint32)(MO212_ID_CAN3) << 21)
#else                         
#define MO212_IDR_CAN3  (((MO212_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO212_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 213 */
#if (MO213_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO213_IDR_CAN3   ((uint32)(MO213_ID_CAN3) << 21)
#else                         
#define MO213_IDR_CAN3  (((MO213_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO213_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 214 */
#if (MO214_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO214_IDR_CAN3   ((uint32)(MO214_ID_CAN3) << 21)
#else                         
#define MO214_IDR_CAN3  (((MO214_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO214_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 215 */
#if (MO215_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO215_IDR_CAN3   ((uint32)(MO215_ID_CAN3) << 21)
#else                         
#define MO215_IDR_CAN3  (((MO215_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO215_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 216 */
#if (MO216_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO216_IDR_CAN3   ((uint32)(MO216_ID_CAN3) << 21)
#else                         
#define MO216_IDR_CAN3  (((MO216_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO216_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 217 */
#if (MO217_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO217_IDR_CAN3   ((uint32)(MO217_ID_CAN3) << 21)
#else                         
#define MO217_IDR_CAN3  (((MO217_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO217_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 218 */
#if (MO218_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO218_IDR_CAN3   ((uint32)(MO218_ID_CAN3) << 21)
#else                         
#define MO218_IDR_CAN3  (((MO218_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO218_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 219 */
#if (MO219_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO219_IDR_CAN3   ((uint32)(MO219_ID_CAN3) << 21)
#else                         
#define MO219_IDR_CAN3  (((MO219_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO219_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 220 */
#if (MO220_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO220_IDR_CAN3   ((uint32)(MO220_ID_CAN3) << 21)
#else                         
#define MO220_IDR_CAN3  (((MO220_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO220_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 221 */
#if (MO221_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO221_IDR_CAN3   ((uint32)(MO221_ID_CAN3) << 21)
#else                         
#define MO221_IDR_CAN3  (((MO221_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO221_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 222 */
#if (MO222_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO222_IDR_CAN3   ((uint32)(MO222_ID_CAN3) << 21)
#else                         
#define MO222_IDR_CAN3  (((MO222_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO222_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 223 */
#if (MO223_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO223_IDR_CAN3   ((uint32)(MO223_ID_CAN3) << 21)
#else                         
#define MO223_IDR_CAN3  (((MO223_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO223_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 224 */
#if (MO224_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO224_IDR_CAN3   ((uint32)(MO224_ID_CAN3) << 21)
#else                         
#define MO224_IDR_CAN3  (((MO224_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO224_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 225 */
#if (MO225_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO225_IDR_CAN3   ((uint32)(MO225_ID_CAN3) << 21)
#else                         
#define MO225_IDR_CAN3  (((MO225_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO225_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 226 */
#if (MO226_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO226_IDR_CAN3   ((uint32)(MO226_ID_CAN3) << 21)
#else                         
#define MO226_IDR_CAN3  (((MO226_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO226_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 227 */
#if (MO227_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO227_IDR_CAN3   ((uint32)(MO227_ID_CAN3) << 21)
#else                         
#define MO227_IDR_CAN3  (((MO227_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO227_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 228 */
#if (MO228_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO228_IDR_CAN3   ((uint32)(MO228_ID_CAN3) << 21)
#else                         
#define MO228_IDR_CAN3  (((MO228_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO228_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 229 */
#if (MO229_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO229_IDR_CAN3   ((uint32)(MO229_ID_CAN3) << 21)
#else                         
#define MO229_IDR_CAN3  (((MO229_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO229_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 230 */
#if (MO230_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO230_IDR_CAN3   ((uint32)(MO230_ID_CAN3) << 21)
#else                         
#define MO230_IDR_CAN3  (((MO230_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO230_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 231 */
#if (MO231_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO231_IDR_CAN3   ((uint32)(MO231_ID_CAN3) << 21)
#else                         
#define MO231_IDR_CAN3  (((MO231_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO231_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 232 */
#if (MO232_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO232_IDR_CAN3   ((uint32)(MO232_ID_CAN3) << 21)
#else                         
#define MO232_IDR_CAN3  (((MO232_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO232_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 233 */
#if (MO233_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO233_IDR_CAN3   ((uint32)(MO233_ID_CAN3) << 21)
#else                         
#define MO233_IDR_CAN3  (((MO233_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO233_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 234 */
#if (MO234_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO234_IDR_CAN3   ((uint32)(MO234_ID_CAN3) << 21)
#else                         
#define MO234_IDR_CAN3  (((MO234_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO234_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 235 */
#if (MO235_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO235_IDR_CAN3   ((uint32)(MO235_ID_CAN3) << 21)
#else                         
#define MO235_IDR_CAN3  (((MO235_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO235_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 236 */
#if (MO236_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO236_IDR_CAN3   ((uint32)(MO236_ID_CAN3) << 21)
#else                         
#define MO236_IDR_CAN3  (((MO236_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO236_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 237 */
#if (MO237_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO237_IDR_CAN3   ((uint32)(MO237_ID_CAN3) << 21)
#else                         
#define MO237_IDR_CAN3  (((MO237_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO237_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 238 */
#if (MO238_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO238_IDR_CAN3   ((uint32)(MO238_ID_CAN3) << 21)
#else                         
#define MO238_IDR_CAN3  (((MO238_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO238_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 239 */
#if (MO239_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO239_IDR_CAN3   ((uint32)(MO239_ID_CAN3) << 21)
#else                         
#define MO239_IDR_CAN3  (((MO239_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO239_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 240 */
#if (MO240_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO240_IDR_CAN3   ((uint32)(MO240_ID_CAN3) << 21)
#else                         
#define MO240_IDR_CAN3  (((MO240_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO240_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 241 */
#if (MO241_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO241_IDR_CAN3   ((uint32)(MO241_ID_CAN3) << 21)
#else                         
#define MO241_IDR_CAN3  (((MO241_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO241_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 242 */
#if (MO242_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO242_IDR_CAN3   ((uint32)(MO242_ID_CAN3) << 21)
#else                         
#define MO242_IDR_CAN3  (((MO242_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO242_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 243 */
#if (MO243_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO243_IDR_CAN3   ((uint32)(MO243_ID_CAN3) << 21)
#else                         
#define MO243_IDR_CAN3  (((MO243_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO243_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 244 */
#if (MO244_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO244_IDR_CAN3   ((uint32)(MO244_ID_CAN3) << 21)
#else                         
#define MO244_IDR_CAN3  (((MO244_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO244_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 245 */
#if (MO245_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO245_IDR_CAN3   ((uint32)(MO245_ID_CAN3) << 21)
#else                         
#define MO245_IDR_CAN3  (((MO245_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO245_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 246 */
#if (MO246_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO246_IDR_CAN3   ((uint32)(MO246_ID_CAN3) << 21)
#else                         
#define MO246_IDR_CAN3  (((MO246_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO246_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 247 */
#if (MO247_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO247_IDR_CAN3   ((uint32)(MO247_ID_CAN3) << 21)
#else                         
#define MO247_IDR_CAN3  (((MO247_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO247_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 248 */
#if (MO248_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO248_IDR_CAN3   ((uint32)(MO248_ID_CAN3) << 21)
#else                         
#define MO248_IDR_CAN3  (((MO248_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO248_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 249 */
#if (MO249_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO249_IDR_CAN3   ((uint32)(MO249_ID_CAN3) << 21)
#else                         
#define MO249_IDR_CAN3  (((MO249_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO249_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 250 */
#if (MO250_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO250_IDR_CAN3   ((uint32)(MO250_ID_CAN3) << 21)
#else                         
#define MO250_IDR_CAN3  (((MO250_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO250_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 251 */
#if (MO251_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO251_IDR_CAN3   ((uint32)(MO251_ID_CAN3) << 21)
#else                         
#define MO251_IDR_CAN3  (((MO251_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO251_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 252 */
#if (MO252_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO252_IDR_CAN3   ((uint32)(MO252_ID_CAN3) << 21)
#else                         
#define MO252_IDR_CAN3  (((MO252_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO252_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 253 */
#if (MO253_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO253_IDR_CAN3   ((uint32)(MO253_ID_CAN3) << 21)
#else                         
#define MO253_IDR_CAN3  (((MO253_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO253_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

/* Message Object 254 */
#if (MO254_ID_TYPE_CAN3 == CAN_STANDARD)
#define MO254_IDR_CAN3   ((uint32)(MO254_ID_CAN3) << 21)
#else                         
#define MO254_IDR_CAN3  (((MO254_ID_CAN3 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO254_ID_CAN3 & 0x0003FFFFL) << 1))
#endif

 /*****************************************************************************

 *CAN4

*****************************************************************************/
/* Message Object 0 */
#if (MO0_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO0_IDR_CAN4   ((uint32)(MO0_ID_CAN4) << 21)
#else                         
#define MO0_IDR_CAN4  (((MO0_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO0_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 1 */
#if (MO1_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO1_IDR_CAN4   ((uint32)(MO1_ID_CAN4) << 21)
#else                         
#define MO1_IDR_CAN4  (((MO1_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO1_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 2 */
#if (MO2_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO2_IDR_CAN4   ((uint32)(MO2_ID_CAN4) << 21)
#else                         
#define MO2_IDR_CAN4  (((MO2_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO2_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 3 */
#if (MO3_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO3_IDR_CAN4   ((uint32)(MO3_ID_CAN4) << 21)
#else                         
#define MO3_IDR_CAN4  (((MO3_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO3_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 4 */
#if (MO4_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO4_IDR_CAN4   ((uint32)(MO4_ID_CAN4) << 21)
#else                         
#define MO4_IDR_CAN4  (((MO4_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO4_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 5 */
#if (MO5_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO5_IDR_CAN4   ((uint32)(MO5_ID_CAN4) << 21)
#else                         
#define MO5_IDR_CAN4  (((MO5_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO5_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 6 */
#if (MO6_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO6_IDR_CAN4   ((uint32)(MO6_ID_CAN4) << 21)
#else                         
#define MO6_IDR_CAN4  (((MO6_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO6_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 7 */
#if (MO7_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO7_IDR_CAN4   ((uint32)(MO7_ID_CAN4) << 21)
#else                         
#define MO7_IDR_CAN4  (((MO7_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO7_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 8 */
#if (MO8_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO8_IDR_CAN4   ((uint32)(MO8_ID_CAN4) << 21)
#else                         
#define MO8_IDR_CAN4  (((MO8_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO8_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 9 */
#if (MO9_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO9_IDR_CAN4   ((uint32)(MO9_ID_CAN4) << 21)
#else                         
#define MO9_IDR_CAN4  (((MO9_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO9_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 10 */
#if (MO10_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO10_IDR_CAN4   ((uint32)(MO10_ID_CAN4) << 21)
#else                         
#define MO10_IDR_CAN4  (((MO10_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO10_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 11 */
#if (MO11_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO11_IDR_CAN4   ((uint32)(MO11_ID_CAN4) << 21)
#else                         
#define MO11_IDR_CAN4  (((MO11_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO11_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 12 */
#if (MO12_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO12_IDR_CAN4   ((uint32)(MO12_ID_CAN4) << 21)
#else                         
#define MO12_IDR_CAN4  (((MO12_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO12_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 13 */
#if (MO13_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO13_IDR_CAN4   ((uint32)(MO13_ID_CAN4) << 21)
#else                         
#define MO13_IDR_CAN4  (((MO13_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO13_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 14 */
#if (MO14_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO14_IDR_CAN4   ((uint32)(MO14_ID_CAN4) << 21)
#else                         
#define MO14_IDR_CAN4  (((MO14_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO14_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 15 */
#if (MO15_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO15_IDR_CAN4   ((uint32)(MO15_ID_CAN4) << 21)
#else                         
#define MO15_IDR_CAN4  (((MO15_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO15_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 16 */
#if (MO16_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO16_IDR_CAN4   ((uint32)(MO16_ID_CAN4) << 21)
#else                         
#define MO16_IDR_CAN4  (((MO16_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO16_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 17 */
#if (MO17_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO17_IDR_CAN4   ((uint32)(MO17_ID_CAN4) << 21)
#else                         
#define MO17_IDR_CAN4  (((MO17_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO17_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 18 */
#if (MO18_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO18_IDR_CAN4   ((uint32)(MO18_ID_CAN4) << 21)
#else                         
#define MO18_IDR_CAN4  (((MO18_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO18_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 19 */
#if (MO19_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO19_IDR_CAN4   ((uint32)(MO19_ID_CAN4) << 21)
#else                         
#define MO19_IDR_CAN4  (((MO19_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO19_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 20 */
#if (MO20_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO20_IDR_CAN4   ((uint32)(MO20_ID_CAN4) << 21)
#else                         
#define MO20_IDR_CAN4  (((MO20_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO20_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 21 */
#if (MO21_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO21_IDR_CAN4   ((uint32)(MO21_ID_CAN4) << 21)
#else                         
#define MO21_IDR_CAN4  (((MO21_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO21_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 22 */
#if (MO22_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO22_IDR_CAN4   ((uint32)(MO22_ID_CAN4) << 21)
#else                         
#define MO22_IDR_CAN4  (((MO22_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO22_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 23 */
#if (MO23_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO23_IDR_CAN4   ((uint32)(MO23_ID_CAN4) << 21)
#else                         
#define MO23_IDR_CAN4  (((MO23_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO23_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 24 */
#if (MO24_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO24_IDR_CAN4   ((uint32)(MO24_ID_CAN4) << 21)
#else                         
#define MO24_IDR_CAN4  (((MO24_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO24_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 25 */
#if (MO25_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO25_IDR_CAN4   ((uint32)(MO25_ID_CAN4) << 21)
#else                         
#define MO25_IDR_CAN4  (((MO25_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO25_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 26 */
#if (MO26_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO26_IDR_CAN4   ((uint32)(MO26_ID_CAN4) << 21)
#else                         
#define MO26_IDR_CAN4  (((MO26_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO26_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 27 */
#if (MO27_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO27_IDR_CAN4   ((uint32)(MO27_ID_CAN4) << 21)
#else                         
#define MO27_IDR_CAN4  (((MO27_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO27_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 28 */
#if (MO28_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO28_IDR_CAN4   ((uint32)(MO28_ID_CAN4) << 21)
#else                         
#define MO28_IDR_CAN4  (((MO28_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO28_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 29 */
#if (MO29_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO29_IDR_CAN4   ((uint32)(MO29_ID_CAN4) << 21)
#else                         
#define MO29_IDR_CAN4  (((MO29_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO29_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 30 */
#if (MO30_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO30_IDR_CAN4   ((uint32)(MO30_ID_CAN4) << 21)
#else                         
#define MO30_IDR_CAN4  (((MO30_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO30_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 31 */
#if (MO31_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO31_IDR_CAN4   ((uint32)(MO31_ID_CAN4) << 21)
#else                         
#define MO31_IDR_CAN4  (((MO31_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO31_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 32 */
#if (MO32_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO32_IDR_CAN4   ((uint32)(MO32_ID_CAN4) << 21)
#else                         
#define MO32_IDR_CAN4  (((MO32_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO32_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 33 */
#if (MO33_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO33_IDR_CAN4   ((uint32)(MO33_ID_CAN4) << 21)
#else                         
#define MO33_IDR_CAN4  (((MO33_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO33_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 34 */
#if (MO34_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO34_IDR_CAN4   ((uint32)(MO34_ID_CAN4) << 21)
#else                         
#define MO34_IDR_CAN4  (((MO34_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO34_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 35 */
#if (MO35_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO35_IDR_CAN4   ((uint32)(MO35_ID_CAN4) << 21)
#else                         
#define MO35_IDR_CAN4  (((MO35_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO35_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 36 */
#if (MO36_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO36_IDR_CAN4   ((uint32)(MO36_ID_CAN4) << 21)
#else                         
#define MO36_IDR_CAN4  (((MO36_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO36_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 37 */
#if (MO37_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO37_IDR_CAN4   ((uint32)(MO37_ID_CAN4) << 21)
#else                         
#define MO37_IDR_CAN4  (((MO37_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO37_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 38 */
#if (MO38_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO38_IDR_CAN4   ((uint32)(MO38_ID_CAN4) << 21)
#else                         
#define MO38_IDR_CAN4  (((MO38_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO38_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 39 */
#if (MO39_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO39_IDR_CAN4   ((uint32)(MO39_ID_CAN4) << 21)
#else                         
#define MO39_IDR_CAN4  (((MO39_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO39_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 40 */
#if (MO40_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO40_IDR_CAN4   ((uint32)(MO40_ID_CAN4) << 21)
#else                         
#define MO40_IDR_CAN4  (((MO40_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO40_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 41 */
#if (MO41_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO41_IDR_CAN4   ((uint32)(MO41_ID_CAN4) << 21)
#else                         
#define MO41_IDR_CAN4  (((MO41_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO41_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 42 */
#if (MO42_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO42_IDR_CAN4   ((uint32)(MO42_ID_CAN4) << 21)
#else                         
#define MO42_IDR_CAN4  (((MO42_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO42_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 43 */
#if (MO43_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO43_IDR_CAN4   ((uint32)(MO43_ID_CAN4) << 21)
#else                         
#define MO43_IDR_CAN4  (((MO43_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO43_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 44 */
#if (MO44_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO44_IDR_CAN4   ((uint32)(MO44_ID_CAN4) << 21)
#else                         
#define MO44_IDR_CAN4  (((MO44_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO44_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 45 */
#if (MO45_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO45_IDR_CAN4   ((uint32)(MO45_ID_CAN4) << 21)
#else                         
#define MO45_IDR_CAN4  (((MO45_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO45_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 46 */
#if (MO46_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO46_IDR_CAN4   ((uint32)(MO46_ID_CAN4) << 21)
#else                         
#define MO46_IDR_CAN4  (((MO46_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO46_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 47 */
#if (MO47_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO47_IDR_CAN4   ((uint32)(MO47_ID_CAN4) << 21)
#else                         
#define MO47_IDR_CAN4  (((MO47_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO47_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 48 */
#if (MO48_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO48_IDR_CAN4   ((uint32)(MO48_ID_CAN4) << 21)
#else                         
#define MO48_IDR_CAN4  (((MO48_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO48_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 49 */
#if (MO49_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO49_IDR_CAN4   ((uint32)(MO49_ID_CAN4) << 21)
#else                         
#define MO49_IDR_CAN4  (((MO49_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO49_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 50 */
#if (MO50_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO50_IDR_CAN4   ((uint32)(MO50_ID_CAN4) << 21)
#else                         
#define MO50_IDR_CAN4  (((MO50_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO50_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 51 */
#if (MO51_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO51_IDR_CAN4   ((uint32)(MO51_ID_CAN4) << 21)
#else                         
#define MO51_IDR_CAN4  (((MO51_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO51_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 52 */
#if (MO52_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO52_IDR_CAN4   ((uint32)(MO52_ID_CAN4) << 21)
#else                         
#define MO52_IDR_CAN4  (((MO52_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO52_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 53 */
#if (MO53_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO53_IDR_CAN4   ((uint32)(MO53_ID_CAN4) << 21)
#else                         
#define MO53_IDR_CAN4  (((MO53_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO53_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 54 */
#if (MO54_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO54_IDR_CAN4   ((uint32)(MO54_ID_CAN4) << 21)
#else                         
#define MO54_IDR_CAN4  (((MO54_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO54_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 55 */
#if (MO55_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO55_IDR_CAN4   ((uint32)(MO55_ID_CAN4) << 21)
#else                         
#define MO55_IDR_CAN4  (((MO55_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO55_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 56 */
#if (MO56_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO56_IDR_CAN4   ((uint32)(MO56_ID_CAN4) << 21)
#else                         
#define MO56_IDR_CAN4  (((MO56_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO56_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 57 */
#if (MO57_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO57_IDR_CAN4   ((uint32)(MO57_ID_CAN4) << 21)
#else                         
#define MO57_IDR_CAN4  (((MO57_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO57_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 58 */
#if (MO58_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO58_IDR_CAN4   ((uint32)(MO58_ID_CAN4) << 21)
#else                         
#define MO58_IDR_CAN4  (((MO58_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO58_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 59 */
#if (MO59_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO59_IDR_CAN4   ((uint32)(MO59_ID_CAN4) << 21)
#else                         
#define MO59_IDR_CAN4  (((MO59_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO59_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 60 */
#if (MO60_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO60_IDR_CAN4   ((uint32)(MO60_ID_CAN4) << 21)
#else                         
#define MO60_IDR_CAN4  (((MO60_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO60_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 61 */
#if (MO61_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO61_IDR_CAN4   ((uint32)(MO61_ID_CAN4) << 21)
#else                         
#define MO61_IDR_CAN4  (((MO61_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO61_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 62 */
#if (MO62_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO62_IDR_CAN4   ((uint32)(MO62_ID_CAN4) << 21)
#else                         
#define MO62_IDR_CAN4  (((MO62_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO62_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 63 */
#if (MO63_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO63_IDR_CAN4   ((uint32)(MO63_ID_CAN4) << 21)
#else                         
#define MO63_IDR_CAN4  (((MO63_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO63_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 64 */
#if (MO64_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO64_IDR_CAN4   ((uint32)(MO64_ID_CAN4) << 21)
#else                         
#define MO64_IDR_CAN4  (((MO64_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO64_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 65 */
#if (MO65_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO65_IDR_CAN4   ((uint32)(MO65_ID_CAN4) << 21)
#else                         
#define MO65_IDR_CAN4  (((MO65_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO65_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 66 */
#if (MO66_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO66_IDR_CAN4   ((uint32)(MO66_ID_CAN4) << 21)
#else                         
#define MO66_IDR_CAN4  (((MO66_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO66_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 67 */
#if (MO67_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO67_IDR_CAN4   ((uint32)(MO67_ID_CAN4) << 21)
#else                         
#define MO67_IDR_CAN4  (((MO67_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO67_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 68 */
#if (MO68_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO68_IDR_CAN4   ((uint32)(MO68_ID_CAN4) << 21)
#else                         
#define MO68_IDR_CAN4  (((MO68_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO68_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 69 */
#if (MO69_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO69_IDR_CAN4   ((uint32)(MO69_ID_CAN4) << 21)
#else                         
#define MO69_IDR_CAN4  (((MO69_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO69_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 70 */
#if (MO70_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO70_IDR_CAN4   ((uint32)(MO70_ID_CAN4) << 21)
#else                         
#define MO70_IDR_CAN4  (((MO70_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO70_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 71 */
#if (MO71_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO71_IDR_CAN4   ((uint32)(MO71_ID_CAN4) << 21)
#else                         
#define MO71_IDR_CAN4  (((MO71_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO71_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 72 */
#if (MO72_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO72_IDR_CAN4   ((uint32)(MO72_ID_CAN4) << 21)
#else                         
#define MO72_IDR_CAN4  (((MO72_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO72_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 73 */
#if (MO73_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO73_IDR_CAN4   ((uint32)(MO73_ID_CAN4) << 21)
#else                         
#define MO73_IDR_CAN4  (((MO73_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO73_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 74 */
#if (MO74_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO74_IDR_CAN4   ((uint32)(MO74_ID_CAN4) << 21)
#else                         
#define MO74_IDR_CAN4  (((MO74_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO74_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 75 */
#if (MO75_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO75_IDR_CAN4   ((uint32)(MO75_ID_CAN4) << 21)
#else                         
#define MO75_IDR_CAN4  (((MO75_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO75_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 76 */
#if (MO76_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO76_IDR_CAN4   ((uint32)(MO76_ID_CAN4) << 21)
#else                         
#define MO76_IDR_CAN4  (((MO76_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO76_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 77 */
#if (MO77_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO77_IDR_CAN4   ((uint32)(MO77_ID_CAN4) << 21)
#else                         
#define MO77_IDR_CAN4  (((MO77_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO77_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 78 */
#if (MO78_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO78_IDR_CAN4   ((uint32)(MO78_ID_CAN4) << 21)
#else                         
#define MO78_IDR_CAN4  (((MO78_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO78_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 79 */
#if (MO79_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO79_IDR_CAN4   ((uint32)(MO79_ID_CAN4) << 21)
#else                         
#define MO79_IDR_CAN4  (((MO79_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO79_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 80 */
#if (MO80_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO80_IDR_CAN4   ((uint32)(MO80_ID_CAN4) << 21)
#else                         
#define MO80_IDR_CAN4  (((MO80_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO80_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 81 */
#if (MO81_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO81_IDR_CAN4   ((uint32)(MO81_ID_CAN4) << 21)
#else                         
#define MO81_IDR_CAN4  (((MO81_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO81_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 82 */
#if (MO82_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO82_IDR_CAN4   ((uint32)(MO82_ID_CAN4) << 21)
#else                         
#define MO82_IDR_CAN4  (((MO82_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO82_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 83 */
#if (MO83_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO83_IDR_CAN4   ((uint32)(MO83_ID_CAN4) << 21)
#else                         
#define MO83_IDR_CAN4  (((MO83_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO83_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 84 */
#if (MO84_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO84_IDR_CAN4   ((uint32)(MO84_ID_CAN4) << 21)
#else                         
#define MO84_IDR_CAN4  (((MO84_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO84_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 85 */
#if (MO85_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO85_IDR_CAN4   ((uint32)(MO85_ID_CAN4) << 21)
#else                         
#define MO85_IDR_CAN4  (((MO85_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO85_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 86 */
#if (MO86_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO86_IDR_CAN4   ((uint32)(MO86_ID_CAN4) << 21)
#else                         
#define MO86_IDR_CAN4  (((MO86_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO86_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 87 */
#if (MO87_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO87_IDR_CAN4   ((uint32)(MO87_ID_CAN4) << 21)
#else                         
#define MO87_IDR_CAN4  (((MO87_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO87_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 88 */
#if (MO88_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO88_IDR_CAN4   ((uint32)(MO88_ID_CAN4) << 21)
#else                         
#define MO88_IDR_CAN4  (((MO88_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO88_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 89 */
#if (MO89_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO89_IDR_CAN4   ((uint32)(MO89_ID_CAN4) << 21)
#else                         
#define MO89_IDR_CAN4  (((MO89_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO89_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 90 */
#if (MO90_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO90_IDR_CAN4   ((uint32)(MO90_ID_CAN4) << 21)
#else                         
#define MO90_IDR_CAN4  (((MO90_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO90_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 91 */
#if (MO91_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO91_IDR_CAN4   ((uint32)(MO91_ID_CAN4) << 21)
#else                         
#define MO91_IDR_CAN4  (((MO91_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO91_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 92 */
#if (MO92_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO92_IDR_CAN4   ((uint32)(MO92_ID_CAN4) << 21)
#else                         
#define MO92_IDR_CAN4  (((MO92_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO92_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 93 */
#if (MO93_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO93_IDR_CAN4   ((uint32)(MO93_ID_CAN4) << 21)
#else                         
#define MO93_IDR_CAN4  (((MO93_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO93_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 94 */
#if (MO94_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO94_IDR_CAN4   ((uint32)(MO94_ID_CAN4) << 21)
#else                         
#define MO94_IDR_CAN4  (((MO94_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO94_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 95 */
#if (MO95_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO95_IDR_CAN4   ((uint32)(MO95_ID_CAN4) << 21)
#else                         
#define MO95_IDR_CAN4  (((MO95_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO95_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 96 */
#if (MO96_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO96_IDR_CAN4   ((uint32)(MO96_ID_CAN4) << 21)
#else                         
#define MO96_IDR_CAN4  (((MO96_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO96_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 97 */
#if (MO97_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO97_IDR_CAN4   ((uint32)(MO97_ID_CAN4) << 21)
#else                         
#define MO97_IDR_CAN4  (((MO97_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO97_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 98 */
#if (MO98_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO98_IDR_CAN4   ((uint32)(MO98_ID_CAN4) << 21)
#else                         
#define MO98_IDR_CAN4  (((MO98_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO98_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 99 */
#if (MO99_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO99_IDR_CAN4   ((uint32)(MO99_ID_CAN4) << 21)
#else                         
#define MO99_IDR_CAN4  (((MO99_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO99_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 100 */
#if (MO100_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO100_IDR_CAN4   ((uint32)(MO100_ID_CAN4) << 21)
#else                         
#define MO100_IDR_CAN4  (((MO100_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO100_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 101 */
#if (MO101_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO101_IDR_CAN4   ((uint32)(MO101_ID_CAN4) << 21)
#else                         
#define MO101_IDR_CAN4  (((MO101_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO101_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 102 */
#if (MO102_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO102_IDR_CAN4   ((uint32)(MO102_ID_CAN4) << 21)
#else                         
#define MO102_IDR_CAN4  (((MO102_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO102_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 103 */
#if (MO103_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO103_IDR_CAN4   ((uint32)(MO103_ID_CAN4) << 21)
#else                         
#define MO103_IDR_CAN4  (((MO103_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO103_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 104 */
#if (MO104_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO104_IDR_CAN4   ((uint32)(MO104_ID_CAN4) << 21)
#else                         
#define MO104_IDR_CAN4  (((MO104_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO104_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 105 */
#if (MO105_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO105_IDR_CAN4   ((uint32)(MO105_ID_CAN4) << 21)
#else                         
#define MO105_IDR_CAN4  (((MO105_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO105_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 106 */
#if (MO106_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO106_IDR_CAN4   ((uint32)(MO106_ID_CAN4) << 21)
#else                         
#define MO106_IDR_CAN4  (((MO106_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO106_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 107 */
#if (MO107_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO107_IDR_CAN4   ((uint32)(MO107_ID_CAN4) << 21)
#else                         
#define MO107_IDR_CAN4  (((MO107_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO107_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 108 */
#if (MO108_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO108_IDR_CAN4   ((uint32)(MO108_ID_CAN4) << 21)
#else                         
#define MO108_IDR_CAN4  (((MO108_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO108_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 109 */
#if (MO109_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO109_IDR_CAN4   ((uint32)(MO109_ID_CAN4) << 21)
#else                         
#define MO109_IDR_CAN4  (((MO109_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO109_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 110 */
#if (MO110_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO110_IDR_CAN4   ((uint32)(MO110_ID_CAN4) << 21)
#else                         
#define MO110_IDR_CAN4  (((MO110_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO110_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 111 */
#if (MO111_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO111_IDR_CAN4   ((uint32)(MO111_ID_CAN4) << 21)
#else                         
#define MO111_IDR_CAN4  (((MO111_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO111_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 112 */
#if (MO112_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO112_IDR_CAN4   ((uint32)(MO112_ID_CAN4) << 21)
#else                         
#define MO112_IDR_CAN4  (((MO112_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO112_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 113 */
#if (MO113_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO113_IDR_CAN4   ((uint32)(MO113_ID_CAN4) << 21)
#else                         
#define MO113_IDR_CAN4  (((MO113_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO113_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 114 */
#if (MO114_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO114_IDR_CAN4   ((uint32)(MO114_ID_CAN4) << 21)
#else                         
#define MO114_IDR_CAN4  (((MO114_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO114_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 115 */
#if (MO115_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO115_IDR_CAN4   ((uint32)(MO115_ID_CAN4) << 21)
#else                         
#define MO115_IDR_CAN4  (((MO115_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO115_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 116 */
#if (MO116_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO116_IDR_CAN4   ((uint32)(MO116_ID_CAN4) << 21)
#else                         
#define MO116_IDR_CAN4  (((MO116_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO116_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 117 */
#if (MO117_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO117_IDR_CAN4   ((uint32)(MO117_ID_CAN4) << 21)
#else                         
#define MO117_IDR_CAN4  (((MO117_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO117_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 118 */
#if (MO118_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO118_IDR_CAN4   ((uint32)(MO118_ID_CAN4) << 21)
#else                         
#define MO118_IDR_CAN4  (((MO118_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO118_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 119 */
#if (MO119_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO119_IDR_CAN4   ((uint32)(MO119_ID_CAN4) << 21)
#else                         
#define MO119_IDR_CAN4  (((MO119_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO119_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 120 */
#if (MO120_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO120_IDR_CAN4   ((uint32)(MO120_ID_CAN4) << 21)
#else                         
#define MO120_IDR_CAN4  (((MO120_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO120_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 121 */
#if (MO121_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO121_IDR_CAN4   ((uint32)(MO121_ID_CAN4) << 21)
#else                         
#define MO121_IDR_CAN4  (((MO121_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO121_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 122 */
#if (MO122_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO122_IDR_CAN4   ((uint32)(MO122_ID_CAN4) << 21)
#else                         
#define MO122_IDR_CAN4  (((MO122_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO122_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 123 */
#if (MO123_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO123_IDR_CAN4   ((uint32)(MO123_ID_CAN4) << 21)
#else                         
#define MO123_IDR_CAN4  (((MO123_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO123_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 124 */
#if (MO124_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO124_IDR_CAN4   ((uint32)(MO124_ID_CAN4) << 21)
#else                         
#define MO124_IDR_CAN4  (((MO124_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO124_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 125 */
#if (MO125_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO125_IDR_CAN4   ((uint32)(MO125_ID_CAN4) << 21)
#else                         
#define MO125_IDR_CAN4  (((MO125_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO125_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 126 */
#if (MO126_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO126_IDR_CAN4   ((uint32)(MO126_ID_CAN4) << 21)
#else                         
#define MO126_IDR_CAN4  (((MO126_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO126_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 127 */
#if (MO127_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO127_IDR_CAN4   ((uint32)(MO127_ID_CAN4) << 21)
#else                         
#define MO127_IDR_CAN4  (((MO127_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO127_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 128 */
#if (MO128_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO128_IDR_CAN4   ((uint32)(MO128_ID_CAN4) << 21)
#else                         
#define MO128_IDR_CAN4  (((MO128_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO128_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 129 */
#if (MO129_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO129_IDR_CAN4   ((uint32)(MO129_ID_CAN4) << 21)
#else                         
#define MO129_IDR_CAN4  (((MO129_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO129_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 130 */
#if (MO130_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO130_IDR_CAN4   ((uint32)(MO130_ID_CAN4) << 21)
#else                         
#define MO130_IDR_CAN4  (((MO130_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO130_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 131 */
#if (MO131_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO131_IDR_CAN4   ((uint32)(MO131_ID_CAN4) << 21)
#else                         
#define MO131_IDR_CAN4  (((MO131_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO131_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 132 */
#if (MO132_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO132_IDR_CAN4   ((uint32)(MO132_ID_CAN4) << 21)
#else                         
#define MO132_IDR_CAN4  (((MO132_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO132_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 133 */
#if (MO133_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO133_IDR_CAN4   ((uint32)(MO133_ID_CAN4) << 21)
#else                         
#define MO133_IDR_CAN4  (((MO133_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO133_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 134 */
#if (MO134_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO134_IDR_CAN4   ((uint32)(MO134_ID_CAN4) << 21)
#else                         
#define MO134_IDR_CAN4  (((MO134_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO134_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 135 */
#if (MO135_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO135_IDR_CAN4   ((uint32)(MO135_ID_CAN4) << 21)
#else                         
#define MO135_IDR_CAN4  (((MO135_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO135_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 136 */
#if (MO136_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO136_IDR_CAN4   ((uint32)(MO136_ID_CAN4) << 21)
#else                         
#define MO136_IDR_CAN4  (((MO136_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO136_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 137 */
#if (MO137_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO137_IDR_CAN4   ((uint32)(MO137_ID_CAN4) << 21)
#else                         
#define MO137_IDR_CAN4  (((MO137_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO137_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 138 */
#if (MO138_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO138_IDR_CAN4   ((uint32)(MO138_ID_CAN4) << 21)
#else                         
#define MO138_IDR_CAN4  (((MO138_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO138_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 139 */
#if (MO139_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO139_IDR_CAN4   ((uint32)(MO139_ID_CAN4) << 21)
#else                         
#define MO139_IDR_CAN4  (((MO139_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO139_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 140 */
#if (MO140_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO140_IDR_CAN4   ((uint32)(MO140_ID_CAN4) << 21)
#else                         
#define MO140_IDR_CAN4  (((MO140_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO140_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 141 */
#if (MO141_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO141_IDR_CAN4   ((uint32)(MO141_ID_CAN4) << 21)
#else                         
#define MO141_IDR_CAN4  (((MO141_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO141_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 142 */
#if (MO142_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO142_IDR_CAN4   ((uint32)(MO142_ID_CAN4) << 21)
#else                         
#define MO142_IDR_CAN4  (((MO142_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO142_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 143 */
#if (MO143_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO143_IDR_CAN4   ((uint32)(MO143_ID_CAN4) << 21)
#else                         
#define MO143_IDR_CAN4  (((MO143_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO143_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 144 */
#if (MO144_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO144_IDR_CAN4   ((uint32)(MO144_ID_CAN4) << 21)
#else                         
#define MO144_IDR_CAN4  (((MO144_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO144_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 145 */
#if (MO145_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO145_IDR_CAN4   ((uint32)(MO145_ID_CAN4) << 21)
#else                         
#define MO145_IDR_CAN4  (((MO145_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO145_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 146 */
#if (MO146_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO146_IDR_CAN4   ((uint32)(MO146_ID_CAN4) << 21)
#else                         
#define MO146_IDR_CAN4  (((MO146_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO146_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 147 */
#if (MO147_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO147_IDR_CAN4   ((uint32)(MO147_ID_CAN4) << 21)
#else                         
#define MO147_IDR_CAN4  (((MO147_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO147_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 148 */
#if (MO148_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO148_IDR_CAN4   ((uint32)(MO148_ID_CAN4) << 21)
#else                         
#define MO148_IDR_CAN4  (((MO148_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO148_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 149 */
#if (MO149_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO149_IDR_CAN4   ((uint32)(MO149_ID_CAN4) << 21)
#else                         
#define MO149_IDR_CAN4  (((MO149_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO149_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 150 */
#if (MO150_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO150_IDR_CAN4   ((uint32)(MO150_ID_CAN4) << 21)
#else                         
#define MO150_IDR_CAN4  (((MO150_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO150_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 151 */
#if (MO151_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO151_IDR_CAN4   ((uint32)(MO151_ID_CAN4) << 21)
#else                         
#define MO151_IDR_CAN4  (((MO151_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO151_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 152 */
#if (MO152_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO152_IDR_CAN4   ((uint32)(MO152_ID_CAN4) << 21)
#else                         
#define MO152_IDR_CAN4  (((MO152_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO152_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 153 */
#if (MO153_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO153_IDR_CAN4   ((uint32)(MO153_ID_CAN4) << 21)
#else                         
#define MO153_IDR_CAN4  (((MO153_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO153_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 154 */
#if (MO154_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO154_IDR_CAN4   ((uint32)(MO154_ID_CAN4) << 21)
#else                         
#define MO154_IDR_CAN4  (((MO154_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO154_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 155 */
#if (MO155_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO155_IDR_CAN4   ((uint32)(MO155_ID_CAN4) << 21)
#else                         
#define MO155_IDR_CAN4  (((MO155_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO155_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 156 */
#if (MO156_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO156_IDR_CAN4   ((uint32)(MO156_ID_CAN4) << 21)
#else                         
#define MO156_IDR_CAN4  (((MO156_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO156_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 157 */
#if (MO157_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO157_IDR_CAN4   ((uint32)(MO157_ID_CAN4) << 21)
#else                         
#define MO157_IDR_CAN4  (((MO157_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO157_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 158 */
#if (MO158_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO158_IDR_CAN4   ((uint32)(MO158_ID_CAN4) << 21)
#else                         
#define MO158_IDR_CAN4  (((MO158_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO158_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 159 */
#if (MO159_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO159_IDR_CAN4   ((uint32)(MO159_ID_CAN4) << 21)
#else                         
#define MO159_IDR_CAN4  (((MO159_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO159_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 160 */
#if (MO160_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO160_IDR_CAN4   ((uint32)(MO160_ID_CAN4) << 21)
#else                         
#define MO160_IDR_CAN4  (((MO160_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO160_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 161 */
#if (MO161_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO161_IDR_CAN4   ((uint32)(MO161_ID_CAN4) << 21)
#else                         
#define MO161_IDR_CAN4  (((MO161_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO161_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 162 */
#if (MO162_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO162_IDR_CAN4   ((uint32)(MO162_ID_CAN4) << 21)
#else                         
#define MO162_IDR_CAN4  (((MO162_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO162_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 163 */
#if (MO163_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO163_IDR_CAN4   ((uint32)(MO163_ID_CAN4) << 21)
#else                         
#define MO163_IDR_CAN4  (((MO163_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO163_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 164 */
#if (MO164_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO164_IDR_CAN4   ((uint32)(MO164_ID_CAN4) << 21)
#else                         
#define MO164_IDR_CAN4  (((MO164_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO164_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 165 */
#if (MO165_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO165_IDR_CAN4   ((uint32)(MO165_ID_CAN4) << 21)
#else                         
#define MO165_IDR_CAN4  (((MO165_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO165_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 166 */
#if (MO166_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO166_IDR_CAN4   ((uint32)(MO166_ID_CAN4) << 21)
#else                         
#define MO166_IDR_CAN4  (((MO166_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO166_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 167 */
#if (MO167_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO167_IDR_CAN4   ((uint32)(MO167_ID_CAN4) << 21)
#else                         
#define MO167_IDR_CAN4  (((MO167_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO167_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 168 */
#if (MO168_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO168_IDR_CAN4   ((uint32)(MO168_ID_CAN4) << 21)
#else                         
#define MO168_IDR_CAN4  (((MO168_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO168_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 169 */
#if (MO169_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO169_IDR_CAN4   ((uint32)(MO169_ID_CAN4) << 21)
#else                         
#define MO169_IDR_CAN4  (((MO169_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO169_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 170 */
#if (MO170_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO170_IDR_CAN4   ((uint32)(MO170_ID_CAN4) << 21)
#else                         
#define MO170_IDR_CAN4  (((MO170_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO170_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 171 */
#if (MO171_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO171_IDR_CAN4   ((uint32)(MO171_ID_CAN4) << 21)
#else                         
#define MO171_IDR_CAN4  (((MO171_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO171_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 172 */
#if (MO172_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO172_IDR_CAN4   ((uint32)(MO172_ID_CAN4) << 21)
#else                         
#define MO172_IDR_CAN4  (((MO172_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO172_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 173 */
#if (MO173_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO173_IDR_CAN4   ((uint32)(MO173_ID_CAN4) << 21)
#else                         
#define MO173_IDR_CAN4  (((MO173_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO173_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 174 */
#if (MO174_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO174_IDR_CAN4   ((uint32)(MO174_ID_CAN4) << 21)
#else                         
#define MO174_IDR_CAN4  (((MO174_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO174_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 175 */
#if (MO175_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO175_IDR_CAN4   ((uint32)(MO175_ID_CAN4) << 21)
#else                         
#define MO175_IDR_CAN4  (((MO175_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO175_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 176 */
#if (MO176_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO176_IDR_CAN4   ((uint32)(MO176_ID_CAN4) << 21)
#else                         
#define MO176_IDR_CAN4  (((MO176_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO176_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 177 */
#if (MO177_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO177_IDR_CAN4   ((uint32)(MO177_ID_CAN4) << 21)
#else                         
#define MO177_IDR_CAN4  (((MO177_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO177_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 178 */
#if (MO178_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO178_IDR_CAN4   ((uint32)(MO178_ID_CAN4) << 21)
#else                         
#define MO178_IDR_CAN4  (((MO178_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO178_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 179 */
#if (MO179_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO179_IDR_CAN4   ((uint32)(MO179_ID_CAN4) << 21)
#else                         
#define MO179_IDR_CAN4  (((MO179_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO179_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 180 */
#if (MO180_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO180_IDR_CAN4   ((uint32)(MO180_ID_CAN4) << 21)
#else                         
#define MO180_IDR_CAN4  (((MO180_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO180_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 181 */
#if (MO181_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO181_IDR_CAN4   ((uint32)(MO181_ID_CAN4) << 21)
#else                         
#define MO181_IDR_CAN4  (((MO181_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO181_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 182 */
#if (MO182_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO182_IDR_CAN4   ((uint32)(MO182_ID_CAN4) << 21)
#else                         
#define MO182_IDR_CAN4  (((MO182_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO182_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 183 */
#if (MO183_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO183_IDR_CAN4   ((uint32)(MO183_ID_CAN4) << 21)
#else                         
#define MO183_IDR_CAN4  (((MO183_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO183_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 184 */
#if (MO184_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO184_IDR_CAN4   ((uint32)(MO184_ID_CAN4) << 21)
#else                         
#define MO184_IDR_CAN4  (((MO184_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO184_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 185 */
#if (MO185_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO185_IDR_CAN4   ((uint32)(MO185_ID_CAN4) << 21)
#else                         
#define MO185_IDR_CAN4  (((MO185_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO185_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 186 */
#if (MO186_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO186_IDR_CAN4   ((uint32)(MO186_ID_CAN4) << 21)
#else                         
#define MO186_IDR_CAN4  (((MO186_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO186_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 187 */
#if (MO187_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO187_IDR_CAN4   ((uint32)(MO187_ID_CAN4) << 21)
#else                         
#define MO187_IDR_CAN4  (((MO187_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO187_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 188 */
#if (MO188_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO188_IDR_CAN4   ((uint32)(MO188_ID_CAN4) << 21)
#else                         
#define MO188_IDR_CAN4  (((MO188_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO188_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 189 */
#if (MO189_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO189_IDR_CAN4   ((uint32)(MO189_ID_CAN4) << 21)
#else                         
#define MO189_IDR_CAN4  (((MO189_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO189_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 190 */
#if (MO190_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO190_IDR_CAN4   ((uint32)(MO190_ID_CAN4) << 21)
#else                         
#define MO190_IDR_CAN4  (((MO190_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO190_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 191 */
#if (MO191_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO191_IDR_CAN4   ((uint32)(MO191_ID_CAN4) << 21)
#else                         
#define MO191_IDR_CAN4  (((MO191_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO191_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 192 */
#if (MO192_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO192_IDR_CAN4   ((uint32)(MO192_ID_CAN4) << 21)
#else                         
#define MO192_IDR_CAN4  (((MO192_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO192_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 193 */
#if (MO193_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO193_IDR_CAN4   ((uint32)(MO193_ID_CAN4) << 21)
#else                         
#define MO193_IDR_CAN4  (((MO193_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO193_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 194 */
#if (MO194_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO194_IDR_CAN4   ((uint32)(MO194_ID_CAN4) << 21)
#else                         
#define MO194_IDR_CAN4  (((MO194_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO194_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 195 */
#if (MO195_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO195_IDR_CAN4   ((uint32)(MO195_ID_CAN4) << 21)
#else                         
#define MO195_IDR_CAN4  (((MO195_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO195_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 196 */
#if (MO196_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO196_IDR_CAN4   ((uint32)(MO196_ID_CAN4) << 21)
#else                         
#define MO196_IDR_CAN4  (((MO196_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO196_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 197 */
#if (MO197_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO197_IDR_CAN4   ((uint32)(MO197_ID_CAN4) << 21)
#else                         
#define MO197_IDR_CAN4  (((MO197_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO197_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 198 */
#if (MO198_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO198_IDR_CAN4   ((uint32)(MO198_ID_CAN4) << 21)
#else                         
#define MO198_IDR_CAN4  (((MO198_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO198_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 199 */
#if (MO199_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO199_IDR_CAN4   ((uint32)(MO199_ID_CAN4) << 21)
#else                         
#define MO199_IDR_CAN4  (((MO199_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO199_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 200 */
#if (MO200_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO200_IDR_CAN4   ((uint32)(MO200_ID_CAN4) << 21)
#else                         
#define MO200_IDR_CAN4  (((MO200_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO200_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 201 */
#if (MO201_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO201_IDR_CAN4   ((uint32)(MO201_ID_CAN4) << 21)
#else                         
#define MO201_IDR_CAN4  (((MO201_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO201_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 202 */
#if (MO202_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO202_IDR_CAN4   ((uint32)(MO202_ID_CAN4) << 21)
#else                         
#define MO202_IDR_CAN4  (((MO202_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO202_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 203 */
#if (MO203_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO203_IDR_CAN4   ((uint32)(MO203_ID_CAN4) << 21)
#else                         
#define MO203_IDR_CAN4  (((MO203_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO203_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 204 */
#if (MO204_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO204_IDR_CAN4   ((uint32)(MO204_ID_CAN4) << 21)
#else                         
#define MO204_IDR_CAN4  (((MO204_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO204_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 205 */
#if (MO205_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO205_IDR_CAN4   ((uint32)(MO205_ID_CAN4) << 21)
#else                         
#define MO205_IDR_CAN4  (((MO205_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO205_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 206 */
#if (MO206_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO206_IDR_CAN4   ((uint32)(MO206_ID_CAN4) << 21)
#else                         
#define MO206_IDR_CAN4  (((MO206_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO206_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 207 */
#if (MO207_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO207_IDR_CAN4   ((uint32)(MO207_ID_CAN4) << 21)
#else                         
#define MO207_IDR_CAN4  (((MO207_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO207_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 208 */
#if (MO208_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO208_IDR_CAN4   ((uint32)(MO208_ID_CAN4) << 21)
#else                         
#define MO208_IDR_CAN4  (((MO208_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO208_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 209 */
#if (MO209_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO209_IDR_CAN4   ((uint32)(MO209_ID_CAN4) << 21)
#else                         
#define MO209_IDR_CAN4  (((MO209_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO209_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 210 */
#if (MO210_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO210_IDR_CAN4   ((uint32)(MO210_ID_CAN4) << 21)
#else                         
#define MO210_IDR_CAN4  (((MO210_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO210_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 211 */
#if (MO211_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO211_IDR_CAN4   ((uint32)(MO211_ID_CAN4) << 21)
#else                         
#define MO211_IDR_CAN4  (((MO211_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO211_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 212 */
#if (MO212_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO212_IDR_CAN4   ((uint32)(MO212_ID_CAN4) << 21)
#else                         
#define MO212_IDR_CAN4  (((MO212_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO212_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 213 */
#if (MO213_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO213_IDR_CAN4   ((uint32)(MO213_ID_CAN4) << 21)
#else                         
#define MO213_IDR_CAN4  (((MO213_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO213_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 214 */
#if (MO214_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO214_IDR_CAN4   ((uint32)(MO214_ID_CAN4) << 21)
#else                         
#define MO214_IDR_CAN4  (((MO214_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO214_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 215 */
#if (MO215_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO215_IDR_CAN4   ((uint32)(MO215_ID_CAN4) << 21)
#else                         
#define MO215_IDR_CAN4  (((MO215_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO215_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 216 */
#if (MO216_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO216_IDR_CAN4   ((uint32)(MO216_ID_CAN4) << 21)
#else                         
#define MO216_IDR_CAN4  (((MO216_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO216_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 217 */
#if (MO217_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO217_IDR_CAN4   ((uint32)(MO217_ID_CAN4) << 21)
#else                         
#define MO217_IDR_CAN4  (((MO217_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO217_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 218 */
#if (MO218_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO218_IDR_CAN4   ((uint32)(MO218_ID_CAN4) << 21)
#else                         
#define MO218_IDR_CAN4  (((MO218_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO218_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 219 */
#if (MO219_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO219_IDR_CAN4   ((uint32)(MO219_ID_CAN4) << 21)
#else                         
#define MO219_IDR_CAN4  (((MO219_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO219_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 220 */
#if (MO220_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO220_IDR_CAN4   ((uint32)(MO220_ID_CAN4) << 21)
#else                         
#define MO220_IDR_CAN4  (((MO220_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO220_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 221 */
#if (MO221_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO221_IDR_CAN4   ((uint32)(MO221_ID_CAN4) << 21)
#else                         
#define MO221_IDR_CAN4  (((MO221_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO221_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 222 */
#if (MO222_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO222_IDR_CAN4   ((uint32)(MO222_ID_CAN4) << 21)
#else                         
#define MO222_IDR_CAN4  (((MO222_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO222_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 223 */
#if (MO223_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO223_IDR_CAN4   ((uint32)(MO223_ID_CAN4) << 21)
#else                         
#define MO223_IDR_CAN4  (((MO223_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO223_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 224 */
#if (MO224_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO224_IDR_CAN4   ((uint32)(MO224_ID_CAN4) << 21)
#else                         
#define MO224_IDR_CAN4  (((MO224_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO224_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 225 */
#if (MO225_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO225_IDR_CAN4   ((uint32)(MO225_ID_CAN4) << 21)
#else                         
#define MO225_IDR_CAN4  (((MO225_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO225_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 226 */
#if (MO226_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO226_IDR_CAN4   ((uint32)(MO226_ID_CAN4) << 21)
#else                         
#define MO226_IDR_CAN4  (((MO226_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO226_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 227 */
#if (MO227_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO227_IDR_CAN4   ((uint32)(MO227_ID_CAN4) << 21)
#else                         
#define MO227_IDR_CAN4  (((MO227_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO227_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 228 */
#if (MO228_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO228_IDR_CAN4   ((uint32)(MO228_ID_CAN4) << 21)
#else                         
#define MO228_IDR_CAN4  (((MO228_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO228_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 229 */
#if (MO229_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO229_IDR_CAN4   ((uint32)(MO229_ID_CAN4) << 21)
#else                         
#define MO229_IDR_CAN4  (((MO229_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO229_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 230 */
#if (MO230_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO230_IDR_CAN4   ((uint32)(MO230_ID_CAN4) << 21)
#else                         
#define MO230_IDR_CAN4  (((MO230_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO230_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 231 */
#if (MO231_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO231_IDR_CAN4   ((uint32)(MO231_ID_CAN4) << 21)
#else                         
#define MO231_IDR_CAN4  (((MO231_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO231_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 232 */
#if (MO232_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO232_IDR_CAN4   ((uint32)(MO232_ID_CAN4) << 21)
#else                         
#define MO232_IDR_CAN4  (((MO232_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO232_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 233 */
#if (MO233_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO233_IDR_CAN4   ((uint32)(MO233_ID_CAN4) << 21)
#else                         
#define MO233_IDR_CAN4  (((MO233_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO233_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 234 */
#if (MO234_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO234_IDR_CAN4   ((uint32)(MO234_ID_CAN4) << 21)
#else                         
#define MO234_IDR_CAN4  (((MO234_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO234_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 235 */
#if (MO235_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO235_IDR_CAN4   ((uint32)(MO235_ID_CAN4) << 21)
#else                         
#define MO235_IDR_CAN4  (((MO235_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO235_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 236 */
#if (MO236_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO236_IDR_CAN4   ((uint32)(MO236_ID_CAN4) << 21)
#else                         
#define MO236_IDR_CAN4  (((MO236_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO236_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 237 */
#if (MO237_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO237_IDR_CAN4   ((uint32)(MO237_ID_CAN4) << 21)
#else                         
#define MO237_IDR_CAN4  (((MO237_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO237_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 238 */
#if (MO238_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO238_IDR_CAN4   ((uint32)(MO238_ID_CAN4) << 21)
#else                         
#define MO238_IDR_CAN4  (((MO238_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO238_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 239 */
#if (MO239_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO239_IDR_CAN4   ((uint32)(MO239_ID_CAN4) << 21)
#else                         
#define MO239_IDR_CAN4  (((MO239_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO239_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 240 */
#if (MO240_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO240_IDR_CAN4   ((uint32)(MO240_ID_CAN4) << 21)
#else                         
#define MO240_IDR_CAN4  (((MO240_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO240_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 241 */
#if (MO241_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO241_IDR_CAN4   ((uint32)(MO241_ID_CAN4) << 21)
#else                         
#define MO241_IDR_CAN4  (((MO241_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO241_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 242 */
#if (MO242_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO242_IDR_CAN4   ((uint32)(MO242_ID_CAN4) << 21)
#else                         
#define MO242_IDR_CAN4  (((MO242_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO242_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 243 */
#if (MO243_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO243_IDR_CAN4   ((uint32)(MO243_ID_CAN4) << 21)
#else                         
#define MO243_IDR_CAN4  (((MO243_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO243_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 244 */
#if (MO244_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO244_IDR_CAN4   ((uint32)(MO244_ID_CAN4) << 21)
#else                         
#define MO244_IDR_CAN4  (((MO244_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO244_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 245 */
#if (MO245_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO245_IDR_CAN4   ((uint32)(MO245_ID_CAN4) << 21)
#else                         
#define MO245_IDR_CAN4  (((MO245_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO245_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 246 */
#if (MO246_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO246_IDR_CAN4   ((uint32)(MO246_ID_CAN4) << 21)
#else                         
#define MO246_IDR_CAN4  (((MO246_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO246_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 247 */
#if (MO247_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO247_IDR_CAN4   ((uint32)(MO247_ID_CAN4) << 21)
#else                         
#define MO247_IDR_CAN4  (((MO247_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO247_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 248 */
#if (MO248_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO248_IDR_CAN4   ((uint32)(MO248_ID_CAN4) << 21)
#else                         
#define MO248_IDR_CAN4  (((MO248_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO248_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 249 */
#if (MO249_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO249_IDR_CAN4   ((uint32)(MO249_ID_CAN4) << 21)
#else                         
#define MO249_IDR_CAN4  (((MO249_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO249_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 250 */
#if (MO250_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO250_IDR_CAN4   ((uint32)(MO250_ID_CAN4) << 21)
#else                         
#define MO250_IDR_CAN4  (((MO250_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO250_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 251 */
#if (MO251_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO251_IDR_CAN4   ((uint32)(MO251_ID_CAN4) << 21)
#else                         
#define MO251_IDR_CAN4  (((MO251_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO251_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 252 */
#if (MO252_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO252_IDR_CAN4   ((uint32)(MO252_ID_CAN4) << 21)
#else                         
#define MO252_IDR_CAN4  (((MO252_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO252_ID_CAN4 & 0x0003FFFFL) << 1))
#endif   

/* Message Object 253 */
#if (MO253_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO253_IDR_CAN4   ((uint32)(MO253_ID_CAN4) << 21)
#else                         
#define MO253_IDR_CAN4  (((MO253_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO253_ID_CAN4 & 0x0003FFFFL) << 1))
#endif

/* Message Object 254 */
#if (MO254_ID_TYPE_CAN4 == CAN_STANDARD)
#define MO254_IDR_CAN4   ((uint32)(MO254_ID_CAN4) << 21)
#else                         
#define MO254_IDR_CAN4  (((MO254_ID_CAN4 & 0x1FFC0000L) << 3) | 0x00180000L | ((MO254_ID_CAN4 & 0x0003FFFFL) << 1))
#endif


/*****************************************************************************/
#endif       

/* end msCANIDA.h */ 
