/*
 * hsiom.h
 *
 *  Created on: 7 jun. 2019
 *      Author: andre
 */

#ifndef INCLUDE_LIBOPENCM3_PSOC_COMMON_HSIOM_H_
#define INCLUDE_LIBOPENCM3_PSOC_COMMON_HSIOM_H_


#define HSIOM_PORT_SEL_GPIO			(0x0)
#define HSIOM_PORT_SEL_GPIO_DSI		(0x1)
#define HSIOM_PORT_SEL_DSI_DSI		(0x2)
#define HSIOM_PORT_SEL_DSI_GPIO		(0x3)
#define HSIOM_PORT_SEL_CSD_SENSE	(0x4)
#define HSIOM_PORT_SEL_CSD_SHIELD	(0x5)
#define HSIOM_PORT_SEL_AMUXA		(0x6)
#define HSIOM_PORT_SEL_AMUXB		(0x7)
#define HSIOM_PORT_SEL_ACT_0		(0x8)
#define HSIOM_PORT_SEL_ACT_1		(0x9)
#define HSIOM_PORT_SEL_ACT_2		(0xa)
#define HSIOM_PORT_SEL_ACT_3		(0xb)
#define HSIOM_PORT_SEL_LCD_COM		(0xc)
#define HSIOM_PORT_SEL_LCD_SEG		(0xd)
#define HSIOM_PORT_SEL_DPSLP_0		(0xe)
#define HSIOM_PORT_SEL_DPSLP_1		(0xf)

#define HSIOM_PORT_SEL_TCPWM		(HSIOM_PORT_SEL_ACT_0)
#define HSIOM_PORT_SEL_SCB			(HSIOM_PORT_SEL_ACT_1)

void hsiom_set_function(void* port, uint8_t pin, uint8_t function);

#endif /* INCLUDE_LIBOPENCM3_PSOC_COMMON_HSIOM_H_ */
