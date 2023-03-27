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
// Custom keycodes 
#define KC_FORC LGUI(LALT(KC_ESC)) // Force quit
#define KC_CTXT LGUI(LSFT(KC_2)) // Capture text from image
#define KC_CAPW LGUI(LSFT(KC_3)) // Capture whole screen
#define KC_CAPP LGUI(LSFT(KC_4)) // Capture portion of screen
#define KC_CREC LGUI(LSFT(KC_5)) // Record screen
#define KC_TLFT LGUI(LSFT(KC_LBRC)) // Move tab left
#define KC_TRGT LGUI(LSFT(KC_RBRC)) // Move tab Right
// Custom macro
enum custom_keycodes {
  KC_HNGT,
  KC_PWST,
  KC_SLTA,
};
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_HNGT:
        if (record->event.pressed) {
            SEND_STRING(SS_DOWN(X_LGUI) SS_TAP(X_SPACE) SS_UP(X_LGUI) SS_DELAY(10) "hangout" SS_DELAY(100) SS_TAP(X_ENTER));
        }
        break;

        case KC_PWST:
        if (record->event.pressed) {
            SEND_STRING(SS_DOWN(X_LGUI) SS_DOWN(X_LSHIFT) "v" SS_UP(X_LGUI) SS_UP(X_LSHIFT));
        }
        break;

        case KC_SLTA:
        if (record->event.pressed) {
           SEND_STRING(SS_LCTL("ac")); // selects all and copies
        }
        break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT( 
    RESET, KC_HNGT, KC_SLTA, 
    KC_CREC, KC_FORC, KC_PWST, 
    KC_CTXT, KC_CAPW, KC_CAPP,
    TO(1)
  ),
  //   [0] = LAYOUT( 
  //   KC_FORC, KC_8, KC_9, 
  //   KC_CREC, KC_5, KC_6, 
  //   KC_CTXT, KC_CAPW, KC_CAPP
  // ),
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
    KC_P7, KC_P8, KC_P9, 
    KC_P4, KC_P5, KC_P6, 
    KC_P1, KC_P2, KC_P3,
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