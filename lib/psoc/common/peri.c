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

#include <libopencm3/psoc/peri.h>

void peri_divider_enable(uint8_t sel_div, uint8_t sel_type)
{
    MMIO32 (PERI_DIV_CMD) = (MMIO32(PERI_DIV_CMD) & 0x0FF00) | // keep PA_SEL bits
            (sel_div & 0x0F) | ((sel_type & 0x03) << 6) | (1 << 31);

}
void peri_divider_disable(uint8_t sel_div, uint8_t sel_type)
{
    MMIO32 (PERI_DIV_CMD) = (MMIO32(PERI_DIV_CMD) & 0x0FF00) | // keep PA_SEL bits
            (sel_div & 0x0F) | ((sel_type & 0x03) << 6) | (1 << 30);
}

void peri_integer_divider_set_divisor_16(uint32_t divider16_base,
        uint16_t int16_div)
{
    MMIO32(divider16_base) &= ~(0xFFFF << 8);
    MMIO32(divider16_base) |= (int16_div << 8);
}

// Sets a fractional division, divisor will be  (int_div + (frac5_div / 32))
void peri_integer_divider_set_frac_16_5(uint32_t divider16_5_base,
        uint16_t int16_div, uint8_t frac5_div)
{
    MMIO32(divider16_5_base) &= ~(0b11111 << 3);
    MMIO32(divider16_5_base) &= ~(0xFFFF << 8);
    MMIO32(divider16_5_base) |= (int16_div << 8);
    MMIO32(divider16_5_base) |= ((0b11111 & frac5_div) << 3);
}

void peri_select_clock_peripheral(uint32_t peri_pclk_base, uint8_t sel_div,
        uint8_t sel_type)
{
    MMIO32 (peri_pclk_base) = (sel_div & 0x0F) | ((sel_type & 0x03) << 6);
}

