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

#define XXX KC_NO

#define LAYOUT_split70( \
    K00, K01, K02, K03, K04, K05, K06, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, K0G, \
    K10, K11, K12, K13, K14, K15, K16, K18, K19, K1A, K1B, K1C, K1D, K1F, K1G, \
    K20, K21, K22, K23, K24, K25, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F, K2G, \
    K30, K31, K32, K33, K34, K35, K38, K39, K3A, K3B, K3C, K3D, K3E, K3G, \
    K40, K41, K42, K43, K44, K45, K46, K48, K49, K4A, K4B, K4C, K4E, K4F, K4G, \
    K50, K51, K52, K54, K59, K5B, K5C, K5D, K5E, K5F, K5G  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, XXX, XXX }, \
    { K10, K11, K12, K13, K14, K15, K16, XXX, XXX }, \
    { K20, K21, K22, K23, K24, K25, XXX, XXX, XXX }, \
    { K30, K31, K32, K33, K34, K35, XXX, XXX, XXX }, \
    { K40, K41, K42, K43, K44, K45, K46, XXX, XXX }, \
    { K50, K51, K52, XXX, K54, XXX, XXX, XXX, XXX }, \
    { K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, K0G }, \
    { K18, K19, K1A, K1B, K1C, K1D, XXX, K1F, K1G }, \
    { K28, K29, K2A, K2B, K2C, K2D, K2E, K2F, K2G }, \
    { K38, K39, K3A, K3B, K3C, K3D, K3E, XXX, K3G }, \
    { K48, K49, K4A, K4B, K4C, XXX, K4E, K4F, K4G }, \
    { XXX, K59, XXX, K5B, K5C, K5D, K5E, K5F, K5G } \
}


