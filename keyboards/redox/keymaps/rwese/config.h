/*
Copyright 2018 Mattia Dal Ben <matthewdibi@gmail.com>

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

#pragma once

#define USE_SERIAL

/* Select hand configuration */
#define MASTER_LEFT

#define GRAVE_ESC_ALT_OVERRIDE
#define GRAVE_ESC_CTRL_OVERRIDE

#undef RGBLED_NUM
#undef RGBLIGHT_LIGHT_COUNT
#undef RGBLIGHT_LED_COUNT
#undef RGBLIGHT_ANIMATIONS
#undef RGBLIGHT_HUE_STEP
#undef RGBLIGHT_SAT_STEP
#undef RGBLIGHT_VAL_STEP8
#undef RGB_MATRIX_STARTUP_MODE
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 14
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#define RGB_MATRIX_STARTUP_MODE RGB_MATRIX_NONE
// #define SPLIT_LED_STATE_ENSABLE

#undef TAPPING_TERM
#define TAPPING_TERM 200
#define COMBO_TERM 30
#define COMBO_MUST_HOLD_MODS

/* key combination for command */
#define IS_COMMAND() ( \
    false \
)

// CapsWord
#define CAPS_WORD_IDLE_TIMEOUT 3000
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD

// #define PERMISSIVE_HOLD
// makes tap and hold keys trigger the hold if another key is pressed before releasing, even if it hasn't hit the TAPPING_TERM
//#define IGNORE_MOD_TAP_INTERRUPT
// makes it possible to do rolling combos (zx) with keys that convert to other keys on hold, by enforcing the TAPPING_TERM for both keys.

// #define TAPPING_FORCE_HOLD
// makes it possible to use a dual roLCTL_T(KC_D)le key as modifier shortly after having been tapped (see Hold after tap)
// Breaks any Tap Toggle functionality (TT or the One Shot Tap Toggle)

#define USB_SUSPEND_WAKEUP_DELAY 100

#define MOUSEKEY_DELAY 0
#define MOUSEKEY_INTERVAL 16
#define MOUSEKEY_MOVE_DELTA 1
#define MOUSEKEY_INITIAL_SPEED 1
#define MOUSEKEY_MAX_SPEED 22
#define MOUSEKEY_WHEEL_DELAY 0
#define MOUSEKEY_WHEEL_MAX_SPEED 10
#define MOUSEKEY_WHEEL_TIME_TO_MAX 200
#define MOUSEKEY_WHEEL_INITIAL_MOVEMENTS 2
#define MOUSEKEY_WHEEL_INTERVAL 64
#define MOUSEKEY_WHEEL_BASE_MOVEMENTS 1
#define MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS 8
#define MOUSEKEY_WHEEL_DECELERATED_MOVEMENTS 4

#define COMBO_COUNT 4
