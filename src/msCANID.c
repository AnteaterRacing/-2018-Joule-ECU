#ifndef MSCANID_C
#define MSCANID_C           /* This file */
/******************************************************************************							              
*
*                             Copyright (C) 2013 
*
* Tongji University - Freescale Automotive Electronics Laboratory, Inc.
* 
*                            All Rights Reserved		
*														                            
* Filename:     msCANID.c                
*														                            
* Revision:      										                    
*														                            
* Functions:    Identifier array for msCAN 
*												                            
* Description:  Create an array to store the ID_Type and ID of each ID
*
* Notes:        
*
******************************************************************************/

/****************************************************************************
* Include 
***************************************************************************/
#include "msCANdrv.h"
#include "msCANID.h"
#include "msCANIDa.h"


/****************************************************************************** 
* Message Object Identifier Array
*
* Pack Message Object Identifiers into ROM, in decreasing order of local priority
******************************************************************************/
const TMSCANIdentifier All_Identifier[CAN_ID_COUNT] = 
{
/*****************************************************************************

*CAN0

*****************************************************************************/
#if (no_of_ID_CAN0 > 0) 
    {MO0_ID_TYPE_CAN0,MO0_IDR_CAN0}
#endif                                          

#if (no_of_ID_CAN0 > 1) 
    ,{MO1_ID_TYPE_CAN0,MO1_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 2) 
    ,{MO2_ID_TYPE_CAN0,MO2_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 3) 
    ,{MO3_ID_TYPE_CAN0,MO3_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 4) 
    ,{MO4_ID_TYPE_CAN0,MO4_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 5) 
    ,{MO5_ID_TYPE_CAN0,MO5_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 6) 
    ,{MO6_ID_TYPE_CAN0,MO6_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 7) 
    ,{MO7_ID_TYPE_CAN0,MO7_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 8) 
    ,{MO8_ID_TYPE_CAN0,MO8_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 9) 
    ,{MO9_ID_TYPE_CAN0,MO9_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 10) 
    ,{MO10_ID_TYPE_CAN0,MO10_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 11) 
    ,{MO11_ID_TYPE_CAN0,MO11_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 12) 
    ,{MO12_ID_TYPE_CAN0,MO12_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 13) 
    ,{MO13_ID_TYPE_CAN0,MO13_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 14) 
    ,{MO14_ID_TYPE_CAN0,MO14_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 15) 
    ,{MO15_ID_TYPE_CAN0,MO15_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 16) 
    ,{MO16_ID_TYPE_CAN0,MO16_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 17) 
    ,{MO17_ID_TYPE_CAN0,MO17_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 18) 
    ,{MO18_ID_TYPE_CAN0,MO18_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 19) 
    ,{MO19_ID_TYPE_CAN0,MO19_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 20) 
    ,{MO20_ID_TYPE_CAN0,MO20_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 21) 
    ,{MO21_ID_TYPE_CAN0,MO21_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 22) 
    ,{MO22_ID_TYPE_CAN0,MO22_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 23) 
    ,{MO23_ID_TYPE_CAN0,MO23_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 24) 
    ,{MO24_ID_TYPE_CAN0,MO24_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 25) 
    ,{MO25_ID_TYPE_CAN0,MO25_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 26) 
    ,{MO26_ID_TYPE_CAN0,MO26_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 27) 
    ,{MO27_ID_TYPE_CAN0,MO27_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 28) 
    ,{MO28_ID_TYPE_CAN0,MO28_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 29) 
    ,{MO29_ID_TYPE_CAN0,MO29_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 30) 
    ,{MO30_ID_TYPE_CAN0,MO30_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 31) 
    ,{MO31_ID_TYPE_CAN0,MO31_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 32) 
    ,{MO32_ID_TYPE_CAN0,MO32_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 33) 
    ,{MO33_ID_TYPE_CAN0,MO33_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 34) 
    ,{MO34_ID_TYPE_CAN0,MO34_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 35) 
    ,{MO35_ID_TYPE_CAN0,MO35_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 36) 
    ,{MO36_ID_TYPE_CAN0,MO36_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 37) 
    ,{MO37_ID_TYPE_CAN0,MO37_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 38) 
    ,{MO38_ID_TYPE_CAN0,MO38_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 39) 
    ,{MO39_ID_TYPE_CAN0,MO39_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 40) 
    ,{MO40_ID_TYPE_CAN0,MO40_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 41) 
    ,{MO41_ID_TYPE_CAN0,MO41_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 42) 
    ,{MO42_ID_TYPE_CAN0,MO42_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 43) 
    ,{MO43_ID_TYPE_CAN0,MO43_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 44) 
    ,{MO44_ID_TYPE_CAN0,MO44_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 45) 
    ,{MO45_ID_TYPE_CAN0,MO45_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 46) 
    ,{MO46_ID_TYPE_CAN0,MO46_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 47) 
    ,{MO47_ID_TYPE_CAN0,MO47_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 48) 
    ,{MO48_ID_TYPE_CAN0,MO48_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 49) 
    ,{MO49_ID_TYPE_CAN0,MO49_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 50) 
    ,{MO50_ID_TYPE_CAN0,MO50_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 51) 
    ,{MO51_ID_TYPE_CAN0,MO51_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 52) 
    ,{MO52_ID_TYPE_CAN0,MO52_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 53) 
    ,{MO53_ID_TYPE_CAN0,MO53_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 54) 
    ,{MO54_ID_TYPE_CAN0,MO54_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 55) 
    ,{MO55_ID_TYPE_CAN0,MO55_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 56) 
    ,{MO56_ID_TYPE_CAN0,MO56_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 57) 
    ,{MO57_ID_TYPE_CAN0,MO57_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 58) 
    ,{MO58_ID_TYPE_CAN0,MO58_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 59) 
    ,{MO59_ID_TYPE_CAN0,MO59_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 60) 
    ,{MO60_ID_TYPE_CAN0,MO60_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 61) 
    ,{MO61_ID_TYPE_CAN0,MO61_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 62) 
    ,{MO62_ID_TYPE_CAN0,MO62_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 63) 
    ,{MO63_ID_TYPE_CAN0,MO63_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 64) 
    ,{MO64_ID_TYPE_CAN0,MO64_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 65) 
    ,{MO65_ID_TYPE_CAN0,MO65_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 66) 
    ,{MO66_ID_TYPE_CAN0,MO66_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 67) 
    ,{MO67_ID_TYPE_CAN0,MO67_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 68) 
    ,{MO68_ID_TYPE_CAN0,MO68_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 69) 
    ,{MO69_ID_TYPE_CAN0,MO69_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 70) 
    ,{MO70_ID_TYPE_CAN0,MO70_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 71) 
    ,{MO71_ID_TYPE_CAN0,MO71_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 72) 
    ,{MO72_ID_TYPE_CAN0,MO72_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 73) 
    ,{MO73_ID_TYPE_CAN0,MO73_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 74) 
    ,{MO74_ID_TYPE_CAN0,MO74_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 75) 
    ,{MO75_ID_TYPE_CAN0,MO75_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 76) 
    ,{MO76_ID_TYPE_CAN0,MO76_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 77) 
    ,{MO77_ID_TYPE_CAN0,MO77_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 78) 
    ,{MO78_ID_TYPE_CAN0,MO78_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 79) 
    ,{MO79_ID_TYPE_CAN0,MO79_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 80) 
    ,{MO80_ID_TYPE_CAN0,MO80_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 81) 
    ,{MO81_ID_TYPE_CAN0,MO81_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 82) 
    ,{MO82_ID_TYPE_CAN0,MO82_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 83) 
    ,{MO83_ID_TYPE_CAN0,MO83_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 84) 
    ,{MO84_ID_TYPE_CAN0,MO84_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 85) 
    ,{MO85_ID_TYPE_CAN0,MO85_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 86) 
    ,{MO86_ID_TYPE_CAN0,MO86_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 87) 
    ,{MO87_ID_TYPE_CAN0,MO87_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 88) 
    ,{MO88_ID_TYPE_CAN0,MO88_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 89) 
    ,{MO89_ID_TYPE_CAN0,MO89_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 90) 
    ,{MO90_ID_TYPE_CAN0,MO90_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 91) 
    ,{MO91_ID_TYPE_CAN0,MO91_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 92) 
    ,{MO92_ID_TYPE_CAN0,MO92_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 93) 
    ,{MO93_ID_TYPE_CAN0,MO93_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 94) 
    ,{MO94_ID_TYPE_CAN0,MO94_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 95) 
    ,{MO95_ID_TYPE_CAN0,MO95_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 96) 
    ,{MO96_ID_TYPE_CAN0,MO96_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 97) 
    ,{MO97_ID_TYPE_CAN0,MO97_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 98) 
    ,{MO98_ID_TYPE_CAN0,MO98_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 99) 
    ,{MO99_ID_TYPE_CAN0,MO99_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 100) 
    ,{MO100_ID_TYPE_CAN0,MO100_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 101) 
    ,{MO101_ID_TYPE_CAN0,MO101_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 102) 
    ,{MO102_ID_TYPE_CAN0,MO102_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 103) 
    ,{MO103_ID_TYPE_CAN0,MO103_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 104) 
    ,{MO104_ID_TYPE_CAN0,MO104_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 105) 
    ,{MO105_ID_TYPE_CAN0,MO105_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 106) 
    ,{MO106_ID_TYPE_CAN0,MO106_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 107) 
    ,{MO107_ID_TYPE_CAN0,MO107_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 108) 
    ,{MO108_ID_TYPE_CAN0,MO108_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 109) 
    ,{MO109_ID_TYPE_CAN0,MO109_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 110) 
    ,{MO110_ID_TYPE_CAN0,MO110_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 111) 
    ,{MO111_ID_TYPE_CAN0,MO111_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 112) 
    ,{MO112_ID_TYPE_CAN0,MO112_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 113) 
    ,{MO113_ID_TYPE_CAN0,MO113_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 114) 
    ,{MO114_ID_TYPE_CAN0,MO114_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 115) 
    ,{MO115_ID_TYPE_CAN0,MO115_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 116) 
    ,{MO116_ID_TYPE_CAN0,MO116_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 117) 
    ,{MO117_ID_TYPE_CAN0,MO117_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 118) 
    ,{MO118_ID_TYPE_CAN0,MO118_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 119) 
    ,{MO119_ID_TYPE_CAN0,MO119_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 120) 
    ,{MO120_ID_TYPE_CAN0,MO120_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 121) 
    ,{MO121_ID_TYPE_CAN0,MO121_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 122) 
    ,{MO122_ID_TYPE_CAN0,MO122_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 123) 
    ,{MO123_ID_TYPE_CAN0,MO123_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 124) 
    ,{MO124_ID_TYPE_CAN0,MO124_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 125) 
    ,{MO125_ID_TYPE_CAN0,MO125_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 126) 
    ,{MO126_ID_TYPE_CAN0,MO126_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 127) 
    ,{MO127_ID_TYPE_CAN0,MO127_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 128) 
    ,{MO128_ID_TYPE_CAN0,MO128_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 129) 
    ,{MO129_ID_TYPE_CAN0,MO129_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 130) 
    ,{MO130_ID_TYPE_CAN0,MO130_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 131) 
    ,{MO131_ID_TYPE_CAN0,MO131_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 132) 
    ,{MO132_ID_TYPE_CAN0,MO132_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 133) 
    ,{MO133_ID_TYPE_CAN0,MO133_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 134) 
    ,{MO134_ID_TYPE_CAN0,MO134_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 135) 
    ,{MO135_ID_TYPE_CAN0,MO135_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 136) 
    ,{MO136_ID_TYPE_CAN0,MO136_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 137) 
    ,{MO137_ID_TYPE_CAN0,MO137_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 138) 
    ,{MO138_ID_TYPE_CAN0,MO138_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 139) 
    ,{MO139_ID_TYPE_CAN0,MO139_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 140) 
    ,{MO140_ID_TYPE_CAN0,MO140_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 141) 
    ,{MO141_ID_TYPE_CAN0,MO141_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 142) 
    ,{MO142_ID_TYPE_CAN0,MO142_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 143) 
    ,{MO143_ID_TYPE_CAN0,MO143_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 144) 
    ,{MO144_ID_TYPE_CAN0,MO144_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 145) 
    ,{MO145_ID_TYPE_CAN0,MO145_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 146) 
    ,{MO146_ID_TYPE_CAN0,MO146_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 147) 
    ,{MO147_ID_TYPE_CAN0,MO147_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 148) 
    ,{MO148_ID_TYPE_CAN0,MO148_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 149) 
    ,{MO149_ID_TYPE_CAN0,MO149_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 150) 
    ,{MO150_ID_TYPE_CAN0,MO150_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 151) 
    ,{MO151_ID_TYPE_CAN0,MO151_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 152) 
    ,{MO152_ID_TYPE_CAN0,MO152_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 153) 
    ,{MO153_ID_TYPE_CAN0,MO153_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 154) 
    ,{MO154_ID_TYPE_CAN0,MO154_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 155) 
    ,{MO155_ID_TYPE_CAN0,MO155_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 156) 
    ,{MO156_ID_TYPE_CAN0,MO156_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 157) 
    ,{MO157_ID_TYPE_CAN0,MO157_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 158) 
    ,{MO158_ID_TYPE_CAN0,MO158_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 159) 
    ,{MO159_ID_TYPE_CAN0,MO159_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 160) 
    ,{MO160_ID_TYPE_CAN0,MO160_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 161) 
    ,{MO161_ID_TYPE_CAN0,MO161_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 162) 
    ,{MO162_ID_TYPE_CAN0,MO162_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 163) 
    ,{MO163_ID_TYPE_CAN0,MO163_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 164) 
    ,{MO164_ID_TYPE_CAN0,MO164_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 165) 
    ,{MO165_ID_TYPE_CAN0,MO165_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 166) 
    ,{MO166_ID_TYPE_CAN0,MO166_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 167) 
    ,{MO167_ID_TYPE_CAN0,MO167_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 168) 
    ,{MO168_ID_TYPE_CAN0,MO168_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 169) 
    ,{MO169_ID_TYPE_CAN0,MO169_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 170) 
    ,{MO170_ID_TYPE_CAN0,MO170_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 171) 
    ,{MO171_ID_TYPE_CAN0,MO171_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 172) 
    ,{MO172_ID_TYPE_CAN0,MO172_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 173) 
    ,{MO173_ID_TYPE_CAN0,MO173_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 174) 
    ,{MO174_ID_TYPE_CAN0,MO174_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 175) 
    ,{MO175_ID_TYPE_CAN0,MO175_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 176) 
    ,{MO176_ID_TYPE_CAN0,MO176_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 177) 
    ,{MO177_ID_TYPE_CAN0,MO177_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 178) 
    ,{MO178_ID_TYPE_CAN0,MO178_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 179) 
    ,{MO179_ID_TYPE_CAN0,MO179_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 180) 
    ,{MO180_ID_TYPE_CAN0,MO180_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 181) 
    ,{MO181_ID_TYPE_CAN0,MO181_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 182) 
    ,{MO182_ID_TYPE_CAN0,MO182_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 183) 
    ,{MO183_ID_TYPE_CAN0,MO183_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 184) 
    ,{MO184_ID_TYPE_CAN0,MO184_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 185) 
    ,{MO185_ID_TYPE_CAN0,MO185_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 186) 
    ,{MO186_ID_TYPE_CAN0,MO186_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 187) 
    ,{MO187_ID_TYPE_CAN0,MO187_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 188) 
    ,{MO188_ID_TYPE_CAN0,MO188_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 189) 
    ,{MO189_ID_TYPE_CAN0,MO189_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 190) 
    ,{MO190_ID_TYPE_CAN0,MO190_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 191) 
    ,{MO191_ID_TYPE_CAN0,MO191_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 192) 
    ,{MO192_ID_TYPE_CAN0,MO192_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 193) 
    ,{MO193_ID_TYPE_CAN0,MO193_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 194) 
    ,{MO194_ID_TYPE_CAN0,MO194_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 195) 
    ,{MO195_ID_TYPE_CAN0,MO195_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 196) 
    ,{MO196_ID_TYPE_CAN0,MO196_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 197) 
    ,{MO197_ID_TYPE_CAN0,MO197_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 198) 
    ,{MO198_ID_TYPE_CAN0,MO198_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 199) 
    ,{MO199_ID_TYPE_CAN0,MO199_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 200) 
    ,{MO200_ID_TYPE_CAN0,MO200_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 201) 
    ,{MO201_ID_TYPE_CAN0,MO201_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 202) 
    ,{MO202_ID_TYPE_CAN0,MO202_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 203) 
    ,{MO203_ID_TYPE_CAN0,MO203_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 204) 
    ,{MO204_ID_TYPE_CAN0,MO204_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 205) 
    ,{MO205_ID_TYPE_CAN0,MO205_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 206) 
    ,{MO206_ID_TYPE_CAN0,MO206_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 207) 
    ,{MO207_ID_TYPE_CAN0,MO207_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 208) 
    ,{MO208_ID_TYPE_CAN0,MO208_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 209) 
    ,{MO209_ID_TYPE_CAN0,MO209_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 210) 
    ,{MO210_ID_TYPE_CAN0,MO210_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 211) 
    ,{MO211_ID_TYPE_CAN0,MO211_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 212) 
    ,{MO212_ID_TYPE_CAN0,MO212_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 213) 
    ,{MO213_ID_TYPE_CAN0,MO213_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 214) 
    ,{MO214_ID_TYPE_CAN0,MO214_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 215) 
    ,{MO215_ID_TYPE_CAN0,MO215_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 216) 
    ,{MO216_ID_TYPE_CAN0,MO216_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 217) 
    ,{MO217_ID_TYPE_CAN0,MO217_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 218) 
    ,{MO218_ID_TYPE_CAN0,MO218_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 219) 
    ,{MO219_ID_TYPE_CAN0,MO219_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 220) 
    ,{MO220_ID_TYPE_CAN0,MO220_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 221) 
    ,{MO221_ID_TYPE_CAN0,MO221_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 222) 
    ,{MO222_ID_TYPE_CAN0,MO222_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 223) 
    ,{MO223_ID_TYPE_CAN0,MO223_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 224) 
    ,{MO224_ID_TYPE_CAN0,MO224_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 225) 
    ,{MO225_ID_TYPE_CAN0,MO225_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 226) 
    ,{MO226_ID_TYPE_CAN0,MO226_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 227) 
    ,{MO227_ID_TYPE_CAN0,MO227_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 228) 
    ,{MO228_ID_TYPE_CAN0,MO228_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 229) 
    ,{MO229_ID_TYPE_CAN0,MO229_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 230) 
    ,{MO230_ID_TYPE_CAN0,MO230_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 231) 
    ,{MO231_ID_TYPE_CAN0,MO231_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 232) 
    ,{MO232_ID_TYPE_CAN0,MO232_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 233) 
    ,{MO233_ID_TYPE_CAN0,MO233_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 234) 
    ,{MO234_ID_TYPE_CAN0,MO234_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 235) 
    ,{MO235_ID_TYPE_CAN0,MO235_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 236) 
    ,{MO236_ID_TYPE_CAN0,MO236_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 237) 
    ,{MO237_ID_TYPE_CAN0,MO237_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 238) 
    ,{MO238_ID_TYPE_CAN0,MO238_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 239) 
    ,{MO239_ID_TYPE_CAN0,MO239_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 240) 
    ,{MO240_ID_TYPE_CAN0,MO240_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 241) 
    ,{MO241_ID_TYPE_CAN0,MO241_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 242) 
    ,{MO242_ID_TYPE_CAN0,MO242_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 243) 
    ,{MO243_ID_TYPE_CAN0,MO243_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 244) 
    ,{MO244_ID_TYPE_CAN0,MO244_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 245) 
    ,{MO245_ID_TYPE_CAN0,MO245_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 246) 
    ,{MO246_ID_TYPE_CAN0,MO246_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 247) 
    ,{MO247_ID_TYPE_CAN0,MO247_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 248) 
    ,{MO248_ID_TYPE_CAN0,MO248_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 249) 
    ,{MO249_ID_TYPE_CAN0,MO249_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 250) 
    ,{MO250_ID_TYPE_CAN0,MO250_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 251) 
    ,{MO251_ID_TYPE_CAN0,MO251_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 252) 
    ,{MO252_ID_TYPE_CAN0,MO252_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 253) 
    ,{MO253_ID_TYPE_CAN0,MO253_IDR_CAN0}
#endif

#if (no_of_ID_CAN0 > 254) 
    ,{MO254_ID_TYPE_CAN0,MO254_IDR_CAN0}
#endif


/*****************************************************************************

*CAN1

*****************************************************************************/
#if (CAN0_USED&&no_of_ID_CAN1 > 0) 
    ,{MO0_ID_TYPE_CAN1,MO0_IDR_CAN1}
#elif (no_of_ID_CAN1 > 0)
    {MO0_ID_TYPE_CAN1,MO0_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 1) 
    ,{MO1_ID_TYPE_CAN1,MO1_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 2) 
    ,{MO2_ID_TYPE_CAN1,MO2_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 3) 
    ,{MO3_ID_TYPE_CAN1,MO3_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 4) 
    ,{MO4_ID_TYPE_CAN1,MO4_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 5) 
    ,{MO5_ID_TYPE_CAN1,MO5_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 6) 
    ,{MO6_ID_TYPE_CAN1,MO6_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 7) 
    ,{MO7_ID_TYPE_CAN1,MO7_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 8) 
    ,{MO8_ID_TYPE_CAN1,MO8_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 9) 
    ,{MO9_ID_TYPE_CAN1,MO9_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 10) 
    ,{MO10_ID_TYPE_CAN1,MO10_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 11) 
    ,{MO11_ID_TYPE_CAN1,MO11_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 12) 
    ,{MO12_ID_TYPE_CAN1,MO12_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 13) 
    ,{MO13_ID_TYPE_CAN1,MO13_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 14) 
    ,{MO14_ID_TYPE_CAN1,MO14_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 15) 
    ,{MO15_ID_TYPE_CAN1,MO15_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 16) 
    ,{MO16_ID_TYPE_CAN1,MO16_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 17) 
    ,{MO17_ID_TYPE_CAN1,MO17_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 18) 
    ,{MO18_ID_TYPE_CAN1,MO18_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 19) 
    ,{MO19_ID_TYPE_CAN1,MO19_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 20) 
    ,{MO20_ID_TYPE_CAN1,MO20_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 21) 
    ,{MO21_ID_TYPE_CAN1,MO21_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 22) 
    ,{MO22_ID_TYPE_CAN1,MO22_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 23) 
    ,{MO23_ID_TYPE_CAN1,MO23_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 24) 
    ,{MO24_ID_TYPE_CAN1,MO24_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 25) 
    ,{MO25_ID_TYPE_CAN1,MO25_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 26) 
    ,{MO26_ID_TYPE_CAN1,MO26_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 27) 
    ,{MO27_ID_TYPE_CAN1,MO27_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 28) 
    ,{MO28_ID_TYPE_CAN1,MO28_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 29) 
    ,{MO29_ID_TYPE_CAN1,MO29_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 30) 
    ,{MO30_ID_TYPE_CAN1,MO30_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 31) 
    ,{MO31_ID_TYPE_CAN1,MO31_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 32) 
    ,{MO32_ID_TYPE_CAN1,MO32_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 33) 
    ,{MO33_ID_TYPE_CAN1,MO33_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 34) 
    ,{MO34_ID_TYPE_CAN1,MO34_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 35) 
    ,{MO35_ID_TYPE_CAN1,MO35_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 36) 
    ,{MO36_ID_TYPE_CAN1,MO36_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 37) 
    ,{MO37_ID_TYPE_CAN1,MO37_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 38) 
    ,{MO38_ID_TYPE_CAN1,MO38_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 39) 
    ,{MO39_ID_TYPE_CAN1,MO39_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 40) 
    ,{MO40_ID_TYPE_CAN1,MO40_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 41) 
    ,{MO41_ID_TYPE_CAN1,MO41_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 42) 
    ,{MO42_ID_TYPE_CAN1,MO42_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 43) 
    ,{MO43_ID_TYPE_CAN1,MO43_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 44) 
    ,{MO44_ID_TYPE_CAN1,MO44_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 45) 
    ,{MO45_ID_TYPE_CAN1,MO45_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 46) 
    ,{MO46_ID_TYPE_CAN1,MO46_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 47) 
    ,{MO47_ID_TYPE_CAN1,MO47_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 48) 
    ,{MO48_ID_TYPE_CAN1,MO48_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 49) 
    ,{MO49_ID_TYPE_CAN1,MO49_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 50) 
    ,{MO50_ID_TYPE_CAN1,MO50_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 51) 
    ,{MO51_ID_TYPE_CAN1,MO51_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 52) 
    ,{MO52_ID_TYPE_CAN1,MO52_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 53) 
    ,{MO53_ID_TYPE_CAN1,MO53_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 54) 
    ,{MO54_ID_TYPE_CAN1,MO54_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 55) 
    ,{MO55_ID_TYPE_CAN1,MO55_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 56) 
    ,{MO56_ID_TYPE_CAN1,MO56_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 57) 
    ,{MO57_ID_TYPE_CAN1,MO57_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 58) 
    ,{MO58_ID_TYPE_CAN1,MO58_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 59) 
    ,{MO59_ID_TYPE_CAN1,MO59_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 60) 
    ,{MO60_ID_TYPE_CAN1,MO60_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 61) 
    ,{MO61_ID_TYPE_CAN1,MO61_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 62) 
    ,{MO62_ID_TYPE_CAN1,MO62_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 63) 
    ,{MO63_ID_TYPE_CAN1,MO63_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 64) 
    ,{MO64_ID_TYPE_CAN1,MO64_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 65) 
    ,{MO65_ID_TYPE_CAN1,MO65_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 66) 
    ,{MO66_ID_TYPE_CAN1,MO66_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 67) 
    ,{MO67_ID_TYPE_CAN1,MO67_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 68) 
    ,{MO68_ID_TYPE_CAN1,MO68_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 69) 
    ,{MO69_ID_TYPE_CAN1,MO69_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 70) 
    ,{MO70_ID_TYPE_CAN1,MO70_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 71) 
    ,{MO71_ID_TYPE_CAN1,MO71_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 72) 
    ,{MO72_ID_TYPE_CAN1,MO72_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 73) 
    ,{MO73_ID_TYPE_CAN1,MO73_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 74) 
    ,{MO74_ID_TYPE_CAN1,MO74_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 75) 
    ,{MO75_ID_TYPE_CAN1,MO75_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 76) 
    ,{MO76_ID_TYPE_CAN1,MO76_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 77) 
    ,{MO77_ID_TYPE_CAN1,MO77_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 78) 
    ,{MO78_ID_TYPE_CAN1,MO78_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 79) 
    ,{MO79_ID_TYPE_CAN1,MO79_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 80) 
    ,{MO80_ID_TYPE_CAN1,MO80_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 81) 
    ,{MO81_ID_TYPE_CAN1,MO81_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 82) 
    ,{MO82_ID_TYPE_CAN1,MO82_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 83) 
    ,{MO83_ID_TYPE_CAN1,MO83_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 84) 
    ,{MO84_ID_TYPE_CAN1,MO84_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 85) 
    ,{MO85_ID_TYPE_CAN1,MO85_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 86) 
    ,{MO86_ID_TYPE_CAN1,MO86_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 87) 
    ,{MO87_ID_TYPE_CAN1,MO87_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 88) 
    ,{MO88_ID_TYPE_CAN1,MO88_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 89) 
    ,{MO89_ID_TYPE_CAN1,MO89_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 90) 
    ,{MO90_ID_TYPE_CAN1,MO90_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 91) 
    ,{MO91_ID_TYPE_CAN1,MO91_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 92) 
    ,{MO92_ID_TYPE_CAN1,MO92_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 93) 
    ,{MO93_ID_TYPE_CAN1,MO93_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 94) 
    ,{MO94_ID_TYPE_CAN1,MO94_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 95) 
    ,{MO95_ID_TYPE_CAN1,MO95_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 96) 
    ,{MO96_ID_TYPE_CAN1,MO96_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 97) 
    ,{MO97_ID_TYPE_CAN1,MO97_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 98) 
    ,{MO98_ID_TYPE_CAN1,MO98_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 99) 
    ,{MO99_ID_TYPE_CAN1,MO99_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 100) 
    ,{MO100_ID_TYPE_CAN1,MO100_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 101) 
    ,{MO101_ID_TYPE_CAN1,MO101_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 102) 
    ,{MO102_ID_TYPE_CAN1,MO102_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 103) 
    ,{MO103_ID_TYPE_CAN1,MO103_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 104) 
    ,{MO104_ID_TYPE_CAN1,MO104_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 105) 
    ,{MO105_ID_TYPE_CAN1,MO105_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 106) 
    ,{MO106_ID_TYPE_CAN1,MO106_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 107) 
    ,{MO107_ID_TYPE_CAN1,MO107_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 108) 
    ,{MO108_ID_TYPE_CAN1,MO108_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 109) 
    ,{MO109_ID_TYPE_CAN1,MO109_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 110) 
    ,{MO110_ID_TYPE_CAN1,MO110_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 111) 
    ,{MO111_ID_TYPE_CAN1,MO111_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 112) 
    ,{MO112_ID_TYPE_CAN1,MO112_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 113) 
    ,{MO113_ID_TYPE_CAN1,MO113_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 114) 
    ,{MO114_ID_TYPE_CAN1,MO114_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 115) 
    ,{MO115_ID_TYPE_CAN1,MO115_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 116) 
    ,{MO116_ID_TYPE_CAN1,MO116_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 117) 
    ,{MO117_ID_TYPE_CAN1,MO117_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 118) 
    ,{MO118_ID_TYPE_CAN1,MO118_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 119) 
    ,{MO119_ID_TYPE_CAN1,MO119_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 120) 
    ,{MO120_ID_TYPE_CAN1,MO120_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 121) 
    ,{MO121_ID_TYPE_CAN1,MO121_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 122) 
    ,{MO122_ID_TYPE_CAN1,MO122_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 123) 
    ,{MO123_ID_TYPE_CAN1,MO123_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 124) 
    ,{MO124_ID_TYPE_CAN1,MO124_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 125) 
    ,{MO125_ID_TYPE_CAN1,MO125_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 126) 
    ,{MO126_ID_TYPE_CAN1,MO126_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 127) 
    ,{MO127_ID_TYPE_CAN1,MO127_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 128) 
    ,{MO128_ID_TYPE_CAN1,MO128_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 129) 
    ,{MO129_ID_TYPE_CAN1,MO129_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 130) 
    ,{MO130_ID_TYPE_CAN1,MO130_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 131) 
    ,{MO131_ID_TYPE_CAN1,MO131_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 132) 
    ,{MO132_ID_TYPE_CAN1,MO132_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 133) 
    ,{MO133_ID_TYPE_CAN1,MO133_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 134) 
    ,{MO134_ID_TYPE_CAN1,MO134_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 135) 
    ,{MO135_ID_TYPE_CAN1,MO135_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 136) 
    ,{MO136_ID_TYPE_CAN1,MO136_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 137) 
    ,{MO137_ID_TYPE_CAN1,MO137_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 138) 
    ,{MO138_ID_TYPE_CAN1,MO138_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 139) 
    ,{MO139_ID_TYPE_CAN1,MO139_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 140) 
    ,{MO140_ID_TYPE_CAN1,MO140_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 141) 
    ,{MO141_ID_TYPE_CAN1,MO141_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 142) 
    ,{MO142_ID_TYPE_CAN1,MO142_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 143) 
    ,{MO143_ID_TYPE_CAN1,MO143_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 144) 
    ,{MO144_ID_TYPE_CAN1,MO144_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 145) 
    ,{MO145_ID_TYPE_CAN1,MO145_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 146) 
    ,{MO146_ID_TYPE_CAN1,MO146_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 147) 
    ,{MO147_ID_TYPE_CAN1,MO147_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 148) 
    ,{MO148_ID_TYPE_CAN1,MO148_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 149) 
    ,{MO149_ID_TYPE_CAN1,MO149_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 150) 
    ,{MO150_ID_TYPE_CAN1,MO150_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 151) 
    ,{MO151_ID_TYPE_CAN1,MO151_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 152) 
    ,{MO152_ID_TYPE_CAN1,MO152_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 153) 
    ,{MO153_ID_TYPE_CAN1,MO153_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 154) 
    ,{MO154_ID_TYPE_CAN1,MO154_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 155) 
    ,{MO155_ID_TYPE_CAN1,MO155_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 156) 
    ,{MO156_ID_TYPE_CAN1,MO156_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 157) 
    ,{MO157_ID_TYPE_CAN1,MO157_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 158) 
    ,{MO158_ID_TYPE_CAN1,MO158_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 159) 
    ,{MO159_ID_TYPE_CAN1,MO159_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 160) 
    ,{MO160_ID_TYPE_CAN1,MO160_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 161) 
    ,{MO161_ID_TYPE_CAN1,MO161_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 162) 
    ,{MO162_ID_TYPE_CAN1,MO162_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 163) 
    ,{MO163_ID_TYPE_CAN1,MO163_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 164) 
    ,{MO164_ID_TYPE_CAN1,MO164_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 165) 
    ,{MO165_ID_TYPE_CAN1,MO165_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 166) 
    ,{MO166_ID_TYPE_CAN1,MO166_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 167) 
    ,{MO167_ID_TYPE_CAN1,MO167_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 168) 
    ,{MO168_ID_TYPE_CAN1,MO168_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 169) 
    ,{MO169_ID_TYPE_CAN1,MO169_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 170) 
    ,{MO170_ID_TYPE_CAN1,MO170_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 171) 
    ,{MO171_ID_TYPE_CAN1,MO171_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 172) 
    ,{MO172_ID_TYPE_CAN1,MO172_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 173) 
    ,{MO173_ID_TYPE_CAN1,MO173_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 174) 
    ,{MO174_ID_TYPE_CAN1,MO174_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 175) 
    ,{MO175_ID_TYPE_CAN1,MO175_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 176) 
    ,{MO176_ID_TYPE_CAN1,MO176_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 177) 
    ,{MO177_ID_TYPE_CAN1,MO177_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 178) 
    ,{MO178_ID_TYPE_CAN1,MO178_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 179) 
    ,{MO179_ID_TYPE_CAN1,MO179_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 180) 
    ,{MO180_ID_TYPE_CAN1,MO180_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 181) 
    ,{MO181_ID_TYPE_CAN1,MO181_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 182) 
    ,{MO182_ID_TYPE_CAN1,MO182_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 183) 
    ,{MO183_ID_TYPE_CAN1,MO183_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 184) 
    ,{MO184_ID_TYPE_CAN1,MO184_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 185) 
    ,{MO185_ID_TYPE_CAN1,MO185_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 186) 
    ,{MO186_ID_TYPE_CAN1,MO186_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 187) 
    ,{MO187_ID_TYPE_CAN1,MO187_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 188) 
    ,{MO188_ID_TYPE_CAN1,MO188_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 189) 
    ,{MO189_ID_TYPE_CAN1,MO189_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 190) 
    ,{MO190_ID_TYPE_CAN1,MO190_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 191) 
    ,{MO191_ID_TYPE_CAN1,MO191_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 192) 
    ,{MO192_ID_TYPE_CAN1,MO192_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 193) 
    ,{MO193_ID_TYPE_CAN1,MO193_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 194) 
    ,{MO194_ID_TYPE_CAN1,MO194_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 195) 
    ,{MO195_ID_TYPE_CAN1,MO195_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 196) 
    ,{MO196_ID_TYPE_CAN1,MO196_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 197) 
    ,{MO197_ID_TYPE_CAN1,MO197_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 198) 
    ,{MO198_ID_TYPE_CAN1,MO198_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 199) 
    ,{MO199_ID_TYPE_CAN1,MO199_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 200) 
    ,{MO200_ID_TYPE_CAN1,MO200_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 201) 
    ,{MO201_ID_TYPE_CAN1,MO201_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 202) 
    ,{MO202_ID_TYPE_CAN1,MO202_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 203) 
    ,{MO203_ID_TYPE_CAN1,MO203_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 204) 
    ,{MO204_ID_TYPE_CAN1,MO204_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 205) 
    ,{MO205_ID_TYPE_CAN1,MO205_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 206) 
    ,{MO206_ID_TYPE_CAN1,MO206_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 207) 
    ,{MO207_ID_TYPE_CAN1,MO207_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 208) 
    ,{MO208_ID_TYPE_CAN1,MO208_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 209) 
    ,{MO209_ID_TYPE_CAN1,MO209_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 210) 
    ,{MO210_ID_TYPE_CAN1,MO210_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 211) 
    ,{MO211_ID_TYPE_CAN1,MO211_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 212) 
    ,{MO212_ID_TYPE_CAN1,MO212_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 213) 
    ,{MO213_ID_TYPE_CAN1,MO213_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 214) 
    ,{MO214_ID_TYPE_CAN1,MO214_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 215) 
    ,{MO215_ID_TYPE_CAN1,MO215_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 216) 
    ,{MO216_ID_TYPE_CAN1,MO216_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 217) 
    ,{MO217_ID_TYPE_CAN1,MO217_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 218) 
    ,{MO218_ID_TYPE_CAN1,MO218_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 219) 
    ,{MO219_ID_TYPE_CAN1,MO219_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 220) 
    ,{MO220_ID_TYPE_CAN1,MO220_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 221) 
    ,{MO221_ID_TYPE_CAN1,MO221_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 222) 
    ,{MO222_ID_TYPE_CAN1,MO222_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 223) 
    ,{MO223_ID_TYPE_CAN1,MO223_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 224) 
    ,{MO224_ID_TYPE_CAN1,MO224_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 225) 
    ,{MO225_ID_TYPE_CAN1,MO225_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 226) 
    ,{MO226_ID_TYPE_CAN1,MO226_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 227) 
    ,{MO227_ID_TYPE_CAN1,MO227_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 228) 
    ,{MO228_ID_TYPE_CAN1,MO228_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 229) 
    ,{MO229_ID_TYPE_CAN1,MO229_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 230) 
    ,{MO230_ID_TYPE_CAN1,MO230_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 231) 
    ,{MO231_ID_TYPE_CAN1,MO231_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 232) 
    ,{MO232_ID_TYPE_CAN1,MO232_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 233) 
    ,{MO233_ID_TYPE_CAN1,MO233_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 234) 
    ,{MO234_ID_TYPE_CAN1,MO234_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 235) 
    ,{MO235_ID_TYPE_CAN1,MO235_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 236) 
    ,{MO236_ID_TYPE_CAN1,MO236_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 237) 
    ,{MO237_ID_TYPE_CAN1,MO237_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 238) 
    ,{MO238_ID_TYPE_CAN1,MO238_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 239) 
    ,{MO239_ID_TYPE_CAN1,MO239_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 240) 
    ,{MO240_ID_TYPE_CAN1,MO240_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 241) 
    ,{MO241_ID_TYPE_CAN1,MO241_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 242) 
    ,{MO242_ID_TYPE_CAN1,MO242_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 243) 
    ,{MO243_ID_TYPE_CAN1,MO243_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 244) 
    ,{MO244_ID_TYPE_CAN1,MO244_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 245) 
    ,{MO245_ID_TYPE_CAN1,MO245_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 246) 
    ,{MO246_ID_TYPE_CAN1,MO246_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 247) 
    ,{MO247_ID_TYPE_CAN1,MO247_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 248) 
    ,{MO248_ID_TYPE_CAN1,MO248_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 249) 
    ,{MO249_ID_TYPE_CAN1,MO249_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 250) 
    ,{MO250_ID_TYPE_CAN1,MO250_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 251) 
    ,{MO251_ID_TYPE_CAN1,MO251_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 252) 
    ,{MO252_ID_TYPE_CAN1,MO252_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 253) 
    ,{MO253_ID_TYPE_CAN1,MO253_IDR_CAN1}
#endif

#if (no_of_ID_CAN1 > 254) 
    ,{MO254_ID_TYPE_CAN1,MO254_IDR_CAN1}
#endif


/*****************************************************************************

*CAN2

*****************************************************************************/
#if ((CAN0_USED||CAN1_USED)&&no_of_ID_CAN2 > 0) 
    ,{MO0_ID_TYPE_CAN2,MO0_IDR_CAN2}
#elif(no_of_ID_CAN2 > 0)
    {MO0_ID_TYPE_CAN2,MO0_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 1) 
    ,{MO1_ID_TYPE_CAN2,MO1_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 2) 
    ,{MO2_ID_TYPE_CAN2,MO2_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 3) 
    ,{MO3_ID_TYPE_CAN2,MO3_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 4) 
    ,{MO4_ID_TYPE_CAN2,MO4_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 5) 
    ,{MO5_ID_TYPE_CAN2,MO5_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 6) 
    ,{MO6_ID_TYPE_CAN2,MO6_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 7) 
    ,{MO7_ID_TYPE_CAN2,MO7_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 8) 
    ,{MO8_ID_TYPE_CAN2,MO8_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 9) 
    ,{MO9_ID_TYPE_CAN2,MO9_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 10) 
    ,{MO10_ID_TYPE_CAN2,MO10_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 11) 
    ,{MO11_ID_TYPE_CAN2,MO11_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 12) 
    ,{MO12_ID_TYPE_CAN2,MO12_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 13) 
    ,{MO13_ID_TYPE_CAN2,MO13_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 14) 
    ,{MO14_ID_TYPE_CAN2,MO14_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 15) 
    ,{MO15_ID_TYPE_CAN2,MO15_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 16) 
    ,{MO16_ID_TYPE_CAN2,MO16_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 17) 
    ,{MO17_ID_TYPE_CAN2,MO17_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 18) 
    ,{MO18_ID_TYPE_CAN2,MO18_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 19) 
    ,{MO19_ID_TYPE_CAN2,MO19_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 20) 
    ,{MO20_ID_TYPE_CAN2,MO20_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 21) 
    ,{MO21_ID_TYPE_CAN2,MO21_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 22) 
    ,{MO22_ID_TYPE_CAN2,MO22_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 23) 
    ,{MO23_ID_TYPE_CAN2,MO23_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 24) 
    ,{MO24_ID_TYPE_CAN2,MO24_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 25) 
    ,{MO25_ID_TYPE_CAN2,MO25_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 26) 
    ,{MO26_ID_TYPE_CAN2,MO26_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 27) 
    ,{MO27_ID_TYPE_CAN2,MO27_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 28) 
    ,{MO28_ID_TYPE_CAN2,MO28_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 29) 
    ,{MO29_ID_TYPE_CAN2,MO29_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 30) 
    ,{MO30_ID_TYPE_CAN2,MO30_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 31) 
    ,{MO31_ID_TYPE_CAN2,MO31_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 32) 
    ,{MO32_ID_TYPE_CAN2,MO32_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 33) 
    ,{MO33_ID_TYPE_CAN2,MO33_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 34) 
    ,{MO34_ID_TYPE_CAN2,MO34_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 35) 
    ,{MO35_ID_TYPE_CAN2,MO35_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 36) 
    ,{MO36_ID_TYPE_CAN2,MO36_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 37) 
    ,{MO37_ID_TYPE_CAN2,MO37_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 38) 
    ,{MO38_ID_TYPE_CAN2,MO38_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 39) 
    ,{MO39_ID_TYPE_CAN2,MO39_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 40) 
    ,{MO40_ID_TYPE_CAN2,MO40_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 41) 
    ,{MO41_ID_TYPE_CAN2,MO41_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 42) 
    ,{MO42_ID_TYPE_CAN2,MO42_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 43) 
    ,{MO43_ID_TYPE_CAN2,MO43_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 44) 
    ,{MO44_ID_TYPE_CAN2,MO44_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 45) 
    ,{MO45_ID_TYPE_CAN2,MO45_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 46) 
    ,{MO46_ID_TYPE_CAN2,MO46_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 47) 
    ,{MO47_ID_TYPE_CAN2,MO47_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 48) 
    ,{MO48_ID_TYPE_CAN2,MO48_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 49) 
    ,{MO49_ID_TYPE_CAN2,MO49_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 50) 
    ,{MO50_ID_TYPE_CAN2,MO50_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 51) 
    ,{MO51_ID_TYPE_CAN2,MO51_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 52) 
    ,{MO52_ID_TYPE_CAN2,MO52_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 53) 
    ,{MO53_ID_TYPE_CAN2,MO53_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 54) 
    ,{MO54_ID_TYPE_CAN2,MO54_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 55) 
    ,{MO55_ID_TYPE_CAN2,MO55_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 56) 
    ,{MO56_ID_TYPE_CAN2,MO56_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 57) 
    ,{MO57_ID_TYPE_CAN2,MO57_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 58) 
    ,{MO58_ID_TYPE_CAN2,MO58_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 59) 
    ,{MO59_ID_TYPE_CAN2,MO59_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 60) 
    ,{MO60_ID_TYPE_CAN2,MO60_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 61) 
    ,{MO61_ID_TYPE_CAN2,MO61_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 62) 
    ,{MO62_ID_TYPE_CAN2,MO62_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 63) 
    ,{MO63_ID_TYPE_CAN2,MO63_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 64) 
    ,{MO64_ID_TYPE_CAN2,MO64_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 65) 
    ,{MO65_ID_TYPE_CAN2,MO65_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 66) 
    ,{MO66_ID_TYPE_CAN2,MO66_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 67) 
    ,{MO67_ID_TYPE_CAN2,MO67_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 68) 
    ,{MO68_ID_TYPE_CAN2,MO68_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 69) 
    ,{MO69_ID_TYPE_CAN2,MO69_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 70) 
    ,{MO70_ID_TYPE_CAN2,MO70_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 71) 
    ,{MO71_ID_TYPE_CAN2,MO71_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 72) 
    ,{MO72_ID_TYPE_CAN2,MO72_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 73) 
    ,{MO73_ID_TYPE_CAN2,MO73_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 74) 
    ,{MO74_ID_TYPE_CAN2,MO74_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 75) 
    ,{MO75_ID_TYPE_CAN2,MO75_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 76) 
    ,{MO76_ID_TYPE_CAN2,MO76_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 77) 
    ,{MO77_ID_TYPE_CAN2,MO77_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 78) 
    ,{MO78_ID_TYPE_CAN2,MO78_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 79) 
    ,{MO79_ID_TYPE_CAN2,MO79_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 80) 
    ,{MO80_ID_TYPE_CAN2,MO80_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 81) 
    ,{MO81_ID_TYPE_CAN2,MO81_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 82) 
    ,{MO82_ID_TYPE_CAN2,MO82_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 83) 
    ,{MO83_ID_TYPE_CAN2,MO83_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 84) 
    ,{MO84_ID_TYPE_CAN2,MO84_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 85) 
    ,{MO85_ID_TYPE_CAN2,MO85_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 86) 
    ,{MO86_ID_TYPE_CAN2,MO86_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 87) 
    ,{MO87_ID_TYPE_CAN2,MO87_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 88) 
    ,{MO88_ID_TYPE_CAN2,MO88_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 89) 
    ,{MO89_ID_TYPE_CAN2,MO89_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 90) 
    ,{MO90_ID_TYPE_CAN2,MO90_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 91) 
    ,{MO91_ID_TYPE_CAN2,MO91_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 92) 
    ,{MO92_ID_TYPE_CAN2,MO92_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 93) 
    ,{MO93_ID_TYPE_CAN2,MO93_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 94) 
    ,{MO94_ID_TYPE_CAN2,MO94_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 95) 
    ,{MO95_ID_TYPE_CAN2,MO95_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 96) 
    ,{MO96_ID_TYPE_CAN2,MO96_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 97) 
    ,{MO97_ID_TYPE_CAN2,MO97_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 98) 
    ,{MO98_ID_TYPE_CAN2,MO98_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 99) 
    ,{MO99_ID_TYPE_CAN2,MO99_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 100) 
    ,{MO100_ID_TYPE_CAN2,MO100_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 101) 
    ,{MO101_ID_TYPE_CAN2,MO101_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 102) 
    ,{MO102_ID_TYPE_CAN2,MO102_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 103) 
    ,{MO103_ID_TYPE_CAN2,MO103_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 104) 
    ,{MO104_ID_TYPE_CAN2,MO104_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 105) 
    ,{MO105_ID_TYPE_CAN2,MO105_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 106) 
    ,{MO106_ID_TYPE_CAN2,MO106_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 107) 
    ,{MO107_ID_TYPE_CAN2,MO107_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 108) 
    ,{MO108_ID_TYPE_CAN2,MO108_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 109) 
    ,{MO109_ID_TYPE_CAN2,MO109_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 110) 
    ,{MO110_ID_TYPE_CAN2,MO110_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 111) 
    ,{MO111_ID_TYPE_CAN2,MO111_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 112) 
    ,{MO112_ID_TYPE_CAN2,MO112_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 113) 
    ,{MO113_ID_TYPE_CAN2,MO113_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 114) 
    ,{MO114_ID_TYPE_CAN2,MO114_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 115) 
    ,{MO115_ID_TYPE_CAN2,MO115_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 116) 
    ,{MO116_ID_TYPE_CAN2,MO116_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 117) 
    ,{MO117_ID_TYPE_CAN2,MO117_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 118) 
    ,{MO118_ID_TYPE_CAN2,MO118_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 119) 
    ,{MO119_ID_TYPE_CAN2,MO119_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 120) 
    ,{MO120_ID_TYPE_CAN2,MO120_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 121) 
    ,{MO121_ID_TYPE_CAN2,MO121_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 122) 
    ,{MO122_ID_TYPE_CAN2,MO122_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 123) 
    ,{MO123_ID_TYPE_CAN2,MO123_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 124) 
    ,{MO124_ID_TYPE_CAN2,MO124_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 125) 
    ,{MO125_ID_TYPE_CAN2,MO125_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 126) 
    ,{MO126_ID_TYPE_CAN2,MO126_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 127) 
    ,{MO127_ID_TYPE_CAN2,MO127_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 128) 
    ,{MO128_ID_TYPE_CAN2,MO128_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 129) 
    ,{MO129_ID_TYPE_CAN2,MO129_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 130) 
    ,{MO130_ID_TYPE_CAN2,MO130_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 131) 
    ,{MO131_ID_TYPE_CAN2,MO131_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 132) 
    ,{MO132_ID_TYPE_CAN2,MO132_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 133) 
    ,{MO133_ID_TYPE_CAN2,MO133_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 134) 
    ,{MO134_ID_TYPE_CAN2,MO134_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 135) 
    ,{MO135_ID_TYPE_CAN2,MO135_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 136) 
    ,{MO136_ID_TYPE_CAN2,MO136_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 137) 
    ,{MO137_ID_TYPE_CAN2,MO137_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 138) 
    ,{MO138_ID_TYPE_CAN2,MO138_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 139) 
    ,{MO139_ID_TYPE_CAN2,MO139_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 140) 
    ,{MO140_ID_TYPE_CAN2,MO140_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 141) 
    ,{MO141_ID_TYPE_CAN2,MO141_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 142) 
    ,{MO142_ID_TYPE_CAN2,MO142_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 143) 
    ,{MO143_ID_TYPE_CAN2,MO143_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 144) 
    ,{MO144_ID_TYPE_CAN2,MO144_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 145) 
    ,{MO145_ID_TYPE_CAN2,MO145_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 146) 
    ,{MO146_ID_TYPE_CAN2,MO146_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 147) 
    ,{MO147_ID_TYPE_CAN2,MO147_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 148) 
    ,{MO148_ID_TYPE_CAN2,MO148_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 149) 
    ,{MO149_ID_TYPE_CAN2,MO149_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 150) 
    ,{MO150_ID_TYPE_CAN2,MO150_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 151) 
    ,{MO151_ID_TYPE_CAN2,MO151_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 152) 
    ,{MO152_ID_TYPE_CAN2,MO152_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 153) 
    ,{MO153_ID_TYPE_CAN2,MO153_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 154) 
    ,{MO154_ID_TYPE_CAN2,MO154_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 155) 
    ,{MO155_ID_TYPE_CAN2,MO155_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 156) 
    ,{MO156_ID_TYPE_CAN2,MO156_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 157) 
    ,{MO157_ID_TYPE_CAN2,MO157_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 158) 
    ,{MO158_ID_TYPE_CAN2,MO158_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 159) 
    ,{MO159_ID_TYPE_CAN2,MO159_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 160) 
    ,{MO160_ID_TYPE_CAN2,MO160_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 161) 
    ,{MO161_ID_TYPE_CAN2,MO161_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 162) 
    ,{MO162_ID_TYPE_CAN2,MO162_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 163) 
    ,{MO163_ID_TYPE_CAN2,MO163_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 164) 
    ,{MO164_ID_TYPE_CAN2,MO164_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 165) 
    ,{MO165_ID_TYPE_CAN2,MO165_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 166) 
    ,{MO166_ID_TYPE_CAN2,MO166_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 167) 
    ,{MO167_ID_TYPE_CAN2,MO167_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 168) 
    ,{MO168_ID_TYPE_CAN2,MO168_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 169) 
    ,{MO169_ID_TYPE_CAN2,MO169_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 170) 
    ,{MO170_ID_TYPE_CAN2,MO170_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 171) 
    ,{MO171_ID_TYPE_CAN2,MO171_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 172) 
    ,{MO172_ID_TYPE_CAN2,MO172_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 173) 
    ,{MO173_ID_TYPE_CAN2,MO173_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 174) 
    ,{MO174_ID_TYPE_CAN2,MO174_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 175) 
    ,{MO175_ID_TYPE_CAN2,MO175_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 176) 
    ,{MO176_ID_TYPE_CAN2,MO176_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 177) 
    ,{MO177_ID_TYPE_CAN2,MO177_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 178) 
    ,{MO178_ID_TYPE_CAN2,MO178_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 179) 
    ,{MO179_ID_TYPE_CAN2,MO179_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 180) 
    ,{MO180_ID_TYPE_CAN2,MO180_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 181) 
    ,{MO181_ID_TYPE_CAN2,MO181_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 182) 
    ,{MO182_ID_TYPE_CAN2,MO182_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 183) 
    ,{MO183_ID_TYPE_CAN2,MO183_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 184) 
    ,{MO184_ID_TYPE_CAN2,MO184_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 185) 
    ,{MO185_ID_TYPE_CAN2,MO185_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 186) 
    ,{MO186_ID_TYPE_CAN2,MO186_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 187) 
    ,{MO187_ID_TYPE_CAN2,MO187_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 188) 
    ,{MO188_ID_TYPE_CAN2,MO188_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 189) 
    ,{MO189_ID_TYPE_CAN2,MO189_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 190) 
    ,{MO190_ID_TYPE_CAN2,MO190_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 191) 
    ,{MO191_ID_TYPE_CAN2,MO191_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 192) 
    ,{MO192_ID_TYPE_CAN2,MO192_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 193) 
    ,{MO193_ID_TYPE_CAN2,MO193_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 194) 
    ,{MO194_ID_TYPE_CAN2,MO194_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 195) 
    ,{MO195_ID_TYPE_CAN2,MO195_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 196) 
    ,{MO196_ID_TYPE_CAN2,MO196_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 197) 
    ,{MO197_ID_TYPE_CAN2,MO197_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 198) 
    ,{MO198_ID_TYPE_CAN2,MO198_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 199) 
    ,{MO199_ID_TYPE_CAN2,MO199_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 200) 
    ,{MO200_ID_TYPE_CAN2,MO200_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 201) 
    ,{MO201_ID_TYPE_CAN2,MO201_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 202) 
    ,{MO202_ID_TYPE_CAN2,MO202_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 203) 
    ,{MO203_ID_TYPE_CAN2,MO203_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 204) 
    ,{MO204_ID_TYPE_CAN2,MO204_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 205) 
    ,{MO205_ID_TYPE_CAN2,MO205_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 206) 
    ,{MO206_ID_TYPE_CAN2,MO206_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 207) 
    ,{MO207_ID_TYPE_CAN2,MO207_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 208) 
    ,{MO208_ID_TYPE_CAN2,MO208_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 209) 
    ,{MO209_ID_TYPE_CAN2,MO209_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 210) 
    ,{MO210_ID_TYPE_CAN2,MO210_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 211) 
    ,{MO211_ID_TYPE_CAN2,MO211_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 212) 
    ,{MO212_ID_TYPE_CAN2,MO212_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 213) 
    ,{MO213_ID_TYPE_CAN2,MO213_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 214) 
    ,{MO214_ID_TYPE_CAN2,MO214_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 215) 
    ,{MO215_ID_TYPE_CAN2,MO215_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 216) 
    ,{MO216_ID_TYPE_CAN2,MO216_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 217) 
    ,{MO217_ID_TYPE_CAN2,MO217_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 218) 
    ,{MO218_ID_TYPE_CAN2,MO218_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 219) 
    ,{MO219_ID_TYPE_CAN2,MO219_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 220) 
    ,{MO220_ID_TYPE_CAN2,MO220_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 221) 
    ,{MO221_ID_TYPE_CAN2,MO221_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 222) 
    ,{MO222_ID_TYPE_CAN2,MO222_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 223) 
    ,{MO223_ID_TYPE_CAN2,MO223_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 224) 
    ,{MO224_ID_TYPE_CAN2,MO224_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 225) 
    ,{MO225_ID_TYPE_CAN2,MO225_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 226) 
    ,{MO226_ID_TYPE_CAN2,MO226_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 227) 
    ,{MO227_ID_TYPE_CAN2,MO227_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 228) 
    ,{MO228_ID_TYPE_CAN2,MO228_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 229) 
    ,{MO229_ID_TYPE_CAN2,MO229_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 230) 
    ,{MO230_ID_TYPE_CAN2,MO230_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 231) 
    ,{MO231_ID_TYPE_CAN2,MO231_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 232) 
    ,{MO232_ID_TYPE_CAN2,MO232_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 233) 
    ,{MO233_ID_TYPE_CAN2,MO233_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 234) 
    ,{MO234_ID_TYPE_CAN2,MO234_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 235) 
    ,{MO235_ID_TYPE_CAN2,MO235_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 236) 
    ,{MO236_ID_TYPE_CAN2,MO236_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 237) 
    ,{MO237_ID_TYPE_CAN2,MO237_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 238) 
    ,{MO238_ID_TYPE_CAN2,MO238_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 239) 
    ,{MO239_ID_TYPE_CAN2,MO239_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 240) 
    ,{MO240_ID_TYPE_CAN2,MO240_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 241) 
    ,{MO241_ID_TYPE_CAN2,MO241_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 242) 
    ,{MO242_ID_TYPE_CAN2,MO242_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 243) 
    ,{MO243_ID_TYPE_CAN2,MO243_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 244) 
    ,{MO244_ID_TYPE_CAN2,MO244_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 245) 
    ,{MO245_ID_TYPE_CAN2,MO245_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 246) 
    ,{MO246_ID_TYPE_CAN2,MO246_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 247) 
    ,{MO247_ID_TYPE_CAN2,MO247_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 248) 
    ,{MO248_ID_TYPE_CAN2,MO248_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 249) 
    ,{MO249_ID_TYPE_CAN2,MO249_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 250) 
    ,{MO250_ID_TYPE_CAN2,MO250_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 251) 
    ,{MO251_ID_TYPE_CAN2,MO251_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 252) 
    ,{MO252_ID_TYPE_CAN2,MO252_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 253) 
    ,{MO253_ID_TYPE_CAN2,MO253_IDR_CAN2}
#endif

#if (no_of_ID_CAN2 > 254) 
    ,{MO254_ID_TYPE_CAN2,MO254_IDR_CAN2}
#endif


/*****************************************************************************

*CAN3

*****************************************************************************/
#if ((CAN0_USED||CAN1_USED||CAN2_USED)&&no_of_ID_CAN3 > 0) 
    ,{MO0_ID_TYPE_CAN3,MO0_IDR_CAN3}
#elif(no_of_ID_CAN3 > 0)
    {MO0_ID_TYPE_CAN3,MO0_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 1) 
    ,{MO1_ID_TYPE_CAN3,MO1_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 2) 
    ,{MO2_ID_TYPE_CAN3,MO2_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 3) 
    ,{MO3_ID_TYPE_CAN3,MO3_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 4) 
    ,{MO4_ID_TYPE_CAN3,MO4_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 5) 
    ,{MO5_ID_TYPE_CAN3,MO5_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 6) 
    ,{MO6_ID_TYPE_CAN3,MO6_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 7) 
    ,{MO7_ID_TYPE_CAN3,MO7_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 8) 
    ,{MO8_ID_TYPE_CAN3,MO8_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 9) 
    ,{MO9_ID_TYPE_CAN3,MO9_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 10) 
    ,{MO10_ID_TYPE_CAN3,MO10_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 11) 
    ,{MO11_ID_TYPE_CAN3,MO11_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 12) 
    ,{MO12_ID_TYPE_CAN3,MO12_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 13) 
    ,{MO13_ID_TYPE_CAN3,MO13_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 14) 
    ,{MO14_ID_TYPE_CAN3,MO14_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 15) 
    ,{MO15_ID_TYPE_CAN3,MO15_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 16) 
    ,{MO16_ID_TYPE_CAN3,MO16_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 17) 
    ,{MO17_ID_TYPE_CAN3,MO17_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 18) 
    ,{MO18_ID_TYPE_CAN3,MO18_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 19) 
    ,{MO19_ID_TYPE_CAN3,MO19_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 20) 
    ,{MO20_ID_TYPE_CAN3,MO20_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 21) 
    ,{MO21_ID_TYPE_CAN3,MO21_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 22) 
    ,{MO22_ID_TYPE_CAN3,MO22_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 23) 
    ,{MO23_ID_TYPE_CAN3,MO23_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 24) 
    ,{MO24_ID_TYPE_CAN3,MO24_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 25) 
    ,{MO25_ID_TYPE_CAN3,MO25_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 26) 
    ,{MO26_ID_TYPE_CAN3,MO26_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 27) 
    ,{MO27_ID_TYPE_CAN3,MO27_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 28) 
    ,{MO28_ID_TYPE_CAN3,MO28_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 29) 
    ,{MO29_ID_TYPE_CAN3,MO29_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 30) 
    ,{MO30_ID_TYPE_CAN3,MO30_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 31) 
    ,{MO31_ID_TYPE_CAN3,MO31_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 32) 
    ,{MO32_ID_TYPE_CAN3,MO32_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 33) 
    ,{MO33_ID_TYPE_CAN3,MO33_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 34) 
    ,{MO34_ID_TYPE_CAN3,MO34_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 35) 
    ,{MO35_ID_TYPE_CAN3,MO35_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 36) 
    ,{MO36_ID_TYPE_CAN3,MO36_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 37) 
    ,{MO37_ID_TYPE_CAN3,MO37_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 38) 
    ,{MO38_ID_TYPE_CAN3,MO38_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 39) 
    ,{MO39_ID_TYPE_CAN3,MO39_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 40) 
    ,{MO40_ID_TYPE_CAN3,MO40_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 41) 
    ,{MO41_ID_TYPE_CAN3,MO41_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 42) 
    ,{MO42_ID_TYPE_CAN3,MO42_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 43) 
    ,{MO43_ID_TYPE_CAN3,MO43_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 44) 
    ,{MO44_ID_TYPE_CAN3,MO44_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 45) 
    ,{MO45_ID_TYPE_CAN3,MO45_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 46) 
    ,{MO46_ID_TYPE_CAN3,MO46_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 47) 
    ,{MO47_ID_TYPE_CAN3,MO47_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 48) 
    ,{MO48_ID_TYPE_CAN3,MO48_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 49) 
    ,{MO49_ID_TYPE_CAN3,MO49_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 50) 
    ,{MO50_ID_TYPE_CAN3,MO50_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 51) 
    ,{MO51_ID_TYPE_CAN3,MO51_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 52) 
    ,{MO52_ID_TYPE_CAN3,MO52_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 53) 
    ,{MO53_ID_TYPE_CAN3,MO53_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 54) 
    ,{MO54_ID_TYPE_CAN3,MO54_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 55) 
    ,{MO55_ID_TYPE_CAN3,MO55_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 56) 
    ,{MO56_ID_TYPE_CAN3,MO56_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 57) 
    ,{MO57_ID_TYPE_CAN3,MO57_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 58) 
    ,{MO58_ID_TYPE_CAN3,MO58_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 59) 
    ,{MO59_ID_TYPE_CAN3,MO59_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 60) 
    ,{MO60_ID_TYPE_CAN3,MO60_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 61) 
    ,{MO61_ID_TYPE_CAN3,MO61_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 62) 
    ,{MO62_ID_TYPE_CAN3,MO62_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 63) 
    ,{MO63_ID_TYPE_CAN3,MO63_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 64) 
    ,{MO64_ID_TYPE_CAN3,MO64_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 65) 
    ,{MO65_ID_TYPE_CAN3,MO65_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 66) 
    ,{MO66_ID_TYPE_CAN3,MO66_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 67) 
    ,{MO67_ID_TYPE_CAN3,MO67_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 68) 
    ,{MO68_ID_TYPE_CAN3,MO68_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 69) 
    ,{MO69_ID_TYPE_CAN3,MO69_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 70) 
    ,{MO70_ID_TYPE_CAN3,MO70_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 71) 
    ,{MO71_ID_TYPE_CAN3,MO71_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 72) 
    ,{MO72_ID_TYPE_CAN3,MO72_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 73) 
    ,{MO73_ID_TYPE_CAN3,MO73_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 74) 
    ,{MO74_ID_TYPE_CAN3,MO74_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 75) 
    ,{MO75_ID_TYPE_CAN3,MO75_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 76) 
    ,{MO76_ID_TYPE_CAN3,MO76_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 77) 
    ,{MO77_ID_TYPE_CAN3,MO77_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 78) 
    ,{MO78_ID_TYPE_CAN3,MO78_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 79) 
    ,{MO79_ID_TYPE_CAN3,MO79_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 80) 
    ,{MO80_ID_TYPE_CAN3,MO80_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 81) 
    ,{MO81_ID_TYPE_CAN3,MO81_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 82) 
    ,{MO82_ID_TYPE_CAN3,MO82_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 83) 
    ,{MO83_ID_TYPE_CAN3,MO83_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 84) 
    ,{MO84_ID_TYPE_CAN3,MO84_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 85) 
    ,{MO85_ID_TYPE_CAN3,MO85_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 86) 
    ,{MO86_ID_TYPE_CAN3,MO86_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 87) 
    ,{MO87_ID_TYPE_CAN3,MO87_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 88) 
    ,{MO88_ID_TYPE_CAN3,MO88_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 89) 
    ,{MO89_ID_TYPE_CAN3,MO89_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 90) 
    ,{MO90_ID_TYPE_CAN3,MO90_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 91) 
    ,{MO91_ID_TYPE_CAN3,MO91_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 92) 
    ,{MO92_ID_TYPE_CAN3,MO92_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 93) 
    ,{MO93_ID_TYPE_CAN3,MO93_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 94) 
    ,{MO94_ID_TYPE_CAN3,MO94_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 95) 
    ,{MO95_ID_TYPE_CAN3,MO95_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 96) 
    ,{MO96_ID_TYPE_CAN3,MO96_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 97) 
    ,{MO97_ID_TYPE_CAN3,MO97_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 98) 
    ,{MO98_ID_TYPE_CAN3,MO98_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 99) 
    ,{MO99_ID_TYPE_CAN3,MO99_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 100) 
    ,{MO100_ID_TYPE_CAN3,MO100_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 101) 
    ,{MO101_ID_TYPE_CAN3,MO101_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 102) 
    ,{MO102_ID_TYPE_CAN3,MO102_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 103) 
    ,{MO103_ID_TYPE_CAN3,MO103_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 104) 
    ,{MO104_ID_TYPE_CAN3,MO104_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 105) 
    ,{MO105_ID_TYPE_CAN3,MO105_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 106) 
    ,{MO106_ID_TYPE_CAN3,MO106_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 107) 
    ,{MO107_ID_TYPE_CAN3,MO107_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 108) 
    ,{MO108_ID_TYPE_CAN3,MO108_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 109) 
    ,{MO109_ID_TYPE_CAN3,MO109_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 110) 
    ,{MO110_ID_TYPE_CAN3,MO110_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 111) 
    ,{MO111_ID_TYPE_CAN3,MO111_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 112) 
    ,{MO112_ID_TYPE_CAN3,MO112_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 113) 
    ,{MO113_ID_TYPE_CAN3,MO113_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 114) 
    ,{MO114_ID_TYPE_CAN3,MO114_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 115) 
    ,{MO115_ID_TYPE_CAN3,MO115_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 116) 
    ,{MO116_ID_TYPE_CAN3,MO116_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 117) 
    ,{MO117_ID_TYPE_CAN3,MO117_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 118) 
    ,{MO118_ID_TYPE_CAN3,MO118_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 119) 
    ,{MO119_ID_TYPE_CAN3,MO119_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 120) 
    ,{MO120_ID_TYPE_CAN3,MO120_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 121) 
    ,{MO121_ID_TYPE_CAN3,MO121_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 122) 
    ,{MO122_ID_TYPE_CAN3,MO122_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 123) 
    ,{MO123_ID_TYPE_CAN3,MO123_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 124) 
    ,{MO124_ID_TYPE_CAN3,MO124_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 125) 
    ,{MO125_ID_TYPE_CAN3,MO125_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 126) 
    ,{MO126_ID_TYPE_CAN3,MO126_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 127) 
    ,{MO127_ID_TYPE_CAN3,MO127_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 128) 
    ,{MO128_ID_TYPE_CAN3,MO128_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 129) 
    ,{MO129_ID_TYPE_CAN3,MO129_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 130) 
    ,{MO130_ID_TYPE_CAN3,MO130_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 131) 
    ,{MO131_ID_TYPE_CAN3,MO131_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 132) 
    ,{MO132_ID_TYPE_CAN3,MO132_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 133) 
    ,{MO133_ID_TYPE_CAN3,MO133_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 134) 
    ,{MO134_ID_TYPE_CAN3,MO134_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 135) 
    ,{MO135_ID_TYPE_CAN3,MO135_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 136) 
    ,{MO136_ID_TYPE_CAN3,MO136_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 137) 
    ,{MO137_ID_TYPE_CAN3,MO137_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 138) 
    ,{MO138_ID_TYPE_CAN3,MO138_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 139) 
    ,{MO139_ID_TYPE_CAN3,MO139_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 140) 
    ,{MO140_ID_TYPE_CAN3,MO140_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 141) 
    ,{MO141_ID_TYPE_CAN3,MO141_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 142) 
    ,{MO142_ID_TYPE_CAN3,MO142_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 143) 
    ,{MO143_ID_TYPE_CAN3,MO143_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 144) 
    ,{MO144_ID_TYPE_CAN3,MO144_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 145) 
    ,{MO145_ID_TYPE_CAN3,MO145_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 146) 
    ,{MO146_ID_TYPE_CAN3,MO146_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 147) 
    ,{MO147_ID_TYPE_CAN3,MO147_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 148) 
    ,{MO148_ID_TYPE_CAN3,MO148_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 149) 
    ,{MO149_ID_TYPE_CAN3,MO149_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 150) 
    ,{MO150_ID_TYPE_CAN3,MO150_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 151) 
    ,{MO151_ID_TYPE_CAN3,MO151_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 152) 
    ,{MO152_ID_TYPE_CAN3,MO152_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 153) 
    ,{MO153_ID_TYPE_CAN3,MO153_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 154) 
    ,{MO154_ID_TYPE_CAN3,MO154_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 155) 
    ,{MO155_ID_TYPE_CAN3,MO155_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 156) 
    ,{MO156_ID_TYPE_CAN3,MO156_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 157) 
    ,{MO157_ID_TYPE_CAN3,MO157_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 158) 
    ,{MO158_ID_TYPE_CAN3,MO158_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 159) 
    ,{MO159_ID_TYPE_CAN3,MO159_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 160) 
    ,{MO160_ID_TYPE_CAN3,MO160_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 161) 
    ,{MO161_ID_TYPE_CAN3,MO161_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 162) 
    ,{MO162_ID_TYPE_CAN3,MO162_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 163) 
    ,{MO163_ID_TYPE_CAN3,MO163_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 164) 
    ,{MO164_ID_TYPE_CAN3,MO164_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 165) 
    ,{MO165_ID_TYPE_CAN3,MO165_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 166) 
    ,{MO166_ID_TYPE_CAN3,MO166_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 167) 
    ,{MO167_ID_TYPE_CAN3,MO167_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 168) 
    ,{MO168_ID_TYPE_CAN3,MO168_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 169) 
    ,{MO169_ID_TYPE_CAN3,MO169_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 170) 
    ,{MO170_ID_TYPE_CAN3,MO170_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 171) 
    ,{MO171_ID_TYPE_CAN3,MO171_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 172) 
    ,{MO172_ID_TYPE_CAN3,MO172_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 173) 
    ,{MO173_ID_TYPE_CAN3,MO173_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 174) 
    ,{MO174_ID_TYPE_CAN3,MO174_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 175) 
    ,{MO175_ID_TYPE_CAN3,MO175_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 176) 
    ,{MO176_ID_TYPE_CAN3,MO176_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 177) 
    ,{MO177_ID_TYPE_CAN3,MO177_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 178) 
    ,{MO178_ID_TYPE_CAN3,MO178_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 179) 
    ,{MO179_ID_TYPE_CAN3,MO179_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 180) 
    ,{MO180_ID_TYPE_CAN3,MO180_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 181) 
    ,{MO181_ID_TYPE_CAN3,MO181_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 182) 
    ,{MO182_ID_TYPE_CAN3,MO182_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 183) 
    ,{MO183_ID_TYPE_CAN3,MO183_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 184) 
    ,{MO184_ID_TYPE_CAN3,MO184_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 185) 
    ,{MO185_ID_TYPE_CAN3,MO185_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 186) 
    ,{MO186_ID_TYPE_CAN3,MO186_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 187) 
    ,{MO187_ID_TYPE_CAN3,MO187_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 188) 
    ,{MO188_ID_TYPE_CAN3,MO188_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 189) 
    ,{MO189_ID_TYPE_CAN3,MO189_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 190) 
    ,{MO190_ID_TYPE_CAN3,MO190_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 191) 
    ,{MO191_ID_TYPE_CAN3,MO191_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 192) 
    ,{MO192_ID_TYPE_CAN3,MO192_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 193) 
    ,{MO193_ID_TYPE_CAN3,MO193_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 194) 
    ,{MO194_ID_TYPE_CAN3,MO194_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 195) 
    ,{MO195_ID_TYPE_CAN3,MO195_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 196) 
    ,{MO196_ID_TYPE_CAN3,MO196_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 197) 
    ,{MO197_ID_TYPE_CAN3,MO197_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 198) 
    ,{MO198_ID_TYPE_CAN3,MO198_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 199) 
    ,{MO199_ID_TYPE_CAN3,MO199_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 200) 
    ,{MO200_ID_TYPE_CAN3,MO200_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 201) 
    ,{MO201_ID_TYPE_CAN3,MO201_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 202) 
    ,{MO202_ID_TYPE_CAN3,MO202_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 203) 
    ,{MO203_ID_TYPE_CAN3,MO203_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 204) 
    ,{MO204_ID_TYPE_CAN3,MO204_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 205) 
    ,{MO205_ID_TYPE_CAN3,MO205_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 206) 
    ,{MO206_ID_TYPE_CAN3,MO206_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 207) 
    ,{MO207_ID_TYPE_CAN3,MO207_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 208) 
    ,{MO208_ID_TYPE_CAN3,MO208_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 209) 
    ,{MO209_ID_TYPE_CAN3,MO209_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 210) 
    ,{MO210_ID_TYPE_CAN3,MO210_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 211) 
    ,{MO211_ID_TYPE_CAN3,MO211_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 212) 
    ,{MO212_ID_TYPE_CAN3,MO212_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 213) 
    ,{MO213_ID_TYPE_CAN3,MO213_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 214) 
    ,{MO214_ID_TYPE_CAN3,MO214_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 215) 
    ,{MO215_ID_TYPE_CAN3,MO215_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 216) 
    ,{MO216_ID_TYPE_CAN3,MO216_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 217) 
    ,{MO217_ID_TYPE_CAN3,MO217_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 218) 
    ,{MO218_ID_TYPE_CAN3,MO218_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 219) 
    ,{MO219_ID_TYPE_CAN3,MO219_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 220) 
    ,{MO220_ID_TYPE_CAN3,MO220_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 221) 
    ,{MO221_ID_TYPE_CAN3,MO221_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 222) 
    ,{MO222_ID_TYPE_CAN3,MO222_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 223) 
    ,{MO223_ID_TYPE_CAN3,MO223_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 224) 
    ,{MO224_ID_TYPE_CAN3,MO224_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 225) 
    ,{MO225_ID_TYPE_CAN3,MO225_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 226) 
    ,{MO226_ID_TYPE_CAN3,MO226_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 227) 
    ,{MO227_ID_TYPE_CAN3,MO227_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 228) 
    ,{MO228_ID_TYPE_CAN3,MO228_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 229) 
    ,{MO229_ID_TYPE_CAN3,MO229_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 230) 
    ,{MO230_ID_TYPE_CAN3,MO230_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 231) 
    ,{MO231_ID_TYPE_CAN3,MO231_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 232) 
    ,{MO232_ID_TYPE_CAN3,MO232_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 233) 
    ,{MO233_ID_TYPE_CAN3,MO233_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 234) 
    ,{MO234_ID_TYPE_CAN3,MO234_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 235) 
    ,{MO235_ID_TYPE_CAN3,MO235_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 236) 
    ,{MO236_ID_TYPE_CAN3,MO236_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 237) 
    ,{MO237_ID_TYPE_CAN3,MO237_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 238) 
    ,{MO238_ID_TYPE_CAN3,MO238_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 239) 
    ,{MO239_ID_TYPE_CAN3,MO239_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 240) 
    ,{MO240_ID_TYPE_CAN3,MO240_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 241) 
    ,{MO241_ID_TYPE_CAN3,MO241_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 242) 
    ,{MO242_ID_TYPE_CAN3,MO242_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 243) 
    ,{MO243_ID_TYPE_CAN3,MO243_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 244) 
    ,{MO244_ID_TYPE_CAN3,MO244_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 245) 
    ,{MO245_ID_TYPE_CAN3,MO245_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 246) 
    ,{MO246_ID_TYPE_CAN3,MO246_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 247) 
    ,{MO247_ID_TYPE_CAN3,MO247_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 248) 
    ,{MO248_ID_TYPE_CAN3,MO248_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 249) 
    ,{MO249_ID_TYPE_CAN3,MO249_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 250) 
    ,{MO250_ID_TYPE_CAN3,MO250_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 251) 
    ,{MO251_ID_TYPE_CAN3,MO251_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 252) 
    ,{MO252_ID_TYPE_CAN3,MO252_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 253) 
    ,{MO253_ID_TYPE_CAN3,MO253_IDR_CAN3}
#endif

#if (no_of_ID_CAN3 > 254) 
    ,{MO254_ID_TYPE_CAN3,MO254_IDR_CAN3}
#endif


/*****************************************************************************

*CAN4

*****************************************************************************/
#if ((CAN0_USED||CAN1_USED||CAN2_USED||CAN3_USED)&&no_of_ID_CAN4 > 0) 
    ,{MO0_ID_TYPE_CAN4,MO0_IDR_CAN4}
#elif(no_of_ID_CAN4 > 0)
    {MO0_ID_TYPE_CAN4,MO0_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 1) 
    ,{MO1_ID_TYPE_CAN4,MO1_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 2) 
    ,{MO2_ID_TYPE_CAN4,MO2_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 3) 
    ,{MO3_ID_TYPE_CAN4,MO3_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 4) 
    ,{MO4_ID_TYPE_CAN4,MO4_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 5) 
    ,{MO5_ID_TYPE_CAN4,MO5_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 6) 
    ,{MO6_ID_TYPE_CAN4,MO6_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 7) 
    ,{MO7_ID_TYPE_CAN4,MO7_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 8) 
    ,{MO8_ID_TYPE_CAN4,MO8_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 9) 
    ,{MO9_ID_TYPE_CAN4,MO9_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 10) 
    ,{MO10_ID_TYPE_CAN4,MO10_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 11) 
    ,{MO11_ID_TYPE_CAN4,MO11_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 12) 
    ,{MO12_ID_TYPE_CAN4,MO12_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 13) 
    ,{MO13_ID_TYPE_CAN4,MO13_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 14) 
    ,{MO14_ID_TYPE_CAN4,MO14_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 15) 
    ,{MO15_ID_TYPE_CAN4,MO15_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 16) 
    ,{MO16_ID_TYPE_CAN4,MO16_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 17) 
    ,{MO17_ID_TYPE_CAN4,MO17_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 18) 
    ,{MO18_ID_TYPE_CAN4,MO18_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 19) 
    ,{MO19_ID_TYPE_CAN4,MO19_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 20) 
    ,{MO20_ID_TYPE_CAN4,MO20_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 21) 
    ,{MO21_ID_TYPE_CAN4,MO21_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 22) 
    ,{MO22_ID_TYPE_CAN4,MO22_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 23) 
    ,{MO23_ID_TYPE_CAN4,MO23_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 24) 
    ,{MO24_ID_TYPE_CAN4,MO24_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 25) 
    ,{MO25_ID_TYPE_CAN4,MO25_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 26) 
    ,{MO26_ID_TYPE_CAN4,MO26_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 27) 
    ,{MO27_ID_TYPE_CAN4,MO27_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 28) 
    ,{MO28_ID_TYPE_CAN4,MO28_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 29) 
    ,{MO29_ID_TYPE_CAN4,MO29_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 30) 
    ,{MO30_ID_TYPE_CAN4,MO30_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 31) 
    ,{MO31_ID_TYPE_CAN4,MO31_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 32) 
    ,{MO32_ID_TYPE_CAN4,MO32_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 33) 
    ,{MO33_ID_TYPE_CAN4,MO33_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 34) 
    ,{MO34_ID_TYPE_CAN4,MO34_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 35) 
    ,{MO35_ID_TYPE_CAN4,MO35_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 36) 
    ,{MO36_ID_TYPE_CAN4,MO36_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 37) 
    ,{MO37_ID_TYPE_CAN4,MO37_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 38) 
    ,{MO38_ID_TYPE_CAN4,MO38_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 39) 
    ,{MO39_ID_TYPE_CAN4,MO39_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 40) 
    ,{MO40_ID_TYPE_CAN4,MO40_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 41) 
    ,{MO41_ID_TYPE_CAN4,MO41_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 42) 
    ,{MO42_ID_TYPE_CAN4,MO42_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 43) 
    ,{MO43_ID_TYPE_CAN4,MO43_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 44) 
    ,{MO44_ID_TYPE_CAN4,MO44_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 45) 
    ,{MO45_ID_TYPE_CAN4,MO45_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 46) 
    ,{MO46_ID_TYPE_CAN4,MO46_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 47) 
    ,{MO47_ID_TYPE_CAN4,MO47_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 48) 
    ,{MO48_ID_TYPE_CAN4,MO48_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 49) 
    ,{MO49_ID_TYPE_CAN4,MO49_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 50) 
    ,{MO50_ID_TYPE_CAN4,MO50_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 51) 
    ,{MO51_ID_TYPE_CAN4,MO51_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 52) 
    ,{MO52_ID_TYPE_CAN4,MO52_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 53) 
    ,{MO53_ID_TYPE_CAN4,MO53_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 54) 
    ,{MO54_ID_TYPE_CAN4,MO54_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 55) 
    ,{MO55_ID_TYPE_CAN4,MO55_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 56) 
    ,{MO56_ID_TYPE_CAN4,MO56_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 57) 
    ,{MO57_ID_TYPE_CAN4,MO57_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 58) 
    ,{MO58_ID_TYPE_CAN4,MO58_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 59) 
    ,{MO59_ID_TYPE_CAN4,MO59_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 60) 
    ,{MO60_ID_TYPE_CAN4,MO60_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 61) 
    ,{MO61_ID_TYPE_CAN4,MO61_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 62) 
    ,{MO62_ID_TYPE_CAN4,MO62_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 63) 
    ,{MO63_ID_TYPE_CAN4,MO63_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 64) 
    ,{MO64_ID_TYPE_CAN4,MO64_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 65) 
    ,{MO65_ID_TYPE_CAN4,MO65_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 66) 
    ,{MO66_ID_TYPE_CAN4,MO66_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 67) 
    ,{MO67_ID_TYPE_CAN4,MO67_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 68) 
    ,{MO68_ID_TYPE_CAN4,MO68_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 69) 
    ,{MO69_ID_TYPE_CAN4,MO69_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 70) 
    ,{MO70_ID_TYPE_CAN4,MO70_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 71) 
    ,{MO71_ID_TYPE_CAN4,MO71_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 72) 
    ,{MO72_ID_TYPE_CAN4,MO72_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 73) 
    ,{MO73_ID_TYPE_CAN4,MO73_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 74) 
    ,{MO74_ID_TYPE_CAN4,MO74_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 75) 
    ,{MO75_ID_TYPE_CAN4,MO75_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 76) 
    ,{MO76_ID_TYPE_CAN4,MO76_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 77) 
    ,{MO77_ID_TYPE_CAN4,MO77_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 78) 
    ,{MO78_ID_TYPE_CAN4,MO78_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 79) 
    ,{MO79_ID_TYPE_CAN4,MO79_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 80) 
    ,{MO80_ID_TYPE_CAN4,MO80_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 81) 
    ,{MO81_ID_TYPE_CAN4,MO81_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 82) 
    ,{MO82_ID_TYPE_CAN4,MO82_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 83) 
    ,{MO83_ID_TYPE_CAN4,MO83_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 84) 
    ,{MO84_ID_TYPE_CAN4,MO84_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 85) 
    ,{MO85_ID_TYPE_CAN4,MO85_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 86) 
    ,{MO86_ID_TYPE_CAN4,MO86_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 87) 
    ,{MO87_ID_TYPE_CAN4,MO87_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 88) 
    ,{MO88_ID_TYPE_CAN4,MO88_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 89) 
    ,{MO89_ID_TYPE_CAN4,MO89_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 90) 
    ,{MO90_ID_TYPE_CAN4,MO90_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 91) 
    ,{MO91_ID_TYPE_CAN4,MO91_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 92) 
    ,{MO92_ID_TYPE_CAN4,MO92_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 93) 
    ,{MO93_ID_TYPE_CAN4,MO93_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 94) 
    ,{MO94_ID_TYPE_CAN4,MO94_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 95) 
    ,{MO95_ID_TYPE_CAN4,MO95_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 96) 
    ,{MO96_ID_TYPE_CAN4,MO96_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 97) 
    ,{MO97_ID_TYPE_CAN4,MO97_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 98) 
    ,{MO98_ID_TYPE_CAN4,MO98_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 99) 
    ,{MO99_ID_TYPE_CAN4,MO99_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 100) 
    ,{MO100_ID_TYPE_CAN4,MO100_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 101) 
    ,{MO101_ID_TYPE_CAN4,MO101_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 102) 
    ,{MO102_ID_TYPE_CAN4,MO102_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 103) 
    ,{MO103_ID_TYPE_CAN4,MO103_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 104) 
    ,{MO104_ID_TYPE_CAN4,MO104_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 105) 
    ,{MO105_ID_TYPE_CAN4,MO105_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 106) 
    ,{MO106_ID_TYPE_CAN4,MO106_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 107) 
    ,{MO107_ID_TYPE_CAN4,MO107_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 108) 
    ,{MO108_ID_TYPE_CAN4,MO108_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 109) 
    ,{MO109_ID_TYPE_CAN4,MO109_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 110) 
    ,{MO110_ID_TYPE_CAN4,MO110_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 111) 
    ,{MO111_ID_TYPE_CAN4,MO111_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 112) 
    ,{MO112_ID_TYPE_CAN4,MO112_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 113) 
    ,{MO113_ID_TYPE_CAN4,MO113_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 114) 
    ,{MO114_ID_TYPE_CAN4,MO114_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 115) 
    ,{MO115_ID_TYPE_CAN4,MO115_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 116) 
    ,{MO116_ID_TYPE_CAN4,MO116_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 117) 
    ,{MO117_ID_TYPE_CAN4,MO117_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 118) 
    ,{MO118_ID_TYPE_CAN4,MO118_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 119) 
    ,{MO119_ID_TYPE_CAN4,MO119_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 120) 
    ,{MO120_ID_TYPE_CAN4,MO120_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 121) 
    ,{MO121_ID_TYPE_CAN4,MO121_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 122) 
    ,{MO122_ID_TYPE_CAN4,MO122_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 123) 
    ,{MO123_ID_TYPE_CAN4,MO123_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 124) 
    ,{MO124_ID_TYPE_CAN4,MO124_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 125) 
    ,{MO125_ID_TYPE_CAN4,MO125_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 126) 
    ,{MO126_ID_TYPE_CAN4,MO126_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 127) 
    ,{MO127_ID_TYPE_CAN4,MO127_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 128) 
    ,{MO128_ID_TYPE_CAN4,MO128_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 129) 
    ,{MO129_ID_TYPE_CAN4,MO129_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 130) 
    ,{MO130_ID_TYPE_CAN4,MO130_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 131) 
    ,{MO131_ID_TYPE_CAN4,MO131_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 132) 
    ,{MO132_ID_TYPE_CAN4,MO132_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 133) 
    ,{MO133_ID_TYPE_CAN4,MO133_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 134) 
    ,{MO134_ID_TYPE_CAN4,MO134_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 135) 
    ,{MO135_ID_TYPE_CAN4,MO135_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 136) 
    ,{MO136_ID_TYPE_CAN4,MO136_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 137) 
    ,{MO137_ID_TYPE_CAN4,MO137_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 138) 
    ,{MO138_ID_TYPE_CAN4,MO138_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 139) 
    ,{MO139_ID_TYPE_CAN4,MO139_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 140) 
    ,{MO140_ID_TYPE_CAN4,MO140_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 141) 
    ,{MO141_ID_TYPE_CAN4,MO141_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 142) 
    ,{MO142_ID_TYPE_CAN4,MO142_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 143) 
    ,{MO143_ID_TYPE_CAN4,MO143_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 144) 
    ,{MO144_ID_TYPE_CAN4,MO144_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 145) 
    ,{MO145_ID_TYPE_CAN4,MO145_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 146) 
    ,{MO146_ID_TYPE_CAN4,MO146_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 147) 
    ,{MO147_ID_TYPE_CAN4,MO147_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 148) 
    ,{MO148_ID_TYPE_CAN4,MO148_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 149) 
    ,{MO149_ID_TYPE_CAN4,MO149_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 150) 
    ,{MO150_ID_TYPE_CAN4,MO150_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 151) 
    ,{MO151_ID_TYPE_CAN4,MO151_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 152) 
    ,{MO152_ID_TYPE_CAN4,MO152_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 153) 
    ,{MO153_ID_TYPE_CAN4,MO153_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 154) 
    ,{MO154_ID_TYPE_CAN4,MO154_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 155) 
    ,{MO155_ID_TYPE_CAN4,MO155_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 156) 
    ,{MO156_ID_TYPE_CAN4,MO156_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 157) 
    ,{MO157_ID_TYPE_CAN4,MO157_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 158) 
    ,{MO158_ID_TYPE_CAN4,MO158_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 159) 
    ,{MO159_ID_TYPE_CAN4,MO159_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 160) 
    ,{MO160_ID_TYPE_CAN4,MO160_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 161) 
    ,{MO161_ID_TYPE_CAN4,MO161_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 162) 
    ,{MO162_ID_TYPE_CAN4,MO162_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 163) 
    ,{MO163_ID_TYPE_CAN4,MO163_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 164) 
    ,{MO164_ID_TYPE_CAN4,MO164_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 165) 
    ,{MO165_ID_TYPE_CAN4,MO165_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 166) 
    ,{MO166_ID_TYPE_CAN4,MO166_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 167) 
    ,{MO167_ID_TYPE_CAN4,MO167_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 168) 
    ,{MO168_ID_TYPE_CAN4,MO168_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 169) 
    ,{MO169_ID_TYPE_CAN4,MO169_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 170) 
    ,{MO170_ID_TYPE_CAN4,MO170_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 171) 
    ,{MO171_ID_TYPE_CAN4,MO171_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 172) 
    ,{MO172_ID_TYPE_CAN4,MO172_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 173) 
    ,{MO173_ID_TYPE_CAN4,MO173_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 174) 
    ,{MO174_ID_TYPE_CAN4,MO174_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 175) 
    ,{MO175_ID_TYPE_CAN4,MO175_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 176) 
    ,{MO176_ID_TYPE_CAN4,MO176_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 177) 
    ,{MO177_ID_TYPE_CAN4,MO177_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 178) 
    ,{MO178_ID_TYPE_CAN4,MO178_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 179) 
    ,{MO179_ID_TYPE_CAN4,MO179_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 180) 
    ,{MO180_ID_TYPE_CAN4,MO180_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 181) 
    ,{MO181_ID_TYPE_CAN4,MO181_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 182) 
    ,{MO182_ID_TYPE_CAN4,MO182_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 183) 
    ,{MO183_ID_TYPE_CAN4,MO183_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 184) 
    ,{MO184_ID_TYPE_CAN4,MO184_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 185) 
    ,{MO185_ID_TYPE_CAN4,MO185_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 186) 
    ,{MO186_ID_TYPE_CAN4,MO186_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 187) 
    ,{MO187_ID_TYPE_CAN4,MO187_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 188) 
    ,{MO188_ID_TYPE_CAN4,MO188_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 189) 
    ,{MO189_ID_TYPE_CAN4,MO189_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 190) 
    ,{MO190_ID_TYPE_CAN4,MO190_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 191) 
    ,{MO191_ID_TYPE_CAN4,MO191_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 192) 
    ,{MO192_ID_TYPE_CAN4,MO192_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 193) 
    ,{MO193_ID_TYPE_CAN4,MO193_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 194) 
    ,{MO194_ID_TYPE_CAN4,MO194_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 195) 
    ,{MO195_ID_TYPE_CAN4,MO195_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 196) 
    ,{MO196_ID_TYPE_CAN4,MO196_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 197) 
    ,{MO197_ID_TYPE_CAN4,MO197_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 198) 
    ,{MO198_ID_TYPE_CAN4,MO198_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 199) 
    ,{MO199_ID_TYPE_CAN4,MO199_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 200) 
    ,{MO200_ID_TYPE_CAN4,MO200_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 201) 
    ,{MO201_ID_TYPE_CAN4,MO201_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 202) 
    ,{MO202_ID_TYPE_CAN4,MO202_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 203) 
    ,{MO203_ID_TYPE_CAN4,MO203_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 204) 
    ,{MO204_ID_TYPE_CAN4,MO204_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 205) 
    ,{MO205_ID_TYPE_CAN4,MO205_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 206) 
    ,{MO206_ID_TYPE_CAN4,MO206_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 207) 
    ,{MO207_ID_TYPE_CAN4,MO207_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 208) 
    ,{MO208_ID_TYPE_CAN4,MO208_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 209) 
    ,{MO209_ID_TYPE_CAN4,MO209_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 210) 
    ,{MO210_ID_TYPE_CAN4,MO210_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 211) 
    ,{MO211_ID_TYPE_CAN4,MO211_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 212) 
    ,{MO212_ID_TYPE_CAN4,MO212_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 213) 
    ,{MO213_ID_TYPE_CAN4,MO213_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 214) 
    ,{MO214_ID_TYPE_CAN4,MO214_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 215) 
    ,{MO215_ID_TYPE_CAN4,MO215_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 216) 
    ,{MO216_ID_TYPE_CAN4,MO216_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 217) 
    ,{MO217_ID_TYPE_CAN4,MO217_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 218) 
    ,{MO218_ID_TYPE_CAN4,MO218_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 219) 
    ,{MO219_ID_TYPE_CAN4,MO219_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 220) 
    ,{MO220_ID_TYPE_CAN4,MO220_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 221) 
    ,{MO221_ID_TYPE_CAN4,MO221_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 222) 
    ,{MO222_ID_TYPE_CAN4,MO222_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 223) 
    ,{MO223_ID_TYPE_CAN4,MO223_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 224) 
    ,{MO224_ID_TYPE_CAN4,MO224_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 225) 
    ,{MO225_ID_TYPE_CAN4,MO225_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 226) 
    ,{MO226_ID_TYPE_CAN4,MO226_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 227) 
    ,{MO227_ID_TYPE_CAN4,MO227_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 228) 
    ,{MO228_ID_TYPE_CAN4,MO228_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 229) 
    ,{MO229_ID_TYPE_CAN4,MO229_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 230) 
    ,{MO230_ID_TYPE_CAN4,MO230_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 231) 
    ,{MO231_ID_TYPE_CAN4,MO231_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 232) 
    ,{MO232_ID_TYPE_CAN4,MO232_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 233) 
    ,{MO233_ID_TYPE_CAN4,MO233_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 234) 
    ,{MO234_ID_TYPE_CAN4,MO234_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 235) 
    ,{MO235_ID_TYPE_CAN4,MO235_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 236) 
    ,{MO236_ID_TYPE_CAN4,MO236_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 237) 
    ,{MO237_ID_TYPE_CAN4,MO237_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 238) 
    ,{MO238_ID_TYPE_CAN4,MO238_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 239) 
    ,{MO239_ID_TYPE_CAN4,MO239_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 240) 
    ,{MO240_ID_TYPE_CAN4,MO240_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 241) 
    ,{MO241_ID_TYPE_CAN4,MO241_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 242) 
    ,{MO242_ID_TYPE_CAN4,MO242_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 243) 
    ,{MO243_ID_TYPE_CAN4,MO243_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 244) 
    ,{MO244_ID_TYPE_CAN4,MO244_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 245) 
    ,{MO245_ID_TYPE_CAN4,MO245_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 246) 
    ,{MO246_ID_TYPE_CAN4,MO246_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 247) 
    ,{MO247_ID_TYPE_CAN4,MO247_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 248) 
    ,{MO248_ID_TYPE_CAN4,MO248_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 249) 
    ,{MO249_ID_TYPE_CAN4,MO249_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 250) 
    ,{MO250_ID_TYPE_CAN4,MO250_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 251) 
    ,{MO251_ID_TYPE_CAN4,MO251_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 252) 
    ,{MO252_ID_TYPE_CAN4,MO252_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 253) 
    ,{MO253_ID_TYPE_CAN4,MO253_IDR_CAN4}
#endif

#if (no_of_ID_CAN4 > 254) 
    ,{MO254_ID_TYPE_CAN4,MO254_IDR_CAN4}
#endif

};

/******************************************************************************
* Create an array to store the configuration of each ID in all channels
******************************************************************************/
const PMSCANIdentifier MSCANIdentifier[] = {
#ifdef MSCAN0
    All_Identifier,
#endif 

#ifdef MSCAN1
    All_Identifier + CAN0_ID_COUNT, 
#endif 

#ifdef MSCAN2
    All_Identifier + CAN01_ID_COUNT,
#endif
 
#ifdef MSCAN3
    All_Identifier + CAN012_ID_COUNT,
#endif 

#ifdef MSCAN4
    All_Identifier + CAN0123_ID_COUNT
#endif  
};


#endif                      
/* end MSCANID_C */
