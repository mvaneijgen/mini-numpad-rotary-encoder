/* Copyright 2019 Mitchel van Eijgen
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT( 
    KC_P7, KC_P8, KC_P9, 
    KC_P4, KC_P5, KC_P6, 
    KC_P1, KC_P2, KC_P3,
    TO(1)
  ),
  [1] = LAYOUT( 
    RESET, KC_TRNS, KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_TRNS,
    TO(2)
  ),
  [2] = LAYOUT( 
    RESET, KC_TRNS, KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_TRNS,
    TO(3)
  ),  
  [3] = LAYOUT( 
    RESET, KC_TRNS, KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_TRNS,
    TO(0)
  ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] =   { ENCODER_CCW_CW(KC_BRID, KC_BRIU) },
    [2] =   { ENCODER_CCW_CW(KC_MS_WH_DOWN, KC_MS_WH_UP) },
    [3] =   { ENCODER_CCW_CW(KC_MS_WH_DOWN, KC_MS_WH_UP) },
};
#endif