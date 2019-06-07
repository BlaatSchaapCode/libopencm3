/*
 * pclk.h
 *
 *  Created on: 7 jun. 2019
 *      Author: andre
 */

#ifndef INCLUDE_LIBOPENCM3_PSOC_PCLK_H_
#define INCLUDE_LIBOPENCM3_PSOC_PCLK_H_

#if defined(PSOC41)
#include	"41/pclk.h"
#elif  defined(PSOC4A)
#include	"4a/pclk.h"
#elif  defined(PSOC41PS)
#include	"41ps/pclk.h"
#elif  defined(PSOC41S)
#include	"41s/pclk.h"
#elif  defined(PSOC41SP)
#include	"41sp/pclk.h"
#elif  defined(PSOC40S)
#include	"40s/pclk.h"
#elif  defined(PSOC4L)
#include	"4l/pclk.h"
#elif  defined(PSOC4M)
#include	"4m/pclk.h"
#elif  defined(PSOC4BL)
#include	"4bl/pclk.h"
#elif  defined(PSOC41)
#include	"41/pclk.h"
#elif  defined(PSOC40)
#include	"40/pclk.h"
#elif  defined(PSOC5)
#include	"5/pclk.h"
#else
#error "PSoC Family not defined!"
#endif





#endif /* INCLUDE_LIBOPENCM3_PSOC_PCLK_H_ */
