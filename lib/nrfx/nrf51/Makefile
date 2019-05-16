##
## This file is part of the libopencm3 project.
##
## Copyright (C) 2016 Karl Palsson <karlp@tweak.net.au>
##
## This library is free software: you can redistribute it and/or modify
## it under the terms of the GNU Lesser General Public License as published by
## the Free Software Foundation, either version 3 of the License, or
## (at your option) any later version.
##
## This library is distributed in the hope that it will be useful,
## but WITHOUT ANY WARRANTY; without even the implied warranty of
## MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
## GNU Lesser General Public License for more details.
##
## You should have received a copy of the GNU Lesser General Public License
## along with this library.  If not, see <http://www.gnu.org/licenses/>.
##

LIBNAME		= libopencm3_nrfx_nrf51
SRCLIBDIR	?= ../..
NRFXDIR ?= ${SRCLIBDIR}/../../nrfx
CMSIS5DIR ?= ${SRCLIBDIR}/../../CMSIS_5

PREFIX		?= arm-none-eabi

CC		= $(PREFIX)-gcc
AR		= $(PREFIX)-ar
TGT_CFLAGS	= -Os \
		  -Wall -Wextra -Wimplicit-function-declaration \
		  -Wredundant-decls -Wmissing-prototypes -Wstrict-prototypes \
		  -Wundef -Wshadow -fno-common \
		  -mcpu=cortex-m0 $(FP_FLAGS) -mthumb -Wstrict-prototypes \
		  -ffunction-sections -fdata-sections -MD -DNRF51 \
		  -I../../../include  -I../../../include/libopencm3/nrfx/nrf51 \
		  -I../../../include/libopencm3/nrfx/common -I${NRFXDIR} \
		  -I${NRFXDIR}/hal -I${NRFXDIR}/drivers/include -I${NRFXDIR}/mdk \
		  -I${CMSIS5DIR}/CMSIS/Core/Include


TGT_CFLAGS      += $(DEBUG_FLAGS)
TGT_CFLAGS	+= $(STANDARD_FLAGS)
TGT_CFLAGS      += $(DEBUG_FLAGS)
TGT_CFLAGS	+= $(STANDARD_FLAGS)
# ARFLAGS	= rcsv
ARFLAGS		= rcs
OBJS		= \
	nrfx_adc.o\
	nrfx_clock.o\
	nrfx_comp.o\
	nrfx_dppi.o\
	nrfx_gpiote.o\
	nrfx_i2s.o\
	nrfx_lpcomp.o\
	nrfx_nfct.o\
	nrfx_nvmc.o\
	nrfx_pdm.o\
	nrfx_power.o\
	nrfx_ppi.o\
	nrfx_pwm.o\
	nrfx_qdec.o\
	nrfx_qspi.o\
	nrfx_rng.o\
	nrfx_rtc.o\
	nrfx_saadc.o\
	nrfx_spi.o\
	nrfx_spim.o\
	nrfx_spis.o\
	nrfx_swi.o\
	nrfx_systick.o\
	nrfx_temp.o\
	nrfx_timer.o\
	nrfx_twi.o\
	nrfx_twim.o\
	nrfx_twis.o\
	nrfx_uart.o\
	nrfx_uarte.o\
	nrfx_usbd.o\
	nrfx_wdt.o\


VPATH += ../../cm3:../common:${NRFXDIR}/hal:${NRFXDIR}/drivers/src

include ../../Makefile.include

