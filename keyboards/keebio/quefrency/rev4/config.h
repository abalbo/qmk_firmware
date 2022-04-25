/* Copyright 2021 Danny Nguyen <danny@keeb.io>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0xCB10
#define PRODUCT_ID      0x4257
#define DEVICE_VER      0x0400
#define MANUFACTURER    Keebio
#define PRODUCT         Quefrency Rev. 4

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 9

#define DIODE_DIRECTION COL2ROW
// wiring of each half
#define MATRIX_ROW_PINS { B0, B1, A6, B3, B4 }
#define MATRIX_COL_PINS { A11, A10, B15, B14, B13, B12, B10, B9, B8 }
#define MATRIX_ROW_PINS_RIGHT { B0, B1, A6, B3, B4 }
#define MATRIX_COL_PINS_RIGHT { A11, A10, B15, B14, B13, B12, B10, B9, B8 }
#define SPLIT_HAND_PIN C13
//#define ENCODERS_PAD_A { F5 }
//#define ENCODERS_PAD_B { F6 }
//#define ENCODERS_PAD_A_RIGHT { D6 }
//#define ENCODERS_PAD_B_RIGHT { D4 }

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define SOFT_SERIAL_PIN B6

///* serial.c configuration for split keyboard */
//#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
//#define SERIAL_USART_TX_PIN B6     // USART TX pin
//#define SERIAL_USART_RX_PIN B7     // USART RX pin
////#define USART1_REMAP             // Remap USART TX and RX pins on STM32F103 MCUs, see table below.
////#define SERIAL_USART_PIN_SWAP    // Swap TX and RX pins if keyboard is master halve.
//                                   // Check if this feature is necessary with your keyboard design and available on the mcu.
//#define SELECT_SOFT_SERIAL_SPEED 1 // or 0, 2, 3, 4, 5
//                                   //  0: 460800 baud
//                                   //  1: 230400 baud (default)
//                                   //  2: 115200 baud
//                                   //  3: 57600 baud
//                                   //  4: 38400 baud
//                                   //  5: 19200 baud
//#define SERIAL_USART_DRIVER SD1    // USART driver of TX and RX pin. default: SD1
//#define SERIAL_USART_TX_PAL_MODE 7 // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7
//#define SERIAL_USART_RX_PAL_MODE 7 // Pin "alternate function", see the respective datasheet for the appropriate values for your MCU. default: 7
//#define SERIAL_USART_TIMEOUT 20    // USART driver timeout. default 20


/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED */
//#define RGB_DI_PIN E6
//#define RGBLIGHT_ANIMATIONS
//#define RGBLED_NUM 16    // Number of LEDs
//#define RGBLED_SPLIT { 8, 8 }
//#define RGBLIGHT_LED_MAP { 1, 2, 3, 12, 13, 14, 15, 0, 7, 6, 5, 4, 11, 10, 9, 8 }
//#define RGBLIGHT_DEFAULT_MODE (RGBLIGHT_MODE_RAINBOW_SWIRL + 2)
