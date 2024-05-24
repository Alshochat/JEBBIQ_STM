// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_number {
  _MAIN = 0,
  _FUNC,
  _GAME,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_MAIN] = LAYOUT(
        KC_PGUP, KC_PGDN,                   KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,            KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,,
        KC_MINS, KC_NLCK, KC_PSLS, KC_PAST, KC_PSCR, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC,
        KC_PLUS, KC_P7,   KC_P8,   KC_P9,   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_BSLS,
        KC_NLCK, KC_P4,   KC_P5,   KC_P6,   KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,  KC_GRV,  KC_ENT,
        ENC_A,   KC_P1,   KC_P2,   KC_P3,   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_UP,             KC_RSFT,
        ENC_B,   ENC_C,   KC_P0,   KC_DOT,  KC_LGUI, KC_LCTL, KC_LALT, KC_SPC,                                                        KC_LEFT, KC_DOWN, KC_RGHT,  KC_FN
        ),  
    [_FUNC] = LAYOUT(
        KC_PGUP, KC_PGDN,                   KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,            KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,,
        KC_MINS, KC_NLCK, KC_PSLS, KC_PAST, KC_PSCR, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC,
        KC_PLUS, KC_P7,   KC_P8,   KC_P9,   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_BSLS,
        KC_NLCK, KC_P4,   KC_P5,   KC_P6,   KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,  KC_GRV,  KC_ENT,
        ENC_A,   KC_P1,   KC_P2,   KC_P3,   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_UP,             KC_RSFT,
        ENC_B,   ENC_C,   KC_P0,   KC_DOT,  KC_LGUI, KC_LCTL, KC_LALT, KC_SPC,                                                        KC_LEFT, KC_DOWN, KC_RGHT,  KC_FN
        ),

    [_GAME] = LAYOUT(
        KC_PGUP, KC_PGDN,                   KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,            KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,,
        KC_MINS, KC_NLCK, KC_PSLS, KC_PAST, KC_PSCR, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC,
        KC_PLUS, KC_P7,   KC_P8,   KC_P9,   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_BSLS,
        KC_NLCK, KC_P4,   KC_P5,   KC_P6,   KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,  KC_GRV,  KC_ENT,
        ENC_A,   KC_P1,   KC_P2,   KC_P3,   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_UP,             KC_RSFT,
        ENC_B,   ENC_C,   KC_P0,   KC_DOT,  KC_LGUI, KC_LCTL, KC_LALT, KC_SPC,                                                        KC_LEFT, KC_DOWN, KC_RGHT,  KC_FN
        ),

};


#ifdef ENCODER_ENABLE
void encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) {
        if (clockwise) {
             tap_code(KC_MNXT);
        } else {
	     tap_code(KC_MPRV);
	       }
} else if (index == 1) { /* Second encoder */
    if (clockwise) {
      tap_code(KC_VOLU);
    } else {
      tap_code(KC_VOLD);
    }
  } else if (index == 2) { /* third encoder */
    if (clockwise) {
      tap_code(KC_BRIU);
    } else {
      tap_code(KC_BRID);
    }
    } 
}
#endif


#ifdef OLED_ENABLE
bool oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case _MAIN:
            oled_write_P(PSTR("Main\n"), false);
            break;
        case _FUNC:
            oled_write_P(PSTR("FN\n"), false);
            break;
        case _GAME:
            oled_write_P(PSTR("GAME\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // Host Keyboard LED Status
    oled_write_P(PSTR("\n\n"), false);
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_ln_P(PSTR("CPSLK\n"), led_usb_state.caps_lock);
    oled_write_ln_P(PSTR("NUMPD"), led_usb_state.num_lock);

    return false;
}
#endif