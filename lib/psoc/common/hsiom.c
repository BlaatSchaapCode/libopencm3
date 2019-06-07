/*
 * hsiom.c
 *
 *  Created on: 7 jun. 2019
 *      Author: andre
 */

#include <libopencm3/psoc/hsiom.h>

void hsiom_set_function(void* port, uint8_t pin, uint8_t function){
	MMIO32(port) = (MMIO32(port) & ~(0xF << (4*pin))) | (function << (4*pin) );
}
