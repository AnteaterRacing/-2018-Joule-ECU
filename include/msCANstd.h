#ifndef MSCANSTD_H
#define MSCANSTD_H

/******************************************************************************
 * These defines allow for easier porting to other compilers. 
 ******************************************************************************/
typedef unsigned char   uint8;
typedef unsigned int    uint32;
typedef signed char     int8;
typedef unsigned short  uint16;
typedef short 			int16;
typedef int            int32;

/******************************************************************************
 * Boolean values
 ******************************************************************************/
#ifndef TRUE
#define TRUE    (1)
#endif

#ifndef FALSE
#define FALSE   (0)
#endif

/*****************************************************************************/
#endif        

/* end msCANstd.h */ 
