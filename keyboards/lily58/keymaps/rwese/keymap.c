#include QMK_KEYBOARD_H

#include "keymap_french.h"
#include "keymap_us_international.h"

enum custom_keycodes {
    OPEN_CONSOLE = SAFE_RANGE,
    ESCAPE_SPECIAL,
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

#ifdef OLED_ENABLE
#    include "oled.c"
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case OPEN_CONSOLE: // Types ../ to go up a directory on the shell.
            if (!record->event.pressed) {
                SEND_STRING(SS_LCTL("`"));
            }

            return false;
    }

    if (record->event.pressed) {
#ifdef OLED_ENABLE
        set_keylog(keycode, record);
#endif
        // set_timelog();
    }

    return true;
}
