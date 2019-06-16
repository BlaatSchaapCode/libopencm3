/*
 * tcpwm.h
 *
 *  Created on: 14 jun. 2019
 *      Author: andre
 */

#ifndef INCLUDE_LIBOPENCM3_PSOC_COMMON_TCPWM_H_
#define INCLUDE_LIBOPENCM3_PSOC_COMMON_TCPWM_H_


#define TCPWM_CTRL           MMIO32(TCPWM_BASE + 0x0000)
#define TCPWM_CMD            MMIO32(TCPWM_BASE + 0x0008)
#define TCPWM_INTR_CAUSE     MMIO32(TCPWM_BASE + 0x000C)

#define TCPWM_CNT0_BASE      (TCPWM_BASE + 0x0100)
#define TCPWM_CNT1_BASE      (TCPWM_BASE + 0x0140)
#define TCPWM_CNT2_BASE      (TCPWM_BASE + 0x0180)
#define TCPWM_CNT3_BASE      (TCPWM_BASE + 0x01C0)
#define TCPWM_CNT4_BASE      (TCPWM_BASE + 0x0200)
#define TCPWM_CNT5_BASE      (TCPWM_BASE + 0x0240)
#define TCPWM_CNT6_BASE      (TCPWM_BASE + 0x0280)
#define TCPWM_CNT7_BASE      (TCPWM_BASE + 0x02c0)


#define TCPWM_CNT_CTRL(TCPWM_CNT_BASE)             MMIO32(TCPWM_CNT_BASE + 0x00)
#define TCPWM_CNT_STATUS(TCPWM_CNT_BASE)           MMIO32(TCPWM_CNT_BASE + 0x04)
#define TCPWM_CNT_COUNTER(TCPWM_CNT_BASE)          MMIO32(TCPWM_CNT_BASE + 0x08)
#define TCPWM_CNT_CC(TCPWM_CNT_BASE)               MMIO32(TCPWM_CNT_BASE + 0x0C)
#define TCPWM_CNT_CC_BUFF(TCPWM_CNT_BASE)          MMIO32(TCPWM_CNT_BASE + 0x10)
#define TCPWM_CNT_PERIOD(TCPWM_CNT_BASE)           MMIO32(TCPWM_CNT_BASE + 0x14)
#define TCPWM_CNT_PERIOD_BUFF(TCPWM_CNT_BASE)      MMIO32(TCPWM_CNT_BASE + 0x18)
#define TCPWM_CNT_TR_CTRL0(TCPWM_CNT_BASE)         MMIO32(TCPWM_CNT_BASE + 0x20)
#define TCPWM_CNT_TR_CTRL1(TCPWM_CNT_BASE)         MMIO32(TCPWM_CNT_BASE + 0x24)
#define TCPWM_CNT_TR_CTRL2(TCPWM_CNT_BASE)         MMIO32(TCPWM_CNT_BASE + 0x28)
#define TCPWM_CNT_INTR(TCPWM_CNT_BASE)             MMIO32(TCPWM_CNT_BASE + 0x30)
#define TCPWM_CNT_INTR_SET(TCPWM_CNT_BASE)         MMIO32(TCPWM_CNT_BASE + 0x34)
#define TCPWM_CNT_INTR_MASK(TCPWM_CNT_BASE)        MMIO32(TCPWM_CNT_BASE + 0x38)
#define TCPWM_CNT_INTR_MASKED(TCPWM_CNT_BASE)      MMIO32(TCPWM_CNT_BASE + 0x3C)

#define TCPWM_MODE_TIMER	(0x0)
// value 0x01 is missing from 4200 and 4200M TRMs. Maybe it exists in another?
#define TCPWM_MODE_CAPTURE	(0x2)
#define TCPWM_MODE_QUAD		(0x3)
#define TCPWM_MODE_PWM		(0x4)
#define TCPWM_MODE_PWM_DT	(0x5)
#define TCPWM_MODE_PWM_PR	(0x6)

#define TCPWM_UP_DOWN_MODE_UP		(0x0)
#define TCPWM_UP_DOWN_MODE_DOWN		(0x1)
#define TCPWM_UP_DOWN_MODE_UPDN1	(0x2)
#define TCPWM_UP_DOWN_MODE_UPDN2	(0x3)

#define TCPWM_OUTPUT_MODE_SET		(0x0)
#define TCPWM_OUTPUT_MODE_CLEAR		(0x1)
#define TCPWM_OUTPUT_MODE_INVERT	(0x2)
#define TCPWM_OUTPUT_MODE_NO_CHANGE	(0x3)

#define TCPWM_QUADRATURE_MODE_X1	(0x0)
#define TCPWM_QUADRATURE_MODE_X2	(0x1)
#define TCPWM_QUADRATURE_MODE_X4	(0x2)

BEGIN_DECLS

void tcpwm_enable_auto_relead_cc(uint32_t tcpwm_peripheral);
void tcpwm_enable_auto_relead_period(uint32_t tcpwm_peripheral);
void tcpwm_disable_auto_relead_cc(uint32_t tcpwm_peripheral);
void tcpwm_disable_auto_relead_period(uint32_t tcpwm_peripheral);
void tcpwm_set_mode(uint32_t tcpwm_peripheral, uint8_t mode);
void tcpwm_set_up_down_mode(uint32_t tcpwm_peripheral, uint8_t up_down_mode);
void tcpwm_set_quadrature_mode(uint32_t tcpwm_peripheral, uint8_t quadrature_mode);
void tcpwm_set_period(uint32_t tcpwm_peripheral, uint16_t);
void tcpwm_set_cc(uint32_t tcpwm_peripheral, uint16_t);

void tcpwm_output_cc_match_mode(uint32_t tcpwm_peripheral, uint8_t);
void tcpwm_output_overflow_mode(uint32_t tcpwm_peripheral, uint8_t);
void tcpwm_output_underflow_mode(uint32_t tcpwm_peripheral, uint8_t);

void tcpwm_enable_interrupt(uint32_t tcpwm_peripheral, uint8_t);
void tcpwm_disable_interrupt(uint32_t tcpwm_peripheral, uint8_t);

void tcpwm_counter_enable(uint8_t);
void tcpwm_counter_disable(uint8_t);
void tcpwm_counter_capture(uint8_t);
void tcpwm_counter_reload(uint8_t);
void tcpwm_counter_stop(uint8_t);
void tcpwm_counter_start(uint8_t);

// TODO, enable, disable

END_DECLS

#endif /* INCLUDE_LIBOPENCM3_PSOC_COMMON_TCPWM_H_ */
