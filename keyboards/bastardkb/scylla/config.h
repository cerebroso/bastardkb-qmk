/*
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
 * Copyright 2022 Charly Delay <charly@codesink.dev> (@0xcharly)
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

/* Key matrix configuration. */
#define MATRIX_ROWS 10 // Rows are doubled-up.
#define MATRIX_COLS 6

#define DIODE_DIRECTION ROW2COL

/* Set 0 if debouncing isn't needed. */
#define DEBOUNCE 5

/* RGB settings. */
#define RGBLED_NUM 58
#define RGBLED_SPLIT \
    { 29, 29 }

/* RGB matrix support. */
#ifdef RGB_MATRIX_ENABLE
#    define SPLIT_TRANSPORT_MIRROR
#    define DRIVER_LED_TOTAL RGBLED_NUM
#    define RGB_MATRIX_SPLIT RGBLED_SPLIT
#    define RGB_MATRIX_MAXIMUM_BRIGHTNESS 150
#    define RGB_MATRIX_STARTUP_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
#    define RGB_DISABLE_WHEN_USB_SUSPENDED
#    define RGB_MATRIX_KEYPRESSES
#endif

#define MASTER_LEFT
#define TAPPING_TERM 150

#define MOUSEKEY_INTERVAL 10
#define MOUSEKEY_DELAY 10
#define MOUSEKEY_TIME_TO_MAX 30
#define MOUSEKEY_MAX_SPEED 48
#define MOUSEKEY_WHEEL_DELAY 10
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

#define IGNORE_MOD_TAP_INTERRUPT
#define TAPPING_FORCE_HOLD
#define PERMISSIVE_HOLD
