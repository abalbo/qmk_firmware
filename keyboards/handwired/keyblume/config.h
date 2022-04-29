/* Copyright 2019
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x6465
#define DEVICE_VER   0x0001
#define MANUFACTURER QMK


/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define TAPPING_TERM 500

#define PRODUCT Onekey Blackpill STM32F401

#define SPLIT_HAND_PIN C13

//#define MASTER_LEFT
//#define SPLIT_USB_DETECT

#define SPLIT_PLUG_DETECT_PIN A9

//#define USE_I2C
//#define I2C_DRIVER I2CD1
//#define I2C1_SCL_PIN B6
//#define I2C1_SCL_PAL_MODE 4
//#define I2C1_SDA_PIN B7
//#define I2C1_SDA_PAL_MODE 4

#define MATRIX_ROWS 12
#define MATRIX_COLS 9

#define MATRIX_COL_PINS { B8, B9, B10, B12, B13, B14, B15, A10, A5 }
#define MATRIX_ROW_PINS { B0, B1, A6, B3, B4, B5 }
//#define MATRIX_COL_PINS_RIGHT { B8, B9, B10, B12, B13, B14, B15, A10, A11 }
#define MATRIX_COL_PINS_RIGHT { A5, A10, B15, B14, B13, B12, B10, B9, B8}
//#define MATRIX_ROW_PINS_RIGHT { B0, B1, A6, B3, B4, B8 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW
#define DEBUG_MATRIX_SCAN_RATE
#define DEBOUNCE 5
#define QMK_KEYS_PER_SCAN 8

//#define BACKLIGHT_PIN         A0
//#define BACKLIGHT_PWM_DRIVER  PWMD5
//#define BACKLIGHT_PWM_CHANNEL 1
//
//#define RGB_DI_PIN A1
//
//#define ADC_PIN A0

#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN B6     // USART TX pin
#define SERIAL_USART_RX_PIN B7     // USART RX pin
//#define USART1_REMAP             // Remap USART TX and RX pins on STM32F103 MCUs, see table below.
//#define SERIAL_USART_PIN_SWAP    // Swap TX and RX pins if keyboard is master halve.
                                   // Check if this feature is necessary with your keyboard design and available on the mcu.
#define SELECT_SOFT_SERIAL_SPEED 1 // or 0, 2, 3, 4, 5
                                   //  0: 460800 baud
                                   //  1: 230400 baud (default)
                                   //  2: 115200 baud
                                   //  3: 57600 baud
                                   //  4: 38400 baud
                                   //  5: 19200 baud
#define SERIAL_USART_DRIVER SD1    // USART driver of TX and RX pin. default: SD1
#define SERIAL_USART_TX_PAL_MODE 7 // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7
#define SERIAL_USART_RX_PAL_MODE 7 // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7
#define SERIAL_USART_TIMEOUT 20    // USART driver timeout. default 20

#define ENCODERS_PAD_A { A2 }
#define ENCODERS_PAD_B { A4 }

#define ENCODER_RESOLUTIONS { 2 }