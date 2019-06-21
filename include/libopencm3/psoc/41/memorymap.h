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

#ifndef LIBOPENCM3_MEMORYMAP_H
#define LIBOPENCM3_MEMORYMAP_H

#include <libopencm3/cm3/memorymap.h>

/* --- PSoC4 specific peripheral definitions ------------------------------- */

/* Memory map for all buses */
#define FLASH_BASE			(0x00000000U)
#define PERIPH_BASE			(0x40000000U)
							 
#define CPUSS_BASE				(PERIPH_BASE + 0x000000)
#define HSIOM_BASE				(PERIPH_BASE + 0x010000)

#define PCLK_BASE				(PERIPH_BASE + 0x020000)
#define TCPWM_BASE				(PERIPH_BASE + 0x050000)


#define SCB0_BASE	 			(PERIPH_BASE + 0x060000)
#define SCB1_BASE	 			(PERIPH_BASE + 0x070000)
#define CSD_BASE				(PERIPH_BASE + 0x080000)
#define LCD_BASE 				(PERIPH_BASE + 0x090000)
#define LPCOMP_BASE				(PERIPH_BASE + 0x0A0000)
#define CTBM_BASE				(PERIPH_BASE + 0x100000)
#define SAR_BASE 				(PERIPH_BASE + 0x1A0000)
#define SRSS_BASE				(PERIPH_BASE + 0x0B0000)
#define UDB_BASE 				(PERIPH_BASE + 0x0F8000)

#define GPIO_PORT_0_BASE		(PERIPH_BASE + 0x040000)
#define GPIO_PORT_1_BASE		(PERIPH_BASE + 0x040100)
#define GPIO_PORT_2_BASE		(PERIPH_BASE + 0x040200)
#define GPIO_PORT_3_BASE		(PERIPH_BASE + 0x040300)
#define GPIO_PORT_4_BASE		(PERIPH_BASE + 0x040400)

#define HSIOM_PORT0_BASE		(PERIPH_BASE + 0x10000)
#define HSIOM_PORT1_BASE		(PERIPH_BASE + 0x10004)
#define HSIOM_PORT2_BASE		(PERIPH_BASE + 0x10008)
#define HSIOM_PORT3_BASE		(PERIPH_BASE + 0x1000c)
#define HSIOM_PORT4_BASE		(PERIPH_BASE + 0x10010)








#endif
