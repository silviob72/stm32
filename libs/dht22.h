/**************************************************************************//**
 * @file     dht22.h
 * @brief    DHT22 sensor func definitions header file
 * @version  v1.0
 * @date     26.06.2012
 *
 * @note
 * Copyright (C) 2012 kab
 *
 ******************************************************************************/
#ifndef __DHT22_H__
#define __DHT22_H__

/******************************************************************************
 * Includes
 *****************************************************************************/

#include <inttypes.h>

/******************************************************************************
 * Defines and Macros
 *****************************************************************************/

/******************************************************************************
 * Types declarations
 *****************************************************************************/

/******************************************************************************
 * Function declarations
 *****************************************************************************/

void vDht22Init(void);
void vDht22Start(void);
uint8_t uDht22Measuring(void);
uint16_t uDht22GetTemp(void);
uint16_t uDht22GetHumidity(void);
uint8_t uDht22CheckCrc(void);

#endif
