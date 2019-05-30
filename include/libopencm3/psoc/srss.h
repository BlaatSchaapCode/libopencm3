/** @defgroup srss_defines SRS Defines
 *
 * @brief <b>Dispatcher for the PSoC4 System Resources Subsystem</b>
 *
 * @ingroup PSoC4_defines
 *
 * @version 1.0.0
 *
 * @date 18 May 2019
 *
 * LGPL License Terms @ref lgpl_license
 */

/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2019 André van Schoubroeck <andre@philosopher.it>
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

#ifndef LIBOPENCM3_SRSS_H
#define LIBOPENCM3_SRSS_H



#if defined PSOC4A
#include	"4a/srss.h" 
#elif  defined PSOC41PS
#include	"41ps/srss.h" 
#elif  defined PSOC41S
#include	"41s/srss.h" 
#elif  defined PSOC41SP
#include	"41sp/srss.h" 
#elif  defined PSOC40S
#include	"40s/srss.h" 
#elif  defined PSOC4L
#include	"4l/srss.h"
#elif  defined PSOC4M
#include	"4m/srss.h"
#elif  defined PSOC4BL
#include	"4bl/srss.h"
#elif  defined PSOC41
#include	"41/srss.h"
#elif  defined PSOC40
#include	"40/srss.h"
#elif  defined PSOC5
#include	"5/srss.h"
#else
#error "PSoC Family not defined!"
#endif



#endif
