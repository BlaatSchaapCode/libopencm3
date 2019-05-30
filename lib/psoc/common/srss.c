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

#include <libopencm3/psoc/srss.h>

#define asm __asm__

int srss_set_imo_mhz(int new_freq_mhz) {
	if ((new_freq_mhz < 3) || (new_freq_mhz > 48))
		return SRSS_STATUS_OUT_OF_RANGE;

	uint8_t new_bg4_val;
	uint8_t new_bg5_val;

	if (new_freq_mhz < SFLASH_IMO_MAXF0) {
		new_bg4_val = SFLASH_IMO_ABS0;
		new_bg5_val = SFLASH_IMO_TMPCO0;
	} else if (new_freq_mhz < SFLASH_IMO_MAXF1) {
		new_bg4_val = SFLASH_IMO_ABS1;
		new_bg5_val = SFLASH_IMO_TMPCO1;
	} else if (new_freq_mhz < SFLASH_IMO_MAXF2) {
		new_bg4_val = SFLASH_IMO_ABS2;
		new_bg5_val = SFLASH_IMO_TMPCO2;
	} else if (new_freq_mhz < SFLASH_IMO_MAXF3) {
		new_bg4_val = SFLASH_IMO_ABS3;
		new_bg5_val = SFLASH_IMO_TMPCO3;
	} else {
		new_bg4_val = SFLASH_IMO_ABS4;
		new_bg5_val = SFLASH_IMO_TMPCO4;
	}

	// Look at the TRM when to apply these. There are some rules for
	// increasing and decreasing speed.
	// Hopefully, this is the problem when setting the speed >= 38 MHz
	// causes a hardfault, when only setting the TRIM2 register.

	// They aren't in the current 4100/4200 series TRM. They were in the
	// initial release. I need to keep all releases around to find all the
	// registers as it seems they are being added and removed between
	// revisions. Furthermore it is worth looking at TRM for other series.

	// The 4100M/4200M series has so far the best description, telling me
	// the IMO_ABS* register goes to PWR_BG_TRIM_4

	int old_freq_mhz;
	if (SRSS_CLK_IMO_TRIM2 > 45)
		old_freq_mhz = SRSS_CLK_IMO_TRIM2 - 4;
	else if (SRSS_CLK_IMO_TRIM2 > 36)
		old_freq_mhz = SRSS_CLK_IMO_TRIM2 - 3;
	else if (SRSS_CLK_IMO_TRIM2 > 26)
		old_freq_mhz = SRSS_CLK_IMO_TRIM2 - 2;
	else if (SRSS_CLK_IMO_TRIM2 > 13)
		old_freq_mhz = SRSS_CLK_IMO_TRIM2 - 1;
	else
		old_freq_mhz = SRSS_CLK_IMO_TRIM2;

	if ((old_freq_mhz >= 43) && (new_freq_mhz >= 43)) { // If old_freq_mhz >= 43
		SRSS_CLK_IMO_TRIM2 = 25; //set to 24 Mhz
    }
	if (new_freq_mhz > old_freq_mhz) {
		SRSS_CLK_IMO_TRIM1 = SFLASH_IMO_TRIM[new_freq_mhz - 3];
		SRSS_PWR_BG_TRIM4 = new_bg4_val;
		SRSS_PWR_BG_TRIM5 = new_bg5_val;

        if (new_freq_mhz > 24) 
            SRSS_CLK_SELECT |= SRSS_CLK_SELECT_HALF_EN;

        // 4M test
        if (new_freq_mhz > 24)
        	(*(uint32_t*)(0x40100030)) |= 2;


		if (new_freq_mhz < 13)
			SRSS_CLK_IMO_TRIM2 = new_freq_mhz;
		else if (new_freq_mhz < 25)
			SRSS_CLK_IMO_TRIM2 = new_freq_mhz + 1;
		else if (new_freq_mhz < 34)
			SRSS_CLK_IMO_TRIM2 = new_freq_mhz + 2;
		else if (new_freq_mhz < 41)
			SRSS_CLK_IMO_TRIM2 = new_freq_mhz + 3;
		else
			SRSS_CLK_IMO_TRIM2 = new_freq_mhz + 4;

		for (volatile int i = 0; i < 5 * new_freq_mhz; i++)
			asm("mov r0,r0");

        if (new_freq_mhz <= 24) 
            SRSS_CLK_SELECT &= ~SRSS_CLK_SELECT_HALF_EN;       

	} else {
        if (new_freq_mhz > 24) 
            SRSS_CLK_SELECT |= SRSS_CLK_SELECT_HALF_EN;      


        if (new_freq_mhz > 24)
                	(*(uint32_t*)(0x40100030)) |= 2;

		if (new_freq_mhz < 13)
			SRSS_CLK_IMO_TRIM2 = new_freq_mhz;
		else if (new_freq_mhz < 25)
			SRSS_CLK_IMO_TRIM2 = new_freq_mhz + 1;
		else if (new_freq_mhz < 34)
			SRSS_CLK_IMO_TRIM2 = new_freq_mhz + 2;
		else if (new_freq_mhz < 41)
			SRSS_CLK_IMO_TRIM2 = new_freq_mhz + 3;
		else
			SRSS_CLK_IMO_TRIM2 = new_freq_mhz + 4;
		for (volatile int i = 0; i < 5 * new_freq_mhz; i++)
			asm("mov r0,r0");
		SRSS_CLK_IMO_TRIM1 = SFLASH_IMO_TRIM[new_freq_mhz - 3];
		SRSS_PWR_BG_TRIM4 = new_bg4_val;
		SRSS_PWR_BG_TRIM5 = new_bg5_val;

        if (new_freq_mhz <= 24) 
            SRSS_CLK_SELECT &= ~SRSS_CLK_SELECT_HALF_EN;       


	}

}
