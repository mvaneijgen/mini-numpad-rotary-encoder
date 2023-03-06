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
    KC_7, KC_8, KC_9, 
    KC_4, KC_5, KC_6, 
    KC_1, KC_2, KC_3, 
    TO(1)
  ),
  [1] = LAYOUT( 
    KC_TRNS, KC_TRNS, KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_TRNS, 
    TO(2)
  ),
  [2] = LAYOUT( 
    KC_TRNS, KC_TRNS, KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_TRNS, 
    TO(3)
  ),  
  [3] = LAYOUT( 
    KC_7, KC_8, KC_9, 
    KC_4, KC_5, KC_6, 
    KC_1, KC_2, KC_3, 
    TO(0)
  ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [2] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
    [3] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN) },
};
#endif