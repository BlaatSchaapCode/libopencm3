/*
 * peri.h
 *
 *  Created on: 14 jun. 2019
 *      Author: andre
 */

#ifndef INCLUDE_LIBOPENCM3_PSOC_PERI_H_
#define INCLUDE_LIBOPENCM3_PSOC_PERI_H_



#if defined(PSOC41)
#include	"41/peri.h"
#elif  defined(PSOC4A)
#include	"4a/peri.h"
#elif  defined(PSOC41PS)
#include	"41ps/peri.h"
#elif  defined(PSOC41S)
#include	"41s/peri.h"
#elif  defined(PSOC41SP)
#include	"41sp/peri.h"
#elif  defined(PSOC40S)
#include	"40s/peri.h"
#elif  defined(PSOC4L)
#include	"4l/peri.h"
#elif  defined(PSOC4M)
#include	"4m/peri.h"
#elif  defined(PSOC4BL)
#include	"4bl/peri.h"
#elif  defined(PSOC41)
#include	"41/peri.h"
#elif  defined(PSOC40)
#include	"40/peri.h"
#elif  defined(PSOC5)
#include	"5/peri.h"
#else
#error "PSoC Family not defined!"
#endif



#endif /* INCLUDE_LIBOPENCM3_PSOC_PERI_H_ */
