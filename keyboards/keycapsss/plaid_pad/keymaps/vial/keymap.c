/* Copyright 2020 Ben Roesner (keycapsss.com)
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
#include QMK_KEYBOARD_H

#define ____ KC_TRNS

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
 * ,-----------------------,
 * |  7  |  8  |  9  |  /  |
 * |-----+-----+-----+-----|
 * |  4  |  5  |  6  |  *  |
 * |-----+-----+-----+-----|
 * |  1  |  2  |  3  |  -  |
 * |-----+-----+-----+-----|
 * |  0  |  .  |  =  |  +  |
 * `-----------------------'
 */
  [0] = LAYOUT_ortho_4x4(
      KC_P7,   KC_P8,   KC_P9,   KC_PSLS,
      KC_P4,   KC_P5,   KC_P6,   KC_PAST,
      KC_P1,   KC_P2,   KC_P3,   KC_PMNS,
      KC_P0,   KC_PDOT, KC_PEQL, KC_PPLS  ),
  [1] = LAYOUT_ortho_4x4(
      ____, ____, ____, ____,
      ____, ____, ____, ____,
      ____, ____, ____, ____,
      ____, ____, ____, ____  ),
  [2] = LAYOUT_ortho_4x4(
      ____, ____, ____, ____,
      ____, ____, ____, ____,
      ____, ____, ____, ____,
      ____, ____, ____, ____  ),
  [3] = LAYOUT_ortho_4x4(
      ____, ____, ____, ____,
      ____, ____, ____, ____,
      ____, ____, ____, ____,
      ____, ____, ____, ____  ),
};


// Set led state during power-up
// There is also a LED_GREEN
// Only for Rev1 & Rev2
#ifdef LED_RED
void keyboard_post_init_user(void) {
    writePinHigh(LED_RED);
}
#endif


// Rev3 and above only
#ifdef OLED_ENABLE
bool oled_task_user(void) {
  oled_write_ln_P(PSTR("Plaid-Pad ///////////"), false);
  return false;
}
#endif


#ifdef ENCODER_MAP_ENABLE

/*
Rev1.1                      Rev1
,-----------------------,   ,-----------------------,
|  E1 |  E2 |  E3 |  E4 |   |  E1 |     |     |  E2 |
|-----+-----+-----+-----|   |-----+-----+-----+-----|
|     |     |     |  E3 |   |     |     |     |     |
|-----+-----+-----+-----|   |-----+-----+-----+-----|
|     |     |     |  E2 |   |     |     |     |     |
|-----+-----+-----+-----|   |-----+-----+-----+-----|
|     |     |     |  E1 |   |     |     |     |     |
`-----------------------'   `-----------------------'
 */

#if (DEVICE_VER == 0x0001)

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    /*      E1                                E2                             */
    [0] = { ENCODER_CCW_CW(KC_F18, KC_F17),   ENCODER_CCW_CW(KC_F20, KC_F19) },
    [1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },

};

#else

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    /*      E1                                E2                                E3                                E4                             */
    [0] = { ENCODER_CCW_CW(KC_F18, KC_F17),   ENCODER_CCW_CW(KC_F20, KC_F19),   ENCODER_CCW_CW(KC_F22, KC_F21),   ENCODER_CCW_CW(KC_F24, KC_F23) },
    [1] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [3] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },

};

#endif

#endif