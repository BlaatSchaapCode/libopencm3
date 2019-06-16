/*
 * tcpwm.c
 *
 *  Created on: 16 jun. 2019
 *      Author: andre
 */

#include <libopencm3/psoc/tcpwm.h>

void tcpwm_enable_auto_relead_cc(uint32_t tcpwm_peripheral) {
	TCPWM_CNT_CTRL(tcpwm_peripheral) |= (1 << 0);
}
void tcpwm_enable_auto_relead_period(uint32_t tcpwm_peripheral) {
	TCPWM_CNT_CTRL(tcpwm_peripheral) |= (1 << 1);
}
void tcpwm_disable_auto_relead_cc(uint32_t tcpwm_peripheral) {
	TCPWM_CNT_CTRL(tcpwm_peripheral) &= ~(1 << 0);
}
void tcpwm_disable_auto_relead_period(uint32_t tcpwm_peripheral) {
	TCPWM_CNT_CTRL(tcpwm_peripheral) &= ~(1 << 1);
}

void tcpwm_set_quadrature_mode(uint32_t tcpwm_peripheral,
		uint8_t quadrature_mode) {
	TCPWM_CNT_CTRL (tcpwm_peripheral) = (TCPWM_CNT_CTRL(tcpwm_peripheral)
			& ~(0b11 << 20)) | ((0b11 & quadrature_mode) << 20);
}
void tcpwm_set_up_down_mode(uint32_t tcpwm_peripheral, uint8_t updown_mode) {
	TCPWM_CNT_CTRL (tcpwm_peripheral) = (TCPWM_CNT_CTRL(tcpwm_peripheral)
			& ~(0b11 << 16)) | ((0b11 & updown_mode) << 16);
}
void tcpwm_set_mode(uint32_t tcpwm_peripheral, uint8_t mode) {
	TCPWM_CNT_CTRL (tcpwm_peripheral) = (TCPWM_CNT_CTRL(tcpwm_peripheral)
			& ~(0b111 << 24)) | ((0b111 & mode) << 24);
}

void tcpwm_set_period(uint32_t tcpwm_peripheral, uint16_t period) {
	TCPWM_CNT_PERIOD (tcpwm_peripheral) = period;
}
void tcpwm_set_cc(uint32_t tcpwm_peripheral, uint16_t cc) {
	TCPWM_CNT_CC (tcpwm_peripheral) = cc;
}
void tcpwm_set_period_buff(uint32_t tcpwm_peripheral, uint16_t period) {
	TCPWM_CNT_PERIOD_BUFF (tcpwm_peripheral) = period;
}
void tcpwm_set_cc_buff(uint32_t tcpwm_peripheral, uint16_t cc) {
	TCPWM_CNT_CC_BUFF (tcpwm_peripheral) = cc;
}
void tcpwm_output_cc_match_mode(uint32_t tcpwm_peripheral, uint8_t match_mode) {
	TCPWM_CNT_TR_CTRL2 (tcpwm_peripheral) = (TCPWM_CNT_TR_CTRL2(
			tcpwm_peripheral) & ~(0b11 << 0)) | ((0b11 & match_mode) << 0);
}
void tcpwm_output_overflow_mode(uint32_t tcpwm_peripheral, uint8_t match_mode) {
	TCPWM_CNT_TR_CTRL2 (tcpwm_peripheral) = (TCPWM_CNT_TR_CTRL2(
			tcpwm_peripheral) & ~(0b11 << 2)) | ((0b11 & match_mode) << 2);
}
void tcpwm_output_underflow_mode(uint32_t tcpwm_peripheral, uint8_t match_mode) {
	TCPWM_CNT_TR_CTRL2 (tcpwm_peripheral) = (TCPWM_CNT_TR_CTRL2(
			tcpwm_peripheral) & ~(0b11 << 4)) | ((0b11 & match_mode) << 4);
}

void tcpwm_enable_interrupt(uint32_t tcpwm_peripheral, uint8_t interrupts) {
	TCPWM_CNT_INTR_MASK(tcpwm_peripheral) |= interrupts;
}
void tcpwm_disable_interrupt(uint32_t tcpwm_peripheral, uint8_t interrupts) {
	TCPWM_CNT_INTR_MASK(tcpwm_peripheral) &= ~interrupts;
}

void tcpwm_counter_enable(uint8_t counters) {
	TCPWM_CTRL |= counters;
}
void tcpwm_counter_disable(uint8_t counters) {
	TCPWM_CTRL &= ~counters;
}
void tcpwm_counter_capture(uint8_t counters) {
	TCPWM_CMD |= counters;
}
void tcpwm_counter_reload(uint8_t counters) {
	TCPWM_CMD |= counters << 8;
}
void tcpwm_counter_stop(uint8_t counters) {
	TCPWM_CMD |= counters << 16;
}
void tcpwm_counter_start(uint8_t counters) {
	TCPWM_CMD |= counters << 24;
}

