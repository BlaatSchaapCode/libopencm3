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

#ifndef LIBOPENCM3_COMMON_SRSSV2_H
#define LIBOPENCM3_COMMON_SRSSV2_H

#include <libopencm3/cm3/common.h>
#include "sflash.h"

// Are there common error codes in libopencm3?
#define SRSS_STATUS_OK 0
#define SRSS_STATUS_OUT_OF_RANGE -1


#define SRSS_PWR_CONTROL		MMIO32(SRSS_BASE + 0x0000)
#define SRSS_PWR_INTR	    MMIO32(SRSS_BASE + 0x0004)
#define SRSS_PWR_INTR_MASK   MMIO32(SRSS_BASE + 0x0008)
#define SRSS_KEY_DELAY	    MMIO32(SRSS_BASE + 0x000C)
#define SRSS_VMON_CONFIG	    MMIO32(SRSS_BASE + 0x00018)
#define SRSS_PWR_BOD_KEY         MMIO32(SRSS_BASE + 0x0028)
#define SRSS_PWR_STOP            MMIO32(SRSS_BASE + 0x002C)
#define SRSS_CLK_SELECT          MMIO32(SRSS_BASE + 0x0100)
#define SRSS_CLK_ILO_CONFIG      MMIO32(SRSS_BASE + 0x0104)
#define SRSS_CLK_IMO_CONFIG      MMIO32(SRSS_BASE + 0x0108)
#define SRSS_CLK_IMO_SPREAD      MMIO32(SRSS_BASE + 0x010C)
#define SRSS_WDT_CTRLOW          MMIO32(SRSS_BASE + 0x0200)
#define SRSS_WDT_CTRHIGH         MMIO32(SRSS_BASE + 0x0204)
#define SRSS_WDT_MATCH           MMIO32(SRSS_BASE + 0x0208)
#define SRSS_WDT_CONFIG          MMIO32(SRSS_BASE + 0x020C)
#define SRSS_WDT_CONTROL         MMIO32(SRSS_BASE + 0x0210)
#define SRSS_RES_CAUSE           MMIO32(SRSS_BASE + 0x0300)
#define SRSS_PWR_BG_TRIM3        MMIO32(SRSS_BASE + 0xFF18)
#define SRSS_PWR_BG_TRIM4        MMIO32(SRSS_BASE + 0xFF1C)
#define SRSS_PWR_BG_TRIM5        MMIO32(SRSS_BASE + 0xFF20)
#define SRSS_CLK_IMO_TRIM1       MMIO32(SRSS_BASE + 0xFF28)
#define SRSS_CLK_IMO_TRIM2       MMIO32(SRSS_BASE + 0xFF2C)
#define SRSS_PWR_RSVD_TRIM       MMIO32(SRSS_BASE + 0xFF38)

#define SRSS_CLK_SELECT_HALF_EN (1 << 18)

/* --- Function prototypes ------------------------------------------------- */


BEGIN_DECLS
int srss_set_imo_trim2(int trim2_value);
int srss_set_imo_mhz(int frequency_mhz);
END_DECLS

#endif
