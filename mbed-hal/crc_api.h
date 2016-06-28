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

#ifndef YOTTA_MODULES_MBED_HAL_MBED_HAL_CRC_API_H_
#define YOTTA_MODULES_MBED_HAL_MBED_HAL_CRC_API_H_

/* Includes -----------------------------------------------------------------*/
#include <stdint.h>

/* Public typedef -----------------------------------------------------------*/
/* Public define ------------------------------------------------------------*/
/* Public macro -------------------------------------------------------------*/
/* Exported variables -------------------------------------------------------*/
/* Public function prototypes -----------------------------------------------*/
int Reset();
int CalcSingle(uint8_t* pui32StartAddress, uint32_t ui32DataSize, uint32_t* pui32CRC);
int CalcAccumulate(uint8_t* pui32StartAddress, uint32_t ui32DataSize, uint32_t* pui32CRC);

#endif /* YOTTA_MODULES_MBED_HAL_MBED_HAL_INTERNAL_FLASH_API_H_ */
