/** @defgroup gpio_defines GPIO Defines
 *
 * @brief <b>Defined Constants and Types for the PSoC4 SFLASH</b>
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

#ifndef LIBOPENCM3_COMMON_SFLASH_H
#define LIBOPENCM3_COMMON_SFLASH_H

#include <libopencm3/cm3/common.h>


// TODO: See if/where there are differences in SFLASH between versions
// See for example 4000, which has SRSS-Lite, having SFLASH_IMO_TCTRIM_LT0 values



// There are the values required for the clocking mechanism
// Todo: add all the other values
// Looking at the initial revision of the 4100/4200 TRM as they're removed
// in later revisions. They're also in the PSoC Analog Coprocessor TRM, and
// it looks like they match up, so for the time being we assume they're valid
// for all families.

// The 4100M/4200M series register TRM actually mentions where to apply these
// values, what goes where. 
// ABS?  goes to  PWR_BG_TRIM4
// TMPCO? goes to PWR_BG_TRIM5
// Also it shows the IMO_TRIM is the beginning of an "array", whth a value
// for each TRIM2 value. as there are 45 values, and the frequency range is
// 3..48, it is reasonable to assume we need offset "frequency - 3" 

#define SFLASH_BASE (0x0FFFF000)

#define SFLASH_IMO_MAXF0    MMIO8(SFLASH_BASE + 0x1C0)
#define SFLASH_IMO_ABS0     MMIO8(SFLASH_BASE + 0x1C1)
#define SFLASH_IMO_TMPCO0   MMIO8(SFLASH_BASE + 0x1C2)
#define SFLASH_IMO_MAXF1    MMIO8(SFLASH_BASE + 0x1C3)
#define SFLASH_IMO_ABS1     MMIO8(SFLASH_BASE + 0x1C4)
#define SFLASH_IMO_TMPCO1   MMIO8(SFLASH_BASE + 0x1C5)
#define SFLASH_IMO_MAXF2    MMIO8(SFLASH_BASE + 0x1C6)
#define SFLASH_IMO_ABS2     MMIO8(SFLASH_BASE + 0x1C7)
#define SFLASH_IMO_TMPCO2   MMIO8(SFLASH_BASE + 0x1C8)
#define SFLASH_IMO_MAXF3    MMIO8(SFLASH_BASE + 0x1C9)
#define SFLASH_IMO_ABS3     MMIO8(SFLASH_BASE + 0x1CA)
#define SFLASH_IMO_TMPCO3   MMIO8(SFLASH_BASE + 0x1CB)
#define SFLASH_IMO_ABS4     MMIO8(SFLASH_BASE + 0x1CC)
#define SFLASH_IMO_TMPCO4   MMIO8(SFLASH_BASE + 0x1CD)

#define SFLASH_IMO_TRIM ((uint8_t*)(SFLASH_BASE + 0x1D0)) // We want to access it as an array

#endif
