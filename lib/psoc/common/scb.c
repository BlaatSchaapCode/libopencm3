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

#include <libopencm3/psoc/scb.h>
#include <stdint.h>
#include <stdbool.h>

void scb_set_mode(uint32_t scb_block, uint8_t mode)
{
    SCB_CTRL(scb_block) &= ~(0b11 << 24);
    SCB_CTRL(scb_block) |= (mode & 0b11) << 24;
}

void scb_enable(uint32_t scb_block)
{
    SCB_CTRL(scb_block) |= (1 << 31);
    SCB_TX_CTRL(scb_block) |= (1 << 31);
    SCB_RX_CTRL(scb_block) |= (1 << 31);
}
void scb_disable(uint32_t scb_block)
{
    SCB_CTRL(scb_block) &= ~(1 << 31);
    SCB_TX_CTRL(scb_block) &= ~(1 << 31);
    SCB_RX_CTRL(scb_block) &= ~(1 << 31);
}
void scb_set_msb_first(uint32_t scb_block, bool msb_first)
{
    if (msb_first) {
        SCB_TX_CTRL(scb_block) |= (1 << 8);
        SCB_RX_CTRL(scb_block) |= (1 << 8);
    } else {
        SCB_TX_CTRL(scb_block) &= ~(1 << 8);
        SCB_RX_CTRL(scb_block) &= ~(1 << 8);
    }
}
void scb_set_data_width(uint32_t scb_block, uint8_t data_width)
{
    SCB_TX_CTRL(scb_block) &= ~(0b1111);
    SCB_TX_CTRL(scb_block) |= (data_width & 0b1111);
    SCB_RX_CTRL(scb_block) &= ~(0b1111);
    SCB_RX_CTRL(scb_block) |= (data_width & 0b1111);
}
void scb_set_oversampling(uint32_t scb_block, uint8_t oversamping)
{
    SCB_CTRL(scb_block) &= ~(0b1111);
    SCB_CTRL(scb_block) |= (oversamping & 0b1111);
}

bool scb_has_data(uint32_t scb_block)
{
    return (SCB_RX_FIFO_STATUS(scb_block) & 0b1111);
}
uint16_t scb_read(uint32_t scb_block)
{
    return SCB_RX_FIFO_RD(scb_block);
}

void scb_write(uint32_t scb_block, uint16_t data)
{
    // wait until the there is room in the fifo,  value in fifo fill level
    // ranges from 0..8 (at least on 4200). where 0 is empty and 8 is full
    // Checking for less rather then equal to ensure it runs on models
    // with greater fifo buffers.
    while (!((SCB_TX_FIFO_STATUS(scb_block) & 0b1111) < 8))
        ;
    // Add the new data to the transmission fifo.
    SCB_TX_FIFO_WR (scb_block) = data;
}

//---
void scb_uart_set_mode(uint32_t scb_block, uint8_t uart_mode)
{
    SCB_UART_CTRL (scb_block) = uart_mode;
}
void scb_uart_set_parity(uint32_t scb_block, uint8_t parity)
{
    // Clear current settings
    SCB_UART_TX_CTRL(scb_block) &= ~(0b11 << 4);
    SCB_UART_RX_CTRL(scb_block) &= ~(0b11 << 4);

    // Set new setting
    SCB_UART_TX_CTRL(scb_block) |= ((0b11 & parity) << 4);
    SCB_UART_RX_CTRL(scb_block) |= ((0b11 & parity) << 4);
}

void scb_uart_set_stop_bits(uint32_t scb_block, uint8_t stop_bits)
{
    SCB_UART_TX_CTRL(scb_block) &= ~(0b111);
    SCB_UART_RX_CTRL(scb_block) &= ~(0b111);

    SCB_UART_TX_CTRL(scb_block) |= (0b111 & stop_bits);
    SCB_UART_RX_CTRL(scb_block) |= (0b111 & stop_bits);
}

