/*
 * peri.h
 *
 *  Created on: 14 jun. 2019
 *      Author: andre
 */

#ifndef INCLUDE_LIBOPENCM3_PSOC_COMMON_PERI_H_
#define INCLUDE_LIBOPENCM3_PSOC_COMMON_PERI_H_

// TODO: Here we need to enable/disable them all
#define PERI_DIV_CMD    (PERI_BASE + 0x0000)


// These represent the dividor selector for each peripheral
/*
	0 IMO (Spread Spectrum)
	1 CLOCK_PUMP
	2 SCB0
	3 SCB1
	4 SCB2
	5 SCB3
	6 CSD0_ CLK0
	7 CSD0_ CLK1
	8 CSD1_CLK0
	9 CSD 1_CLK1
	10 SAR
	11 TCPWM0
	12 TCPWM1
	13 TCPWM2
	14 TCPWM3
	15 TCPWM4
	16 TCPWM5
	17 TCPWM6
	18 TCPWM7
	19 UDB0 (only for PSoC 4200M)
	20 UDB1 (only for PSoC 4200M)
	21 UDB2 (only for PSoC 4200M)
	22 UDB3 (only for PSoC 4200M)
	23 LCD
*/
#define PERI_PCLK_CTL0    (PERI_BASE + 0x0100)
#define PERI_PCLK_CTL1    (PERI_BASE + 0x0104)
#define PERI_PCLK_CTL2    (PERI_BASE + 0x0108)
#define PERI_PCLK_CTL3    (PERI_BASE + 0x010C)
#define PERI_PCLK_CTL4    (PERI_BASE + 0x0110)
#define PERI_PCLK_CTL5    (PERI_BASE + 0x0114)
#define PERI_PCLK_CTL6    (PERI_BASE + 0x0118)
#define PERI_PCLK_CTL7    (PERI_BASE + 0x011C)
#define PERI_PCLK_CTL8    (PERI_BASE + 0x0120)
#define PERI_PCLK_CTL9    (PERI_BASE + 0x0124)
#define PERI_PCLK_CTL10    (PERI_BASE + 0x0128)
#define PERI_PCLK_CTL11    (PERI_BASE + 0x012C)
#define PERI_PCLK_CTL12    (PERI_BASE + 0x0130)
#define PERI_PCLK_CTL13    (PERI_BASE + 0x0134)
#define PERI_PCLK_CTL14    (PERI_BASE + 0x0138)
#define PERI_PCLK_CTL15    (PERI_BASE + 0x013C)
#define PERI_PCLK_CTL16    (PERI_BASE + 0x0140)
#define PERI_PCLK_CTL17    (PERI_BASE + 0x0144)
#define PERI_PCLK_CTL18    (PERI_BASE + 0x0148)
#define PERI_PCLK_CTL19    (PERI_BASE + 0x014C)
#define PERI_PCLK_CTL20    (PERI_BASE + 0x0150)
#define PERI_PCLK_CTL21    (PERI_BASE + 0x0154)
#define PERI_PCLK_CTL22    (PERI_BASE + 0x0158)
#define PERI_PCLK_CTL23    (PERI_BASE + 0x015C)



// The clock types we can select are defines as follows in the
// 4200M Registers TRM. The 4200M Architecture TRM says 0 and 3 are
// reserved values that should not be used. I suppose they are
// intended for other families that share this clock architecture.
#define PERI_PCLK_SEL_TYPE_INTEGER_8		(0)
#define PERI_PCLK_SEL_TYPE_INTEGER_16       (1)
#define PERI_PCLK_SEL_TYPE_FRAC_16_5		(2)
#define PERI_PCLK_SEL_TYPE_FRAC_24_5		(3)


// These are the clock integet dividors
#define PERI_DIV_16_CTL0    (PERI_BASE + 0x0300)
#define PERI_DIV_16_CTL1    (PERI_BASE + 0x0304)
#define PERI_DIV_16_CTL2    (PERI_BASE + 0x0308)
#define PERI_DIV_16_CTL3    (PERI_BASE + 0x030C)
#define PERI_DIV_16_CTL4    (PERI_BASE + 0x0310)
#define PERI_DIV_16_CTL5    (PERI_BASE + 0x0314)
#define PERI_DIV_16_CTL6    (PERI_BASE + 0x0318)
#define PERI_DIV_16_CTL7    (PERI_BASE + 0x031C)
#define PERI_DIV_16_CTL8    (PERI_BASE + 0x0320)
#define PERI_DIV_16_CTL9    (PERI_BASE + 0x0324)
#define PERI_DIV_16_CTL10    (PERI_BASE + 0x0328)
#define PERI_DIV_16_CTL11    (PERI_BASE + 0x032C)
#define PERI_DIV_16_CTL12    (PERI_BASE + 0x0330)
#define PERI_DIV_16_CTL13    (PERI_BASE + 0x0334)
#define PERI_DIV_16_CTL14    (PERI_BASE + 0x0338)
#define PERI_DIV_16_CTL15    (PERI_BASE + 0x033C)


// These are the clock fractional dividers
#define PERI_DIV_16_5_CTL0    (PERI_BASE + 0x0400)
#define PERI_DIV_16_5_CTL1    (PERI_BASE + 0x0404)
#define PERI_DIV_16_5_CTL2    (PERI_BASE + 0x0408)
#define PERI_DIV_16_5_CTL3    (PERI_BASE + 0x040C)

// TODO: What does this register do
#define PERI_TR_CTL    (PERI_BASE + 0x0600)


void peri_divider_enable(uint8_t sel_div, uint8_t sel_type);
void peri_divider_disable(uint8_t sel_div, uint8_t sel_type);
void peri_integer_divider_disable(uint32_t divider_base);
void peri_integer_divider_set_divisor_16(uint32_t divider16_base, uint16_t int16_div);
void peri_integer_divider_set_frac_16_5(uint32_t divider16_5_base, uint16_t int16_div, uint8_t frac5_div);
void peri_select_clock_peripheral(uint32_t peri_pclk_base, uint8_t sel_div, uint8_t sel_type);


#endif /* INCLUDE_LIBOPENCM3_PSOC_4M_PERI_H_ */
