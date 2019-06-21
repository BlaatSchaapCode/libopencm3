/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2019 André van Schoubroeck <andre@blaatschaap.be>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
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
