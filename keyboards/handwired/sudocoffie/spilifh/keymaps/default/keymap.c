// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┐
     * │ESC│ 1 │ 2 │ 3 │ 4 │ 5 │       │ 6 │ 7 │ 8 │ 9 │ 0 │ - │
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │TAB│ Q │ W │ E │ R │ T │       │ Y │ U │ I │ O │ P │ { │
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │CTL│ A │ S │ D │ F │ G │       │ H │ J │ K │ L │ ; │ ' │
     * ├───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┤
     * │SFT│ Z │ X │ C │ V │ B │       │ N │ M │ , │ . │ / │SFT│
     * └───┴───┴───┼───┼───┼───┤       ├───┼───┼───┼───┴───┴───┘
     *             │WIN│Alt│TD1│       │TD2│ENT│CTL│
     *             └───┴───┴───┘       └───┴───┴───┘
     * TD == Tapdance
     * TD1 = Space on click layer 1 on hold
     * TD2 = Backspace on click layer 2 on hold
     */
    [0] = LAYOUT_split(
        KC_ESC,   KC_1,   KC_2,   KC_3, KC_4,   KC_5,           KC_6,   KC_7,   KC_8,    KC_9,   KC_0,     KC_MINS,
        KC_TAB,   KC_Q,   KC_W,   KC_E, KC_R,   KC_T,           KC_Y,   KC_U,   KC_I,    KC_O,   KC_P,     KC_LBRC,
        KC_LCTL,  KC_A,   KC_S,   KC_D, KC_F,   KC_G,           KC_H,   KC_J,   KC_K,    KC_L,   KC_SCLN,  KC_QUOT,
        KC_LSFT,  KC_Z,   KC_X,   KC_C, KC_V,   KC_B,           KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH,  KC_RSFT,
    
                             KC_LGUI, KC_LALT, KC_SPC,          KC_BSPC, KC_ENT, KC_LCTL
    ),

    [1] = LAYOUT_split(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,           KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,           KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,           KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,           KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    
                             KC_NO, KC_NO, KC_NO,          KC_NO, KC_NO, KC_NO
    ),

    [2] = LAYOUT_split(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,           KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,           KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,           KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,           KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    
                             KC_NO, KC_NO, KC_NO,          KC_NO, KC_NO, KC_NO
    ),

    [3] = LAYOUT_split(
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,           KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,           KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,           KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,           KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    
                             KC_NO, KC_NO, KC_NO,          KC_NO, KC_NO, KC_NO
    ),
};
