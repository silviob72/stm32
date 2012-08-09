/**************************************************************************//**
 * @file     common.h
 * @brief    STM32 Common func definitions header file
 * @version  v1.0
 * @date     09.08.2012
 *
 * @note
 * Copyright (C) 2012 kab
 *
 ******************************************************************************/
#ifndef __COMMON_H__
#define __COMMON_H__

/******************************************************************************
 * Includes
 *****************************************************************************/

#include <inttypes.h>

/******************************************************************************
 * Enumeration declarations
 *****************************************************************************/

/******************************************************************************
 * Function pointer (call-back) declarations
 *****************************************************************************/

/******************************************************************************
 * Function declarations
 *****************************************************************************/

char* myitoa(int val, int32_t base);
int32_t myatoi(char *buf, int32_t len);

#endif