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

#ifndef LIBOPENCM3_PSOC4_COMMON_SCB_H
#define LIBOPENCM3_PSOC4_COMMON_SCB_H

#include <libopencm3/cm3/common.h>

#define SCB_CTRL(scb_block)				MMIO32((scb_block) + 0x0000)
#define SCB_STATUS(scb_block)				MMIO32((scb_block) + 0x0004)
#define SCB_SPI_CTRL(scb_block)			MMIO32((scb_block) + 0x0020)
#define SCB_SPI_STATUS(scb_block)			MMIO32((scb_block) + 0x0024)
#define SCB_UART_CTRL(scb_block)			MMIO32((scb_block) + 0x0040)
#define SCB_UART_TX_CTRL(scb_block)		MMIO32((scb_block) + 0x0044)
#define SCB_UART_RX_CTRL(scb_block)		MMIO32((scb_block) + 0x0048)
#define SCB_UART_RX_STATUS(scb_block)		MMIO32((scb_block) + 0x004C)
#define SCB_UART_FLOW_CONTROL(scb_block)	MMIO32((scb_block) + 0x0050)
#define SCB_I2C_CTRL(scb_block)			MMIO32((scb_block) + 0x0060)
#define SCB_I2C_STATUS(scb_block)			MMIO32((scb_block) + 0x0064)
#define SCB_I2C_M_CMD(scb_block)			MMIO32((scb_block) + 0x0068)
#define SCB_I2C_S_CMD(scb_block)			MMIO32((scb_block) + 0x006C)
#define SCB_I2C_CFG(scb_block)				MMIO32((scb_block) + 0x0070)
#define SCB_TX_CTRL(scb_block)				MMIO32((scb_block) + 0x0200)
#define SCB_TX_FIFO_CTRL(scb_block)		MMIO32((scb_block) + 0x0204)
#define SCB_TX_FIFO_STATUS(scb_block)		MMIO32((scb_block) + 0x0208)
#define SCB_TX_FIFO_WR(scb_block)			MMIO32((scb_block) + 0x0240)
#define SCB_RX_CTRL(scb_block)				MMIO32((scb_block) + 0x0300)
#define SCB_RX_FIFO_CTRL(scb_block)		MMIO32((scb_block) + 0x0304)
#define SCB_RX_FIFO_STATUS(scb_block)		MMIO32((scb_block) + 0x0308)
#define SCB_RX_MATCH(scb_block)			MMIO32((scb_block) + 0x0310)
#define SCB_RX_FIFO_RD(scb_block)			MMIO32((scb_block) + 0x0340)
#define SCB_RX_FIFO_RD_SILENT(scb_block)	MMIO32((scb_block) + 0x0344)
#define SCB_EZ_DATA(scb_block)				MMIO32((scb_block) + 0x0400)
#define SCB_INTR_CAUSE(scb_block)			MMIO32((scb_block) + 0x0E00)
#define SCB_INTR_I2C_EC(scb_block)			MMIO32((scb_block) + 0x0E80)
#define SCB_INTR_I2C_EC_MASK(scb_block)	MMIO32((scb_block) + 0x0E88)
#define SCB_INTR_I2C_EC_MASKED(scb_block)	MMIO32((scb_block) + 0x0E8C)
#define SCB_INTR_SPI_EC(scb_block)			MMIO32((scb_block) + 0x0EC0)
#define SCB_INTR_SPI_EC_MASK(scb_block)	MMIO32((scb_block) + 0x0EC8)
#define SCB_INTR_SPI_EC_MASKED(scb_block)	MMIO32((scb_block) + 0x0ECC)
#define SCB_INTR_M(scb_block)				MMIO32((scb_block) + 0x0F00)
#define SCB_INTR_M_SET(scb_block)			MMIO32((scb_block) + 0x0F04)
#define SCB_INTR_M_MASK(scb_block)			MMIO32((scb_block) + 0x0F08)
#define SCB_INTR_M_MASKED(scb_block)		MMIO32((scb_block) + 0x0F0C)
#define SCB_INTR_S(scb_block)				MMIO32((scb_block) + 0x0F40)
#define SCB_INTR_S_SET(scb_block)			MMIO32((scb_block) + 0x0F44)
#define SCB_INTR_S_MASK(scb_block)			MMIO32((scb_block) + 0x0F48)
#define SCB_INTR_S_MASKED(scb_block)		MMIO32((scb_block) + 0x0F4C)
#define SCB_INTR_TX(scb_block)				MMIO32((scb_block) + 0x0F80)
#define SCB_INTR_TX_SET(scb_block)			MMIO32((scb_block) + 0x0F84)
#define SCB_INTR_TX_MASK(scb_block)		MMIO32((scb_block) + 0x0F88)
#define SCB_INTR_TX_MASKED(scb_block)		MMIO32((scb_block) + 0x0F8C)
#define SCB_INTR_RX(scb_block)				MMIO32((scb_block) + 0x0FC0)
#define SCB_INTR_RX_SET(scb_block)			MMIO32((scb_block) + 0x0FC4)
#define SCB_INTR_RX_MASK(scb_block)		MMIO32((scb_block) + 0x0FC8)
#define SCB_INTR_RX_MASKED(scb_block)		MMIO32((scb_block) + 0x0FCC)

#define SCB_CTRL_MODE_I2C		(0x0)
#define SCB_CTRL_MODE_SPI		(0x1)
#define SCB_CTRL_MODE_UART		(0x2)
#define SCB_CTRL_MODE_DEFAULT	(0x3)

#define SCB_SPI_CTRL_MODE_MOTOROLA	(0x0)
#define SCB_SPI_CTRL_MODE_TI		(0x1)
#define SCB_SPI_CTRL_MODE_NS		(0x2)
#define SCB_SPI_CTRL_MODE_DEFAULT	(0x3)

#define SCB_UART_CTRL_MODE_STD			(0x0)
#define SCB_UART_CTRL_MODE_SMARTCARD	(0x1)
#define SCB_UART_CTRL_MODE_IRDA			(0x2)
#define SCB_UART_CTRL_MODE_DEFAULT		(0x3)

#define SCB_UART_PARITY_NONE	(0b00)
#define SCB_UART_PARITY_EVEN	(0b10)
#define SCB_UART_PARITY_ODD		(0b11)

/* --- Function prototypes ------------------------------------------------- */

BEGIN_DECLS

// SPI 
void scb_spi_set_master(intptr_t scb_block);
void scb_spi_set_slave(intptr_t scb_block, uint8_t slave_select);
void scb_spi_set_mode(intptr_t scb_block, uint8_t submode);
void scb_spi_set_continuous(intptr_t scb_block, bool continuous);
void scb_spi_is_busy(intptr_t scb_block);

// SPI In Motorola mode
void scb_spi_set_cpol(intptr_t scb_block, uint8_t cpol);
void scb_spi_set_cpha(intptr_t scb_block, uint8_t cpha);
void scb_spi_set_spimode(intptr_t scb_block, uint8_t spimode); // Convinience for setting cpol/cpha

// SPI In Texas Instruments mode
void scb_spi_set_select_precede(intptr_t scb_block, bool select_precede);

// UART
void scb_uart_set_mode(intptr_t scb_block, uint8_t uart_mode);
void scb_uart_set_parity(intptr_t scb_block, uint8_t parity);
void scb_uart_set_stop_bits(intptr_t scb_block, uint8_t stop_bits);
void scb_uart_set_break_width(intptr_t scb_block, uint8_t break_width);

// I2C
void scb_i2c_enable_master(intptr_t scb_block);
void scb_i2c_enable_slave(intptr_t scb_block);
void scb_i2c_disable_master(intptr_t scb_block);
void scb_i2c_disable_slave(intptr_t scb_block);
void scb_i2c_is_busy(intptr_t scb_block);

// All
void scb_set_mode(intptr_t scb_block, uint8_t mode);

void scb_enable(intptr_t scb_block);
void scb_disable(intptr_t scb_block);
void scb_set_msb_first(intptr_t scb_block, bool msb_first);
void scb_set_data_width(intptr_t scb_block, uint8_t data_width);
void scb_set_oversampling(intptr_t scb_block, uint8_t oversamping);

bool scb_has_data(intptr_t scb_block);
uint16_t scb_read(intptr_t scb_block);
void scb_write(intptr_t scb_block, uint16_t data);

void scb_set_slave_address(intptr_t scb_block, uint8_t address, uint8_t mask);

END_DECLS

#endif
