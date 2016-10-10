/***************************************************
*  core_api.h
*
*  
*
*  Tridonic GmbH & Co KG
*  Färbergasse 15
*  6851 Dornbirn, Austria
*
***************************************************/

#ifndef YOTTA_MODULES_MBED_HAL_MBED_HAL_CORE_API_H_
#define YOTTA_MODULES_MBED_HAL_MBED_HAL_CORE_API_H_

/* Includes -----------------------------------------------------------------*/
#include "stdint.h"

/* Public typedef -----------------------------------------------------------*/
/* Public define ------------------------------------------------------------*/
/* Public macro -------------------------------------------------------------*/
/* Exported variables -------------------------------------------------------*/
/* Public function prototypes -----------------------------------------------*/
void SwReset(void);
void SwitchEndian32(uint32_t* pui32Value);
void SwitchEndian16(uint16_t* pui16Value);

#endif /* YOTTA_MODULES_MBED_HAL_MBED_HAL_CORE_API_H_ */
