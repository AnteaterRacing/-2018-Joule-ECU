#ifndef MSCANID_H
#define MSCANID_H           
/******************************************************************************						              
*
*                             Copyright (C) 2013 
*
* Tongji University - Freescale Automotive Electronics Laboratory, Inc.
* 
*                            All Rights Reserved		
*														                            
* Filename:     msCANID.h                
*														                            
* Revision:      										                    
*														                            
* Functions:    ID Defines for msCAN Channels
*														                            
* Description:  This file defines the ID Types (Standard or Extended) and the ID 
*               of each Message Object, All these Message Objects can be used by
*               there corresponding Channel 
*               Define number of Identifiers required for msCAN.
*
* Notes:        The ID Types and ID can be changed according to  user applications
*               Maximum value of a  CAN_STANDARD identifier is 0x7FF (11 bits)
*               Maximum value of an Extended identifier is 0x1FFFFFFF (29 bits)
*
******************************************************************************/

/****************************************************************************** 
 * Include
 ******************************************************************************/
 
/* Number of Message Objects,255 maximum, All_Identifier store all Message Objects */
  #define no_of_ID_CAN0         (128)
  #define no_of_ID_CAN1         (16)
  #define no_of_ID_CAN2         (16)
  #define no_of_ID_CAN3         (16)
  #define no_of_ID_CAN4         (16)
  
/* DON'T CHANGE */
  #ifndef MSCAN0
#undef  no_of_ID_CAN0
#define no_of_ID_CAN0         (0)
#endif

#ifndef MSCAN1
#undef  no_of_ID_CAN1
#define no_of_ID_CAN1         (0)
#endif

#ifndef MSCAN2
#undef  no_of_ID_CAN2
#define no_of_ID_CAN2         (0)
#endif

#ifndef MSCAN3
#undef  no_of_ID_CAN3
#define no_of_ID_CAN3         (0)
#endif

#ifndef MSCAN4
#undef  no_of_ID_CAN4
#define no_of_ID_CAN4         (0)
#endif
/* Define values for the first NO_OF_ID_CAN Identifiers */

/*****************************************************************************

 *CAN0 Message Objiects

*****************************************************************************/
/* This field defined the ID Types (Standard or Extended) and the ID of each Message Object */
/* Message Object 0: highest local priority for msCAN module 0 */
#define MO0_ID_TYPE_CAN0      CAN_STANDARD
#define MO0_ID_CAN0           0x100

/* Message Object 1 */
#define MO1_ID_TYPE_CAN0      CAN_STANDARD
#define MO1_ID_CAN0           0x200

/* Message Object 2 */
#define MO2_ID_TYPE_CAN0      CAN_STANDARD
#define MO2_ID_CAN0           0x082

/* Message Object 3 */
#define MO3_ID_TYPE_CAN0      CAN_STANDARD
#define MO3_ID_CAN0           0x083

/* Message Object 4 */
#define MO4_ID_TYPE_CAN0      CAN_STANDARD
#define MO4_ID_CAN0           0x084

/* Message Object 5 */
#define MO5_ID_TYPE_CAN0      CAN_STANDARD
#define MO5_ID_CAN0           0x085

/* Message Object 6 */
#define MO6_ID_TYPE_CAN0      CAN_STANDARD
#define MO6_ID_CAN0           0x086

/* Message Object 7 */
#define MO7_ID_TYPE_CAN0      CAN_STANDARD
#define MO7_ID_CAN0           0x087

/* Message Object 8 */
#define MO8_ID_TYPE_CAN0      CAN_STANDARD
#define MO8_ID_CAN0           0x7EB

/* Message Object 9 */
#define MO9_ID_TYPE_CAN0      CAN_STANDARD
#define MO9_ID_CAN0           0x7E3

/* Message Object 10 */
#define MO10_ID_TYPE_CAN0     CAN_STANDARD
#define MO10_ID_CAN0          0x08A 

/* Message Object 11 */
#define MO11_ID_TYPE_CAN0     CAN_STANDARD
#define MO11_ID_CAN0          0x08B

/* Message Object 12 */
#define MO12_ID_TYPE_CAN0     CAN_STANDARD
#define MO12_ID_CAN0          0x08C

/* Message Object 13 */
#define MO13_ID_TYPE_CAN0     CAN_STANDARD
#define MO13_ID_CAN0          0x08D

/* Message Object 14 */
#define MO14_ID_TYPE_CAN0     CAN_STANDARD
#define MO14_ID_CAN0          0x08E

/* Message Object 15 */
#define MO15_ID_TYPE_CAN0     CAN_STANDARD
#define MO15_ID_CAN0          0x08F

/* Message Object 16 */
#define MO16_ID_TYPE_CAN0     CAN_EXTENDED
#define MO16_ID_CAN0          0x11111111L

/* Message Object 17 */      
#define MO17_ID_TYPE_CAN0     CAN_EXTENDED
#define MO17_ID_CAN0          0x12222222L

/* Message Object 18 */
#define MO18_ID_TYPE_CAN0     CAN_EXTENDED
#define MO18_ID_CAN0          0x12333333L

/* Message Object 19 */
#define MO19_ID_TYPE_CAN0     CAN_EXTENDED
#define MO19_ID_CAN0          0x12344444L

/* Message Object 20 */
#define MO20_ID_TYPE_CAN0     CAN_EXTENDED
#define MO20_ID_CAN0          0x12345555L

/* Message Object 21 */
#define MO21_ID_TYPE_CAN0     CAN_EXTENDED
#define MO21_ID_CAN0          0x12345666L

/* Message Object 22 */
#define MO22_ID_TYPE_CAN0     CAN_EXTENDED
#define MO22_ID_CAN0          0x12345677L

/* Message Object 23 */
#define MO23_ID_TYPE_CAN0     CAN_EXTENDED
#define MO23_ID_CAN0          0x18888888L

/* Message Object 24 */
#define MO24_ID_TYPE_CAN0     CAN_STANDARD
#define MO24_ID_CAN0          0x123

/* Message Object 25 */
#define MO25_ID_TYPE_CAN0     CAN_STANDARD
#define MO25_ID_CAN0          0x123

/* Message Object 26 */
#define MO26_ID_TYPE_CAN0     CAN_STANDARD
#define MO26_ID_CAN0          0x123

/* Message Object 27 */
#define MO27_ID_TYPE_CAN0     CAN_STANDARD
#define MO27_ID_CAN0          0x123

/* Message Object 28 */
#define MO28_ID_TYPE_CAN0     CAN_STANDARD
#define MO28_ID_CAN0          0x28

/* Message Object 29 */
#define MO29_ID_TYPE_CAN0     CAN_STANDARD
#define MO29_ID_CAN0          0x29

/* Message Object 30 */
#define MO30_ID_TYPE_CAN0     CAN_STANDARD
#define MO30_ID_CAN0          0x30

/* Message Object 31 */
#define MO31_ID_TYPE_CAN0     CAN_STANDARD
#define MO31_ID_CAN0          0x31

/* Message Object 32 */
#define MO32_ID_TYPE_CAN0     CAN_STANDARD
#define MO32_ID_CAN0          0x32

/* Message Object 33 */
#define MO33_ID_TYPE_CAN0     CAN_STANDARD
#define MO33_ID_CAN0          0x123

/* Message Object 34 */
#define MO34_ID_TYPE_CAN0     CAN_STANDARD
#define MO34_ID_CAN0          0x123

/* Message Object 35 */
#define MO35_ID_TYPE_CAN0     CAN_STANDARD
#define MO35_ID_CAN0          0x123

/* Message Object 36 */
#define MO36_ID_TYPE_CAN0     CAN_STANDARD
#define MO36_ID_CAN0          0x123

/* Message Object 37 */
#define MO37_ID_TYPE_CAN0     CAN_STANDARD
#define MO37_ID_CAN0          0x123

/* Message Object 38 */
#define MO38_ID_TYPE_CAN0     CAN_STANDARD
#define MO38_ID_CAN0          0x123

/* Message Object 39 */
#define MO39_ID_TYPE_CAN0     CAN_STANDARD
#define MO39_ID_CAN0          0x123

/* Message Object 40 */
#define MO40_ID_TYPE_CAN0     CAN_STANDARD
#define MO40_ID_CAN0          0x123

/* Message Object 41 */
#define MO41_ID_TYPE_CAN0     CAN_STANDARD
#define MO41_ID_CAN0          0x123

/* Message Object 42 */
#define MO42_ID_TYPE_CAN0     CAN_STANDARD
#define MO42_ID_CAN0          0x123

/* Message Object 43 */
#define MO43_ID_TYPE_CAN0     CAN_STANDARD
#define MO43_ID_CAN0          0x123

/* Message Object 44 */
#define MO44_ID_TYPE_CAN0     CAN_STANDARD
#define MO44_ID_CAN0          0x123

/* Message Object 45 */
#define MO45_ID_TYPE_CAN0     CAN_STANDARD
#define MO45_ID_CAN0          0x123

/* Message Object 46 */
#define MO46_ID_TYPE_CAN0     CAN_STANDARD
#define MO46_ID_CAN0          0x123

/* Message Object 47 */
#define MO47_ID_TYPE_CAN0     CAN_STANDARD
#define MO47_ID_CAN0          0x123

/* Message Object 48 */
#define MO48_ID_TYPE_CAN0     CAN_STANDARD
#define MO48_ID_CAN0          0x123

/* Message Object 49 */
#define MO49_ID_TYPE_CAN0     CAN_STANDARD
#define MO49_ID_CAN0          0x123

/* Message Object 50 */
#define MO50_ID_TYPE_CAN0     CAN_STANDARD
#define MO50_ID_CAN0          0x123

/* Message Object 51 */
#define MO51_ID_TYPE_CAN0     CAN_STANDARD
#define MO51_ID_CAN0          0x123

/* Message Object 52 */
#define MO52_ID_TYPE_CAN0     CAN_STANDARD
#define MO52_ID_CAN0          0x123

/* Message Object 53 */
#define MO53_ID_TYPE_CAN0     CAN_STANDARD
#define MO53_ID_CAN0          0x123

/* Message Object 54 */
#define MO54_ID_TYPE_CAN0     CAN_STANDARD
#define MO54_ID_CAN0          0x123

/* Message Object 55 */
#define MO55_ID_TYPE_CAN0     CAN_STANDARD
#define MO55_ID_CAN0          0x123

/* Message Object 56 */
#define MO56_ID_TYPE_CAN0     CAN_STANDARD
#define MO56_ID_CAN0          0x123

/* Message Object 57 */
#define MO57_ID_TYPE_CAN0     CAN_STANDARD
#define MO57_ID_CAN0          0x123

/* Message Object 58 */
#define MO58_ID_TYPE_CAN0     CAN_STANDARD
#define MO58_ID_CAN0          0x123

/* Message Object 59 */
#define MO59_ID_TYPE_CAN0     CAN_STANDARD
#define MO59_ID_CAN0          0x123

/* Message Object 60 */
#define MO60_ID_TYPE_CAN0     CAN_STANDARD
#define MO60_ID_CAN0          0x123

/* Message Object 61 */
#define MO61_ID_TYPE_CAN0     CAN_STANDARD
#define MO61_ID_CAN0          0x123

/* Message Object 62 */
#define MO62_ID_TYPE_CAN0     CAN_STANDARD
#define MO62_ID_CAN0          0x123

/* Message Object 63 */
#define MO63_ID_TYPE_CAN0     CAN_STANDARD
#define MO63_ID_CAN0          0x123

/* Message Object 64 */
#define MO64_ID_TYPE_CAN0     CAN_STANDARD
#define MO64_ID_CAN0          0x123

/* Message Object 65 */
#define MO65_ID_TYPE_CAN0     CAN_STANDARD
#define MO65_ID_CAN0          0x123

/* Message Object 66 */
#define MO66_ID_TYPE_CAN0     CAN_STANDARD
#define MO66_ID_CAN0          0x123

/* Message Object 67 */
#define MO67_ID_TYPE_CAN0     CAN_STANDARD
#define MO67_ID_CAN0          0x123

/* Message Object 68 */
#define MO68_ID_TYPE_CAN0     CAN_STANDARD
#define MO68_ID_CAN0          0x123

/* Message Object 69 */
#define MO69_ID_TYPE_CAN0     CAN_STANDARD
#define MO69_ID_CAN0          0x123

/* Message Object 70 */
#define MO70_ID_TYPE_CAN0     CAN_STANDARD
#define MO70_ID_CAN0          0x123

/* Message Object 71 */
#define MO71_ID_TYPE_CAN0     CAN_STANDARD
#define MO71_ID_CAN0          0x123

/* Message Object 72 */
#define MO72_ID_TYPE_CAN0     CAN_STANDARD
#define MO72_ID_CAN0          0x123

/* Message Object 73 */
#define MO73_ID_TYPE_CAN0     CAN_STANDARD
#define MO73_ID_CAN0          0x123

/* Message Object 74 */
#define MO74_ID_TYPE_CAN0     CAN_STANDARD
#define MO74_ID_CAN0          0x123

/* Message Object 75 */
#define MO75_ID_TYPE_CAN0     CAN_STANDARD
#define MO75_ID_CAN0          0x123

/* Message Object 76 */
#define MO76_ID_TYPE_CAN0     CAN_STANDARD
#define MO76_ID_CAN0          0x123

/* Message Object 77 */
#define MO77_ID_TYPE_CAN0     CAN_STANDARD
#define MO77_ID_CAN0          0x123

/* Message Object 78 */
#define MO78_ID_TYPE_CAN0     CAN_STANDARD
#define MO78_ID_CAN0          0x123

/* Message Object 79 */
#define MO79_ID_TYPE_CAN0     CAN_STANDARD
#define MO79_ID_CAN0          0x123

/* Message Object 80 */
#define MO80_ID_TYPE_CAN0     CAN_STANDARD
#define MO80_ID_CAN0          0x123

/* Message Object 81 */
#define MO81_ID_TYPE_CAN0     CAN_STANDARD
#define MO81_ID_CAN0          0x123

/* Message Object 82 */
#define MO82_ID_TYPE_CAN0     CAN_STANDARD
#define MO82_ID_CAN0          0x123

/* Message Object 83 */
#define MO83_ID_TYPE_CAN0     CAN_STANDARD
#define MO83_ID_CAN0          0x123

/* Message Object 84 */
#define MO84_ID_TYPE_CAN0     CAN_STANDARD
#define MO84_ID_CAN0          0x123

/* Message Object 85 */
#define MO85_ID_TYPE_CAN0     CAN_STANDARD
#define MO85_ID_CAN0          0x123

/* Message Object 86 */
#define MO86_ID_TYPE_CAN0     CAN_STANDARD
#define MO86_ID_CAN0          0x123

/* Message Object 87 */
#define MO87_ID_TYPE_CAN0     CAN_STANDARD
#define MO87_ID_CAN0          0x123

/* Message Object 88 */
#define MO88_ID_TYPE_CAN0     CAN_STANDARD
#define MO88_ID_CAN0          0x123

/* Message Object 89 */
#define MO89_ID_TYPE_CAN0     CAN_STANDARD
#define MO89_ID_CAN0          0x123

/* Message Object 90 */
#define MO90_ID_TYPE_CAN0     CAN_STANDARD
#define MO90_ID_CAN0          0x123

/* Message Object 91 */
#define MO91_ID_TYPE_CAN0     CAN_STANDARD
#define MO91_ID_CAN0          0x123

/* Message Object 92 */
#define MO92_ID_TYPE_CAN0     CAN_STANDARD
#define MO92_ID_CAN0          0x123

/* Message Object 93 */
#define MO93_ID_TYPE_CAN0     CAN_STANDARD
#define MO93_ID_CAN0          0x123

/* Message Object 94 */
#define MO94_ID_TYPE_CAN0     CAN_STANDARD
#define MO94_ID_CAN0          0x123

/* Message Object 95 */
#define MO95_ID_TYPE_CAN0     CAN_STANDARD
#define MO95_ID_CAN0          0x123

/* Message Object 96 */
#define MO96_ID_TYPE_CAN0     CAN_STANDARD
#define MO96_ID_CAN0          0x123

/* Message Object 97 */
#define MO97_ID_TYPE_CAN0     CAN_STANDARD
#define MO97_ID_CAN0          0x123

/* Message Object 98 */
#define MO98_ID_TYPE_CAN0     CAN_STANDARD
#define MO98_ID_CAN0          0x123

/* Message Object 99 */
#define MO99_ID_TYPE_CAN0     CAN_STANDARD
#define MO99_ID_CAN0          0x123

/* Message Object 100 */
#define MO100_ID_TYPE_CAN0    CAN_STANDARD
#define MO100_ID_CAN0         0x123

/* Message Object 101 */
#define MO101_ID_TYPE_CAN0    CAN_STANDARD
#define MO101_ID_CAN0         0x123

/* Message Object 102 */
#define MO102_ID_TYPE_CAN0    CAN_STANDARD
#define MO102_ID_CAN0         0x123

/* Message Object 103 */
#define MO103_ID_TYPE_CAN0    CAN_STANDARD
#define MO103_ID_CAN0         0x123

/* Message Object 104 */
#define MO104_ID_TYPE_CAN0    CAN_STANDARD
#define MO104_ID_CAN0         0x123

/* Message Object 105 */
#define MO105_ID_TYPE_CAN0    CAN_STANDARD
#define MO105_ID_CAN0         0x123

/* Message Object 106 */
#define MO106_ID_TYPE_CAN0    CAN_STANDARD
#define MO106_ID_CAN0         0x123

/* Message Object 107 */
#define MO107_ID_TYPE_CAN0    CAN_STANDARD
#define MO107_ID_CAN0         0x123

/* Message Object 108 */
#define MO108_ID_TYPE_CAN0    CAN_STANDARD
#define MO108_ID_CAN0         0x123

/* Message Object 109 */
#define MO109_ID_TYPE_CAN0    CAN_STANDARD
#define MO109_ID_CAN0         0x123

/* Message Object 110 */
#define MO110_ID_TYPE_CAN0     CAN_STANDARD
#define MO110_ID_CAN0         0x123

/* Message Object 111 */
#define MO111_ID_TYPE_CAN0    CAN_STANDARD
#define MO111_ID_CAN0         0x123

/* Message Object 112 */
#define MO112_ID_TYPE_CAN0    CAN_STANDARD
#define MO112_ID_CAN0         0x123

/* Message Object 113 */
#define MO113_ID_TYPE_CAN0    CAN_STANDARD
#define MO113_ID_CAN0         0x123

/* Message Object 114 */
#define MO114_ID_TYPE_CAN0    CAN_STANDARD
#define MO114_ID_CAN0         0x123

/* Message Object 115 */
#define MO115_ID_TYPE_CAN0    CAN_STANDARD
#define MO115_ID_CAN0         0x123

/* Message Object 116 */
#define MO116_ID_TYPE_CAN0    CAN_STANDARD
#define MO116_ID_CAN0         0x123

/* Message Object 117 */
#define MO117_ID_TYPE_CAN0    CAN_STANDARD
#define MO117_ID_CAN0         0x123

/* Message Object 118 */
#define MO118_ID_TYPE_CAN0    CAN_STANDARD
#define MO118_ID_CAN0         0x123

/* Message Object 119 */
#define MO119_ID_TYPE_CAN0    CAN_STANDARD
#define MO119_ID_CAN0         0x123

/* Message Object 120 */
#define MO120_ID_TYPE_CAN0    CAN_STANDARD
#define MO120_ID_CAN0         0x123

/* Message Object 121 */
#define MO121_ID_TYPE_CAN0    CAN_STANDARD
#define MO121_ID_CAN0         0x123

/* Message Object 122 */
#define MO122_ID_TYPE_CAN0    CAN_STANDARD
#define MO122_ID_CAN0         0x123

/* Message Object 123 */
#define MO123_ID_TYPE_CAN0    CAN_STANDARD
#define MO123_ID_CAN0         0x123

/* Message Object 124 */
#define MO124_ID_TYPE_CAN0    CAN_STANDARD
#define MO124_ID_CAN0         0x123

/* Message Object 125 */
#define MO125_ID_TYPE_CAN0    CAN_STANDARD
#define MO125_ID_CAN0         0x123

/* Message Object 126 */
#define MO126_ID_TYPE_CAN0    CAN_STANDARD
#define MO126_ID_CAN0         0x123

/* Message Object 127 */
#define MO127_ID_TYPE_CAN0    CAN_STANDARD
#define MO127_ID_CAN0         0x123

/* Message Object 128 */
#define MO128_ID_TYPE_CAN0    CAN_STANDARD
#define MO128_ID_CAN0         0x123

/* Message Object 129 */
#define MO129_ID_TYPE_CAN0    CAN_STANDARD
#define MO129_ID_CAN0         0x123

/* Message Object 130 */
#define MO130_ID_TYPE_CAN0    CAN_STANDARD
#define MO130_ID_CAN0         0x123

/* Message Object 131 */
#define MO131_ID_TYPE_CAN0    CAN_STANDARD
#define MO131_ID_CAN0         0x123

/* Message Object 132 */
#define MO132_ID_TYPE_CAN0    CAN_STANDARD
#define MO132_ID_CAN0         0x123

/* Message Object 133 */
#define MO133_ID_TYPE_CAN0    CAN_STANDARD
#define MO133_ID_CAN0         0x123

/* Message Object 134 */
#define MO134_ID_TYPE_CAN0    CAN_STANDARD
#define MO134_ID_CAN0         0x123

/* Message Object 135 */
#define MO135_ID_TYPE_CAN0    CAN_STANDARD
#define MO135_ID_CAN0         0x123

/* Message Object 136 */
#define MO136_ID_TYPE_CAN0    CAN_STANDARD
#define MO136_ID_CAN0         0x123

/* Message Object 137 */
#define MO137_ID_TYPE_CAN0    CAN_STANDARD
#define MO137_ID_CAN0         0x123

/* Message Object 138 */
#define MO138_ID_TYPE_CAN0    CAN_STANDARD
#define MO138_ID_CAN0         0x123

/* Message Object 139 */
#define MO139_ID_TYPE_CAN0    CAN_STANDARD
#define MO139_ID_CAN0         0x123

/* Message Object 140 */
#define MO140_ID_TYPE_CAN0    CAN_STANDARD
#define MO140_ID_CAN0         0x123

/* Message Object 141 */
#define MO141_ID_TYPE_CAN0    CAN_STANDARD
#define MO141_ID_CAN0         0x123

/* Message Object 142 */
#define MO142_ID_TYPE_CAN0    CAN_STANDARD
#define MO142_ID_CAN0         0x123

/* Message Object 143 */
#define MO143_ID_TYPE_CAN0    CAN_STANDARD
#define MO143_ID_CAN0         0x123

/* Message Object 144 */
#define MO144_ID_TYPE_CAN0    CAN_STANDARD
#define MO144_ID_CAN0         0x123

/* Message Object 145 */
#define MO145_ID_TYPE_CAN0    CAN_STANDARD
#define MO145_ID_CAN0         0x123

/* Message Object 146 */
#define MO146_ID_TYPE_CAN0    CAN_STANDARD
#define MO146_ID_CAN0         0x123

/* Message Object 147 */
#define MO147_ID_TYPE_CAN0    CAN_STANDARD
#define MO147_ID_CAN0         0x123

/* Message Object 148 */
#define MO148_ID_TYPE_CAN0    CAN_STANDARD
#define MO148_ID_CAN0         0x123

/* Message Object 149 */
#define MO149_ID_TYPE_CAN0    CAN_STANDARD
#define MO149_ID_CAN0         0x123

/* Message Object 150 */
#define MO150_ID_TYPE_CAN0    CAN_STANDARD
#define MO150_ID_CAN0         0x123

/* Message Object 151 */
#define MO151_ID_TYPE_CAN0    CAN_STANDARD
#define MO151_ID_CAN0         0x123

/* Message Object 152 */
#define MO152_ID_TYPE_CAN0    CAN_STANDARD
#define MO152_ID_CAN0         0x123

/* Message Object 153 */
#define MO153_ID_TYPE_CAN0    CAN_STANDARD
#define MO153_ID_CAN0         0x123

/* Message Object 154 */
#define MO154_ID_TYPE_CAN0    CAN_STANDARD
#define MO154_ID_CAN0         0x123

/* Message Object 155 */
#define MO155_ID_TYPE_CAN0    CAN_STANDARD
#define MO155_ID_CAN0         0x123

/* Message Object 156 */
#define MO156_ID_TYPE_CAN0    CAN_STANDARD
#define MO156_ID_CAN0         0x123

/* Message Object 157 */
#define MO157_ID_TYPE_CAN0    CAN_STANDARD
#define MO157_ID_CAN0         0x123

/* Message Object 158 */
#define MO158_ID_TYPE_CAN0    CAN_STANDARD
#define MO158_ID_CAN0         0x123

/* Message Object 159 */
#define MO159_ID_TYPE_CAN0    CAN_STANDARD
#define MO159_ID_CAN0         0x123

/* Message Object 160 */
#define MO160_ID_TYPE_CAN0    CAN_STANDARD
#define MO160_ID_CAN0         0x123

/* Message Object 161 */
#define MO161_ID_TYPE_CAN0    CAN_STANDARD
#define MO161_ID_CAN0         0x123

/* Message Object 162 */
#define MO162_ID_TYPE_CAN0    CAN_STANDARD
#define MO162_ID_CAN0         0x123

/* Message Object 163 */
#define MO163_ID_TYPE_CAN0    CAN_STANDARD
#define MO163_ID_CAN0         0x123

/* Message Object 164 */
#define MO164_ID_TYPE_CAN0    CAN_STANDARD
#define MO164_ID_CAN0         0x123

/* Message Object 165 */
#define MO165_ID_TYPE_CAN0    CAN_STANDARD
#define MO165_ID_CAN0         0x123

/* Message Object 166 */
#define MO166_ID_TYPE_CAN0    CAN_STANDARD
#define MO166_ID_CAN0         0x123

/* Message Object 167 */
#define MO167_ID_TYPE_CAN0    CAN_STANDARD
#define MO167_ID_CAN0         0x123

/* Message Object 168 */
#define MO168_ID_TYPE_CAN0    CAN_STANDARD
#define MO168_ID_CAN0         0x123

/* Message Object 169 */
#define MO169_ID_TYPE_CAN0    CAN_STANDARD
#define MO169_ID_CAN0         0x123

/* Message Object 170 */
#define MO170_ID_TYPE_CAN0    CAN_STANDARD
#define MO170_ID_CAN0         0x123

/* Message Object 171 */
#define MO171_ID_TYPE_CAN0    CAN_STANDARD
#define MO171_ID_CAN0         0x123

/* Message Object 172 */
#define MO172_ID_TYPE_CAN0    CAN_STANDARD
#define MO172_ID_CAN0         0x123

/* Message Object 173 */
#define MO173_ID_TYPE_CAN0    CAN_STANDARD
#define MO173_ID_CAN0         0x123

/* Message Object 174 */
#define MO174_ID_TYPE_CAN0    CAN_STANDARD
#define MO174_ID_CAN0         0x123

/* Message Object 175 */
#define MO175_ID_TYPE_CAN0    CAN_STANDARD
#define MO175_ID_CAN0         0x123

/* Message Object 176 */
#define MO176_ID_TYPE_CAN0    CAN_STANDARD
#define MO176_ID_CAN0         0x123

/* Message Object 177 */
#define MO177_ID_TYPE_CAN0    CAN_STANDARD
#define MO177_ID_CAN0         0x123

/* Message Object 178 */
#define MO178_ID_TYPE_CAN0    CAN_STANDARD
#define MO178_ID_CAN0         0x123

/* Message Object 179 */
#define MO179_ID_TYPE_CAN0    CAN_STANDARD
#define MO179_ID_CAN0         0x123

/* Message Object 180 */
#define MO180_ID_TYPE_CAN0    CAN_STANDARD
#define MO180_ID_CAN0         0x123

/* Message Object 181 */
#define MO181_ID_TYPE_CAN0    CAN_STANDARD
#define MO181_ID_CAN0         0x123

/* Message Object 182 */
#define MO182_ID_TYPE_CAN0    CAN_STANDARD
#define MO182_ID_CAN0         0x123

/* Message Object 183 */
#define MO183_ID_TYPE_CAN0    CAN_STANDARD
#define MO183_ID_CAN0         0x123

/* Message Object 184 */
#define MO184_ID_TYPE_CAN0    CAN_STANDARD
#define MO184_ID_CAN0         0x123

/* Message Object 185 */
#define MO185_ID_TYPE_CAN0    CAN_STANDARD
#define MO185_ID_CAN0         0x123

/* Message Object 186 */
#define MO186_ID_TYPE_CAN0    CAN_STANDARD
#define MO186_ID_CAN0         0x123

/* Message Object 187 */
#define MO187_ID_TYPE_CAN0    CAN_STANDARD
#define MO187_ID_CAN0         0x123

/* Message Object 188 */
#define MO188_ID_TYPE_CAN0    CAN_STANDARD
#define MO188_ID_CAN0         0x123

/* Message Object 189 */
#define MO189_ID_TYPE_CAN0    CAN_STANDARD
#define MO189_ID_CAN0         0x123

/* Message Object 190 */
#define MO190_ID_TYPE_CAN0    CAN_STANDARD
#define MO190_ID_CAN0         0x123

/* Message Object 191 */
#define MO191_ID_TYPE_CAN0    CAN_STANDARD
#define MO191_ID_CAN0         0x123

/* Message Object 192 */
#define MO192_ID_TYPE_CAN0    CAN_STANDARD
#define MO192_ID_CAN0         0x123

/* Message Object 193 */
#define MO193_ID_TYPE_CAN0    CAN_STANDARD
#define MO193_ID_CAN0         0x123

/* Message Object 194 */
#define MO194_ID_TYPE_CAN0    CAN_STANDARD
#define MO194_ID_CAN0         0x123

/* Message Object 195 */
#define MO195_ID_TYPE_CAN0    CAN_STANDARD
#define MO195_ID_CAN0         0x123

/* Message Object 196 */
#define MO196_ID_TYPE_CAN0    CAN_STANDARD
#define MO196_ID_CAN0         0x123

/* Message Object 197 */
#define MO197_ID_TYPE_CAN0    CAN_STANDARD
#define MO197_ID_CAN0         0x123

/* Message Object 198 */
#define MO198_ID_TYPE_CAN0    CAN_STANDARD
#define MO198_ID_CAN0         0x123

/* Message Object 199 */
#define MO199_ID_TYPE_CAN0    CAN_STANDARD
#define MO199_ID_CAN0         0x123

/* Message Object 200 */
#define MO200_ID_TYPE_CAN0    CAN_STANDARD
#define MO200_ID_CAN0         0x123

/* Message Object 201 */
#define MO201_ID_TYPE_CAN0    CAN_STANDARD
#define MO201_ID_CAN0         0x123

/* Message Object 202 */
#define MO202_ID_TYPE_CAN0    CAN_STANDARD
#define MO202_ID_CAN0         0x123

/* Message Object 203 */
#define MO203_ID_TYPE_CAN0    CAN_STANDARD
#define MO203_ID_CAN0         0x123

/* Message Object 204 */
#define MO204_ID_TYPE_CAN0    CAN_STANDARD
#define MO204_ID_CAN0         0x123

/* Message Object 205 */
#define MO205_ID_TYPE_CAN0    CAN_STANDARD
#define MO205_ID_CAN0         0x123

/* Message Object 206 */
#define MO206_ID_TYPE_CAN0    CAN_STANDARD
#define MO206_ID_CAN0         0x123

/* Message Object 207 */
#define MO207_ID_TYPE_CAN0    CAN_STANDARD
#define MO207_ID_CAN0         0x123

/* Message Object 208 */
#define MO208_ID_TYPE_CAN0    CAN_STANDARD
#define MO208_ID_CAN0         0x123

/* Message Object 209 */
#define MO209_ID_TYPE_CAN0    CAN_STANDARD
#define MO209_ID_CAN0         0x123

/* Message Object 210 */
#define MO210_ID_TYPE_CAN0    CAN_STANDARD
#define MO210_ID_CAN0         0x123

/* Message Object 211 */
#define MO211_ID_TYPE_CAN0    CAN_STANDARD
#define MO211_ID_CAN0         0x123

/* Message Object 212 */
#define MO212_ID_TYPE_CAN0    CAN_STANDARD
#define MO212_ID_CAN0         0x123

/* Message Object 213 */
#define MO213_ID_TYPE_CAN0    CAN_STANDARD
#define MO213_ID_CAN0         0x123

/* Message Object 214 */
#define MO214_ID_TYPE_CAN0    CAN_STANDARD
#define MO214_ID_CAN0         0x123

/* Message Object 215 */
#define MO215_ID_TYPE_CAN0    CAN_STANDARD
#define MO215_ID_CAN0         0x123

/* Message Object 216 */
#define MO216_ID_TYPE_CAN0    CAN_STANDARD
#define MO216_ID_CAN0         0x123

/* Message Object 217 */
#define MO217_ID_TYPE_CAN0    CAN_STANDARD
#define MO217_ID_CAN0         0x123

/* Message Object 218 */
#define MO218_ID_TYPE_CAN0    CAN_STANDARD
#define MO218_ID_CAN0         0x123

/* Message Object 219 */
#define MO219_ID_TYPE_CAN0    CAN_STANDARD
#define MO219_ID_CAN0         0x123

/* Message Object 220 */
#define MO220_ID_TYPE_CAN0    CAN_STANDARD
#define MO220_ID_CAN0         0x123

/* Message Object 221 */
#define MO221_ID_TYPE_CAN0    CAN_STANDARD
#define MO221_ID_CAN0         0x123

/* Message Object 222 */
#define MO222_ID_TYPE_CAN0    CAN_STANDARD
#define MO222_ID_CAN0         0x123

/* Message Object 223 */
#define MO223_ID_TYPE_CAN0    CAN_STANDARD
#define MO223_ID_CAN0         0x123

/* Message Object 224 */
#define MO224_ID_TYPE_CAN0    CAN_STANDARD
#define MO224_ID_CAN0         0x123

/* Message Object 225 */
#define MO225_ID_TYPE_CAN0    CAN_STANDARD
#define MO225_ID_CAN0         0x123

/* Message Object 226 */
#define MO226_ID_TYPE_CAN0    CAN_STANDARD
#define MO226_ID_CAN0         0x123

/* Message Object 227 */
#define MO227_ID_TYPE_CAN0    CAN_STANDARD
#define MO227_ID_CAN0         0x123

/* Message Object 228 */
#define MO228_ID_TYPE_CAN0    CAN_STANDARD
#define MO228_ID_CAN0         0x123

/* Message Object 229 */
#define MO229_ID_TYPE_CAN0    CAN_STANDARD
#define MO229_ID_CAN0         0x123

/* Message Object 230 */
#define MO230_ID_TYPE_CAN0    CAN_STANDARD
#define MO230_ID_CAN0         0x123

/* Message Object 231 */
#define MO231_ID_TYPE_CAN0    CAN_STANDARD
#define MO231_ID_CAN0         0x123

/* Message Object 232 */
#define MO232_ID_TYPE_CAN0    CAN_STANDARD
#define MO232_ID_CAN0         0x123

/* Message Object 233 */
#define MO233_ID_TYPE_CAN0    CAN_STANDARD
#define MO233_ID_CAN0         0x123

/* Message Object 234 */
#define MO234_ID_TYPE_CAN0    CAN_STANDARD
#define MO234_ID_CAN0         0x123

/* Message Object 235 */
#define MO235_ID_TYPE_CAN0    CAN_STANDARD
#define MO235_ID_CAN0         0x123

/* Message Object 236 */
#define MO236_ID_TYPE_CAN0    CAN_STANDARD
#define MO236_ID_CAN0         0x123

/* Message Object 237 */
#define MO237_ID_TYPE_CAN0    CAN_STANDARD
#define MO237_ID_CAN0         0x123

/* Message Object 238 */
#define MO238_ID_TYPE_CAN0    CAN_STANDARD
#define MO238_ID_CAN0         0x123

/* Message Object 239 */
#define MO239_ID_TYPE_CAN0    CAN_STANDARD
#define MO239_ID_CAN0         0x123

/* Message Object 240 */
#define MO240_ID_TYPE_CAN0    CAN_STANDARD
#define MO240_ID_CAN0         0x123

/* Message Object 241 */
#define MO241_ID_TYPE_CAN0    CAN_STANDARD
#define MO241_ID_CAN0         0x123

/* Message Object 242 */
#define MO242_ID_TYPE_CAN0    CAN_STANDARD
#define MO242_ID_CAN0         0x123

/* Message Object 243 */
#define MO243_ID_TYPE_CAN0    CAN_STANDARD
#define MO243_ID_CAN0         0x123

/* Message Object 244 */
#define MO244_ID_TYPE_CAN0    CAN_STANDARD
#define MO244_ID_CAN0         0x123

/* Message Object 245 */
#define MO245_ID_TYPE_CAN0    CAN_STANDARD
#define MO245_ID_CAN0         0x123

/* Message Object 246 */
#define MO246_ID_TYPE_CAN0    CAN_STANDARD
#define MO246_ID_CAN0         0x123

/* Message Object 247 */
#define MO247_ID_TYPE_CAN0    CAN_STANDARD
#define MO247_ID_CAN0         0x123

/* Message Object 248 */
#define MO248_ID_TYPE_CAN0    CAN_STANDARD
#define MO248_ID_CAN0         0x123

/* Message Object 249 */
#define MO249_ID_TYPE_CAN0    CAN_STANDARD
#define MO249_ID_CAN0         0x123

/* Message Object 250 */
#define MO250_ID_TYPE_CAN0    CAN_STANDARD
#define MO250_ID_CAN0         0x123

/* Message Object 251 */
#define MO251_ID_TYPE_CAN0    CAN_STANDARD
#define MO251_ID_CAN0         0x123

/* Message Object 252 */
#define MO252_ID_TYPE_CAN0    CAN_STANDARD
#define MO252_ID_CAN0         0x123

/* Message Object 253 */
#define MO253_ID_TYPE_CAN0    CAN_STANDARD
#define MO253_ID_CAN0         0x123

/* Message Object 254 */
#define MO254_ID_TYPE_CAN0    CAN_STANDARD
#define MO254_ID_CAN0         0x123

/*****************************************************************************

 *CAN1 Message Objiects

*****************************************************************************/
/* Message Object 0: highest local priority for msCAN module 0 */
#define MO0_ID_TYPE_CAN1      CAN_STANDARD
#define MO0_ID_CAN1           0x080

/* Message Object 1 */
#define MO1_ID_TYPE_CAN1      CAN_STANDARD
#define MO1_ID_CAN1           0x081

/* Message Object 2 */
#define MO2_ID_TYPE_CAN1      CAN_STANDARD
#define MO2_ID_CAN1           0x082

/* Message Object 3 */
#define MO3_ID_TYPE_CAN1      CAN_STANDARD
#define MO3_ID_CAN1           0x083

/* Message Object 4 */
#define MO4_ID_TYPE_CAN1      CAN_STANDARD
#define MO4_ID_CAN1           0x084

/* Message Object 5 */
#define MO5_ID_TYPE_CAN1      CAN_STANDARD
#define MO5_ID_CAN1           0x085

/* Message Object 6 */
#define MO6_ID_TYPE_CAN1      CAN_STANDARD
#define MO6_ID_CAN1           0x086

/* Message Object 7 */
#define MO7_ID_TYPE_CAN1      CAN_STANDARD
#define MO7_ID_CAN1           0x087

/* Message Object 8 */
#define MO8_ID_TYPE_CAN1      CAN_STANDARD
#define MO8_ID_CAN1           0x088

/* Message Object 9 */
#define MO9_ID_TYPE_CAN1      CAN_STANDARD
#define MO9_ID_CAN1           0x089

/* Message Object 10 */
#define MO10_ID_TYPE_CAN1     CAN_STANDARD
#define MO10_ID_CAN1          0x08A 

/* Message Object 11 */
#define MO11_ID_TYPE_CAN1     CAN_STANDARD
#define MO11_ID_CAN1          0x08B

/* Message Object 12 */
#define MO12_ID_TYPE_CAN1     CAN_STANDARD
#define MO12_ID_CAN1          0x08C

/* Message Object 13 */
#define MO13_ID_TYPE_CAN1     CAN_STANDARD
#define MO13_ID_CAN1          0x08D

/* Message Object 14 */
#define MO14_ID_TYPE_CAN1     CAN_STANDARD
#define MO14_ID_CAN1          0x08E

/* Message Object 15 */
#define MO15_ID_TYPE_CAN1     CAN_STANDARD
#define MO15_ID_CAN1          0x08F

/* Message Object 16 */
#define MO16_ID_TYPE_CAN1     CAN_EXTENDED
#define MO16_ID_CAN1          0x11111111L

/* Message Object 17 */      
#define MO17_ID_TYPE_CAN1     CAN_EXTENDED
#define MO17_ID_CAN1          0x12222222L

/* Message Object 18 */
#define MO18_ID_TYPE_CAN1     CAN_EXTENDED
#define MO18_ID_CAN1          0x12333333L

/* Message Object 19 */
#define MO19_ID_TYPE_CAN1     CAN_EXTENDED
#define MO19_ID_CAN1          0x12344444L

/* Message Object 20 */
#define MO20_ID_TYPE_CAN1     CAN_EXTENDED
#define MO20_ID_CAN1          0x12345555L

/* Message Object 21 */
#define MO21_ID_TYPE_CAN1     CAN_EXTENDED
#define MO21_ID_CAN1          0x12345666L

/* Message Object 22 */
#define MO22_ID_TYPE_CAN1     CAN_EXTENDED
#define MO22_ID_CAN1          0x12345677L

/* Message Object 23 */
#define MO23_ID_TYPE_CAN1     CAN_EXTENDED
#define MO23_ID_CAN1          0x18888888L

/* Message Object 24 */
#define MO24_ID_TYPE_CAN1     CAN_STANDARD
#define MO24_ID_CAN1          0x123

/* Message Object 25 */
#define MO25_ID_TYPE_CAN1     CAN_STANDARD
#define MO25_ID_CAN1          0x123

/* Message Object 26 */
#define MO26_ID_TYPE_CAN1     CAN_STANDARD
#define MO26_ID_CAN1          0x123

/* Message Object 27 */
#define MO27_ID_TYPE_CAN1     CAN_STANDARD
#define MO27_ID_CAN1          0x123

/* Message Object 28 */
#define MO28_ID_TYPE_CAN1     CAN_STANDARD
#define MO28_ID_CAN1          0x123

/* Message Object 29 */
#define MO29_ID_TYPE_CAN1     CAN_STANDARD
#define MO29_ID_CAN1          0x123

/* Message Object 30 */
#define MO30_ID_TYPE_CAN1     CAN_STANDARD
#define MO30_ID_CAN1          0x123

/* Message Object 31 */
#define MO31_ID_TYPE_CAN1     CAN_STANDARD
#define MO31_ID_CAN1          0x123

/* Message Object 32 */
#define MO32_ID_TYPE_CAN1     CAN_STANDARD
#define MO32_ID_CAN1          0x123

/* Message Object 33 */
#define MO33_ID_TYPE_CAN1     CAN_STANDARD
#define MO33_ID_CAN1          0x123

/* Message Object 34 */
#define MO34_ID_TYPE_CAN1     CAN_STANDARD
#define MO34_ID_CAN1          0x123

/* Message Object 35 */
#define MO35_ID_TYPE_CAN1     CAN_STANDARD
#define MO35_ID_CAN1          0x123

/* Message Object 36 */
#define MO36_ID_TYPE_CAN1     CAN_STANDARD
#define MO36_ID_CAN1          0x123

/* Message Object 37 */
#define MO37_ID_TYPE_CAN1     CAN_STANDARD
#define MO37_ID_CAN1          0x123

/* Message Object 38 */
#define MO38_ID_TYPE_CAN1     CAN_STANDARD
#define MO38_ID_CAN1          0x123

/* Message Object 39 */
#define MO39_ID_TYPE_CAN1     CAN_STANDARD
#define MO39_ID_CAN1          0x123

/* Message Object 40 */
#define MO40_ID_TYPE_CAN1     CAN_STANDARD
#define MO40_ID_CAN1          0x123

/* Message Object 41 */
#define MO41_ID_TYPE_CAN1     CAN_STANDARD
#define MO41_ID_CAN1          0x123

/* Message Object 42 */
#define MO42_ID_TYPE_CAN1     CAN_STANDARD
#define MO42_ID_CAN1          0x123

/* Message Object 43 */
#define MO43_ID_TYPE_CAN1     CAN_STANDARD
#define MO43_ID_CAN1          0x123

/* Message Object 44 */
#define MO44_ID_TYPE_CAN1     CAN_STANDARD
#define MO44_ID_CAN1          0x123

/* Message Object 45 */
#define MO45_ID_TYPE_CAN1     CAN_STANDARD
#define MO45_ID_CAN1          0x123

/* Message Object 46 */
#define MO46_ID_TYPE_CAN1     CAN_STANDARD
#define MO46_ID_CAN1          0x123

/* Message Object 47 */
#define MO47_ID_TYPE_CAN1     CAN_STANDARD
#define MO47_ID_CAN1          0x123

/* Message Object 48 */
#define MO48_ID_TYPE_CAN1     CAN_STANDARD
#define MO48_ID_CAN1          0x123

/* Message Object 49 */
#define MO49_ID_TYPE_CAN1     CAN_STANDARD
#define MO49_ID_CAN1          0x123

/* Message Object 50 */
#define MO50_ID_TYPE_CAN1     CAN_STANDARD
#define MO50_ID_CAN1          0x123

/* Message Object 51 */
#define MO51_ID_TYPE_CAN1     CAN_STANDARD
#define MO51_ID_CAN1          0x123

/* Message Object 52 */
#define MO52_ID_TYPE_CAN1     CAN_STANDARD
#define MO52_ID_CAN1          0x123

/* Message Object 53 */
#define MO53_ID_TYPE_CAN1     CAN_STANDARD
#define MO53_ID_CAN1          0x123

/* Message Object 54 */
#define MO54_ID_TYPE_CAN1     CAN_STANDARD
#define MO54_ID_CAN1          0x123

/* Message Object 55 */
#define MO55_ID_TYPE_CAN1     CAN_STANDARD
#define MO55_ID_CAN1          0x123

/* Message Object 56 */
#define MO56_ID_TYPE_CAN1     CAN_STANDARD
#define MO56_ID_CAN1          0x123

/* Message Object 57 */
#define MO57_ID_TYPE_CAN1     CAN_STANDARD
#define MO57_ID_CAN1          0x123

/* Message Object 58 */
#define MO58_ID_TYPE_CAN1     CAN_STANDARD
#define MO58_ID_CAN1          0x123

/* Message Object 59 */
#define MO59_ID_TYPE_CAN1     CAN_STANDARD
#define MO59_ID_CAN1          0x123

/* Message Object 60 */
#define MO60_ID_TYPE_CAN1     CAN_STANDARD
#define MO60_ID_CAN1          0x123

/* Message Object 61 */
#define MO61_ID_TYPE_CAN1     CAN_STANDARD
#define MO61_ID_CAN1          0x123

/* Message Object 62 */
#define MO62_ID_TYPE_CAN1     CAN_STANDARD
#define MO62_ID_CAN1          0x123

/* Message Object 63 */
#define MO63_ID_TYPE_CAN1     CAN_STANDARD
#define MO63_ID_CAN1          0x123

/* Message Object 64 */
#define MO64_ID_TYPE_CAN1     CAN_STANDARD
#define MO64_ID_CAN1          0x123

/* Message Object 65 */
#define MO65_ID_TYPE_CAN1     CAN_STANDARD
#define MO65_ID_CAN1          0x123

/* Message Object 66 */
#define MO66_ID_TYPE_CAN1     CAN_STANDARD
#define MO66_ID_CAN1          0x123

/* Message Object 67 */
#define MO67_ID_TYPE_CAN1     CAN_STANDARD
#define MO67_ID_CAN1          0x123

/* Message Object 68 */
#define MO68_ID_TYPE_CAN1     CAN_STANDARD
#define MO68_ID_CAN1          0x123

/* Message Object 69 */
#define MO69_ID_TYPE_CAN1     CAN_STANDARD
#define MO69_ID_CAN1          0x123

/* Message Object 70 */
#define MO70_ID_TYPE_CAN1     CAN_STANDARD
#define MO70_ID_CAN1          0x123

/* Message Object 71 */
#define MO71_ID_TYPE_CAN1     CAN_STANDARD
#define MO71_ID_CAN1          0x123

/* Message Object 72 */
#define MO72_ID_TYPE_CAN1     CAN_STANDARD
#define MO72_ID_CAN1          0x123

/* Message Object 73 */
#define MO73_ID_TYPE_CAN1     CAN_STANDARD
#define MO73_ID_CAN1          0x123

/* Message Object 74 */
#define MO74_ID_TYPE_CAN1     CAN_STANDARD
#define MO74_ID_CAN1          0x123

/* Message Object 75 */
#define MO75_ID_TYPE_CAN1     CAN_STANDARD
#define MO75_ID_CAN1          0x123

/* Message Object 76 */
#define MO76_ID_TYPE_CAN1     CAN_STANDARD
#define MO76_ID_CAN1          0x123

/* Message Object 77 */
#define MO77_ID_TYPE_CAN1     CAN_STANDARD
#define MO77_ID_CAN1          0x123

/* Message Object 78 */
#define MO78_ID_TYPE_CAN1     CAN_STANDARD
#define MO78_ID_CAN1          0x123

/* Message Object 79 */
#define MO79_ID_TYPE_CAN1     CAN_STANDARD
#define MO79_ID_CAN1          0x123

/* Message Object 80 */
#define MO80_ID_TYPE_CAN1     CAN_STANDARD
#define MO80_ID_CAN1          0x123

/* Message Object 81 */
#define MO81_ID_TYPE_CAN1     CAN_STANDARD
#define MO81_ID_CAN1          0x123

/* Message Object 82 */
#define MO82_ID_TYPE_CAN1     CAN_STANDARD
#define MO82_ID_CAN1          0x123

/* Message Object 83 */
#define MO83_ID_TYPE_CAN1     CAN_STANDARD
#define MO83_ID_CAN1          0x123

/* Message Object 84 */
#define MO84_ID_TYPE_CAN1     CAN_STANDARD
#define MO84_ID_CAN1          0x123

/* Message Object 85 */
#define MO85_ID_TYPE_CAN1     CAN_STANDARD
#define MO85_ID_CAN1          0x123

/* Message Object 86 */
#define MO86_ID_TYPE_CAN1     CAN_STANDARD
#define MO86_ID_CAN1          0x123

/* Message Object 87 */
#define MO87_ID_TYPE_CAN1     CAN_STANDARD
#define MO87_ID_CAN1          0x123

/* Message Object 88 */
#define MO88_ID_TYPE_CAN1     CAN_STANDARD
#define MO88_ID_CAN1          0x123

/* Message Object 89 */
#define MO89_ID_TYPE_CAN1     CAN_STANDARD
#define MO89_ID_CAN1          0x123

/* Message Object 90 */
#define MO90_ID_TYPE_CAN1     CAN_STANDARD
#define MO90_ID_CAN1          0x123

/* Message Object 91 */
#define MO91_ID_TYPE_CAN1     CAN_STANDARD
#define MO91_ID_CAN1          0x123

/* Message Object 92 */
#define MO92_ID_TYPE_CAN1     CAN_STANDARD
#define MO92_ID_CAN1          0x123

/* Message Object 93 */
#define MO93_ID_TYPE_CAN1     CAN_STANDARD
#define MO93_ID_CAN1          0x123

/* Message Object 94 */
#define MO94_ID_TYPE_CAN1     CAN_STANDARD
#define MO94_ID_CAN1          0x123

/* Message Object 95 */
#define MO95_ID_TYPE_CAN1     CAN_STANDARD
#define MO95_ID_CAN1          0x123

/* Message Object 96 */
#define MO96_ID_TYPE_CAN1     CAN_STANDARD
#define MO96_ID_CAN1          0x123

/* Message Object 97 */
#define MO97_ID_TYPE_CAN1     CAN_STANDARD
#define MO97_ID_CAN1          0x123

/* Message Object 98 */
#define MO98_ID_TYPE_CAN1     CAN_STANDARD
#define MO98_ID_CAN1          0x123

/* Message Object 99 */
#define MO99_ID_TYPE_CAN1     CAN_STANDARD
#define MO99_ID_CAN1          0x123

/* Message Object 100 */
#define MO100_ID_TYPE_CAN1    CAN_STANDARD
#define MO100_ID_CAN1         0x123

/* Message Object 101 */
#define MO101_ID_TYPE_CAN1    CAN_STANDARD
#define MO101_ID_CAN1         0x123

/* Message Object 102 */
#define MO102_ID_TYPE_CAN1    CAN_STANDARD
#define MO102_ID_CAN1         0x123

/* Message Object 103 */
#define MO103_ID_TYPE_CAN1    CAN_STANDARD
#define MO103_ID_CAN1         0x123

/* Message Object 104 */
#define MO104_ID_TYPE_CAN1    CAN_STANDARD
#define MO104_ID_CAN1         0x123

/* Message Object 105 */
#define MO105_ID_TYPE_CAN1    CAN_STANDARD
#define MO105_ID_CAN1         0x123

/* Message Object 106 */
#define MO106_ID_TYPE_CAN1    CAN_STANDARD
#define MO106_ID_CAN1         0x123

/* Message Object 107 */
#define MO107_ID_TYPE_CAN1    CAN_STANDARD
#define MO107_ID_CAN1         0x123

/* Message Object 108 */
#define MO108_ID_TYPE_CAN1    CAN_STANDARD
#define MO108_ID_CAN1         0x123

/* Message Object 109 */
#define MO109_ID_TYPE_CAN1    CAN_STANDARD
#define MO109_ID_CAN1         0x123

/* Message Object 110 */
#define MO110_ID_TYPE_CAN1     CAN_STANDARD
#define MO110_ID_CAN1         0x123

/* Message Object 111 */
#define MO111_ID_TYPE_CAN1    CAN_STANDARD
#define MO111_ID_CAN1         0x123

/* Message Object 112 */
#define MO112_ID_TYPE_CAN1    CAN_STANDARD
#define MO112_ID_CAN1         0x123

/* Message Object 113 */
#define MO113_ID_TYPE_CAN1    CAN_STANDARD
#define MO113_ID_CAN1         0x123

/* Message Object 114 */
#define MO114_ID_TYPE_CAN1    CAN_STANDARD
#define MO114_ID_CAN1         0x123

/* Message Object 115 */
#define MO115_ID_TYPE_CAN1    CAN_STANDARD
#define MO115_ID_CAN1         0x123

/* Message Object 116 */
#define MO116_ID_TYPE_CAN1    CAN_STANDARD
#define MO116_ID_CAN1         0x123

/* Message Object 117 */
#define MO117_ID_TYPE_CAN1    CAN_STANDARD
#define MO117_ID_CAN1         0x123

/* Message Object 118 */
#define MO118_ID_TYPE_CAN1    CAN_STANDARD
#define MO118_ID_CAN1         0x123

/* Message Object 119 */
#define MO119_ID_TYPE_CAN1    CAN_STANDARD
#define MO119_ID_CAN1         0x123

/* Message Object 120 */
#define MO120_ID_TYPE_CAN1    CAN_STANDARD
#define MO120_ID_CAN1         0x123

/* Message Object 121 */
#define MO121_ID_TYPE_CAN1    CAN_STANDARD
#define MO121_ID_CAN1         0x123

/* Message Object 122 */
#define MO122_ID_TYPE_CAN1    CAN_STANDARD
#define MO122_ID_CAN1         0x123

/* Message Object 123 */
#define MO123_ID_TYPE_CAN1    CAN_STANDARD
#define MO123_ID_CAN1         0x123

/* Message Object 124 */
#define MO124_ID_TYPE_CAN1    CAN_STANDARD
#define MO124_ID_CAN1         0x123

/* Message Object 125 */
#define MO125_ID_TYPE_CAN1    CAN_STANDARD
#define MO125_ID_CAN1         0x123

/* Message Object 126 */
#define MO126_ID_TYPE_CAN1    CAN_STANDARD
#define MO126_ID_CAN1         0x123

/* Message Object 127 */
#define MO127_ID_TYPE_CAN1    CAN_STANDARD
#define MO127_ID_CAN1         0x123

/* Message Object 128 */
#define MO128_ID_TYPE_CAN1    CAN_STANDARD
#define MO128_ID_CAN1         0x123

/* Message Object 129 */
#define MO129_ID_TYPE_CAN1    CAN_STANDARD
#define MO129_ID_CAN1         0x123

/* Message Object 130 */
#define MO130_ID_TYPE_CAN1    CAN_STANDARD
#define MO130_ID_CAN1         0x123

/* Message Object 131 */
#define MO131_ID_TYPE_CAN1    CAN_STANDARD
#define MO131_ID_CAN1         0x123

/* Message Object 132 */
#define MO132_ID_TYPE_CAN1    CAN_STANDARD
#define MO132_ID_CAN1         0x123

/* Message Object 133 */
#define MO133_ID_TYPE_CAN1    CAN_STANDARD
#define MO133_ID_CAN1         0x123

/* Message Object 134 */
#define MO134_ID_TYPE_CAN1    CAN_STANDARD
#define MO134_ID_CAN1         0x123

/* Message Object 135 */
#define MO135_ID_TYPE_CAN1    CAN_STANDARD
#define MO135_ID_CAN1         0x123

/* Message Object 136 */
#define MO136_ID_TYPE_CAN1    CAN_STANDARD
#define MO136_ID_CAN1         0x123

/* Message Object 137 */
#define MO137_ID_TYPE_CAN1    CAN_STANDARD
#define MO137_ID_CAN1         0x123

/* Message Object 138 */
#define MO138_ID_TYPE_CAN1    CAN_STANDARD
#define MO138_ID_CAN1         0x123

/* Message Object 139 */
#define MO139_ID_TYPE_CAN1    CAN_STANDARD
#define MO139_ID_CAN1         0x123

/* Message Object 140 */
#define MO140_ID_TYPE_CAN1    CAN_STANDARD
#define MO140_ID_CAN1         0x123

/* Message Object 141 */
#define MO141_ID_TYPE_CAN1    CAN_STANDARD
#define MO141_ID_CAN1         0x123

/* Message Object 142 */
#define MO142_ID_TYPE_CAN1    CAN_STANDARD
#define MO142_ID_CAN1         0x123

/* Message Object 143 */
#define MO143_ID_TYPE_CAN1    CAN_STANDARD
#define MO143_ID_CAN1         0x123

/* Message Object 144 */
#define MO144_ID_TYPE_CAN1    CAN_STANDARD
#define MO144_ID_CAN1         0x123

/* Message Object 145 */
#define MO145_ID_TYPE_CAN1    CAN_STANDARD
#define MO145_ID_CAN1         0x123

/* Message Object 146 */
#define MO146_ID_TYPE_CAN1    CAN_STANDARD
#define MO146_ID_CAN1         0x123

/* Message Object 147 */
#define MO147_ID_TYPE_CAN1    CAN_STANDARD
#define MO147_ID_CAN1         0x123

/* Message Object 148 */
#define MO148_ID_TYPE_CAN1    CAN_STANDARD
#define MO148_ID_CAN1         0x123

/* Message Object 149 */
#define MO149_ID_TYPE_CAN1    CAN_STANDARD
#define MO149_ID_CAN1         0x123

/* Message Object 150 */
#define MO150_ID_TYPE_CAN1    CAN_STANDARD
#define MO150_ID_CAN1         0x123

/* Message Object 151 */
#define MO151_ID_TYPE_CAN1    CAN_STANDARD
#define MO151_ID_CAN1         0x123

/* Message Object 152 */
#define MO152_ID_TYPE_CAN1    CAN_STANDARD
#define MO152_ID_CAN1         0x123

/* Message Object 153 */
#define MO153_ID_TYPE_CAN1    CAN_STANDARD
#define MO153_ID_CAN1         0x123

/* Message Object 154 */
#define MO154_ID_TYPE_CAN1    CAN_STANDARD
#define MO154_ID_CAN1         0x123

/* Message Object 155 */
#define MO155_ID_TYPE_CAN1    CAN_STANDARD
#define MO155_ID_CAN1         0x123

/* Message Object 156 */
#define MO156_ID_TYPE_CAN1    CAN_STANDARD
#define MO156_ID_CAN1         0x123

/* Message Object 157 */
#define MO157_ID_TYPE_CAN1    CAN_STANDARD
#define MO157_ID_CAN1         0x123

/* Message Object 158 */
#define MO158_ID_TYPE_CAN1    CAN_STANDARD
#define MO158_ID_CAN1         0x123

/* Message Object 159 */
#define MO159_ID_TYPE_CAN1    CAN_STANDARD
#define MO159_ID_CAN1         0x123

/* Message Object 160 */
#define MO160_ID_TYPE_CAN1    CAN_STANDARD
#define MO160_ID_CAN1         0x123

/* Message Object 161 */
#define MO161_ID_TYPE_CAN1    CAN_STANDARD
#define MO161_ID_CAN1         0x123

/* Message Object 162 */
#define MO162_ID_TYPE_CAN1    CAN_STANDARD
#define MO162_ID_CAN1         0x123

/* Message Object 163 */
#define MO163_ID_TYPE_CAN1    CAN_STANDARD
#define MO163_ID_CAN1         0x123

/* Message Object 164 */
#define MO164_ID_TYPE_CAN1    CAN_STANDARD
#define MO164_ID_CAN1         0x123

/* Message Object 165 */
#define MO165_ID_TYPE_CAN1    CAN_STANDARD
#define MO165_ID_CAN1         0x123

/* Message Object 166 */
#define MO166_ID_TYPE_CAN1    CAN_STANDARD
#define MO166_ID_CAN1         0x123

/* Message Object 167 */
#define MO167_ID_TYPE_CAN1    CAN_STANDARD
#define MO167_ID_CAN1         0x123

/* Message Object 168 */
#define MO168_ID_TYPE_CAN1    CAN_STANDARD
#define MO168_ID_CAN1         0x123

/* Message Object 169 */
#define MO169_ID_TYPE_CAN1    CAN_STANDARD
#define MO169_ID_CAN1         0x123

/* Message Object 170 */
#define MO170_ID_TYPE_CAN1    CAN_STANDARD
#define MO170_ID_CAN1         0x123

/* Message Object 171 */
#define MO171_ID_TYPE_CAN1    CAN_STANDARD
#define MO171_ID_CAN1         0x123

/* Message Object 172 */
#define MO172_ID_TYPE_CAN1    CAN_STANDARD
#define MO172_ID_CAN1         0x123

/* Message Object 173 */
#define MO173_ID_TYPE_CAN1    CAN_STANDARD
#define MO173_ID_CAN1         0x123

/* Message Object 174 */
#define MO174_ID_TYPE_CAN1    CAN_STANDARD
#define MO174_ID_CAN1         0x123

/* Message Object 175 */
#define MO175_ID_TYPE_CAN1    CAN_STANDARD
#define MO175_ID_CAN1         0x123

/* Message Object 176 */
#define MO176_ID_TYPE_CAN1    CAN_STANDARD
#define MO176_ID_CAN1         0x123

/* Message Object 177 */
#define MO177_ID_TYPE_CAN1    CAN_STANDARD
#define MO177_ID_CAN1         0x123

/* Message Object 178 */
#define MO178_ID_TYPE_CAN1    CAN_STANDARD
#define MO178_ID_CAN1         0x123

/* Message Object 179 */
#define MO179_ID_TYPE_CAN1    CAN_STANDARD
#define MO179_ID_CAN1         0x123

/* Message Object 180 */
#define MO180_ID_TYPE_CAN1    CAN_STANDARD
#define MO180_ID_CAN1         0x123

/* Message Object 181 */
#define MO181_ID_TYPE_CAN1    CAN_STANDARD
#define MO181_ID_CAN1         0x123

/* Message Object 182 */
#define MO182_ID_TYPE_CAN1    CAN_STANDARD
#define MO182_ID_CAN1         0x123

/* Message Object 183 */
#define MO183_ID_TYPE_CAN1    CAN_STANDARD
#define MO183_ID_CAN1         0x123

/* Message Object 184 */
#define MO184_ID_TYPE_CAN1    CAN_STANDARD
#define MO184_ID_CAN1         0x123

/* Message Object 185 */
#define MO185_ID_TYPE_CAN1    CAN_STANDARD
#define MO185_ID_CAN1         0x123

/* Message Object 186 */
#define MO186_ID_TYPE_CAN1    CAN_STANDARD
#define MO186_ID_CAN1         0x123

/* Message Object 187 */
#define MO187_ID_TYPE_CAN1    CAN_STANDARD
#define MO187_ID_CAN1         0x123

/* Message Object 188 */
#define MO188_ID_TYPE_CAN1    CAN_STANDARD
#define MO188_ID_CAN1         0x123

/* Message Object 189 */
#define MO189_ID_TYPE_CAN1    CAN_STANDARD
#define MO189_ID_CAN1         0x123

/* Message Object 190 */
#define MO190_ID_TYPE_CAN1    CAN_STANDARD
#define MO190_ID_CAN1         0x123

/* Message Object 191 */
#define MO191_ID_TYPE_CAN1    CAN_STANDARD
#define MO191_ID_CAN1         0x123

/* Message Object 192 */
#define MO192_ID_TYPE_CAN1    CAN_STANDARD
#define MO192_ID_CAN1         0x123

/* Message Object 193 */
#define MO193_ID_TYPE_CAN1    CAN_STANDARD
#define MO193_ID_CAN1         0x123

/* Message Object 194 */
#define MO194_ID_TYPE_CAN1    CAN_STANDARD
#define MO194_ID_CAN1         0x123

/* Message Object 195 */
#define MO195_ID_TYPE_CAN1    CAN_STANDARD
#define MO195_ID_CAN1         0x123

/* Message Object 196 */
#define MO196_ID_TYPE_CAN1    CAN_STANDARD
#define MO196_ID_CAN1         0x123

/* Message Object 197 */
#define MO197_ID_TYPE_CAN1    CAN_STANDARD
#define MO197_ID_CAN1         0x123

/* Message Object 198 */
#define MO198_ID_TYPE_CAN1    CAN_STANDARD
#define MO198_ID_CAN1         0x123

/* Message Object 199 */
#define MO199_ID_TYPE_CAN1    CAN_STANDARD
#define MO199_ID_CAN1         0x123

/* Message Object 200 */
#define MO200_ID_TYPE_CAN1    CAN_STANDARD
#define MO200_ID_CAN1         0x123

/* Message Object 201 */
#define MO201_ID_TYPE_CAN1    CAN_STANDARD
#define MO201_ID_CAN1         0x123

/* Message Object 202 */
#define MO202_ID_TYPE_CAN1    CAN_STANDARD
#define MO202_ID_CAN1         0x123

/* Message Object 203 */
#define MO203_ID_TYPE_CAN1    CAN_STANDARD
#define MO203_ID_CAN1         0x123

/* Message Object 204 */
#define MO204_ID_TYPE_CAN1    CAN_STANDARD
#define MO204_ID_CAN1         0x123

/* Message Object 205 */
#define MO205_ID_TYPE_CAN1    CAN_STANDARD
#define MO205_ID_CAN1         0x123

/* Message Object 206 */
#define MO206_ID_TYPE_CAN1    CAN_STANDARD
#define MO206_ID_CAN1         0x123

/* Message Object 207 */
#define MO207_ID_TYPE_CAN1    CAN_STANDARD
#define MO207_ID_CAN1         0x123

/* Message Object 208 */
#define MO208_ID_TYPE_CAN1    CAN_STANDARD
#define MO208_ID_CAN1         0x123

/* Message Object 209 */
#define MO209_ID_TYPE_CAN1    CAN_STANDARD
#define MO209_ID_CAN1         0x123

/* Message Object 210 */
#define MO210_ID_TYPE_CAN1    CAN_STANDARD
#define MO210_ID_CAN1         0x123

/* Message Object 211 */
#define MO211_ID_TYPE_CAN1    CAN_STANDARD
#define MO211_ID_CAN1         0x123

/* Message Object 212 */
#define MO212_ID_TYPE_CAN1    CAN_STANDARD
#define MO212_ID_CAN1         0x123

/* Message Object 213 */
#define MO213_ID_TYPE_CAN1    CAN_STANDARD
#define MO213_ID_CAN1         0x123

/* Message Object 214 */
#define MO214_ID_TYPE_CAN1    CAN_STANDARD
#define MO214_ID_CAN1         0x123

/* Message Object 215 */
#define MO215_ID_TYPE_CAN1    CAN_STANDARD
#define MO215_ID_CAN1         0x123

/* Message Object 216 */
#define MO216_ID_TYPE_CAN1    CAN_STANDARD
#define MO216_ID_CAN1         0x123

/* Message Object 217 */
#define MO217_ID_TYPE_CAN1    CAN_STANDARD
#define MO217_ID_CAN1         0x123

/* Message Object 218 */
#define MO218_ID_TYPE_CAN1    CAN_STANDARD
#define MO218_ID_CAN1         0x123

/* Message Object 219 */
#define MO219_ID_TYPE_CAN1    CAN_STANDARD
#define MO219_ID_CAN1         0x123

/* Message Object 220 */
#define MO220_ID_TYPE_CAN1    CAN_STANDARD
#define MO220_ID_CAN1         0x123

/* Message Object 221 */
#define MO221_ID_TYPE_CAN1    CAN_STANDARD
#define MO221_ID_CAN1         0x123

/* Message Object 222 */
#define MO222_ID_TYPE_CAN1    CAN_STANDARD
#define MO222_ID_CAN1         0x123

/* Message Object 223 */
#define MO223_ID_TYPE_CAN1    CAN_STANDARD
#define MO223_ID_CAN1         0x123

/* Message Object 224 */
#define MO224_ID_TYPE_CAN1    CAN_STANDARD
#define MO224_ID_CAN1         0x123

/* Message Object 225 */
#define MO225_ID_TYPE_CAN1    CAN_STANDARD
#define MO225_ID_CAN1         0x123

/* Message Object 226 */
#define MO226_ID_TYPE_CAN1    CAN_STANDARD
#define MO226_ID_CAN1         0x123

/* Message Object 227 */
#define MO227_ID_TYPE_CAN1    CAN_STANDARD
#define MO227_ID_CAN1         0x123

/* Message Object 228 */
#define MO228_ID_TYPE_CAN1    CAN_STANDARD
#define MO228_ID_CAN1         0x123

/* Message Object 229 */
#define MO229_ID_TYPE_CAN1    CAN_STANDARD
#define MO229_ID_CAN1         0x123

/* Message Object 230 */
#define MO230_ID_TYPE_CAN1    CAN_STANDARD
#define MO230_ID_CAN1         0x123

/* Message Object 231 */
#define MO231_ID_TYPE_CAN1    CAN_STANDARD
#define MO231_ID_CAN1         0x123

/* Message Object 232 */
#define MO232_ID_TYPE_CAN1    CAN_STANDARD
#define MO232_ID_CAN1         0x123

/* Message Object 233 */
#define MO233_ID_TYPE_CAN1    CAN_STANDARD
#define MO233_ID_CAN1         0x123

/* Message Object 234 */
#define MO234_ID_TYPE_CAN1    CAN_STANDARD
#define MO234_ID_CAN1         0x123

/* Message Object 235 */
#define MO235_ID_TYPE_CAN1    CAN_STANDARD
#define MO235_ID_CAN1         0x123

/* Message Object 236 */
#define MO236_ID_TYPE_CAN1    CAN_STANDARD
#define MO236_ID_CAN1         0x123

/* Message Object 237 */
#define MO237_ID_TYPE_CAN1    CAN_STANDARD
#define MO237_ID_CAN1         0x123

/* Message Object 238 */
#define MO238_ID_TYPE_CAN1    CAN_STANDARD
#define MO238_ID_CAN1         0x123

/* Message Object 239 */
#define MO239_ID_TYPE_CAN1    CAN_STANDARD
#define MO239_ID_CAN1         0x123

/* Message Object 240 */
#define MO240_ID_TYPE_CAN1    CAN_STANDARD
#define MO240_ID_CAN1         0x123

/* Message Object 241 */
#define MO241_ID_TYPE_CAN1    CAN_STANDARD
#define MO241_ID_CAN1         0x123

/* Message Object 242 */
#define MO242_ID_TYPE_CAN1    CAN_STANDARD
#define MO242_ID_CAN1         0x123

/* Message Object 243 */
#define MO243_ID_TYPE_CAN1    CAN_STANDARD
#define MO243_ID_CAN1         0x123

/* Message Object 244 */
#define MO244_ID_TYPE_CAN1    CAN_STANDARD
#define MO244_ID_CAN1         0x123

/* Message Object 245 */
#define MO245_ID_TYPE_CAN1    CAN_STANDARD
#define MO245_ID_CAN1         0x123

/* Message Object 246 */
#define MO246_ID_TYPE_CAN1    CAN_STANDARD
#define MO246_ID_CAN1         0x123

/* Message Object 247 */
#define MO247_ID_TYPE_CAN1    CAN_STANDARD
#define MO247_ID_CAN1         0x123

/* Message Object 248 */
#define MO248_ID_TYPE_CAN1    CAN_STANDARD
#define MO248_ID_CAN1         0x123

/* Message Object 249 */
#define MO249_ID_TYPE_CAN1    CAN_STANDARD
#define MO249_ID_CAN1         0x123

/* Message Object 250 */
#define MO250_ID_TYPE_CAN1    CAN_STANDARD
#define MO250_ID_CAN1         0x123

/* Message Object 251 */
#define MO251_ID_TYPE_CAN1    CAN_STANDARD
#define MO251_ID_CAN1         0x123

/* Message Object 252 */
#define MO252_ID_TYPE_CAN1    CAN_STANDARD
#define MO252_ID_CAN1         0x123

/* Message Object 253 */
#define MO253_ID_TYPE_CAN1    CAN_STANDARD
#define MO253_ID_CAN1         0x123

/* Message Object 254 */
#define MO254_ID_TYPE_CAN1    CAN_STANDARD
#define MO254_ID_CAN1         0x123

/*****************************************************************************

 *CAN2 Message Objiects

*****************************************************************************/
/* Message Object 0: highest local priority for msCAN module 0 */
#define MO0_ID_TYPE_CAN2      CAN_STANDARD
#define MO0_ID_CAN2                 0x080

/* Message Object 1 */
#define MO1_ID_TYPE_CAN2      CAN_STANDARD
#define MO1_ID_CAN2                 0x081

/* Message Object 2 */
#define MO2_ID_TYPE_CAN2      CAN_STANDARD
#define MO2_ID_CAN2                 0x082

/* Message Object 3 */
#define MO3_ID_TYPE_CAN2      CAN_STANDARD
#define MO3_ID_CAN2                 0x083

/* Message Object 4 */
#define MO4_ID_TYPE_CAN2      CAN_STANDARD
#define MO4_ID_CAN2                 0x084

/* Message Object 5 */
#define MO5_ID_TYPE_CAN2      CAN_STANDARD
#define MO5_ID_CAN2                 0x085

/* Message Object 6 */
#define MO6_ID_TYPE_CAN2      CAN_STANDARD
#define MO6_ID_CAN2                 0x086

/* Message Object 7 */
#define MO7_ID_TYPE_CAN2      CAN_STANDARD
#define MO7_ID_CAN2                 0x087

/* Message Object 8 */
#define MO8_ID_TYPE_CAN2      CAN_STANDARD
#define MO8_ID_CAN2                 0x088

/* Message Object 9 */
#define MO9_ID_TYPE_CAN2      CAN_STANDARD
#define MO9_ID_CAN2                 0x089

/* Message Object 10 */
#define MO10_ID_TYPE_CAN2     CAN_STANDARD
#define MO10_ID_CAN2          0x08A 

/* Message Object 11 */
#define MO11_ID_TYPE_CAN2     CAN_STANDARD
#define MO11_ID_CAN2          0x08B

/* Message Object 12 */
#define MO12_ID_TYPE_CAN2     CAN_STANDARD
#define MO12_ID_CAN2          0x08C

/* Message Object 13 */
#define MO13_ID_TYPE_CAN2     CAN_STANDARD
#define MO13_ID_CAN2          0x08D

/* Message Object 14 */
#define MO14_ID_TYPE_CAN2     CAN_STANDARD
#define MO14_ID_CAN2          0x08E

/* Message Object 15 */
#define MO15_ID_TYPE_CAN2     CAN_STANDARD
#define MO15_ID_CAN2          0x08F

/* Message Object 16 */
#define MO16_ID_TYPE_CAN2     CAN_EXTENDED
#define MO16_ID_CAN2          0x11111111L

/* Message Object 17 */      
#define MO17_ID_TYPE_CAN2     CAN_EXTENDED
#define MO17_ID_CAN2          0x12222222L

/* Message Object 18 */
#define MO18_ID_TYPE_CAN2     CAN_EXTENDED
#define MO18_ID_CAN2          0x12333333L

/* Message Object 19 */
#define MO19_ID_TYPE_CAN2     CAN_EXTENDED
#define MO19_ID_CAN2          0x12344444L

/* Message Object 20 */
#define MO20_ID_TYPE_CAN2     CAN_EXTENDED
#define MO20_ID_CAN2          0x12345555L

/* Message Object 21 */
#define MO21_ID_TYPE_CAN2     CAN_EXTENDED
#define MO21_ID_CAN2          0x12345666L

/* Message Object 22 */
#define MO22_ID_TYPE_CAN2     CAN_EXTENDED
#define MO22_ID_CAN2          0x12345677L

/* Message Object 23 */
#define MO23_ID_TYPE_CAN2     CAN_EXTENDED
#define MO23_ID_CAN2          0x18888888L

/* Message Object 24 */
#define MO24_ID_TYPE_CAN2     CAN_STANDARD
#define MO24_ID_CAN2          0x123

/* Message Object 25 */
#define MO25_ID_TYPE_CAN2     CAN_STANDARD
#define MO25_ID_CAN2          0x123

/* Message Object 26 */
#define MO26_ID_TYPE_CAN2     CAN_STANDARD
#define MO26_ID_CAN2          0x123

/* Message Object 27 */
#define MO27_ID_TYPE_CAN2     CAN_STANDARD
#define MO27_ID_CAN2          0x123

/* Message Object 28 */
#define MO28_ID_TYPE_CAN2     CAN_STANDARD
#define MO28_ID_CAN2          0x123

/* Message Object 29 */
#define MO29_ID_TYPE_CAN2     CAN_STANDARD
#define MO29_ID_CAN2          0x123

/* Message Object 30 */
#define MO30_ID_TYPE_CAN2     CAN_STANDARD
#define MO30_ID_CAN2          0x123

/* Message Object 31 */
#define MO31_ID_TYPE_CAN2     CAN_STANDARD
#define MO31_ID_CAN2          0x123

/* Message Object 32 */
#define MO32_ID_TYPE_CAN2     CAN_STANDARD
#define MO32_ID_CAN2          0x123

/* Message Object 33 */
#define MO33_ID_TYPE_CAN2     CAN_STANDARD
#define MO33_ID_CAN2          0x123

/* Message Object 34 */
#define MO34_ID_TYPE_CAN2     CAN_STANDARD
#define MO34_ID_CAN2          0x123

/* Message Object 35 */
#define MO35_ID_TYPE_CAN2     CAN_STANDARD
#define MO35_ID_CAN2          0x123

/* Message Object 36 */
#define MO36_ID_TYPE_CAN2     CAN_STANDARD
#define MO36_ID_CAN2          0x123

/* Message Object 37 */
#define MO37_ID_TYPE_CAN2     CAN_STANDARD
#define MO37_ID_CAN2          0x123

/* Message Object 38 */
#define MO38_ID_TYPE_CAN2     CAN_STANDARD
#define MO38_ID_CAN2          0x123

/* Message Object 39 */
#define MO39_ID_TYPE_CAN2     CAN_STANDARD
#define MO39_ID_CAN2          0x123

/* Message Object 40 */
#define MO40_ID_TYPE_CAN2     CAN_STANDARD
#define MO40_ID_CAN2          0x123

/* Message Object 41 */
#define MO41_ID_TYPE_CAN2     CAN_STANDARD
#define MO41_ID_CAN2          0x123

/* Message Object 42 */
#define MO42_ID_TYPE_CAN2     CAN_STANDARD
#define MO42_ID_CAN2          0x123

/* Message Object 43 */
#define MO43_ID_TYPE_CAN2     CAN_STANDARD
#define MO43_ID_CAN2          0x123

/* Message Object 44 */
#define MO44_ID_TYPE_CAN2     CAN_STANDARD
#define MO44_ID_CAN2          0x123

/* Message Object 45 */
#define MO45_ID_TYPE_CAN2     CAN_STANDARD
#define MO45_ID_CAN2          0x123

/* Message Object 46 */
#define MO46_ID_TYPE_CAN2     CAN_STANDARD
#define MO46_ID_CAN2          0x123

/* Message Object 47 */
#define MO47_ID_TYPE_CAN2     CAN_STANDARD
#define MO47_ID_CAN2          0x123

/* Message Object 48 */
#define MO48_ID_TYPE_CAN2     CAN_STANDARD
#define MO48_ID_CAN2          0x123

/* Message Object 49 */
#define MO49_ID_TYPE_CAN2     CAN_STANDARD
#define MO49_ID_CAN2          0x123

/* Message Object 50 */
#define MO50_ID_TYPE_CAN2     CAN_STANDARD
#define MO50_ID_CAN2          0x123

/* Message Object 51 */
#define MO51_ID_TYPE_CAN2     CAN_STANDARD
#define MO51_ID_CAN2          0x123

/* Message Object 52 */
#define MO52_ID_TYPE_CAN2     CAN_STANDARD
#define MO52_ID_CAN2          0x123

/* Message Object 53 */
#define MO53_ID_TYPE_CAN2     CAN_STANDARD
#define MO53_ID_CAN2          0x123

/* Message Object 54 */
#define MO54_ID_TYPE_CAN2     CAN_STANDARD
#define MO54_ID_CAN2          0x123

/* Message Object 55 */
#define MO55_ID_TYPE_CAN2     CAN_STANDARD
#define MO55_ID_CAN2          0x123

/* Message Object 56 */
#define MO56_ID_TYPE_CAN2     CAN_STANDARD
#define MO56_ID_CAN2          0x123

/* Message Object 57 */
#define MO57_ID_TYPE_CAN2     CAN_STANDARD
#define MO57_ID_CAN2          0x123

/* Message Object 58 */
#define MO58_ID_TYPE_CAN2     CAN_STANDARD
#define MO58_ID_CAN2          0x123

/* Message Object 59 */
#define MO59_ID_TYPE_CAN2     CAN_STANDARD
#define MO59_ID_CAN2          0x123

/* Message Object 60 */
#define MO60_ID_TYPE_CAN2     CAN_STANDARD
#define MO60_ID_CAN2          0x123

/* Message Object 61 */
#define MO61_ID_TYPE_CAN2     CAN_STANDARD
#define MO61_ID_CAN2          0x123

/* Message Object 62 */
#define MO62_ID_TYPE_CAN2     CAN_STANDARD
#define MO62_ID_CAN2          0x123

/* Message Object 63 */
#define MO63_ID_TYPE_CAN2     CAN_STANDARD
#define MO63_ID_CAN2          0x123

/* Message Object 64 */
#define MO64_ID_TYPE_CAN2     CAN_STANDARD
#define MO64_ID_CAN2          0x123

/* Message Object 65 */
#define MO65_ID_TYPE_CAN2     CAN_STANDARD
#define MO65_ID_CAN2          0x123

/* Message Object 66 */
#define MO66_ID_TYPE_CAN2     CAN_STANDARD
#define MO66_ID_CAN2          0x123

/* Message Object 67 */
#define MO67_ID_TYPE_CAN2     CAN_STANDARD
#define MO67_ID_CAN2          0x123

/* Message Object 68 */
#define MO68_ID_TYPE_CAN2     CAN_STANDARD
#define MO68_ID_CAN2          0x123

/* Message Object 69 */
#define MO69_ID_TYPE_CAN2     CAN_STANDARD
#define MO69_ID_CAN2          0x123

/* Message Object 70 */
#define MO70_ID_TYPE_CAN2     CAN_STANDARD
#define MO70_ID_CAN2          0x123

/* Message Object 71 */
#define MO71_ID_TYPE_CAN2     CAN_STANDARD
#define MO71_ID_CAN2          0x123

/* Message Object 72 */
#define MO72_ID_TYPE_CAN2     CAN_STANDARD
#define MO72_ID_CAN2          0x123

/* Message Object 73 */
#define MO73_ID_TYPE_CAN2     CAN_STANDARD
#define MO73_ID_CAN2          0x123

/* Message Object 74 */
#define MO74_ID_TYPE_CAN2     CAN_STANDARD
#define MO74_ID_CAN2          0x123

/* Message Object 75 */
#define MO75_ID_TYPE_CAN2     CAN_STANDARD
#define MO75_ID_CAN2          0x123

/* Message Object 76 */
#define MO76_ID_TYPE_CAN2     CAN_STANDARD
#define MO76_ID_CAN2          0x123

/* Message Object 77 */
#define MO77_ID_TYPE_CAN2     CAN_STANDARD
#define MO77_ID_CAN2          0x123

/* Message Object 78 */
#define MO78_ID_TYPE_CAN2     CAN_STANDARD
#define MO78_ID_CAN2          0x123

/* Message Object 79 */
#define MO79_ID_TYPE_CAN2     CAN_STANDARD
#define MO79_ID_CAN2          0x123

/* Message Object 80 */
#define MO80_ID_TYPE_CAN2     CAN_STANDARD
#define MO80_ID_CAN2          0x123

/* Message Object 81 */
#define MO81_ID_TYPE_CAN2     CAN_STANDARD
#define MO81_ID_CAN2          0x123

/* Message Object 82 */
#define MO82_ID_TYPE_CAN2     CAN_STANDARD
#define MO82_ID_CAN2          0x123

/* Message Object 83 */
#define MO83_ID_TYPE_CAN2     CAN_STANDARD
#define MO83_ID_CAN2          0x123

/* Message Object 84 */
#define MO84_ID_TYPE_CAN2     CAN_STANDARD
#define MO84_ID_CAN2          0x123

/* Message Object 85 */
#define MO85_ID_TYPE_CAN2     CAN_STANDARD
#define MO85_ID_CAN2          0x123

/* Message Object 86 */
#define MO86_ID_TYPE_CAN2     CAN_STANDARD
#define MO86_ID_CAN2          0x123

/* Message Object 87 */
#define MO87_ID_TYPE_CAN2     CAN_STANDARD
#define MO87_ID_CAN2          0x123

/* Message Object 88 */
#define MO88_ID_TYPE_CAN2     CAN_STANDARD
#define MO88_ID_CAN2          0x123

/* Message Object 89 */
#define MO89_ID_TYPE_CAN2     CAN_STANDARD
#define MO89_ID_CAN2          0x123

/* Message Object 90 */
#define MO90_ID_TYPE_CAN2     CAN_STANDARD
#define MO90_ID_CAN2          0x123

/* Message Object 91 */
#define MO91_ID_TYPE_CAN2     CAN_STANDARD
#define MO91_ID_CAN2          0x123

/* Message Object 92 */
#define MO92_ID_TYPE_CAN2     CAN_STANDARD
#define MO92_ID_CAN2          0x123

/* Message Object 93 */
#define MO93_ID_TYPE_CAN2     CAN_STANDARD
#define MO93_ID_CAN2          0x123

/* Message Object 94 */
#define MO94_ID_TYPE_CAN2     CAN_STANDARD
#define MO94_ID_CAN2          0x123

/* Message Object 95 */
#define MO95_ID_TYPE_CAN2     CAN_STANDARD
#define MO95_ID_CAN2          0x123

/* Message Object 96 */
#define MO96_ID_TYPE_CAN2     CAN_STANDARD
#define MO96_ID_CAN2          0x123

/* Message Object 97 */
#define MO97_ID_TYPE_CAN2     CAN_STANDARD
#define MO97_ID_CAN2          0x123

/* Message Object 98 */
#define MO98_ID_TYPE_CAN2     CAN_STANDARD
#define MO98_ID_CAN2          0x123

/* Message Object 99 */
#define MO99_ID_TYPE_CAN2     CAN_STANDARD
#define MO99_ID_CAN2          0x123

/* Message Object 100 */
#define MO100_ID_TYPE_CAN2    CAN_STANDARD
#define MO100_ID_CAN2         0x123

/* Message Object 101 */
#define MO101_ID_TYPE_CAN2    CAN_STANDARD
#define MO101_ID_CAN2         0x123

/* Message Object 102 */
#define MO102_ID_TYPE_CAN2    CAN_STANDARD
#define MO102_ID_CAN2         0x123

/* Message Object 103 */
#define MO103_ID_TYPE_CAN2    CAN_STANDARD
#define MO103_ID_CAN2         0x123

/* Message Object 104 */
#define MO104_ID_TYPE_CAN2    CAN_STANDARD
#define MO104_ID_CAN2         0x123

/* Message Object 105 */
#define MO105_ID_TYPE_CAN2    CAN_STANDARD
#define MO105_ID_CAN2         0x123

/* Message Object 106 */
#define MO106_ID_TYPE_CAN2    CAN_STANDARD
#define MO106_ID_CAN2         0x123

/* Message Object 107 */
#define MO107_ID_TYPE_CAN2    CAN_STANDARD
#define MO107_ID_CAN2         0x123

/* Message Object 108 */
#define MO108_ID_TYPE_CAN2    CAN_STANDARD
#define MO108_ID_CAN2         0x123

/* Message Object 109 */
#define MO109_ID_TYPE_CAN2    CAN_STANDARD
#define MO109_ID_CAN2         0x123

/* Message Object 110 */
#define MO110_ID_TYPE_CAN2     CAN_STANDARD
#define MO110_ID_CAN2         0x123

/* Message Object 111 */
#define MO111_ID_TYPE_CAN2    CAN_STANDARD
#define MO111_ID_CAN2         0x123

/* Message Object 112 */
#define MO112_ID_TYPE_CAN2    CAN_STANDARD
#define MO112_ID_CAN2         0x123

/* Message Object 113 */
#define MO113_ID_TYPE_CAN2    CAN_STANDARD
#define MO113_ID_CAN2         0x123

/* Message Object 114 */
#define MO114_ID_TYPE_CAN2    CAN_STANDARD
#define MO114_ID_CAN2         0x123

/* Message Object 115 */
#define MO115_ID_TYPE_CAN2    CAN_STANDARD
#define MO115_ID_CAN2         0x123

/* Message Object 116 */
#define MO116_ID_TYPE_CAN2    CAN_STANDARD
#define MO116_ID_CAN2         0x123

/* Message Object 117 */
#define MO117_ID_TYPE_CAN2    CAN_STANDARD
#define MO117_ID_CAN2         0x123

/* Message Object 118 */
#define MO118_ID_TYPE_CAN2    CAN_STANDARD
#define MO118_ID_CAN2         0x123

/* Message Object 119 */
#define MO119_ID_TYPE_CAN2    CAN_STANDARD
#define MO119_ID_CAN2         0x123

/* Message Object 120 */
#define MO120_ID_TYPE_CAN2    CAN_STANDARD
#define MO120_ID_CAN2         0x123

/* Message Object 121 */
#define MO121_ID_TYPE_CAN2    CAN_STANDARD
#define MO121_ID_CAN2         0x123

/* Message Object 122 */
#define MO122_ID_TYPE_CAN2    CAN_STANDARD
#define MO122_ID_CAN2         0x123

/* Message Object 123 */
#define MO123_ID_TYPE_CAN2    CAN_STANDARD
#define MO123_ID_CAN2         0x123

/* Message Object 124 */
#define MO124_ID_TYPE_CAN2    CAN_STANDARD
#define MO124_ID_CAN2         0x123

/* Message Object 125 */
#define MO125_ID_TYPE_CAN2    CAN_STANDARD
#define MO125_ID_CAN2         0x123

/* Message Object 126 */
#define MO126_ID_TYPE_CAN2    CAN_STANDARD
#define MO126_ID_CAN2         0x123

/* Message Object 127 */
#define MO127_ID_TYPE_CAN2    CAN_STANDARD
#define MO127_ID_CAN2         0x123

/* Message Object 128 */
#define MO128_ID_TYPE_CAN2    CAN_STANDARD
#define MO128_ID_CAN2         0x123

/* Message Object 129 */
#define MO129_ID_TYPE_CAN2    CAN_STANDARD
#define MO129_ID_CAN2         0x123

/* Message Object 130 */
#define MO130_ID_TYPE_CAN2    CAN_STANDARD
#define MO130_ID_CAN2         0x123

/* Message Object 131 */
#define MO131_ID_TYPE_CAN2    CAN_STANDARD
#define MO131_ID_CAN2         0x123

/* Message Object 132 */
#define MO132_ID_TYPE_CAN2    CAN_STANDARD
#define MO132_ID_CAN2         0x123

/* Message Object 133 */
#define MO133_ID_TYPE_CAN2    CAN_STANDARD
#define MO133_ID_CAN2         0x123

/* Message Object 134 */
#define MO134_ID_TYPE_CAN2    CAN_STANDARD
#define MO134_ID_CAN2         0x123

/* Message Object 135 */
#define MO135_ID_TYPE_CAN2    CAN_STANDARD
#define MO135_ID_CAN2         0x123

/* Message Object 136 */
#define MO136_ID_TYPE_CAN2    CAN_STANDARD
#define MO136_ID_CAN2         0x123

/* Message Object 137 */
#define MO137_ID_TYPE_CAN2    CAN_STANDARD
#define MO137_ID_CAN2         0x123

/* Message Object 138 */
#define MO138_ID_TYPE_CAN2    CAN_STANDARD
#define MO138_ID_CAN2         0x123

/* Message Object 139 */
#define MO139_ID_TYPE_CAN2    CAN_STANDARD
#define MO139_ID_CAN2         0x123

/* Message Object 140 */
#define MO140_ID_TYPE_CAN2    CAN_STANDARD
#define MO140_ID_CAN2         0x123

/* Message Object 141 */
#define MO141_ID_TYPE_CAN2    CAN_STANDARD
#define MO141_ID_CAN2         0x123

/* Message Object 142 */
#define MO142_ID_TYPE_CAN2    CAN_STANDARD
#define MO142_ID_CAN2         0x123

/* Message Object 143 */
#define MO143_ID_TYPE_CAN2    CAN_STANDARD
#define MO143_ID_CAN2         0x123

/* Message Object 144 */
#define MO144_ID_TYPE_CAN2    CAN_STANDARD
#define MO144_ID_CAN2         0x123

/* Message Object 145 */
#define MO145_ID_TYPE_CAN2    CAN_STANDARD
#define MO145_ID_CAN2         0x123

/* Message Object 146 */
#define MO146_ID_TYPE_CAN2    CAN_STANDARD
#define MO146_ID_CAN2         0x123

/* Message Object 147 */
#define MO147_ID_TYPE_CAN2    CAN_STANDARD
#define MO147_ID_CAN2         0x123

/* Message Object 148 */
#define MO148_ID_TYPE_CAN2    CAN_STANDARD
#define MO148_ID_CAN2         0x123

/* Message Object 149 */
#define MO149_ID_TYPE_CAN2    CAN_STANDARD
#define MO149_ID_CAN2         0x123

/* Message Object 150 */
#define MO150_ID_TYPE_CAN2    CAN_STANDARD
#define MO150_ID_CAN2         0x123

/* Message Object 151 */
#define MO151_ID_TYPE_CAN2    CAN_STANDARD
#define MO151_ID_CAN2         0x123

/* Message Object 152 */
#define MO152_ID_TYPE_CAN2    CAN_STANDARD
#define MO152_ID_CAN2         0x123

/* Message Object 153 */
#define MO153_ID_TYPE_CAN2    CAN_STANDARD
#define MO153_ID_CAN2         0x123

/* Message Object 154 */
#define MO154_ID_TYPE_CAN2    CAN_STANDARD
#define MO154_ID_CAN2         0x123

/* Message Object 155 */
#define MO155_ID_TYPE_CAN2    CAN_STANDARD
#define MO155_ID_CAN2         0x123

/* Message Object 156 */
#define MO156_ID_TYPE_CAN2    CAN_STANDARD
#define MO156_ID_CAN2         0x123

/* Message Object 157 */
#define MO157_ID_TYPE_CAN2    CAN_STANDARD
#define MO157_ID_CAN2         0x123

/* Message Object 158 */
#define MO158_ID_TYPE_CAN2    CAN_STANDARD
#define MO158_ID_CAN2         0x123

/* Message Object 159 */
#define MO159_ID_TYPE_CAN2    CAN_STANDARD
#define MO159_ID_CAN2         0x123

/* Message Object 160 */
#define MO160_ID_TYPE_CAN2    CAN_STANDARD
#define MO160_ID_CAN2         0x123

/* Message Object 161 */
#define MO161_ID_TYPE_CAN2    CAN_STANDARD
#define MO161_ID_CAN2         0x123

/* Message Object 162 */
#define MO162_ID_TYPE_CAN2    CAN_STANDARD
#define MO162_ID_CAN2         0x123

/* Message Object 163 */
#define MO163_ID_TYPE_CAN2    CAN_STANDARD
#define MO163_ID_CAN2         0x123

/* Message Object 164 */
#define MO164_ID_TYPE_CAN2    CAN_STANDARD
#define MO164_ID_CAN2         0x123

/* Message Object 165 */
#define MO165_ID_TYPE_CAN2    CAN_STANDARD
#define MO165_ID_CAN2         0x123

/* Message Object 166 */
#define MO166_ID_TYPE_CAN2    CAN_STANDARD
#define MO166_ID_CAN2         0x123

/* Message Object 167 */
#define MO167_ID_TYPE_CAN2    CAN_STANDARD
#define MO167_ID_CAN2         0x123

/* Message Object 168 */
#define MO168_ID_TYPE_CAN2    CAN_STANDARD
#define MO168_ID_CAN2         0x123

/* Message Object 169 */
#define MO169_ID_TYPE_CAN2    CAN_STANDARD
#define MO169_ID_CAN2         0x123

/* Message Object 170 */
#define MO170_ID_TYPE_CAN2    CAN_STANDARD
#define MO170_ID_CAN2         0x123

/* Message Object 171 */
#define MO171_ID_TYPE_CAN2    CAN_STANDARD
#define MO171_ID_CAN2         0x123

/* Message Object 172 */
#define MO172_ID_TYPE_CAN2    CAN_STANDARD
#define MO172_ID_CAN2         0x123

/* Message Object 173 */
#define MO173_ID_TYPE_CAN2    CAN_STANDARD
#define MO173_ID_CAN2         0x123

/* Message Object 174 */
#define MO174_ID_TYPE_CAN2    CAN_STANDARD
#define MO174_ID_CAN2         0x123

/* Message Object 175 */
#define MO175_ID_TYPE_CAN2    CAN_STANDARD
#define MO175_ID_CAN2         0x123

/* Message Object 176 */
#define MO176_ID_TYPE_CAN2    CAN_STANDARD
#define MO176_ID_CAN2         0x123

/* Message Object 177 */
#define MO177_ID_TYPE_CAN2    CAN_STANDARD
#define MO177_ID_CAN2         0x123

/* Message Object 178 */
#define MO178_ID_TYPE_CAN2    CAN_STANDARD
#define MO178_ID_CAN2         0x123

/* Message Object 179 */
#define MO179_ID_TYPE_CAN2    CAN_STANDARD
#define MO179_ID_CAN2         0x123

/* Message Object 180 */
#define MO180_ID_TYPE_CAN2    CAN_STANDARD
#define MO180_ID_CAN2         0x123

/* Message Object 181 */
#define MO181_ID_TYPE_CAN2    CAN_STANDARD
#define MO181_ID_CAN2         0x123

/* Message Object 182 */
#define MO182_ID_TYPE_CAN2    CAN_STANDARD
#define MO182_ID_CAN2         0x123

/* Message Object 183 */
#define MO183_ID_TYPE_CAN2    CAN_STANDARD
#define MO183_ID_CAN2         0x123

/* Message Object 184 */
#define MO184_ID_TYPE_CAN2    CAN_STANDARD
#define MO184_ID_CAN2         0x123

/* Message Object 185 */
#define MO185_ID_TYPE_CAN2    CAN_STANDARD
#define MO185_ID_CAN2         0x123

/* Message Object 186 */
#define MO186_ID_TYPE_CAN2    CAN_STANDARD
#define MO186_ID_CAN2         0x123

/* Message Object 187 */
#define MO187_ID_TYPE_CAN2    CAN_STANDARD
#define MO187_ID_CAN2         0x123

/* Message Object 188 */
#define MO188_ID_TYPE_CAN2    CAN_STANDARD
#define MO188_ID_CAN2         0x123

/* Message Object 189 */
#define MO189_ID_TYPE_CAN2    CAN_STANDARD
#define MO189_ID_CAN2         0x123

/* Message Object 190 */
#define MO190_ID_TYPE_CAN2    CAN_STANDARD
#define MO190_ID_CAN2         0x123

/* Message Object 191 */
#define MO191_ID_TYPE_CAN2    CAN_STANDARD
#define MO191_ID_CAN2         0x123

/* Message Object 192 */
#define MO192_ID_TYPE_CAN2    CAN_STANDARD
#define MO192_ID_CAN2         0x123

/* Message Object 193 */
#define MO193_ID_TYPE_CAN2    CAN_STANDARD
#define MO193_ID_CAN2         0x123

/* Message Object 194 */
#define MO194_ID_TYPE_CAN2    CAN_STANDARD
#define MO194_ID_CAN2         0x123

/* Message Object 195 */
#define MO195_ID_TYPE_CAN2    CAN_STANDARD
#define MO195_ID_CAN2         0x123

/* Message Object 196 */
#define MO196_ID_TYPE_CAN2    CAN_STANDARD
#define MO196_ID_CAN2         0x123

/* Message Object 197 */
#define MO197_ID_TYPE_CAN2    CAN_STANDARD
#define MO197_ID_CAN2         0x123

/* Message Object 198 */
#define MO198_ID_TYPE_CAN2    CAN_STANDARD
#define MO198_ID_CAN2         0x123

/* Message Object 199 */
#define MO199_ID_TYPE_CAN2    CAN_STANDARD
#define MO199_ID_CAN2         0x123

/* Message Object 200 */
#define MO200_ID_TYPE_CAN2    CAN_STANDARD
#define MO200_ID_CAN2         0x123

/* Message Object 201 */
#define MO201_ID_TYPE_CAN2    CAN_STANDARD
#define MO201_ID_CAN2         0x123

/* Message Object 202 */
#define MO202_ID_TYPE_CAN2    CAN_STANDARD
#define MO202_ID_CAN2         0x123

/* Message Object 203 */
#define MO203_ID_TYPE_CAN2    CAN_STANDARD
#define MO203_ID_CAN2         0x123

/* Message Object 204 */
#define MO204_ID_TYPE_CAN2    CAN_STANDARD
#define MO204_ID_CAN2         0x123

/* Message Object 205 */
#define MO205_ID_TYPE_CAN2    CAN_STANDARD
#define MO205_ID_CAN2         0x123

/* Message Object 206 */
#define MO206_ID_TYPE_CAN2    CAN_STANDARD
#define MO206_ID_CAN2         0x123

/* Message Object 207 */
#define MO207_ID_TYPE_CAN2    CAN_STANDARD
#define MO207_ID_CAN2         0x123

/* Message Object 208 */
#define MO208_ID_TYPE_CAN2    CAN_STANDARD
#define MO208_ID_CAN2         0x123

/* Message Object 209 */
#define MO209_ID_TYPE_CAN2    CAN_STANDARD
#define MO209_ID_CAN2         0x123

/* Message Object 210 */
#define MO210_ID_TYPE_CAN2    CAN_STANDARD
#define MO210_ID_CAN2         0x123

/* Message Object 211 */
#define MO211_ID_TYPE_CAN2    CAN_STANDARD
#define MO211_ID_CAN2         0x123

/* Message Object 212 */
#define MO212_ID_TYPE_CAN2    CAN_STANDARD
#define MO212_ID_CAN2         0x123

/* Message Object 213 */
#define MO213_ID_TYPE_CAN2    CAN_STANDARD
#define MO213_ID_CAN2         0x123

/* Message Object 214 */
#define MO214_ID_TYPE_CAN2    CAN_STANDARD
#define MO214_ID_CAN2         0x123

/* Message Object 215 */
#define MO215_ID_TYPE_CAN2    CAN_STANDARD
#define MO215_ID_CAN2         0x123

/* Message Object 216 */
#define MO216_ID_TYPE_CAN2    CAN_STANDARD
#define MO216_ID_CAN2         0x123

/* Message Object 217 */
#define MO217_ID_TYPE_CAN2    CAN_STANDARD
#define MO217_ID_CAN2         0x123

/* Message Object 218 */
#define MO218_ID_TYPE_CAN2    CAN_STANDARD
#define MO218_ID_CAN2         0x123

/* Message Object 219 */
#define MO219_ID_TYPE_CAN2    CAN_STANDARD
#define MO219_ID_CAN2         0x123

/* Message Object 220 */
#define MO220_ID_TYPE_CAN2    CAN_STANDARD
#define MO220_ID_CAN2         0x123

/* Message Object 221 */
#define MO221_ID_TYPE_CAN2    CAN_STANDARD
#define MO221_ID_CAN2         0x123

/* Message Object 222 */
#define MO222_ID_TYPE_CAN2    CAN_STANDARD
#define MO222_ID_CAN2         0x123

/* Message Object 223 */
#define MO223_ID_TYPE_CAN2    CAN_STANDARD
#define MO223_ID_CAN2         0x123

/* Message Object 224 */
#define MO224_ID_TYPE_CAN2    CAN_STANDARD
#define MO224_ID_CAN2         0x123

/* Message Object 225 */
#define MO225_ID_TYPE_CAN2    CAN_STANDARD
#define MO225_ID_CAN2         0x123

/* Message Object 226 */
#define MO226_ID_TYPE_CAN2    CAN_STANDARD
#define MO226_ID_CAN2         0x123

/* Message Object 227 */
#define MO227_ID_TYPE_CAN2    CAN_STANDARD
#define MO227_ID_CAN2         0x123

/* Message Object 228 */
#define MO228_ID_TYPE_CAN2    CAN_STANDARD
#define MO228_ID_CAN2         0x123

/* Message Object 229 */
#define MO229_ID_TYPE_CAN2    CAN_STANDARD
#define MO229_ID_CAN2         0x123

/* Message Object 230 */
#define MO230_ID_TYPE_CAN2    CAN_STANDARD
#define MO230_ID_CAN2         0x123

/* Message Object 231 */
#define MO231_ID_TYPE_CAN2    CAN_STANDARD
#define MO231_ID_CAN2         0x123

/* Message Object 232 */
#define MO232_ID_TYPE_CAN2    CAN_STANDARD
#define MO232_ID_CAN2         0x123

/* Message Object 233 */
#define MO233_ID_TYPE_CAN2    CAN_STANDARD
#define MO233_ID_CAN2         0x123

/* Message Object 234 */
#define MO234_ID_TYPE_CAN2    CAN_STANDARD
#define MO234_ID_CAN2         0x123

/* Message Object 235 */
#define MO235_ID_TYPE_CAN2    CAN_STANDARD
#define MO235_ID_CAN2         0x123

/* Message Object 236 */
#define MO236_ID_TYPE_CAN2    CAN_STANDARD
#define MO236_ID_CAN2         0x123

/* Message Object 237 */
#define MO237_ID_TYPE_CAN2    CAN_STANDARD
#define MO237_ID_CAN2         0x123

/* Message Object 238 */
#define MO238_ID_TYPE_CAN2    CAN_STANDARD
#define MO238_ID_CAN2         0x123

/* Message Object 239 */
#define MO239_ID_TYPE_CAN2    CAN_STANDARD
#define MO239_ID_CAN2         0x123

/* Message Object 240 */
#define MO240_ID_TYPE_CAN2    CAN_STANDARD
#define MO240_ID_CAN2         0x123

/* Message Object 241 */
#define MO241_ID_TYPE_CAN2    CAN_STANDARD
#define MO241_ID_CAN2         0x123

/* Message Object 242 */
#define MO242_ID_TYPE_CAN2    CAN_STANDARD
#define MO242_ID_CAN2         0x123

/* Message Object 243 */
#define MO243_ID_TYPE_CAN2    CAN_STANDARD
#define MO243_ID_CAN2         0x123

/* Message Object 244 */
#define MO244_ID_TYPE_CAN2    CAN_STANDARD
#define MO244_ID_CAN2         0x123

/* Message Object 245 */
#define MO245_ID_TYPE_CAN2    CAN_STANDARD
#define MO245_ID_CAN2         0x123

/* Message Object 246 */
#define MO246_ID_TYPE_CAN2    CAN_STANDARD
#define MO246_ID_CAN2         0x123

/* Message Object 247 */
#define MO247_ID_TYPE_CAN2    CAN_STANDARD
#define MO247_ID_CAN2         0x123

/* Message Object 248 */
#define MO248_ID_TYPE_CAN2    CAN_STANDARD
#define MO248_ID_CAN2         0x123

/* Message Object 249 */
#define MO249_ID_TYPE_CAN2    CAN_STANDARD
#define MO249_ID_CAN2         0x123

/* Message Object 250 */
#define MO250_ID_TYPE_CAN2    CAN_STANDARD
#define MO250_ID_CAN2         0x123

/* Message Object 251 */
#define MO251_ID_TYPE_CAN2    CAN_STANDARD
#define MO251_ID_CAN2         0x123

/* Message Object 252 */
#define MO252_ID_TYPE_CAN2    CAN_STANDARD
#define MO252_ID_CAN2         0x123

/* Message Object 253 */
#define MO253_ID_TYPE_CAN2    CAN_STANDARD
#define MO253_ID_CAN2         0x123

/* Message Object 254 */
#define MO254_ID_TYPE_CAN2    CAN_STANDARD
#define MO254_ID_CAN2         0x123

/*****************************************************************************

 *CAN3 Message Objiects

*****************************************************************************/
/* Message Object 0: highest local priority for msCAN module 0 */
#define MO0_ID_TYPE_CAN3      CAN_STANDARD
#define MO0_ID_CAN3           0x080

/* Message Object 1 */
#define MO1_ID_TYPE_CAN3      CAN_STANDARD
#define MO1_ID_CAN3           0x081

/* Message Object 2 */
#define MO2_ID_TYPE_CAN3      CAN_STANDARD
#define MO2_ID_CAN3           0x082

/* Message Object 3 */
#define MO3_ID_TYPE_CAN3      CAN_STANDARD
#define MO3_ID_CAN3           0x083

/* Message Object 4 */
#define MO4_ID_TYPE_CAN3      CAN_STANDARD
#define MO4_ID_CAN3           0x084

/* Message Object 5 */
#define MO5_ID_TYPE_CAN3      CAN_STANDARD
#define MO5_ID_CAN3           0x085

/* Message Object 6 */
#define MO6_ID_TYPE_CAN3      CAN_STANDARD
#define MO6_ID_CAN3           0x086

/* Message Object 7 */
#define MO7_ID_TYPE_CAN3      CAN_STANDARD
#define MO7_ID_CAN3           0x087

/* Message Object 8 */
#define MO8_ID_TYPE_CAN3      CAN_STANDARD
#define MO8_ID_CAN3           0x088

/* Message Object 9 */
#define MO9_ID_TYPE_CAN3      CAN_STANDARD
#define MO9_ID_CAN3           0x089

/* Message Object 10 */
#define MO10_ID_TYPE_CAN3     CAN_STANDARD
#define MO10_ID_CAN3          0x08A 

/* Message Object 11 */
#define MO11_ID_TYPE_CAN3     CAN_STANDARD
#define MO11_ID_CAN3          0x08B

/* Message Object 12 */
#define MO12_ID_TYPE_CAN3     CAN_STANDARD
#define MO12_ID_CAN3          0x08C

/* Message Object 13 */
#define MO13_ID_TYPE_CAN3     CAN_STANDARD
#define MO13_ID_CAN3          0x08D

/* Message Object 14 */
#define MO14_ID_TYPE_CAN3     CAN_STANDARD
#define MO14_ID_CAN3          0x08E

/* Message Object 15 */
#define MO15_ID_TYPE_CAN3     CAN_STANDARD
#define MO15_ID_CAN3          0x08F

/* Message Object 16 */
#define MO16_ID_TYPE_CAN3     CAN_EXTENDED
#define MO16_ID_CAN3          0x11111111L

/* Message Object 17 */      
#define MO17_ID_TYPE_CAN3     CAN_EXTENDED
#define MO17_ID_CAN3          0x12222222L

/* Message Object 18 */
#define MO18_ID_TYPE_CAN3     CAN_EXTENDED
#define MO18_ID_CAN3          0x12333333L

/* Message Object 19 */
#define MO19_ID_TYPE_CAN3     CAN_EXTENDED
#define MO19_ID_CAN3          0x12344444L

/* Message Object 20 */
#define MO20_ID_TYPE_CAN3     CAN_EXTENDED
#define MO20_ID_CAN3          0x12345555L

/* Message Object 21 */
#define MO21_ID_TYPE_CAN3     CAN_EXTENDED
#define MO21_ID_CAN3          0x12345666L

/* Message Object 22 */
#define MO22_ID_TYPE_CAN3     CAN_EXTENDED
#define MO22_ID_CAN3          0x12345677L

/* Message Object 23 */
#define MO23_ID_TYPE_CAN3     CAN_EXTENDED
#define MO23_ID_CAN3          0x18888888L

/* Message Object 24 */
#define MO24_ID_TYPE_CAN3     CAN_STANDARD
#define MO24_ID_CAN3          0x123

/* Message Object 25 */
#define MO25_ID_TYPE_CAN3     CAN_STANDARD
#define MO25_ID_CAN3          0x123

/* Message Object 26 */
#define MO26_ID_TYPE_CAN3     CAN_STANDARD
#define MO26_ID_CAN3          0x123

/* Message Object 27 */
#define MO27_ID_TYPE_CAN3     CAN_STANDARD
#define MO27_ID_CAN3          0x123

/* Message Object 28 */
#define MO28_ID_TYPE_CAN3     CAN_STANDARD
#define MO28_ID_CAN3          0x123

/* Message Object 29 */
#define MO29_ID_TYPE_CAN3     CAN_STANDARD
#define MO29_ID_CAN3          0x123

/* Message Object 30 */
#define MO30_ID_TYPE_CAN3     CAN_STANDARD
#define MO30_ID_CAN3          0x123

/* Message Object 31 */
#define MO31_ID_TYPE_CAN3     CAN_STANDARD
#define MO31_ID_CAN3          0x123

/* Message Object 32 */
#define MO32_ID_TYPE_CAN3     CAN_STANDARD
#define MO32_ID_CAN3          0x123

/* Message Object 33 */
#define MO33_ID_TYPE_CAN3     CAN_STANDARD
#define MO33_ID_CAN3          0x123

/* Message Object 34 */
#define MO34_ID_TYPE_CAN3     CAN_STANDARD
#define MO34_ID_CAN3          0x123

/* Message Object 35 */
#define MO35_ID_TYPE_CAN3     CAN_STANDARD
#define MO35_ID_CAN3          0x123

/* Message Object 36 */
#define MO36_ID_TYPE_CAN3     CAN_STANDARD
#define MO36_ID_CAN3          0x123

/* Message Object 37 */
#define MO37_ID_TYPE_CAN3     CAN_STANDARD
#define MO37_ID_CAN3          0x123

/* Message Object 38 */
#define MO38_ID_TYPE_CAN3     CAN_STANDARD
#define MO38_ID_CAN3          0x123

/* Message Object 39 */
#define MO39_ID_TYPE_CAN3     CAN_STANDARD
#define MO39_ID_CAN3          0x123

/* Message Object 40 */
#define MO40_ID_TYPE_CAN3     CAN_STANDARD
#define MO40_ID_CAN3          0x123

/* Message Object 41 */
#define MO41_ID_TYPE_CAN3     CAN_STANDARD
#define MO41_ID_CAN3          0x123

/* Message Object 42 */
#define MO42_ID_TYPE_CAN3     CAN_STANDARD
#define MO42_ID_CAN3          0x123

/* Message Object 43 */
#define MO43_ID_TYPE_CAN3     CAN_STANDARD
#define MO43_ID_CAN3          0x123

/* Message Object 44 */
#define MO44_ID_TYPE_CAN3     CAN_STANDARD
#define MO44_ID_CAN3          0x123

/* Message Object 45 */
#define MO45_ID_TYPE_CAN3     CAN_STANDARD
#define MO45_ID_CAN3          0x123

/* Message Object 46 */
#define MO46_ID_TYPE_CAN3     CAN_STANDARD
#define MO46_ID_CAN3          0x123

/* Message Object 47 */
#define MO47_ID_TYPE_CAN3     CAN_STANDARD
#define MO47_ID_CAN3          0x123

/* Message Object 48 */
#define MO48_ID_TYPE_CAN3     CAN_STANDARD
#define MO48_ID_CAN3          0x123

/* Message Object 49 */
#define MO49_ID_TYPE_CAN3     CAN_STANDARD
#define MO49_ID_CAN3          0x123

/* Message Object 50 */
#define MO50_ID_TYPE_CAN3     CAN_STANDARD
#define MO50_ID_CAN3          0x123

/* Message Object 51 */
#define MO51_ID_TYPE_CAN3     CAN_STANDARD
#define MO51_ID_CAN3          0x123

/* Message Object 52 */
#define MO52_ID_TYPE_CAN3     CAN_STANDARD
#define MO52_ID_CAN3          0x123

/* Message Object 53 */
#define MO53_ID_TYPE_CAN3     CAN_STANDARD
#define MO53_ID_CAN3          0x123

/* Message Object 54 */
#define MO54_ID_TYPE_CAN3     CAN_STANDARD
#define MO54_ID_CAN3          0x123

/* Message Object 55 */
#define MO55_ID_TYPE_CAN3     CAN_STANDARD
#define MO55_ID_CAN3          0x123

/* Message Object 56 */
#define MO56_ID_TYPE_CAN3     CAN_STANDARD
#define MO56_ID_CAN3          0x123

/* Message Object 57 */
#define MO57_ID_TYPE_CAN3     CAN_STANDARD
#define MO57_ID_CAN3          0x123

/* Message Object 58 */
#define MO58_ID_TYPE_CAN3     CAN_STANDARD
#define MO58_ID_CAN3          0x123

/* Message Object 59 */
#define MO59_ID_TYPE_CAN3     CAN_STANDARD
#define MO59_ID_CAN3          0x123

/* Message Object 60 */
#define MO60_ID_TYPE_CAN3     CAN_STANDARD
#define MO60_ID_CAN3          0x123

/* Message Object 61 */
#define MO61_ID_TYPE_CAN3     CAN_STANDARD
#define MO61_ID_CAN3          0x123

/* Message Object 62 */
#define MO62_ID_TYPE_CAN3     CAN_STANDARD
#define MO62_ID_CAN3          0x123

/* Message Object 63 */
#define MO63_ID_TYPE_CAN3     CAN_STANDARD
#define MO63_ID_CAN3          0x123

/* Message Object 64 */
#define MO64_ID_TYPE_CAN3     CAN_STANDARD
#define MO64_ID_CAN3          0x123

/* Message Object 65 */
#define MO65_ID_TYPE_CAN3     CAN_STANDARD
#define MO65_ID_CAN3          0x123

/* Message Object 66 */
#define MO66_ID_TYPE_CAN3     CAN_STANDARD
#define MO66_ID_CAN3          0x123

/* Message Object 67 */
#define MO67_ID_TYPE_CAN3     CAN_STANDARD
#define MO67_ID_CAN3          0x123

/* Message Object 68 */
#define MO68_ID_TYPE_CAN3     CAN_STANDARD
#define MO68_ID_CAN3          0x123

/* Message Object 69 */
#define MO69_ID_TYPE_CAN3     CAN_STANDARD
#define MO69_ID_CAN3          0x123

/* Message Object 70 */
#define MO70_ID_TYPE_CAN3     CAN_STANDARD
#define MO70_ID_CAN3          0x123

/* Message Object 71 */
#define MO71_ID_TYPE_CAN3     CAN_STANDARD
#define MO71_ID_CAN3          0x123

/* Message Object 72 */
#define MO72_ID_TYPE_CAN3     CAN_STANDARD
#define MO72_ID_CAN3          0x123

/* Message Object 73 */
#define MO73_ID_TYPE_CAN3     CAN_STANDARD
#define MO73_ID_CAN3          0x123

/* Message Object 74 */
#define MO74_ID_TYPE_CAN3     CAN_STANDARD
#define MO74_ID_CAN3          0x123

/* Message Object 75 */
#define MO75_ID_TYPE_CAN3     CAN_STANDARD
#define MO75_ID_CAN3          0x123

/* Message Object 76 */
#define MO76_ID_TYPE_CAN3     CAN_STANDARD
#define MO76_ID_CAN3          0x123

/* Message Object 77 */
#define MO77_ID_TYPE_CAN3     CAN_STANDARD
#define MO77_ID_CAN3          0x123

/* Message Object 78 */
#define MO78_ID_TYPE_CAN3     CAN_STANDARD
#define MO78_ID_CAN3          0x123

/* Message Object 79 */
#define MO79_ID_TYPE_CAN3     CAN_STANDARD
#define MO79_ID_CAN3          0x123

/* Message Object 80 */
#define MO80_ID_TYPE_CAN3     CAN_STANDARD
#define MO80_ID_CAN3          0x123

/* Message Object 81 */
#define MO81_ID_TYPE_CAN3     CAN_STANDARD
#define MO81_ID_CAN3          0x123

/* Message Object 82 */
#define MO82_ID_TYPE_CAN3     CAN_STANDARD
#define MO82_ID_CAN3          0x123

/* Message Object 83 */
#define MO83_ID_TYPE_CAN3     CAN_STANDARD
#define MO83_ID_CAN3          0x123

/* Message Object 84 */
#define MO84_ID_TYPE_CAN3     CAN_STANDARD
#define MO84_ID_CAN3          0x123

/* Message Object 85 */
#define MO85_ID_TYPE_CAN3     CAN_STANDARD
#define MO85_ID_CAN3          0x123

/* Message Object 86 */
#define MO86_ID_TYPE_CAN3     CAN_STANDARD
#define MO86_ID_CAN3          0x123

/* Message Object 87 */
#define MO87_ID_TYPE_CAN3     CAN_STANDARD
#define MO87_ID_CAN3          0x123

/* Message Object 88 */
#define MO88_ID_TYPE_CAN3     CAN_STANDARD
#define MO88_ID_CAN3          0x123

/* Message Object 89 */
#define MO89_ID_TYPE_CAN3     CAN_STANDARD
#define MO89_ID_CAN3          0x123

/* Message Object 90 */
#define MO90_ID_TYPE_CAN3     CAN_STANDARD
#define MO90_ID_CAN3          0x123

/* Message Object 91 */
#define MO91_ID_TYPE_CAN3     CAN_STANDARD
#define MO91_ID_CAN3          0x123

/* Message Object 92 */
#define MO92_ID_TYPE_CAN3     CAN_STANDARD
#define MO92_ID_CAN3          0x123

/* Message Object 93 */
#define MO93_ID_TYPE_CAN3     CAN_STANDARD
#define MO93_ID_CAN3          0x123

/* Message Object 94 */
#define MO94_ID_TYPE_CAN3     CAN_STANDARD
#define MO94_ID_CAN3          0x123

/* Message Object 95 */
#define MO95_ID_TYPE_CAN3     CAN_STANDARD
#define MO95_ID_CAN3          0x123

/* Message Object 96 */
#define MO96_ID_TYPE_CAN3     CAN_STANDARD
#define MO96_ID_CAN3          0x123

/* Message Object 97 */
#define MO97_ID_TYPE_CAN3     CAN_STANDARD
#define MO97_ID_CAN3          0x123

/* Message Object 98 */
#define MO98_ID_TYPE_CAN3     CAN_STANDARD
#define MO98_ID_CAN3          0x123

/* Message Object 99 */
#define MO99_ID_TYPE_CAN3     CAN_STANDARD
#define MO99_ID_CAN3          0x123

/* Message Object 100 */
#define MO100_ID_TYPE_CAN3    CAN_STANDARD
#define MO100_ID_CAN3         0x123

/* Message Object 101 */
#define MO101_ID_TYPE_CAN3    CAN_STANDARD
#define MO101_ID_CAN3         0x123

/* Message Object 102 */
#define MO102_ID_TYPE_CAN3    CAN_STANDARD
#define MO102_ID_CAN3         0x123

/* Message Object 103 */
#define MO103_ID_TYPE_CAN3    CAN_STANDARD
#define MO103_ID_CAN3         0x123

/* Message Object 104 */
#define MO104_ID_TYPE_CAN3    CAN_STANDARD
#define MO104_ID_CAN3         0x123

/* Message Object 105 */
#define MO105_ID_TYPE_CAN3    CAN_STANDARD
#define MO105_ID_CAN3         0x123

/* Message Object 106 */
#define MO106_ID_TYPE_CAN3    CAN_STANDARD
#define MO106_ID_CAN3         0x123

/* Message Object 107 */
#define MO107_ID_TYPE_CAN3    CAN_STANDARD
#define MO107_ID_CAN3         0x123

/* Message Object 108 */
#define MO108_ID_TYPE_CAN3    CAN_STANDARD
#define MO108_ID_CAN3         0x123

/* Message Object 109 */
#define MO109_ID_TYPE_CAN3    CAN_STANDARD
#define MO109_ID_CAN3         0x123

/* Message Object 110 */
#define MO110_ID_TYPE_CAN3     CAN_STANDARD
#define MO110_ID_CAN3         0x123

/* Message Object 111 */
#define MO111_ID_TYPE_CAN3    CAN_STANDARD
#define MO111_ID_CAN3         0x123

/* Message Object 112 */
#define MO112_ID_TYPE_CAN3    CAN_STANDARD
#define MO112_ID_CAN3         0x123

/* Message Object 113 */
#define MO113_ID_TYPE_CAN3    CAN_STANDARD
#define MO113_ID_CAN3         0x123

/* Message Object 114 */
#define MO114_ID_TYPE_CAN3    CAN_STANDARD
#define MO114_ID_CAN3         0x123

/* Message Object 115 */
#define MO115_ID_TYPE_CAN3    CAN_STANDARD
#define MO115_ID_CAN3         0x123

/* Message Object 116 */
#define MO116_ID_TYPE_CAN3    CAN_STANDARD
#define MO116_ID_CAN3         0x123

/* Message Object 117 */
#define MO117_ID_TYPE_CAN3    CAN_STANDARD
#define MO117_ID_CAN3         0x123

/* Message Object 118 */
#define MO118_ID_TYPE_CAN3    CAN_STANDARD
#define MO118_ID_CAN3         0x123

/* Message Object 119 */
#define MO119_ID_TYPE_CAN3    CAN_STANDARD
#define MO119_ID_CAN3         0x123

/* Message Object 120 */
#define MO120_ID_TYPE_CAN3    CAN_STANDARD
#define MO120_ID_CAN3         0x123

/* Message Object 121 */
#define MO121_ID_TYPE_CAN3    CAN_STANDARD
#define MO121_ID_CAN3         0x123

/* Message Object 122 */
#define MO122_ID_TYPE_CAN3    CAN_STANDARD
#define MO122_ID_CAN3         0x123

/* Message Object 123 */
#define MO123_ID_TYPE_CAN3    CAN_STANDARD
#define MO123_ID_CAN3         0x123

/* Message Object 124 */
#define MO124_ID_TYPE_CAN3    CAN_STANDARD
#define MO124_ID_CAN3         0x123

/* Message Object 125 */
#define MO125_ID_TYPE_CAN3    CAN_STANDARD
#define MO125_ID_CAN3         0x123

/* Message Object 126 */
#define MO126_ID_TYPE_CAN3    CAN_STANDARD
#define MO126_ID_CAN3         0x123

/* Message Object 127 */
#define MO127_ID_TYPE_CAN3    CAN_STANDARD
#define MO127_ID_CAN3         0x123

/* Message Object 128 */
#define MO128_ID_TYPE_CAN3    CAN_STANDARD
#define MO128_ID_CAN3         0x123

/* Message Object 129 */
#define MO129_ID_TYPE_CAN3    CAN_STANDARD
#define MO129_ID_CAN3         0x123

/* Message Object 130 */
#define MO130_ID_TYPE_CAN3    CAN_STANDARD
#define MO130_ID_CAN3         0x123

/* Message Object 131 */
#define MO131_ID_TYPE_CAN3    CAN_STANDARD
#define MO131_ID_CAN3         0x123

/* Message Object 132 */
#define MO132_ID_TYPE_CAN3    CAN_STANDARD
#define MO132_ID_CAN3         0x123

/* Message Object 133 */
#define MO133_ID_TYPE_CAN3    CAN_STANDARD
#define MO133_ID_CAN3         0x123

/* Message Object 134 */
#define MO134_ID_TYPE_CAN3    CAN_STANDARD
#define MO134_ID_CAN3         0x123

/* Message Object 135 */
#define MO135_ID_TYPE_CAN3    CAN_STANDARD
#define MO135_ID_CAN3         0x123

/* Message Object 136 */
#define MO136_ID_TYPE_CAN3    CAN_STANDARD
#define MO136_ID_CAN3         0x123

/* Message Object 137 */
#define MO137_ID_TYPE_CAN3    CAN_STANDARD
#define MO137_ID_CAN3         0x123

/* Message Object 138 */
#define MO138_ID_TYPE_CAN3    CAN_STANDARD
#define MO138_ID_CAN3         0x123

/* Message Object 139 */
#define MO139_ID_TYPE_CAN3    CAN_STANDARD
#define MO139_ID_CAN3         0x123

/* Message Object 140 */
#define MO140_ID_TYPE_CAN3    CAN_STANDARD
#define MO140_ID_CAN3         0x123

/* Message Object 141 */
#define MO141_ID_TYPE_CAN3    CAN_STANDARD
#define MO141_ID_CAN3         0x123

/* Message Object 142 */
#define MO142_ID_TYPE_CAN3    CAN_STANDARD
#define MO142_ID_CAN3         0x123

/* Message Object 143 */
#define MO143_ID_TYPE_CAN3    CAN_STANDARD
#define MO143_ID_CAN3         0x123

/* Message Object 144 */
#define MO144_ID_TYPE_CAN3    CAN_STANDARD
#define MO144_ID_CAN3         0x123

/* Message Object 145 */
#define MO145_ID_TYPE_CAN3    CAN_STANDARD
#define MO145_ID_CAN3         0x123

/* Message Object 146 */
#define MO146_ID_TYPE_CAN3    CAN_STANDARD
#define MO146_ID_CAN3         0x123

/* Message Object 147 */
#define MO147_ID_TYPE_CAN3    CAN_STANDARD
#define MO147_ID_CAN3         0x123

/* Message Object 148 */
#define MO148_ID_TYPE_CAN3    CAN_STANDARD
#define MO148_ID_CAN3         0x123

/* Message Object 149 */
#define MO149_ID_TYPE_CAN3    CAN_STANDARD
#define MO149_ID_CAN3         0x123

/* Message Object 150 */
#define MO150_ID_TYPE_CAN3    CAN_STANDARD
#define MO150_ID_CAN3         0x123

/* Message Object 151 */
#define MO151_ID_TYPE_CAN3    CAN_STANDARD
#define MO151_ID_CAN3         0x123

/* Message Object 152 */
#define MO152_ID_TYPE_CAN3    CAN_STANDARD
#define MO152_ID_CAN3         0x123

/* Message Object 153 */
#define MO153_ID_TYPE_CAN3    CAN_STANDARD
#define MO153_ID_CAN3         0x123

/* Message Object 154 */
#define MO154_ID_TYPE_CAN3    CAN_STANDARD
#define MO154_ID_CAN3         0x123

/* Message Object 155 */
#define MO155_ID_TYPE_CAN3    CAN_STANDARD
#define MO155_ID_CAN3         0x123

/* Message Object 156 */
#define MO156_ID_TYPE_CAN3    CAN_STANDARD
#define MO156_ID_CAN3         0x123

/* Message Object 157 */
#define MO157_ID_TYPE_CAN3    CAN_STANDARD
#define MO157_ID_CAN3         0x123

/* Message Object 158 */
#define MO158_ID_TYPE_CAN3    CAN_STANDARD
#define MO158_ID_CAN3         0x123

/* Message Object 159 */
#define MO159_ID_TYPE_CAN3    CAN_STANDARD
#define MO159_ID_CAN3         0x123

/* Message Object 160 */
#define MO160_ID_TYPE_CAN3    CAN_STANDARD
#define MO160_ID_CAN3         0x123

/* Message Object 161 */
#define MO161_ID_TYPE_CAN3    CAN_STANDARD
#define MO161_ID_CAN3         0x123

/* Message Object 162 */
#define MO162_ID_TYPE_CAN3    CAN_STANDARD
#define MO162_ID_CAN3         0x123

/* Message Object 163 */
#define MO163_ID_TYPE_CAN3    CAN_STANDARD
#define MO163_ID_CAN3         0x123

/* Message Object 164 */
#define MO164_ID_TYPE_CAN3    CAN_STANDARD
#define MO164_ID_CAN3         0x123

/* Message Object 165 */
#define MO165_ID_TYPE_CAN3    CAN_STANDARD
#define MO165_ID_CAN3         0x123

/* Message Object 166 */
#define MO166_ID_TYPE_CAN3    CAN_STANDARD
#define MO166_ID_CAN3         0x123

/* Message Object 167 */
#define MO167_ID_TYPE_CAN3    CAN_STANDARD
#define MO167_ID_CAN3         0x123

/* Message Object 168 */
#define MO168_ID_TYPE_CAN3    CAN_STANDARD
#define MO168_ID_CAN3         0x123

/* Message Object 169 */
#define MO169_ID_TYPE_CAN3    CAN_STANDARD
#define MO169_ID_CAN3         0x123

/* Message Object 170 */
#define MO170_ID_TYPE_CAN3    CAN_STANDARD
#define MO170_ID_CAN3         0x123

/* Message Object 171 */
#define MO171_ID_TYPE_CAN3    CAN_STANDARD
#define MO171_ID_CAN3         0x123

/* Message Object 172 */
#define MO172_ID_TYPE_CAN3    CAN_STANDARD
#define MO172_ID_CAN3         0x123

/* Message Object 173 */
#define MO173_ID_TYPE_CAN3    CAN_STANDARD
#define MO173_ID_CAN3         0x123

/* Message Object 174 */
#define MO174_ID_TYPE_CAN3    CAN_STANDARD
#define MO174_ID_CAN3         0x123

/* Message Object 175 */
#define MO175_ID_TYPE_CAN3    CAN_STANDARD
#define MO175_ID_CAN3         0x123

/* Message Object 176 */
#define MO176_ID_TYPE_CAN3    CAN_STANDARD
#define MO176_ID_CAN3         0x123

/* Message Object 177 */
#define MO177_ID_TYPE_CAN3    CAN_STANDARD
#define MO177_ID_CAN3         0x123

/* Message Object 178 */
#define MO178_ID_TYPE_CAN3    CAN_STANDARD
#define MO178_ID_CAN3         0x123

/* Message Object 179 */
#define MO179_ID_TYPE_CAN3    CAN_STANDARD
#define MO179_ID_CAN3         0x123

/* Message Object 180 */
#define MO180_ID_TYPE_CAN3    CAN_STANDARD
#define MO180_ID_CAN3         0x123

/* Message Object 181 */
#define MO181_ID_TYPE_CAN3    CAN_STANDARD
#define MO181_ID_CAN3         0x123

/* Message Object 182 */
#define MO182_ID_TYPE_CAN3    CAN_STANDARD
#define MO182_ID_CAN3         0x123

/* Message Object 183 */
#define MO183_ID_TYPE_CAN3    CAN_STANDARD
#define MO183_ID_CAN3         0x123

/* Message Object 184 */
#define MO184_ID_TYPE_CAN3    CAN_STANDARD
#define MO184_ID_CAN3         0x123

/* Message Object 185 */
#define MO185_ID_TYPE_CAN3    CAN_STANDARD
#define MO185_ID_CAN3         0x123

/* Message Object 186 */
#define MO186_ID_TYPE_CAN3    CAN_STANDARD
#define MO186_ID_CAN3         0x123

/* Message Object 187 */
#define MO187_ID_TYPE_CAN3    CAN_STANDARD
#define MO187_ID_CAN3         0x123

/* Message Object 188 */
#define MO188_ID_TYPE_CAN3    CAN_STANDARD
#define MO188_ID_CAN3         0x123

/* Message Object 189 */
#define MO189_ID_TYPE_CAN3    CAN_STANDARD
#define MO189_ID_CAN3         0x123

/* Message Object 190 */
#define MO190_ID_TYPE_CAN3    CAN_STANDARD
#define MO190_ID_CAN3         0x123

/* Message Object 191 */
#define MO191_ID_TYPE_CAN3    CAN_STANDARD
#define MO191_ID_CAN3         0x123

/* Message Object 192 */
#define MO192_ID_TYPE_CAN3    CAN_STANDARD
#define MO192_ID_CAN3         0x123

/* Message Object 193 */
#define MO193_ID_TYPE_CAN3    CAN_STANDARD
#define MO193_ID_CAN3         0x123

/* Message Object 194 */
#define MO194_ID_TYPE_CAN3    CAN_STANDARD
#define MO194_ID_CAN3         0x123

/* Message Object 195 */
#define MO195_ID_TYPE_CAN3    CAN_STANDARD
#define MO195_ID_CAN3         0x123

/* Message Object 196 */
#define MO196_ID_TYPE_CAN3    CAN_STANDARD
#define MO196_ID_CAN3         0x123

/* Message Object 197 */
#define MO197_ID_TYPE_CAN3    CAN_STANDARD
#define MO197_ID_CAN3         0x123

/* Message Object 198 */
#define MO198_ID_TYPE_CAN3    CAN_STANDARD
#define MO198_ID_CAN3         0x123

/* Message Object 199 */
#define MO199_ID_TYPE_CAN3    CAN_STANDARD
#define MO199_ID_CAN3         0x123

/* Message Object 200 */
#define MO200_ID_TYPE_CAN3    CAN_STANDARD
#define MO200_ID_CAN3         0x123

/* Message Object 201 */
#define MO201_ID_TYPE_CAN3    CAN_STANDARD
#define MO201_ID_CAN3         0x123

/* Message Object 202 */
#define MO202_ID_TYPE_CAN3    CAN_STANDARD
#define MO202_ID_CAN3         0x123

/* Message Object 203 */
#define MO203_ID_TYPE_CAN3    CAN_STANDARD
#define MO203_ID_CAN3         0x123

/* Message Object 204 */
#define MO204_ID_TYPE_CAN3    CAN_STANDARD
#define MO204_ID_CAN3         0x123

/* Message Object 205 */
#define MO205_ID_TYPE_CAN3    CAN_STANDARD
#define MO205_ID_CAN3         0x123

/* Message Object 206 */
#define MO206_ID_TYPE_CAN3    CAN_STANDARD
#define MO206_ID_CAN3         0x123

/* Message Object 207 */
#define MO207_ID_TYPE_CAN3    CAN_STANDARD
#define MO207_ID_CAN3         0x123

/* Message Object 208 */
#define MO208_ID_TYPE_CAN3    CAN_STANDARD
#define MO208_ID_CAN3         0x123

/* Message Object 209 */
#define MO209_ID_TYPE_CAN3    CAN_STANDARD
#define MO209_ID_CAN3         0x123

/* Message Object 210 */
#define MO210_ID_TYPE_CAN3    CAN_STANDARD
#define MO210_ID_CAN3         0x123

/* Message Object 211 */
#define MO211_ID_TYPE_CAN3    CAN_STANDARD
#define MO211_ID_CAN3         0x123

/* Message Object 212 */
#define MO212_ID_TYPE_CAN3    CAN_STANDARD
#define MO212_ID_CAN3         0x123

/* Message Object 213 */
#define MO213_ID_TYPE_CAN3    CAN_STANDARD
#define MO213_ID_CAN3         0x123

/* Message Object 214 */
#define MO214_ID_TYPE_CAN3    CAN_STANDARD
#define MO214_ID_CAN3         0x123

/* Message Object 215 */
#define MO215_ID_TYPE_CAN3    CAN_STANDARD
#define MO215_ID_CAN3         0x123

/* Message Object 216 */
#define MO216_ID_TYPE_CAN3    CAN_STANDARD
#define MO216_ID_CAN3         0x123

/* Message Object 217 */
#define MO217_ID_TYPE_CAN3    CAN_STANDARD
#define MO217_ID_CAN3         0x123

/* Message Object 218 */
#define MO218_ID_TYPE_CAN3    CAN_STANDARD
#define MO218_ID_CAN3         0x123

/* Message Object 219 */
#define MO219_ID_TYPE_CAN3    CAN_STANDARD
#define MO219_ID_CAN3         0x123

/* Message Object 220 */
#define MO220_ID_TYPE_CAN3    CAN_STANDARD
#define MO220_ID_CAN3         0x123

/* Message Object 221 */
#define MO221_ID_TYPE_CAN3    CAN_STANDARD
#define MO221_ID_CAN3         0x123

/* Message Object 222 */
#define MO222_ID_TYPE_CAN3    CAN_STANDARD
#define MO222_ID_CAN3         0x123

/* Message Object 223 */
#define MO223_ID_TYPE_CAN3    CAN_STANDARD
#define MO223_ID_CAN3         0x123

/* Message Object 224 */
#define MO224_ID_TYPE_CAN3    CAN_STANDARD
#define MO224_ID_CAN3         0x123

/* Message Object 225 */
#define MO225_ID_TYPE_CAN3    CAN_STANDARD
#define MO225_ID_CAN3         0x123

/* Message Object 226 */
#define MO226_ID_TYPE_CAN3    CAN_STANDARD
#define MO226_ID_CAN3         0x123

/* Message Object 227 */
#define MO227_ID_TYPE_CAN3    CAN_STANDARD
#define MO227_ID_CAN3         0x123

/* Message Object 228 */
#define MO228_ID_TYPE_CAN3    CAN_STANDARD
#define MO228_ID_CAN3         0x123

/* Message Object 229 */
#define MO229_ID_TYPE_CAN3    CAN_STANDARD
#define MO229_ID_CAN3         0x123

/* Message Object 230 */
#define MO230_ID_TYPE_CAN3    CAN_STANDARD
#define MO230_ID_CAN3         0x123

/* Message Object 231 */
#define MO231_ID_TYPE_CAN3    CAN_STANDARD
#define MO231_ID_CAN3         0x123

/* Message Object 232 */
#define MO232_ID_TYPE_CAN3    CAN_STANDARD
#define MO232_ID_CAN3         0x123

/* Message Object 233 */
#define MO233_ID_TYPE_CAN3    CAN_STANDARD
#define MO233_ID_CAN3         0x123

/* Message Object 234 */
#define MO234_ID_TYPE_CAN3    CAN_STANDARD
#define MO234_ID_CAN3         0x123

/* Message Object 235 */
#define MO235_ID_TYPE_CAN3    CAN_STANDARD
#define MO235_ID_CAN3         0x123

/* Message Object 236 */
#define MO236_ID_TYPE_CAN3    CAN_STANDARD
#define MO236_ID_CAN3         0x123

/* Message Object 237 */
#define MO237_ID_TYPE_CAN3    CAN_STANDARD
#define MO237_ID_CAN3         0x123

/* Message Object 238 */
#define MO238_ID_TYPE_CAN3    CAN_STANDARD
#define MO238_ID_CAN3         0x123

/* Message Object 239 */
#define MO239_ID_TYPE_CAN3    CAN_STANDARD
#define MO239_ID_CAN3         0x123

/* Message Object 240 */
#define MO240_ID_TYPE_CAN3    CAN_STANDARD
#define MO240_ID_CAN3         0x123

/* Message Object 241 */
#define MO241_ID_TYPE_CAN3    CAN_STANDARD
#define MO241_ID_CAN3         0x123

/* Message Object 242 */
#define MO242_ID_TYPE_CAN3    CAN_STANDARD
#define MO242_ID_CAN3         0x123

/* Message Object 243 */
#define MO243_ID_TYPE_CAN3    CAN_STANDARD
#define MO243_ID_CAN3         0x123

/* Message Object 244 */
#define MO244_ID_TYPE_CAN3    CAN_STANDARD
#define MO244_ID_CAN3         0x123

/* Message Object 245 */
#define MO245_ID_TYPE_CAN3    CAN_STANDARD
#define MO245_ID_CAN3         0x123

/* Message Object 246 */
#define MO246_ID_TYPE_CAN3    CAN_STANDARD
#define MO246_ID_CAN3         0x123

/* Message Object 247 */
#define MO247_ID_TYPE_CAN3    CAN_STANDARD
#define MO247_ID_CAN3         0x123

/* Message Object 248 */
#define MO248_ID_TYPE_CAN3    CAN_STANDARD
#define MO248_ID_CAN3         0x123

/* Message Object 249 */
#define MO249_ID_TYPE_CAN3    CAN_STANDARD
#define MO249_ID_CAN3         0x123

/* Message Object 250 */
#define MO250_ID_TYPE_CAN3    CAN_STANDARD
#define MO250_ID_CAN3         0x123

/* Message Object 251 */
#define MO251_ID_TYPE_CAN3    CAN_STANDARD
#define MO251_ID_CAN3         0x123

/* Message Object 252 */
#define MO252_ID_TYPE_CAN3    CAN_STANDARD
#define MO252_ID_CAN3         0x123

/* Message Object 253 */
#define MO253_ID_TYPE_CAN3    CAN_STANDARD
#define MO253_ID_CAN3         0x123

/* Message Object 254 */
#define MO254_ID_TYPE_CAN3    CAN_STANDARD
#define MO254_ID_CAN3         0x123

/*****************************************************************************

 *CAN4 Message Objiects

*****************************************************************************/
/* Message Object 0: highest local priority for msCAN module 0 */
#define MO0_ID_TYPE_CAN4      CAN_STANDARD
#define MO0_ID_CAN4           0x080

/* Message Object 1 */
#define MO1_ID_TYPE_CAN4      CAN_STANDARD
#define MO1_ID_CAN4           0x081

/* Message Object 2 */
#define MO2_ID_TYPE_CAN4      CAN_STANDARD
#define MO2_ID_CAN4           0x082

/* Message Object 3 */
#define MO3_ID_TYPE_CAN4      CAN_STANDARD
#define MO3_ID_CAN4           0x083

/* Message Object 4 */
#define MO4_ID_TYPE_CAN4      CAN_STANDARD
#define MO4_ID_CAN4           0x084

/* Message Object 5 */
#define MO5_ID_TYPE_CAN4      CAN_STANDARD
#define MO5_ID_CAN4           0x085

/* Message Object 6 */
#define MO6_ID_TYPE_CAN4      CAN_STANDARD
#define MO6_ID_CAN4           0x086

/* Message Object 7 */
#define MO7_ID_TYPE_CAN4      CAN_STANDARD
#define MO7_ID_CAN4           0x087

/* Message Object 8 */
#define MO8_ID_TYPE_CAN4      CAN_STANDARD
#define MO8_ID_CAN4           0x088

/* Message Object 9 */
#define MO9_ID_TYPE_CAN4      CAN_STANDARD
#define MO9_ID_CAN4           0x089

/* Message Object 10 */
#define MO10_ID_TYPE_CAN4     CAN_STANDARD
#define MO10_ID_CAN4          0x08A 

/* Message Object 11 */
#define MO11_ID_TYPE_CAN4     CAN_STANDARD
#define MO11_ID_CAN4          0x08B

/* Message Object 12 */
#define MO12_ID_TYPE_CAN4     CAN_STANDARD
#define MO12_ID_CAN4          0x08C

/* Message Object 13 */
#define MO13_ID_TYPE_CAN4     CAN_STANDARD
#define MO13_ID_CAN4          0x08D

/* Message Object 14 */
#define MO14_ID_TYPE_CAN4     CAN_STANDARD
#define MO14_ID_CAN4          0x08E

/* Message Object 15 */
#define MO15_ID_TYPE_CAN4     CAN_STANDARD
#define MO15_ID_CAN4          0x08F

/* Message Object 16 */
#define MO16_ID_TYPE_CAN4     CAN_EXTENDED
#define MO16_ID_CAN4          0x11111111L

/* Message Object 17 */      
#define MO17_ID_TYPE_CAN4     CAN_EXTENDED
#define MO17_ID_CAN4          0x12222222L

/* Message Object 18 */
#define MO18_ID_TYPE_CAN4     CAN_EXTENDED
#define MO18_ID_CAN4          0x12333333L

/* Message Object 19 */
#define MO19_ID_TYPE_CAN4     CAN_EXTENDED
#define MO19_ID_CAN4          0x12344444L

/* Message Object 20 */
#define MO20_ID_TYPE_CAN4     CAN_EXTENDED
#define MO20_ID_CAN4          0x12345555L

/* Message Object 21 */
#define MO21_ID_TYPE_CAN4     CAN_EXTENDED
#define MO21_ID_CAN4          0x12345666L

/* Message Object 22 */
#define MO22_ID_TYPE_CAN4     CAN_EXTENDED
#define MO22_ID_CAN4          0x12345677L

/* Message Object 23 */
#define MO23_ID_TYPE_CAN4     CAN_EXTENDED
#define MO23_ID_CAN4          0x18888888L

/* Message Object 24 */
#define MO24_ID_TYPE_CAN4     CAN_STANDARD
#define MO24_ID_CAN4          0x123

/* Message Object 25 */
#define MO25_ID_TYPE_CAN4     CAN_STANDARD
#define MO25_ID_CAN4          0x123

/* Message Object 26 */
#define MO26_ID_TYPE_CAN4     CAN_STANDARD
#define MO26_ID_CAN4          0x123

/* Message Object 27 */
#define MO27_ID_TYPE_CAN4     CAN_STANDARD
#define MO27_ID_CAN4          0x123

/* Message Object 28 */
#define MO28_ID_TYPE_CAN4     CAN_STANDARD
#define MO28_ID_CAN4          0x123

/* Message Object 29 */
#define MO29_ID_TYPE_CAN4     CAN_STANDARD
#define MO29_ID_CAN4          0x123

/* Message Object 30 */
#define MO30_ID_TYPE_CAN4     CAN_STANDARD
#define MO30_ID_CAN4          0x123

/* Message Object 31 */
#define MO31_ID_TYPE_CAN4     CAN_STANDARD
#define MO31_ID_CAN4          0x123

/* Message Object 32 */
#define MO32_ID_TYPE_CAN4     CAN_STANDARD
#define MO32_ID_CAN4          0x123

/* Message Object 33 */
#define MO33_ID_TYPE_CAN4     CAN_STANDARD
#define MO33_ID_CAN4          0x123

/* Message Object 34 */
#define MO34_ID_TYPE_CAN4     CAN_STANDARD
#define MO34_ID_CAN4          0x123

/* Message Object 35 */
#define MO35_ID_TYPE_CAN4     CAN_STANDARD
#define MO35_ID_CAN4          0x123

/* Message Object 36 */
#define MO36_ID_TYPE_CAN4     CAN_STANDARD
#define MO36_ID_CAN4          0x123

/* Message Object 37 */
#define MO37_ID_TYPE_CAN4     CAN_STANDARD
#define MO37_ID_CAN4          0x123

/* Message Object 38 */
#define MO38_ID_TYPE_CAN4     CAN_STANDARD
#define MO38_ID_CAN4          0x123

/* Message Object 39 */
#define MO39_ID_TYPE_CAN4     CAN_STANDARD
#define MO39_ID_CAN4          0x123

/* Message Object 40 */
#define MO40_ID_TYPE_CAN4     CAN_STANDARD
#define MO40_ID_CAN4          0x123

/* Message Object 41 */
#define MO41_ID_TYPE_CAN4     CAN_STANDARD
#define MO41_ID_CAN4          0x123

/* Message Object 42 */
#define MO42_ID_TYPE_CAN4     CAN_STANDARD
#define MO42_ID_CAN4          0x123

/* Message Object 43 */
#define MO43_ID_TYPE_CAN4     CAN_STANDARD
#define MO43_ID_CAN4          0x123

/* Message Object 44 */
#define MO44_ID_TYPE_CAN4     CAN_STANDARD
#define MO44_ID_CAN4          0x123

/* Message Object 45 */
#define MO45_ID_TYPE_CAN4     CAN_STANDARD
#define MO45_ID_CAN4          0x123

/* Message Object 46 */
#define MO46_ID_TYPE_CAN4     CAN_STANDARD
#define MO46_ID_CAN4          0x123

/* Message Object 47 */
#define MO47_ID_TYPE_CAN4     CAN_STANDARD
#define MO47_ID_CAN4          0x123

/* Message Object 48 */
#define MO48_ID_TYPE_CAN4     CAN_STANDARD
#define MO48_ID_CAN4          0x123

/* Message Object 49 */
#define MO49_ID_TYPE_CAN4     CAN_STANDARD
#define MO49_ID_CAN4          0x123

/* Message Object 50 */
#define MO50_ID_TYPE_CAN4     CAN_STANDARD
#define MO50_ID_CAN4          0x123

/* Message Object 51 */
#define MO51_ID_TYPE_CAN4     CAN_STANDARD
#define MO51_ID_CAN4          0x123

/* Message Object 52 */
#define MO52_ID_TYPE_CAN4     CAN_STANDARD
#define MO52_ID_CAN4          0x123

/* Message Object 53 */
#define MO53_ID_TYPE_CAN4     CAN_STANDARD
#define MO53_ID_CAN4          0x123

/* Message Object 54 */
#define MO54_ID_TYPE_CAN4     CAN_STANDARD
#define MO54_ID_CAN4          0x123

/* Message Object 55 */
#define MO55_ID_TYPE_CAN4     CAN_STANDARD
#define MO55_ID_CAN4          0x123

/* Message Object 56 */
#define MO56_ID_TYPE_CAN4     CAN_STANDARD
#define MO56_ID_CAN4          0x123

/* Message Object 57 */
#define MO57_ID_TYPE_CAN4     CAN_STANDARD
#define MO57_ID_CAN4          0x123

/* Message Object 58 */
#define MO58_ID_TYPE_CAN4     CAN_STANDARD
#define MO58_ID_CAN4          0x123

/* Message Object 59 */
#define MO59_ID_TYPE_CAN4     CAN_STANDARD
#define MO59_ID_CAN4          0x123

/* Message Object 60 */
#define MO60_ID_TYPE_CAN4     CAN_STANDARD
#define MO60_ID_CAN4          0x123

/* Message Object 61 */
#define MO61_ID_TYPE_CAN4     CAN_STANDARD
#define MO61_ID_CAN4          0x123

/* Message Object 62 */
#define MO62_ID_TYPE_CAN4     CAN_STANDARD
#define MO62_ID_CAN4          0x123

/* Message Object 63 */
#define MO63_ID_TYPE_CAN4     CAN_STANDARD
#define MO63_ID_CAN4          0x123

/* Message Object 64 */
#define MO64_ID_TYPE_CAN4     CAN_STANDARD
#define MO64_ID_CAN4          0x123

/* Message Object 65 */
#define MO65_ID_TYPE_CAN4     CAN_STANDARD
#define MO65_ID_CAN4          0x123

/* Message Object 66 */
#define MO66_ID_TYPE_CAN4     CAN_STANDARD
#define MO66_ID_CAN4          0x123

/* Message Object 67 */
#define MO67_ID_TYPE_CAN4     CAN_STANDARD
#define MO67_ID_CAN4          0x123

/* Message Object 68 */
#define MO68_ID_TYPE_CAN4     CAN_STANDARD
#define MO68_ID_CAN4          0x123

/* Message Object 69 */
#define MO69_ID_TYPE_CAN4     CAN_STANDARD
#define MO69_ID_CAN4          0x123

/* Message Object 70 */
#define MO70_ID_TYPE_CAN4     CAN_STANDARD
#define MO70_ID_CAN4          0x123

/* Message Object 71 */
#define MO71_ID_TYPE_CAN4     CAN_STANDARD
#define MO71_ID_CAN4          0x123

/* Message Object 72 */
#define MO72_ID_TYPE_CAN4     CAN_STANDARD
#define MO72_ID_CAN4          0x123

/* Message Object 73 */
#define MO73_ID_TYPE_CAN4     CAN_STANDARD
#define MO73_ID_CAN4          0x123

/* Message Object 74 */
#define MO74_ID_TYPE_CAN4     CAN_STANDARD
#define MO74_ID_CAN4          0x123

/* Message Object 75 */
#define MO75_ID_TYPE_CAN4     CAN_STANDARD
#define MO75_ID_CAN4          0x123

/* Message Object 76 */
#define MO76_ID_TYPE_CAN4     CAN_STANDARD
#define MO76_ID_CAN4          0x123

/* Message Object 77 */
#define MO77_ID_TYPE_CAN4     CAN_STANDARD
#define MO77_ID_CAN4          0x123

/* Message Object 78 */
#define MO78_ID_TYPE_CAN4     CAN_STANDARD
#define MO78_ID_CAN4          0x123

/* Message Object 79 */
#define MO79_ID_TYPE_CAN4     CAN_STANDARD
#define MO79_ID_CAN4          0x123

/* Message Object 80 */
#define MO80_ID_TYPE_CAN4     CAN_STANDARD
#define MO80_ID_CAN4          0x123

/* Message Object 81 */
#define MO81_ID_TYPE_CAN4     CAN_STANDARD
#define MO81_ID_CAN4          0x123

/* Message Object 82 */
#define MO82_ID_TYPE_CAN4     CAN_STANDARD
#define MO82_ID_CAN4          0x123

/* Message Object 83 */
#define MO83_ID_TYPE_CAN4     CAN_STANDARD
#define MO83_ID_CAN4          0x123

/* Message Object 84 */
#define MO84_ID_TYPE_CAN4     CAN_STANDARD
#define MO84_ID_CAN4          0x123

/* Message Object 85 */
#define MO85_ID_TYPE_CAN4     CAN_STANDARD
#define MO85_ID_CAN4          0x123

/* Message Object 86 */
#define MO86_ID_TYPE_CAN4     CAN_STANDARD
#define MO86_ID_CAN4          0x123

/* Message Object 87 */
#define MO87_ID_TYPE_CAN4     CAN_STANDARD
#define MO87_ID_CAN4          0x123

/* Message Object 88 */
#define MO88_ID_TYPE_CAN4     CAN_STANDARD
#define MO88_ID_CAN4          0x123

/* Message Object 89 */
#define MO89_ID_TYPE_CAN4     CAN_STANDARD
#define MO89_ID_CAN4          0x123

/* Message Object 90 */
#define MO90_ID_TYPE_CAN4     CAN_STANDARD
#define MO90_ID_CAN4          0x123

/* Message Object 91 */
#define MO91_ID_TYPE_CAN4     CAN_STANDARD
#define MO91_ID_CAN4          0x123

/* Message Object 92 */
#define MO92_ID_TYPE_CAN4     CAN_STANDARD
#define MO92_ID_CAN4          0x123

/* Message Object 93 */
#define MO93_ID_TYPE_CAN4     CAN_STANDARD
#define MO93_ID_CAN4          0x123

/* Message Object 94 */
#define MO94_ID_TYPE_CAN4     CAN_STANDARD
#define MO94_ID_CAN4          0x123

/* Message Object 95 */
#define MO95_ID_TYPE_CAN4     CAN_STANDARD
#define MO95_ID_CAN4          0x123

/* Message Object 96 */
#define MO96_ID_TYPE_CAN4     CAN_STANDARD
#define MO96_ID_CAN4          0x123

/* Message Object 97 */
#define MO97_ID_TYPE_CAN4     CAN_STANDARD
#define MO97_ID_CAN4          0x123

/* Message Object 98 */
#define MO98_ID_TYPE_CAN4     CAN_STANDARD
#define MO98_ID_CAN4          0x123

/* Message Object 99 */
#define MO99_ID_TYPE_CAN4     CAN_STANDARD
#define MO99_ID_CAN4          0x123

/* Message Object 100 */
#define MO100_ID_TYPE_CAN4    CAN_STANDARD
#define MO100_ID_CAN4         0x123

/* Message Object 101 */
#define MO101_ID_TYPE_CAN4    CAN_STANDARD
#define MO101_ID_CAN4         0x123

/* Message Object 102 */
#define MO102_ID_TYPE_CAN4    CAN_STANDARD
#define MO102_ID_CAN4         0x123

/* Message Object 103 */
#define MO103_ID_TYPE_CAN4    CAN_STANDARD
#define MO103_ID_CAN4         0x123

/* Message Object 104 */
#define MO104_ID_TYPE_CAN4    CAN_STANDARD
#define MO104_ID_CAN4         0x123

/* Message Object 105 */
#define MO105_ID_TYPE_CAN4    CAN_STANDARD
#define MO105_ID_CAN4         0x123

/* Message Object 106 */
#define MO106_ID_TYPE_CAN4    CAN_STANDARD
#define MO106_ID_CAN4         0x123

/* Message Object 107 */
#define MO107_ID_TYPE_CAN4    CAN_STANDARD
#define MO107_ID_CAN4         0x123

/* Message Object 108 */
#define MO108_ID_TYPE_CAN4    CAN_STANDARD
#define MO108_ID_CAN4         0x123

/* Message Object 109 */
#define MO109_ID_TYPE_CAN4    CAN_STANDARD
#define MO109_ID_CAN4         0x123

/* Message Object 110 */
#define MO110_ID_TYPE_CAN4     CAN_STANDARD
#define MO110_ID_CAN4         0x123

/* Message Object 111 */
#define MO111_ID_TYPE_CAN4    CAN_STANDARD
#define MO111_ID_CAN4         0x123

/* Message Object 112 */
#define MO112_ID_TYPE_CAN4    CAN_STANDARD
#define MO112_ID_CAN4         0x123

/* Message Object 113 */
#define MO113_ID_TYPE_CAN4    CAN_STANDARD
#define MO113_ID_CAN4         0x123

/* Message Object 114 */
#define MO114_ID_TYPE_CAN4    CAN_STANDARD
#define MO114_ID_CAN4         0x123

/* Message Object 115 */
#define MO115_ID_TYPE_CAN4    CAN_STANDARD
#define MO115_ID_CAN4         0x123

/* Message Object 116 */
#define MO116_ID_TYPE_CAN4    CAN_STANDARD
#define MO116_ID_CAN4         0x123

/* Message Object 117 */
#define MO117_ID_TYPE_CAN4    CAN_STANDARD
#define MO117_ID_CAN4         0x123

/* Message Object 118 */
#define MO118_ID_TYPE_CAN4    CAN_STANDARD
#define MO118_ID_CAN4         0x123

/* Message Object 119 */
#define MO119_ID_TYPE_CAN4    CAN_STANDARD
#define MO119_ID_CAN4         0x123

/* Message Object 120 */
#define MO120_ID_TYPE_CAN4    CAN_STANDARD
#define MO120_ID_CAN4         0x123

/* Message Object 121 */
#define MO121_ID_TYPE_CAN4    CAN_STANDARD
#define MO121_ID_CAN4         0x123

/* Message Object 122 */
#define MO122_ID_TYPE_CAN4    CAN_STANDARD
#define MO122_ID_CAN4         0x123

/* Message Object 123 */
#define MO123_ID_TYPE_CAN4    CAN_STANDARD
#define MO123_ID_CAN4         0x123

/* Message Object 124 */
#define MO124_ID_TYPE_CAN4    CAN_STANDARD
#define MO124_ID_CAN4         0x123

/* Message Object 125 */
#define MO125_ID_TYPE_CAN4    CAN_STANDARD
#define MO125_ID_CAN4         0x123

/* Message Object 126 */
#define MO126_ID_TYPE_CAN4    CAN_STANDARD
#define MO126_ID_CAN4         0x123

/* Message Object 127 */
#define MO127_ID_TYPE_CAN4    CAN_STANDARD
#define MO127_ID_CAN4         0x123

/* Message Object 128 */
#define MO128_ID_TYPE_CAN4    CAN_STANDARD
#define MO128_ID_CAN4         0x123

/* Message Object 129 */
#define MO129_ID_TYPE_CAN4    CAN_STANDARD
#define MO129_ID_CAN4         0x123

/* Message Object 130 */
#define MO130_ID_TYPE_CAN4    CAN_STANDARD
#define MO130_ID_CAN4         0x123

/* Message Object 131 */
#define MO131_ID_TYPE_CAN4    CAN_STANDARD
#define MO131_ID_CAN4         0x123

/* Message Object 132 */
#define MO132_ID_TYPE_CAN4    CAN_STANDARD
#define MO132_ID_CAN4         0x123

/* Message Object 133 */
#define MO133_ID_TYPE_CAN4    CAN_STANDARD
#define MO133_ID_CAN4         0x123

/* Message Object 134 */
#define MO134_ID_TYPE_CAN4    CAN_STANDARD
#define MO134_ID_CAN4         0x123

/* Message Object 135 */
#define MO135_ID_TYPE_CAN4    CAN_STANDARD
#define MO135_ID_CAN4         0x123

/* Message Object 136 */
#define MO136_ID_TYPE_CAN4    CAN_STANDARD
#define MO136_ID_CAN4         0x123

/* Message Object 137 */
#define MO137_ID_TYPE_CAN4    CAN_STANDARD
#define MO137_ID_CAN4         0x123

/* Message Object 138 */
#define MO138_ID_TYPE_CAN4    CAN_STANDARD
#define MO138_ID_CAN4         0x123

/* Message Object 139 */
#define MO139_ID_TYPE_CAN4    CAN_STANDARD
#define MO139_ID_CAN4         0x123

/* Message Object 140 */
#define MO140_ID_TYPE_CAN4    CAN_STANDARD
#define MO140_ID_CAN4         0x123

/* Message Object 141 */
#define MO141_ID_TYPE_CAN4    CAN_STANDARD
#define MO141_ID_CAN4         0x123

/* Message Object 142 */
#define MO142_ID_TYPE_CAN4    CAN_STANDARD
#define MO142_ID_CAN4         0x123

/* Message Object 143 */
#define MO143_ID_TYPE_CAN4    CAN_STANDARD
#define MO143_ID_CAN4         0x123

/* Message Object 144 */
#define MO144_ID_TYPE_CAN4    CAN_STANDARD
#define MO144_ID_CAN4         0x123

/* Message Object 145 */
#define MO145_ID_TYPE_CAN4    CAN_STANDARD
#define MO145_ID_CAN4         0x123

/* Message Object 146 */
#define MO146_ID_TYPE_CAN4    CAN_STANDARD
#define MO146_ID_CAN4         0x123

/* Message Object 147 */
#define MO147_ID_TYPE_CAN4    CAN_STANDARD
#define MO147_ID_CAN4         0x123

/* Message Object 148 */
#define MO148_ID_TYPE_CAN4    CAN_STANDARD
#define MO148_ID_CAN4         0x123

/* Message Object 149 */
#define MO149_ID_TYPE_CAN4    CAN_STANDARD
#define MO149_ID_CAN4         0x123

/* Message Object 150 */
#define MO150_ID_TYPE_CAN4    CAN_STANDARD
#define MO150_ID_CAN4         0x123

/* Message Object 151 */
#define MO151_ID_TYPE_CAN4    CAN_STANDARD
#define MO151_ID_CAN4         0x123

/* Message Object 152 */
#define MO152_ID_TYPE_CAN4    CAN_STANDARD
#define MO152_ID_CAN4         0x123

/* Message Object 153 */
#define MO153_ID_TYPE_CAN4    CAN_STANDARD
#define MO153_ID_CAN4         0x123

/* Message Object 154 */
#define MO154_ID_TYPE_CAN4    CAN_STANDARD
#define MO154_ID_CAN4         0x123

/* Message Object 155 */
#define MO155_ID_TYPE_CAN4    CAN_STANDARD
#define MO155_ID_CAN4         0x123

/* Message Object 156 */
#define MO156_ID_TYPE_CAN4    CAN_STANDARD
#define MO156_ID_CAN4         0x123

/* Message Object 157 */
#define MO157_ID_TYPE_CAN4    CAN_STANDARD
#define MO157_ID_CAN4         0x123

/* Message Object 158 */
#define MO158_ID_TYPE_CAN4    CAN_STANDARD
#define MO158_ID_CAN4         0x123

/* Message Object 159 */
#define MO159_ID_TYPE_CAN4    CAN_STANDARD
#define MO159_ID_CAN4         0x123

/* Message Object 160 */
#define MO160_ID_TYPE_CAN4    CAN_STANDARD
#define MO160_ID_CAN4         0x123

/* Message Object 161 */
#define MO161_ID_TYPE_CAN4    CAN_STANDARD
#define MO161_ID_CAN4         0x123

/* Message Object 162 */
#define MO162_ID_TYPE_CAN4    CAN_STANDARD
#define MO162_ID_CAN4         0x123

/* Message Object 163 */
#define MO163_ID_TYPE_CAN4    CAN_STANDARD
#define MO163_ID_CAN4         0x123

/* Message Object 164 */
#define MO164_ID_TYPE_CAN4    CAN_STANDARD
#define MO164_ID_CAN4         0x123

/* Message Object 165 */
#define MO165_ID_TYPE_CAN4    CAN_STANDARD
#define MO165_ID_CAN4         0x123

/* Message Object 166 */
#define MO166_ID_TYPE_CAN4    CAN_STANDARD
#define MO166_ID_CAN4         0x123

/* Message Object 167 */
#define MO167_ID_TYPE_CAN4    CAN_STANDARD
#define MO167_ID_CAN4         0x123

/* Message Object 168 */
#define MO168_ID_TYPE_CAN4    CAN_STANDARD
#define MO168_ID_CAN4         0x123

/* Message Object 169 */
#define MO169_ID_TYPE_CAN4    CAN_STANDARD
#define MO169_ID_CAN4         0x123

/* Message Object 170 */
#define MO170_ID_TYPE_CAN4    CAN_STANDARD
#define MO170_ID_CAN4         0x123

/* Message Object 171 */
#define MO171_ID_TYPE_CAN4    CAN_STANDARD
#define MO171_ID_CAN4         0x123

/* Message Object 172 */
#define MO172_ID_TYPE_CAN4    CAN_STANDARD
#define MO172_ID_CAN4         0x123

/* Message Object 173 */
#define MO173_ID_TYPE_CAN4    CAN_STANDARD
#define MO173_ID_CAN4         0x123

/* Message Object 174 */
#define MO174_ID_TYPE_CAN4    CAN_STANDARD
#define MO174_ID_CAN4         0x123

/* Message Object 175 */
#define MO175_ID_TYPE_CAN4    CAN_STANDARD
#define MO175_ID_CAN4         0x123

/* Message Object 176 */
#define MO176_ID_TYPE_CAN4    CAN_STANDARD
#define MO176_ID_CAN4         0x123

/* Message Object 177 */
#define MO177_ID_TYPE_CAN4    CAN_STANDARD
#define MO177_ID_CAN4         0x123

/* Message Object 178 */
#define MO178_ID_TYPE_CAN4    CAN_STANDARD
#define MO178_ID_CAN4         0x123

/* Message Object 179 */
#define MO179_ID_TYPE_CAN4    CAN_STANDARD
#define MO179_ID_CAN4         0x123

/* Message Object 180 */
#define MO180_ID_TYPE_CAN4    CAN_STANDARD
#define MO180_ID_CAN4         0x123

/* Message Object 181 */
#define MO181_ID_TYPE_CAN4    CAN_STANDARD
#define MO181_ID_CAN4         0x123

/* Message Object 182 */
#define MO182_ID_TYPE_CAN4    CAN_STANDARD
#define MO182_ID_CAN4         0x123

/* Message Object 183 */
#define MO183_ID_TYPE_CAN4    CAN_STANDARD
#define MO183_ID_CAN4         0x123

/* Message Object 184 */
#define MO184_ID_TYPE_CAN4    CAN_STANDARD
#define MO184_ID_CAN4         0x123

/* Message Object 185 */
#define MO185_ID_TYPE_CAN4    CAN_STANDARD
#define MO185_ID_CAN4         0x123

/* Message Object 186 */
#define MO186_ID_TYPE_CAN4    CAN_STANDARD
#define MO186_ID_CAN4         0x123

/* Message Object 187 */
#define MO187_ID_TYPE_CAN4    CAN_STANDARD
#define MO187_ID_CAN4         0x123

/* Message Object 188 */
#define MO188_ID_TYPE_CAN4    CAN_STANDARD
#define MO188_ID_CAN4         0x123

/* Message Object 189 */
#define MO189_ID_TYPE_CAN4    CAN_STANDARD
#define MO189_ID_CAN4         0x123

/* Message Object 190 */
#define MO190_ID_TYPE_CAN4    CAN_STANDARD
#define MO190_ID_CAN4         0x123

/* Message Object 191 */
#define MO191_ID_TYPE_CAN4    CAN_STANDARD
#define MO191_ID_CAN4         0x123

/* Message Object 192 */
#define MO192_ID_TYPE_CAN4    CAN_STANDARD
#define MO192_ID_CAN4         0x123

/* Message Object 193 */
#define MO193_ID_TYPE_CAN4    CAN_STANDARD
#define MO193_ID_CAN4         0x123

/* Message Object 194 */
#define MO194_ID_TYPE_CAN4    CAN_STANDARD
#define MO194_ID_CAN4         0x123

/* Message Object 195 */
#define MO195_ID_TYPE_CAN4    CAN_STANDARD
#define MO195_ID_CAN4         0x123

/* Message Object 196 */
#define MO196_ID_TYPE_CAN4    CAN_STANDARD
#define MO196_ID_CAN4         0x123

/* Message Object 197 */
#define MO197_ID_TYPE_CAN4    CAN_STANDARD
#define MO197_ID_CAN4         0x123

/* Message Object 198 */
#define MO198_ID_TYPE_CAN4    CAN_STANDARD
#define MO198_ID_CAN4         0x123

/* Message Object 199 */
#define MO199_ID_TYPE_CAN4    CAN_STANDARD
#define MO199_ID_CAN4         0x123

/* Message Object 200 */
#define MO200_ID_TYPE_CAN4    CAN_STANDARD
#define MO200_ID_CAN4         0x123

/* Message Object 201 */
#define MO201_ID_TYPE_CAN4    CAN_STANDARD
#define MO201_ID_CAN4         0x123

/* Message Object 202 */
#define MO202_ID_TYPE_CAN4    CAN_STANDARD
#define MO202_ID_CAN4         0x123

/* Message Object 203 */
#define MO203_ID_TYPE_CAN4    CAN_STANDARD
#define MO203_ID_CAN4         0x123

/* Message Object 204 */
#define MO204_ID_TYPE_CAN4    CAN_STANDARD
#define MO204_ID_CAN4         0x123

/* Message Object 205 */
#define MO205_ID_TYPE_CAN4    CAN_STANDARD
#define MO205_ID_CAN4         0x123

/* Message Object 206 */
#define MO206_ID_TYPE_CAN4    CAN_STANDARD
#define MO206_ID_CAN4         0x123

/* Message Object 207 */
#define MO207_ID_TYPE_CAN4    CAN_STANDARD
#define MO207_ID_CAN4         0x123

/* Message Object 208 */
#define MO208_ID_TYPE_CAN4    CAN_STANDARD
#define MO208_ID_CAN4         0x123

/* Message Object 209 */
#define MO209_ID_TYPE_CAN4    CAN_STANDARD
#define MO209_ID_CAN4         0x123

/* Message Object 210 */
#define MO210_ID_TYPE_CAN4    CAN_STANDARD
#define MO210_ID_CAN4         0x123

/* Message Object 211 */
#define MO211_ID_TYPE_CAN4    CAN_STANDARD
#define MO211_ID_CAN4         0x123

/* Message Object 212 */
#define MO212_ID_TYPE_CAN4    CAN_STANDARD
#define MO212_ID_CAN4         0x123

/* Message Object 213 */
#define MO213_ID_TYPE_CAN4    CAN_STANDARD
#define MO213_ID_CAN4         0x123

/* Message Object 214 */
#define MO214_ID_TYPE_CAN4    CAN_STANDARD
#define MO214_ID_CAN4         0x123

/* Message Object 215 */
#define MO215_ID_TYPE_CAN4    CAN_STANDARD
#define MO215_ID_CAN4         0x123

/* Message Object 216 */
#define MO216_ID_TYPE_CAN4    CAN_STANDARD
#define MO216_ID_CAN4         0x123

/* Message Object 217 */
#define MO217_ID_TYPE_CAN4    CAN_STANDARD
#define MO217_ID_CAN4         0x123

/* Message Object 218 */
#define MO218_ID_TYPE_CAN4    CAN_STANDARD
#define MO218_ID_CAN4         0x123

/* Message Object 219 */
#define MO219_ID_TYPE_CAN4    CAN_STANDARD
#define MO219_ID_CAN4         0x123

/* Message Object 220 */
#define MO220_ID_TYPE_CAN4    CAN_STANDARD
#define MO220_ID_CAN4         0x123

/* Message Object 221 */
#define MO221_ID_TYPE_CAN4    CAN_STANDARD
#define MO221_ID_CAN4         0x123

/* Message Object 222 */
#define MO222_ID_TYPE_CAN4    CAN_STANDARD
#define MO222_ID_CAN4         0x123

/* Message Object 223 */
#define MO223_ID_TYPE_CAN4    CAN_STANDARD
#define MO223_ID_CAN4         0x123

/* Message Object 224 */
#define MO224_ID_TYPE_CAN4    CAN_STANDARD
#define MO224_ID_CAN4         0x123

/* Message Object 225 */
#define MO225_ID_TYPE_CAN4    CAN_STANDARD
#define MO225_ID_CAN4         0x123

/* Message Object 226 */
#define MO226_ID_TYPE_CAN4    CAN_STANDARD
#define MO226_ID_CAN4         0x123

/* Message Object 227 */
#define MO227_ID_TYPE_CAN4    CAN_STANDARD
#define MO227_ID_CAN4         0x123

/* Message Object 228 */
#define MO228_ID_TYPE_CAN4    CAN_STANDARD
#define MO228_ID_CAN4         0x123

/* Message Object 229 */
#define MO229_ID_TYPE_CAN4    CAN_STANDARD
#define MO229_ID_CAN4         0x123

/* Message Object 230 */
#define MO230_ID_TYPE_CAN4    CAN_STANDARD
#define MO230_ID_CAN4         0x123

/* Message Object 231 */
#define MO231_ID_TYPE_CAN4    CAN_STANDARD
#define MO231_ID_CAN4         0x123

/* Message Object 232 */
#define MO232_ID_TYPE_CAN4    CAN_STANDARD
#define MO232_ID_CAN4         0x123

/* Message Object 233 */
#define MO233_ID_TYPE_CAN4    CAN_STANDARD
#define MO233_ID_CAN4         0x123

/* Message Object 234 */
#define MO234_ID_TYPE_CAN4    CAN_STANDARD
#define MO234_ID_CAN4         0x123

/* Message Object 235 */
#define MO235_ID_TYPE_CAN4    CAN_STANDARD
#define MO235_ID_CAN4         0x123

/* Message Object 236 */
#define MO236_ID_TYPE_CAN4    CAN_STANDARD
#define MO236_ID_CAN4         0x123

/* Message Object 237 */
#define MO237_ID_TYPE_CAN4    CAN_STANDARD
#define MO237_ID_CAN4         0x123

/* Message Object 238 */
#define MO238_ID_TYPE_CAN4    CAN_STANDARD
#define MO238_ID_CAN4         0x123

/* Message Object 239 */
#define MO239_ID_TYPE_CAN4    CAN_STANDARD
#define MO239_ID_CAN4         0x123

/* Message Object 240 */
#define MO240_ID_TYPE_CAN4    CAN_STANDARD
#define MO240_ID_CAN4         0x123

/* Message Object 241 */
#define MO241_ID_TYPE_CAN4    CAN_STANDARD
#define MO241_ID_CAN4         0x123

/* Message Object 242 */
#define MO242_ID_TYPE_CAN4    CAN_STANDARD
#define MO242_ID_CAN4         0x123

/* Message Object 243 */
#define MO243_ID_TYPE_CAN4    CAN_STANDARD
#define MO243_ID_CAN4         0x123

/* Message Object 244 */
#define MO244_ID_TYPE_CAN4    CAN_STANDARD
#define MO244_ID_CAN4         0x123

/* Message Object 245 */
#define MO245_ID_TYPE_CAN4    CAN_STANDARD
#define MO245_ID_CAN4         0x123

/* Message Object 246 */
#define MO246_ID_TYPE_CAN4    CAN_STANDARD
#define MO246_ID_CAN4         0x123

/* Message Object 247 */
#define MO247_ID_TYPE_CAN4    CAN_STANDARD
#define MO247_ID_CAN4         0x123

/* Message Object 248 */
#define MO248_ID_TYPE_CAN4    CAN_STANDARD
#define MO248_ID_CAN4         0x123

/* Message Object 249 */
#define MO249_ID_TYPE_CAN4    CAN_STANDARD
#define MO249_ID_CAN4         0x123

/* Message Object 250 */
#define MO250_ID_TYPE_CAN4    CAN_STANDARD
#define MO250_ID_CAN4         0x123

/* Message Object 251 */
#define MO251_ID_TYPE_CAN4    CAN_STANDARD
#define MO251_ID_CAN4         0x123

/* Message Object 252 */
#define MO252_ID_TYPE_CAN4    CAN_STANDARD
#define MO252_ID_CAN4         0x123

/* Message Object 253 */
#define MO253_ID_TYPE_CAN4    CAN_STANDARD
#define MO253_ID_CAN4         0x123

/* Message Object 254 */
#define MO254_ID_TYPE_CAN4    CAN_STANDARD
#define MO254_ID_CAN4         0x123

/*****************************************************************************/
#endif        

/* end msCANID.h */ 

