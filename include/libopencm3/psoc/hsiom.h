/*
 * hsiom.h
 *
 *  Created on: 7 jun. 2019
 *      Author: andre
 */

#ifndef INCLUDE_LIBOPENCM3_PSOC_HSIOM_H_
#define INCLUDE_LIBOPENCM3_PSOC_HSIOM_H_

#if defined(PSOC41)
#include	"41/hsiom.h"
#elif  defined(PSOC4A)
#include	"4a/hsiom.h"
#elif  defined(PSOC41PS)
#include	"41ps/hsiom.h"
#elif  defined(PSOC41S)
#include	"41s/hsiom.h"
#elif  defined(PSOC41SP)
#include	"41sp/hsiom.h"
#elif  defined(PSOC40S)
#include	"40s/hsiom.h"
#elif  defined(PSOC4L)
#include	"4l/hsiom.h"
#elif  defined(PSOC4M)
#include	"4m/hsiom.h"
#elif  defined(PSOC4BL)
#include	"4bl/hsiom.h"
#elif  defined(PSOC41)
#include	"41/hsiom.h"
#elif  defined(PSOC40)
#include	"40/hsiom.h"
#elif  defined(PSOC5)
#include	"5/hsiom.h"
#else
#error "PSoC Family not defined!"
#endif





#endif /* INCLUDE_LIBOPENCM3_PSOC_HSIOM_H_ */
