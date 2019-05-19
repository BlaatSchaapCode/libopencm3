/** @defgroup gpio_defines GPIO Defines
 *
 * @brief <b>Defined Constants and Types for the PSoC4 General Purpose I/O</b>
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

#ifndef LIBOPENCM3_COMMON_GPIO_H
#define LIBOPENCM3_COMMON_GPIO_H

#include <libopencm3/cm3/common.h>

#define GPIO_DR(port)			MMIO32((port) + 0x00)
#define GPIO_PS(port)			MMIO32((port) + 0x04)
#define GPIO_PC(port)			MMIO32((port) + 0x08)
#define GPIO_INTCFG(port)		MMIO32((port) + 0x0C)
#define GPIO_INTSTAT(port)		MMIO32((port) + 0x10)
#define GPIO_PC2(port)			MMIO32((port) + 0x18)


#define GPIO_DM_OFF			(0x0)
#define GPIO_DM_INPUT		(0x1)
#define GPIO_DM_0_PU		(0x2)
#define GPIO_DM_PD_1		(0x3)
#define GPIO_DM_0_Z			(0x4)
#define GPIO_DM_Z_1			(0x5)
#define GPIO_DM_0_1			(0x6)
#define GPIO_DM_PD_PU		(0x7)

#define GPIO_PORT_0 	(GPIO_PORT_0_BASE)
#define GPIO_PORT_1 	(GPIO_PORT_1_BASE)
#define GPIO_PORT_2 	(GPIO_PORT_2_BASE)
#define GPIO_PORT_3 	(GPIO_PORT_3_BASE)

/* --- Function prototypes ------------------------------------------------- */

BEGIN_DECLS

void gpio_set_mode(uint32_t gpioport, uint8_t dm, uint8_t gpios);
void gpio_set(uint32_t gpioport, uint8_t gpios);
void gpio_clear(uint32_t gpioport, uint8_t gpios);
uint8_t gpio_get(uint32_t gpioport, uint8_t gpios);
void gpio_toggle(uint32_t gpioport, uint8_t gpios);
uint8_t gpio_port_read(uint32_t gpioport);
void gpio_port_write(uint32_t gpioport, uint8_t data);

END_DECLS

#endif
