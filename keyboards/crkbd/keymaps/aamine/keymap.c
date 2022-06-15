/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#include QMK_KEYBOARD_H
#include <stdio.h>

// Tap Dance declarations
enum {
    TD_LSFT_CAPS,
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Once for Shift, twice for Caps Lock
    [TD_LSFT_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(KC_ESC, KC_A, KC_Z, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_TAB, LSFT_T(KC_Q), LCTL_T(KC_S), LALT_T(KC_D), LGUI_T(KC_F), KC_G, KC_H, LGUI_T(KC_J), LALT_T(KC_K), LCTL_T(KC_L), RSFT_T(KC_M), KC_ENT, KC_NO, KC_W, KC_X, KC_C, KC_V, KC_B, KC_N, KC_COMM, KC_DOT, KC_SCLN, KC_EQL, KC_SLSH, TT(4), TT(3), KC_SPC, TD(TD_LSFT_CAPS), TT(2), TT(5)),
	[1] = LAYOUT_split_3x6_3(KC_ESC, KC_Y, KC_C, KC_L, KC_M, KC_K, KC_Z, KC_F, KC_U, KC_COMM, KC_SCLN, KC_BSPC, KC_TAB, LSFT_T(KC_I), LCTL_T(KC_S), LALT_T(KC_R), LGUI_T(KC_T), KC_G, KC_P, LGUI_T(KC_N), LALT_T(KC_E), LCTL_T(KC_A), RSFT_T(KC_O), KC_ENT, KC_NO, KC_Q, KC_V, KC_W, KC_D, KC_J, KC_B, KC_H, KC_QUOT, KC_DOT, KC_X, KC_SLSH, TT(4), TT(3), KC_SPC, KC_RSFT, TT(2), TT(5)),
	[2] = LAYOUT_split_3x6_3(KC_ESC, KC_HASH, KC_AT, KC_QUES, KC_EXLM, KC_PEQL, KC_PSLS, KC_AMPR, KC_PIPE, KC_PERC, KC_BSLS, KC_BSPC, KC_TAB, KC_UNDS, KC_LBRC, KC_LCBR, KC_LPRN, KC_LT, KC_GT, KC_RPRN, KC_RCBR, KC_RBRC, KC_PMNS, KC_ENT, KC_NO, KC_TILD, KC_COLN, KC_CIRC, KC_PAST, KC_QUOT, KC_GRV, KC_PCMM, KC_PDOT, KC_SCLN, KC_DLR, KC_NO, KC_TRNS, KC_TRNS, KC_SPC, KC_RSFT, KC_TRNS, KC_TRNS),
	[3] = LAYOUT_split_3x6_3(KC_ESC, KC_NO, LGUI(KC_X), LGUI(KC_C), LGUI(KC_V), LSFT(LGUI(KC_4)), KC_NO, LCTL(KC_MINS), LCTL(LSFT(KC_MINS)), KC_PGUP, KC_NO, KC_BSPC, KC_TAB, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_ENT, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_HOME, KC_END, KC_PGDN, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_SPC, KC_RSFT, KC_TRNS, KC_TRNS),
	[4] = LAYOUT_split_3x6_3(KC_ESC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_PSLS, KC_P7, KC_P8, KC_P9, KC_PMNS, KC_BSPC, KC_TAB, LSFT_T(KC_F6), LCTL_T(KC_F7), LALT_T(KC_F8), LGUI_T(KC_F9), KC_F10, KC_PAST, LGUI_T(KC_P4), LALT_T(KC_P5), LCTL_T(KC_P6), LSFT_T(KC_PPLS), KC_ENT, KC_NO, KC_NO, KC_F11, KC_F12, KC_NO, KC_NO, KC_PCMM, KC_P1, KC_P2, KC_P3, KC_PEQL, KC_PDOT, KC_TRNS, KC_TRNS, KC_SPC, KC_P0, KC_TRNS, KC_TRNS),
	[5] = LAYOUT_split_3x6_3(KC_NO, KC_NO, KC_NO, KC_MS_U, KC_NO, KC_NO, KC_ACL0, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_MS_L, KC_MS_D, KC_MS_R, KC_BTN1, KC_ACL1, KC_VOLD, KC_VOLU, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BTN2, KC_NO, KC_ACL2, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_TRNS, KC_TRNS),
	[6] = LAYOUT_split_3x6_3(KC_ESC, KC_NO, KC_A, KC_Z, KC_E, KC_R, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_BSPC, KC_LSFT, KC_NO, KC_Q, KC_S, KC_D, KC_F, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_ENT, KC_LCTL, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_SPC, KC_NO, KC_TRNS, KC_TRNS)
};

enum combo_events {
//   TOGGLE_DEFAULT,
  TOGGLE_GAMING,
  GO_HOME,
  COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH; // remove the COMBO_COUNT define and use this instead!

const uint16_t PROGMEM toggleGamingMode[] = {TT(2),TT(3),TT(4),TT(5), COMBO_END};
const uint16_t PROGMEM home[] = {TT(2),TT(3), COMBO_END};

combo_t key_combos[] = {
//   [TOGGLE_DEFAULT] = COMBO_ACTION(toggleDef),
  [TOGGLE_GAMING] = COMBO(toggleGamingMode, TO(6)),
  [GO_HOME] = COMBO_ACTION(home),

};

void process_combo_event(uint16_t combo_index, bool pressed) {
  switch(combo_index) {
    // case TOGGLE_DEFAULT:
    //   if (pressed) {
    //     if (default_layer_state == 0x00000001) {
    //         default_layer_set(0x00000002);
    //         // layer_move(1);
    //         layer_clear();
    //     }
    //     else {
    //         default_layer_set(0x00000001);
    //         // layer_move(0);
    //         layer_clear();
    //     }
    //   }
      break;
    case GO_HOME:
        layer_clear();
    //   if (pressed) {
    //     if (default_layer_state == 0x00000002) {
    //         layer_move(1);
    //     }
    //     else {
    //         layer_move(0);
    //     }
    //   }
      break;
  }
}

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}



// #define NULLYBOI 0
// #define BASE_A 1
// #define BASE_I 2
#define BASE 0
#define SYMB 4
#define NAV 8
#define NUMBER 16
#define MOUSE 32
#define GAME 64



void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (layer_state) {
        // case NULLYBOI:
        //     oled_write_ln_P(PSTR("NULLYBOI"), false);
        //     break;
        // case BASE_A:
        //     oled_write_ln_P(PSTR("BASE_A"), false);
        //     break;
        // case BASE_I:
        //     oled_write_ln_P(PSTR("BASE_I"), false);
        //     break;
        case BASE:
            oled_write_ln_P(PSTR("BASE"), false);
            break;
        case SYMB:
        case SYMB|NUMBER:
        case SYMB|NUMBER|MOUSE:
            oled_write_ln_P(PSTR("SYMB"), false);
            break;
        case NAV:
        case NAV|NUMBER:
        case NAV|NUMBER|MOUSE:
            oled_write_ln_P(PSTR("NAV"), false);
            break;
        case NUMBER:
            oled_write_ln_P(PSTR("NUMBER"), false);
            break;
        case MOUSE:
            oled_write_ln_P(PSTR("MOUSE"), false);
            break;
        case GAME:
            oled_write_ln_P(PSTR("GAME"), false);
            break;
        default:
            oled_write_ln_P(PSTR("HMMMM"), false);
            break;
    }
}


char keylog_str[24] = {};

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
  char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
  if (keycode < 60) {
    name = code_to_name[keycode];
  }

  // update keylog
  snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
           record->event.key.row, record->event.key.col,
           keycode, name);
}

void oled_render_keylog(void) {
    oled_write(keylog_str, false);
}

void render_bootmagic_status(bool status) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
        oled_render_keylog();
    } else {
        oled_render_logo();
    }
    return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    set_keylog(keycode, record);
  }
  return true;
}
#endif // OLED_ENABLE
