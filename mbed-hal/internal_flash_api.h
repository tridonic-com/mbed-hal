/***************************************************
*  internal_flash_api.h
*
*  
*
*  Tridonic GmbH & Co KG
*  Färbergasse 15
*  6851 Dornbirn, Austria
*
***************************************************/

#ifndef YOTTA_MODULES_MBED_HAL_MBED_HAL_INTERNAL_FLASH_API_H_
#define YOTTA_MODULES_MBED_HAL_MBED_HAL_INTERNAL_FLASH_API_H_

/* Includes -----------------------------------------------------------------*/
#include <stdint.h>

/* Public typedef -----------------------------------------------------------*/
/* Public define ------------------------------------------------------------*/
/* Public macro -------------------------------------------------------------*/
/* Exported variables -------------------------------------------------------*/
/* Public function prototypes -----------------------------------------------*/
int InternalFlashInit();
int WriteFlash(uint32_t pui32Address, const uint8_t* pData, uint32_t ui32DataSize);
int ReadFlash(uint32_t pui32Address, uint8_t* pData, uint32_t ui32DataSize);
int EraseSectorByNumber(uint16_t ui16Sector);
int EraseSectorByAddress(uint32_t ui32Address);
int GetNumOfSectors(void);
void GetSectorStartAdd(uint32_t ui32Sector, uint32_t* pui32Address);
void GetSectorEndAdd(uint32_t ui32Sector, uint32_t* pui32Address);


#endif /* YOTTA_MODULES_MBED_HAL_MBED_HAL_INTERNAL_FLASH_API_H_ */
