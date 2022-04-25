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

#include "quantum.h"

//#define XXX KC_NO

#define LAYOUT_split70( \
    LA3, LA4, LA5, LA6, LA7, LA8, LA9,      RA1, RA2, RA3, RA4, RA5, RA6, RA7, RA8, RA9, \
    LB3, LB4, LB5, LB6, LB7, LB8, LB9,      RB1, RB2, RB3, RB4, RB5, RB6, RB8, RB9, \
    LC3, LC4, LC5, LC6, LC7, LC8,           RC1, RC2, RC3, RC4, RC5, RC6, RC7, RC8, RC9, \
    LD3, LD4, LD5, LD6, LD7, LD8,                RD1, RD2, RD3, RD4, RD5, RD6, RD7, RD9, \
    LE3, LE4, LE5, LE6, LE7, LE8, LE9,      RE1, RE2, RE3, RE4, RE5, RE7, RE8, RE9, \
    LF3, LF4, LF5, LF7,                     RF2, RF4, RF5, RF6, RF7, RF8, RF9 \
    )  { \
        { KC_NO, KC_NO, LA3, LA4, LA5, LA6, LA7, LA8, LA9 }, \
        { KC_NO, KC_NO, LB3, LB4, LB5, LB6, LB7, LB8, LB9 }, \
        { KC_NO, KC_NO, LC3, LC4, LC5, LC6, LC7, LC8, KC_NO }, \
        { KC_NO, KC_NO, LD3, LE4, LD5, LD6, LD7, LD8, KC_NO }, \
        { KC_NO, KC_NO, LE3, LE4, LE5, LE6, LE7, LE8, LE9 }, \
        { KC_NO, KC_NO, LF3, LF4, LF5, KC_NO, LF7, KC_NO, KC_NO }, \
        { RA1, RA2, RA3, RA4, RA5, RA6, RA7, RA8, RA9 }, \
        { RB1, RB2, RB3, RB4, RB5, RB6, KC_NO, RB8, RB9 }, \
        { RC1, RC2, RC3, RC4, RC5, RC6, RC7, RC8, RC9 }, \
        { RD1, RD2, RD3, RD4, RD5, RD6, RD7, KC_NO, RD9 }, \
        { RE1, RE2, RE3, RE4, RE5, KC_NO, RE7, RE8, RE9 }, \
        { KC_NO, RF2, KC_NO, RF4, RF5, RF6, RF7, RF8, RF9 } \
    }


