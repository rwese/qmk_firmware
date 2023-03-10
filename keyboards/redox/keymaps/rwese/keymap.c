#include QMK_KEYBOARD_H
#include "keymap_french.h"
#include "keymap_us_international.h"

enum custom_keycodes {
    OPEN_CONSOLE = SAFE_RANGE,
};

// Left-hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LCTL_T(KC_D)
#define HOME_F LSFT_T(KC_F)

// Right-hand home row mods
#define HOME_J RSFT_T(KC_J)
#define HOME_K RCTL_T(KC_K)
#define HOME_L LALT_T(KC_L)
#define HOME_SCLN RGUI_T(KC_SCLN)

// Shortcut to make keymap more readable
#define SYM_L MO(_SYMB)

#define KC_ALAS LALT_T(KC_PAST)
#define KC_CTPL LCTL_T(KC_BSLS)

#define KC_NAGR LT(_NAV, KC_GRV)
#define KC_NAMI LT(_NAV, KC_MINS)

#define KC_ADEN LT(_ADJUST, KC_END)
#define KC_ADPU LT(_ADJUST, KC_PGUP)
#define KC_RALT_QUOTE RALT(KC_QUOT)

#include "rwese_combos.c"
#include "rwese.c"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case OPEN_CONSOLE: // Types ../ to go up a directory on the shell.
            if (!record->event.pressed) {
                SEND_STRING(SS_LCTL("`"));
            }

            return false;
    }

#ifdef CONSOLE_ENABLE
    uprintf("KL: kc: 0x%04X, col: %u, row: %u, pressed: %b, time: %u, interrupt: %b, count: %u\n", keycode, record->event.key.col, record->event.key.row, record->event.pressed, record->event.time, record->tap.interrupted, record->tap.count);
#endif
    return true;
}

bool led_update_user(led_t led_state) {
    if (led_state.caps_lock) {
        rgblight_enable_noeeprom();
        rgblight_sethsv_noeeprom(HSV_RED);
    } else {
        rgblight_disable_noeeprom();
    }

    return true;
}

void caps_word_set_user(bool active) {
    if (active) {
        rgblight_enable_noeeprom();
        rgblight_sethsv_noeeprom(HSV_GREEN);
    } else {
        rgblight_disable_noeeprom();
    }
}
