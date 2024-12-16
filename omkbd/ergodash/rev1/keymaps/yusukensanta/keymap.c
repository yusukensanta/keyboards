#include QMK_KEYBOARD_H
#if __has_include("keymap.h")
#    include "keymap.h"
#endif


/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_4key(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_LBRC, KC_RBRC, KC_6, KC_7, KC_8, KC_9, KC_0, KC_GRV, KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_MINS, KC_EQL, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLS, KC_LCTL, KC_A, KC_S, KC_D, KC_F, KC_G, KC_DEL, KC_BSPC, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_CAPS, KC_RALT, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_APP, KC_LGUI, KC_LALT, KC_PSCR, MO(1), KC_HOME, KC_SPC, KC_ENT, KC_RCTL, MO(1), KC_LEFT, KC_DOWN, KC_UP, KC_RGHT),
    [1] = LAYOUT_4key(KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_LCBR, KC_RCBR, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_UNDS, KC_PLUS, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE, KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5, KC_DEL, KC_BSPC, KC_H, KC_J, KC_K, KC_L, KC_COLN, KC_DQUO, KC_LSFT, KC_6, KC_7, KC_8, KC_9, KC_0, KC_SPC, KC_ENT, KC_N, KC_M, KC_LT, KC_GT, KC_QUES, KC_RSFT, KC_LCTL, KC_LGUI, KC_LALT, LALT(KC_GRV), KC_TRNS, KC_SPC, KC_DEL, KC_BSPC, KC_ENT, KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END)
};



#ifdef OTHER_KEYMAP_C
#    include OTHER_KEYMAP_C
#endif // OTHER_KEYMAP_C


