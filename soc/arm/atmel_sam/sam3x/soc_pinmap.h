/*
 * Copyright (c) 2017 Piotr Mienkowski
 * SPDX-License-Identifier: Apache-2.0
 */

/** @file
 * @brief Atmel SAM3X MCU pin definitions.
 *
 * This file contains pin configuration data required by different MCU
 * modules to correctly configure GPIO controller.
 */

#ifndef _ATMEL_SAM3X_SOC_PINMAP_H_
#define _ATMEL_SAM3X_SOC_PINMAP_H_

#include <soc.h>

/* Universal Asynchronous Receiver Transmitter (UART) */

#define PIN_UART0_RXD {PIO_PA8A_URXD, PIOA, ID_PIOA, SOC_GPIO_FUNC_A}
#define PIN_UART0_TXD {PIO_PA9A_UTXD, PIOA, ID_PIOA, SOC_GPIO_FUNC_A}

#define PINS_UART0 {PIN_UART0_RXD, PIN_UART0_TXD}

/* Universal Synchronous Asynchronous Receiver Transmitter (USART) */

#define PIN_USART0_RXD {PIO_PA10A_RXD0, PIOA, ID_PIOA, SOC_GPIO_FUNC_A}
#define PIN_USART0_TXD {PIO_PA11A_TXD0, PIOA, ID_PIOA, SOC_GPIO_FUNC_A}
#define PIN_USART0_CTS {PIO_PB26A_CTS0, PIOB, ID_PIOB, SOC_GPIO_FUNC_A}
#define PIN_USART0_RTS {PIO_PB25A_RTS0, PIOB, ID_PIOB, SOC_GPIO_FUNC_A}
#define PIN_USART0_SCK {PIO_PA17B_SCK0, PIOA, ID_PIOA, SOC_GPIO_FUNC_B}

#define PINS_USART0 {PIN_USART0_RXD, PIN_USART0_TXD, PIN_USART0_CTS, \
	  PIN_USART0_RTS, PIN_USART0_SCK}

#define PIN_USART1_RXD {PIO_PA12A_RXD1, PIOA, ID_PIOA, SOC_GPIO_FUNC_A}
#define PIN_USART1_TXD {PIO_PA13A_TXD1, PIOA, ID_PIOA, SOC_GPIO_FUNC_A}
#define PIN_USART1_CTS {PIO_PA15A_CTS1, PIOA, ID_PIOA, SOC_GPIO_FUNC_A}
#define PIN_USART1_RTS {PIO_PA14A_RTS1, PIOA, ID_PIOA, SOC_GPIO_FUNC_A}
#define PIN_USART1_SCK {PIO_PA16A_SCK1, PIOA, ID_PIOA, SOC_GPIO_FUNC_A}

#define PINS_USART1 {PIN_USART1_RXD, PIN_USART1_TXD, PIN_USART1_CTS, \
	  PIN_USART1_RTS, PIN_USART1_SCK}

#define PIN_USART2_RXD {PIO_PB21A_RXD2, PIOB, ID_PIOB, SOC_GPIO_FUNC_A}
#define PIN_USART2_TXD {PIO_PB20A_TXD2, PIOB, ID_PIOB, SOC_GPIO_FUNC_A}
#define PIN_USART2_CTS {PIO_PB23A_CTS2, PIOB, ID_PIOB, SOC_GPIO_FUNC_A}
#define PIN_USART2_RTS {PIO_PB22A_RTS2, PIOB, ID_PIOB, SOC_GPIO_FUNC_A}
#define PIN_USART2_SCK {PIO_PB24A_SCK2, PIOB, ID_PIOB, SOC_GPIO_FUNC_A}

#define PINS_USART2 {PIN_USART2_RXD, PIN_USART2_TXD, PIN_USART2_CTS, \
	  PIN_USART2_RTS, PIN_USART2_SCK}

#define PIN_USART3_RXD {PIO_PD5B_RXD3,  PIOD, ID_PIOD, SOC_GPIO_FUNC_B}
#define PIN_USART3_TXD {PIO_PD4B_TXD3,  PIOD, ID_PIOD, SOC_GPIO_FUNC_B}
#define PIN_USART3_CTS {PIO_PF4A_CTS3,  PIOF, ID_PIOF, SOC_GPIO_FUNC_A}
#define PIN_USART3_RTS {PIO_PF5A_RTS3,  PIOF, ID_PIOF, SOC_GPIO_FUNC_A}
#define PIN_USART3_SCK {PIO_PE16B_SCK3, PIOE, ID_PIOE, SOC_GPIO_FUNC_B}

#define PINS_USART3 {PIN_USART3_RXD, PIN_USART3_TXD, PIN_USART3_CTS, \
	  PIN_USART3_RTS, PIN_USART3_SCK}

/* Two-wire Interface (TWI) */

#define PIN_TWI0_TWCK {PIO_PA18A_TWCK0, PIOA, ID_PIOA, SOC_GPIO_FUNC_A}
#define PIN_TWI0_TWD  {PIO_PA17A_TWD0,  PIOA, ID_PIOA, SOC_GPIO_FUNC_A}

#define PINS_TWI0 {PIN_TWI0_TWCK, PIN_TWI0_TWD}

#define PIN_TWI1_TWCK {PIO_PB13A_TWCK1, PIOB, ID_PIOB, SOC_GPIO_FUNC_A}
#define PIN_TWI1_TWD  {PIO_PB12A_TWD1,  PIOB, ID_PIOB, SOC_GPIO_FUNC_A}

#define PINS_TWI1 {PIN_TWI1_TWCK, PIN_TWI1_TWD}

#endif /* _ATMEL_SAM3X_SOC_PINMAP_H_ */