/** @addtogroup gpio_file

@author @htmlonly &copy; @endhtmlonly 2009 André van Schoubroeck <andre@philosopher.it>

*/

/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2009 André van Schoubroeck <andre@philosopher.it>
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

#include <libopencm3/psoc/gpio.h>


/**@{*/

void gpio_set_mode(uint32_t gpioport, uint8_t dm, uint8_t gpios){
	uint32_t PCVAL = GPIO_PC(gpioport);
	dm &= 0b111; // Ensure drive mode is in range
	for (uint8_t i = 0 ; i < 8; i++) {	// For each pin
		if (gpios & (1<<i)) {	// If the pin is selected
			PCVAL &= ~ ((0b111)<<(3*i));	// Clear the current value
			PCVAL |= dm<<(3*i);	// Update the value for the pin 
		} 
	}
	GPIO_PC(gpioport) = PCVAL;	// Write the new pin value

}

void gpio_set(uint32_t gpioport, uint8_t gpios){
	GPIO_DR(gpioport) |= gpios;
}

void gpio_clear(uint32_t gpioport, uint8_t gpios){
	GPIO_DR(gpioport) &= ~gpios;
}

uint8_t gpio_get(uint32_t gpioport, uint8_t gpios){
	return GPIO_PS(gpioport) & gpios;
}

void gpio_toggle(uint32_t gpioport, uint8_t gpios){
	GPIO_DR(gpioport) =  ~GPIO_PS(gpioport) ^ ~gpios;
}

uint8_t gpio_port_read(uint32_t gpioport){
	return GPIO_PS(gpioport);
}

void gpio_port_write(uint32_t gpioport, uint8_t data){
	GPIO_DR(gpioport) = data;
}

