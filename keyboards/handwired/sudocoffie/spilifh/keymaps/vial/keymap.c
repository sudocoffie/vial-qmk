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
        KC_ESC,   KC_1,   KC_2,   KC_3, KC_4,   KC_5,
        KC_TAB,   KC_Q,   KC_W,   KC_E, KC_R,   KC_T,
        KC_LCTL,  KC_A,   KC_S,   KC_D, KC_F,   KC_G,
        KC_LSFT,  KC_Z,   KC_X,   KC_C, KC_V,   KC_B,
                             KC_LGUI, KC_LALT, KC_SPC
    )
};
