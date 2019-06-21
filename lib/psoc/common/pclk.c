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

#include <stdint.h>
#include <libopencm3/psoc/pclk.h>

void pclk_set_divider(int divider_abc, int divider_n, int value)
{
    MMIO32(PCLK_BASE + (0x04 * divider_n) + (0x40 * divider_abc)) = value
            | 1 << 31; // write value and set enable bit
}

void pclk_select(intptr_t select_peripheral, int divider_abc, int divider_n)
{
    MMIO32 (select_peripheral) = (divider_abc + 1) << 4 | divider_n;
}
