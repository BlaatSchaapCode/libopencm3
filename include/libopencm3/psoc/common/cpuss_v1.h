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
/*
 *      CPUSS for PSoC 4100/4200 series
 */

#ifndef INCLUDE_LIBOPENCM3_PSOC_COMMON_CPUSS_V1_H_
#define INCLUDE_LIBOPENCM3_PSOC_COMMON_CPUSS_V1_H_


#define CPUSS_CONFIG  		MMIO32(CPUSS_BASE + 0x0000)
#define CPUSS_SYSREQ  		MMIO32(CPUSS_BASE + 0x0004)
#define CPUSS_SYSARG  		MMIO32(CPUSS_BASE + 0x0008)
#define CPUSS_PROTECTION  	MMIO32(CPUSS_BASE + 0x000C)
#define CPUSS_PRIV_ROM  	MMIO32(CPUSS_BASE + 0x0010)
#define CPUSS_PRIV_RAM  	MMIO32(CPUSS_BASE + 0x0014)
#define CPUSS_PRIV_FLASH  	MMIO32(CPUSS_BASE + 0x0018)
#define CPUSS_WOUNDING  	MMIO32(CPUSS_BASE + 0x001C)
#define CPUSS_INTR_SELECT  	MMIO32(CPUSS_BASE + 0x0020)
#define CPUSS_BIST_CONTROL  MMIO32(CPUSS_BASE + 0x0024)
#define CPUSS_BIST_DATA  	MMIO32(CPUSS_BASE + 0x0028)
#define CPUSS_DFT  			MMIO32(CPUSS_BASE + 0x002C)

#endif /* INCLUDE_LIBOPENCM3_PSOC_COMMON_CPUSS_V1_H_ */
