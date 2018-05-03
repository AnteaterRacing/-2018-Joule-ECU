/*
 * sbc_init.c
 *
 *  Created on: Jun 7, 2016
 *      Author: B55457
 */

#include "sbc_init.h"

uint8_t spi_SBC_INIT_SEQ_PART0[2]={0xDF, 0x80};		//Read Vreg register H
uint8_t spi_SBC_INIT_SEQ_PART1[2]={0x5A, 0x00};		//Enter in Normal mode
uint8_t spi_SBC_INIT_SEQ_PART2[2]={0x5E, 0x90};		//Enable 5V-CAN and Vaux regulators
uint8_t spi_SBC_INIT_SEQ_PART3[2]={0x60, 0xC0};		//Set CAN in TxRx mode, fast slew rate
uint8_t spi_SBC_INIT_SEQ_PART4[2]={0x66, 0xC4};		//Set LIN1 in TxRx mode, slew rate 20kb/s, LIN term ON

uint8_t spi_data_receive16bit[2]={0, 0};

void SBC_Init(void) /*Initializes the System Basis Chip for CAN and LIN Physical layer on FRDM_KEA128 boards */
{
	/* Initialize SPI1 as master to enable SBC for LIN    */
	SPI_ConfigType sSPIConfig = {{0}};
    sSPIConfig.u32BitRate = 500000;			/* Comment - min frequency shall be 250kHZ	115200 */
    sSPIConfig.u32BusClkHz = 20000000;
    sSPIConfig.sSettings.bModuleEn             = 1;
    sSPIConfig.sSettings.bMasterMode           = 1;
    sSPIConfig.sSettings.bClkPhase1            = 1;
    sSPIConfig.sSettings.bClkPolarityLow       = 0;
    sSPIConfig.sSettings.bMasterAutoDriveSS    = 0;		/* Comment - to drive CS manually for 16-bit operation -> MODFEN = 0 */

    SPI_Init(SPI1, &sSPIConfig);			/* Initialize SPI1 */

	/* Enable SBC for CAN */
	Enable_SBC();
}

/***********************************************************************************************
*
* @brief    Configure PTD3 as a digital output -> will be driven as a chip select manually
	        CS = High
* @param    none
* @return   none
*
************************************************************************************************/
void Enable_SBC(void)
{
	int i = 0;

	//Comment - configure PTD3 as a digital output -> will be driven as a chip select manually
	//CS = High
	GPIOA_PDOR = 0x08000000;
	GPIOA_PDDR = 0x08000000;

	GPIOA_PDOR = 0x00000000;
	SPI_TransferWait(SPI1,spi_data_receive16bit,spi_SBC_INIT_SEQ_PART0,2);
	GPIOA_PDOR = 0x08000000;
	for(i=0;i<100;i++);
	GPIOA_PDOR = 0x00000000;
	SPI_TransferWait(SPI1,spi_data_receive16bit,spi_SBC_INIT_SEQ_PART1,2);
	GPIOA_PDOR = 0x08000000;
	for(i=0;i<100;i++);
	GPIOA_PDOR = 0x00000000;
	SPI_TransferWait(SPI1,spi_data_receive16bit,spi_SBC_INIT_SEQ_PART2,2);
	GPIOA_PDOR = 0x08000000;
	for(i=0;i<100;i++);
	GPIOA_PDOR = 0x00000000;
	SPI_TransferWait(SPI1,spi_data_receive16bit,spi_SBC_INIT_SEQ_PART3,2);
	GPIOA_PDOR = 0x08000000;
	for(i=0;i<100;i++);
	GPIOA_PDOR = 0x00000000;
	SPI_TransferWait(SPI1,spi_data_receive16bit,spi_SBC_INIT_SEQ_PART4,2);
	GPIOA_PDOR = 0x08000000;
	for(i=0;i<100;i++);
}
