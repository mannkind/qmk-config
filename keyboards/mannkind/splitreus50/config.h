/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 8
#define MATRIX_COLS 7

// wiring of each half
#define MATRIX_ROW_PINS { D4, C6, D7, E6 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B2 }
#define MATRIX_COL_PINS_RIGHT { B2, B3, B1, F7, F6, F5, F4 }
#define DIODE_DIRECTION COL2ROW

//#define USE_I2C
#define USE_SERIAL
#define SOFT_SERIAL_PIN D0

#define DEBOUNCE 5
// #define DEBOUNCE_TYPE sym_eager_pk

#define EE_HANDS

#define QMK_LED B0
#define QMK_ESC_OUTPUT F4 // usually COL
#define QMK_ESC_INPUT D4 // usually ROW
