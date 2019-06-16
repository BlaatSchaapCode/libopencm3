/*
 * tcpwm.h
 *
 *  Created on: 16 jun. 2019
 *      Author: andre
 */

#ifndef INCLUDE_LIBOPENCM3_PSOC_TCPWM_H_
#define INCLUDE_LIBOPENCM3_PSOC_TCPWM_H_

#if defined(PSOC41)
#include	"41/tcpwm.h"
#elif  defined(PSOC4A)
#include	"4a/tcpwm.h"
#elif  defined(PSOC41PS)
#include	"41ps/tcpwm.h"
#elif  defined(PSOC41S)
#include	"41s/tcpwm.h"
#elif  defined(PSOC41SP)
#include	"41sp/tcpwm.h"
#elif  defined(PSOC40S)
#include	"40s/tcpwm.h"
#elif  defined(PSOC4L)
#include	"4l/tcpwm.h"
#elif  defined(PSOC4M)
#include	"4m/tcpwm.h"
#elif  defined(PSOC4BL)
#include	"4bl/tcpwm.h"
#elif  defined(PSOC41)
#include	"41/tcpwm.h"
#elif  defined(PSOC40)
#include	"40/tcpwm.h"
#elif  defined(PSOC5)
#include	"5/tcpwm.h"
#else
#error "PSoC Family not defined!"
#endif





#endif /* INCLUDE_LIBOPENCM3_PSOC_PCLK_H_ */
