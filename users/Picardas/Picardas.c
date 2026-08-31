#include QMK_KEYBOARD_H

__attribute__((weak)) bool process_record_keymap(uint16_t keycode, keyrecord_t *record) {
    return true;
}

// Turn on Caps Word by double tapping left shift or right shift (same side twice).
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        static uint16_t last_keycode = KC_NO;
        static uint16_t timer        = 0;
        if (keycode == KC_LSFT || keycode == KC_RSFT) {
            if (keycode == last_keycode && !timer_expired(record->event.time, timer)) {
                caps_word_on();
            }
            last_keycode = keycode;
            timer        = record->event.time + GET_TAPPING_TERM(keycode, record);
        } else {
            last_keycode = KC_NO; // any other key cancels the double-tap window
        }
    }
    return process_record_keymap(keycode, record);
}
