/*
 * pclk.c
 *
 *  Created on: 7 jun. 2019
 *      Author: andre
 */

#include <stdint.h>
#include <libopencm3/psoc/pclk.h>

void pclk_set_divider(int divider_abc, int divider_n, int value) {
	MMIO32(PCLK_BASE + (0x04 * divider_n) + (0x40 * divider_abc)) = value
			| 1 << 31; // write value and set enable bit
}

void pclk_select(intptr_t select_peripheral, int divider_abc, int divider_n) {
	MMIO32(select_peripheral) = (divider_abc + 1) << 4 | divider_n;
}
