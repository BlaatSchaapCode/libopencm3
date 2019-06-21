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

/*
 * CPUSS for all series except 4100/4200
 */

#ifndef INCLUDE_LIBOPENCM3_PSOC_COMMON_CPUSS_V2_H_
#define INCLUDE_LIBOPENCM3_PSOC_COMMON_CPUSS_V2_H_

#define CPUSS_CONFIG    	MMIO32(CPUSS_BASE + 0x0000)
#define CPUSS_SYSREQ    	MMIO32(CPUSS_BASE + 0x0004)
#define CPUSS_SYSARG    	MMIO32(CPUSS_BASE + 0x0008)
#define CPUSS_INT_SEL    	MMIO32(CPUSS_BASE + 0x0020)
#define CPUSS_INT_MODE    	MMIO32(CPUSS_BASE + 0x0024)
#define CPUSS_NMI_MODE    	MMIO32(CPUSS_BASE + 0x0028)
#define CPUSS_FLASH_CTL    	MMIO32(CPUSS_BASE + 0x0030)
#define CPUSS_ROM_CTL    	MMIO32(CPUSS_BASE + 0x0034)
#define CPUSS_RAM_CTL    	MMIO32(CPUSS_BASE + 0x0038)
#define CPUSS_DMAC_CTL    	MMIO32(CPUSS_BASE + 0x003C)
#define CPUSS_SL_CTL0    	MMIO32(CPUSS_BASE + 0x0100)
#define CPUSS_SL_CTL1    	MMIO32(CPUSS_BASE + 0x0104)
#define CPUSS_SL_CTL2    	MMIO32(CPUSS_BASE + 0x0108)


#endif /* INCLUDE_LIBOPENCM3_PSOC_COMMON_#define CPUSS_V2_H_ */
