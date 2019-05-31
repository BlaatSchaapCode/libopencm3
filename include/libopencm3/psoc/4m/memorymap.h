 /*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2019 André van Schoubroeck <andre@philosopher.it>
 *
 *  .. based on file from STM32 F0
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
	
// TODO copied the memory map of 41, need to verify and update for 4m			
/*			 

#define HSIOM_BASE				(PERIPH_BASE + 0x010000)

#define CLK_BASE				(PERIPH_BASE + 0x020000)
*/
#define CPUSS_BASE				(PERIPH_BASE + 0x100000) // CPUSS v2
#define GPIO_BASE				(PERIPH_BASE + 0x040000)	
#define CSD_BASE				(PERIPH_BASE + 0x080000)
#define CTBM_BASE				(PERIPH_BASE + 0x300000)
#define DMAC_BASE				(PERIPH_BASE + 0x101000)
// DSAB
#define DSI_BASE				(PERIPH_BASE + 0xF4000)
// HSIOM
#define LCD_BASE 				(PERIPH_BASE + 0x2A0000)
#define LPCOMP_BASE				(PERIPH_BASE + 0x2B0000)
//PA
//PASS MMIO
//PERI
//ROUTE == 
#define SAR_BASE 				(PERIPH_BASE + 0x3A0000)
#define SCB0_BASE	 			(PERIPH_BASE + 0x240000)
#define SCB1_BASE	 			(PERIPH_BASE + 0x250000)
#define SCB2_BASE	 			(PERIPH_BASE + 0x260000)
#define SCB3_BASE	 			(PERIPH_BASE + 0x270000)
//SFLASH
//SPCIF
#define TCPWM_BASE				(PERIPH_BASE + 0x200000)
//UDB
//...

#define SRSS_BASE                (PERIPH_BASE + 0xB0000)


#define GPIO_PORT_0_BASE		(GPIO_BASE + 0x000)
#define GPIO_PORT_1_BASE		(GPIO_BASE + 0x100)
#define GPIO_PORT_2_BASE		(GPIO_BASE + 0x200)
#define GPIO_PORT_3_BASE		(GPIO_BASE + 0x300)
#define GPIO_PORT_4_BASE		(GPIO_BASE + 0x400)






#endif
