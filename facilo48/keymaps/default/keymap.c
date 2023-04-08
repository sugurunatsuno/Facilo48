// Copyright 2020 QMK / James Young (@noroadsleft)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,  KC_GRV,  KC_MINS, KC_EQL,  KC_BSLS, KC_LBRC, KC_RBRC, KC_SCLN, KC_QUOT, KC_COMM, KC_DOT,  KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_ENT,
        KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LALT, KC_CAPS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_UP,   MO(1)
    ),
    [1] = LAYOUT(
        KC_ESC,  KC_GRV,  KC_MINS, KC_EQL,  KC_BSLS, KC_LBRC, KC_RBRC, KC_SCLN, KC_QUOT, KC_COMM, KC_DOT,  KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_ENT,
        KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LALT, KC_CAPS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_UP,   XXXXXXX
    ),
    [2] = LAYOUT(
        KC_ESC,  KC_GRV,  KC_MINS, KC_EQL,  KC_BSLS, KC_LBRC, KC_RBRC, KC_SCLN, KC_QUOT, KC_COMM, KC_DOT,  KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_ENT,
        KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LALT, KC_CAPS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_UP,   XXXXXXX
    ),
    [3] = LAYOUT(
        KC_ESC,  KC_GRV,  KC_MINS, KC_EQL,  KC_BSLS, KC_LBRC, KC_RBRC, KC_SCLN, KC_QUOT, KC_COMM, KC_DOT,  KC_BSPC,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_ENT,
        KC_LSFT, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SLSH, KC_RSFT,
        KC_LCTL, KC_LALT, KC_CAPS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_UP,   XXXXXXX
    )
};
