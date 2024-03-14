// Copyright 2024 filip (@sudocoffie)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define VIAL_KEYBOARD_UID {0x42, 0x8E, 0x2E, 0x2D, 0xD5, 0xA7, 0x74, 0xA1}
#define VIAL_UNLOCK_COMBO_ROWS { 0, 0 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 1 }
#define VIAL_TAP_DANCE_ENTRIES 6
#define DYNAMIC_KEYMAP_LAYER_COUNT 4

#ifdef USE_I2C
  #error "I2C not Supported"
#endif

#define MASTER_LEFT
#define SOFT_SERIAL_PIN D0