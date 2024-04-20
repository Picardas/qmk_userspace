/* Copyright 2021 Glorious, LLC <salman@pcgamingrace.com>
   Copyright 2021 Jonavin Eng @Jonavin
   Copyright 2022 Eskers

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

// Enable custom keycodes for RGB nightmode
enum custom_user_keycodes {
    KC_WIN = SAFE_RANGE,
    KC_LIN,
    RGB_NITE     // Turns off all RGB lights except for those used as indicators
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/*
Base keybindings - LED index in brackets

LED1(68)                                                                                                                                                      LED9(69)
LED2(71)  ESC(0)   F1(6)    F2(12)   F3(18)   F4(23)   F5(28)   F6(34)   F7(39)   F8(44)   F9(50)   F10(56)  F11(61)  F12(66)  Del(70)           Rotary(Mute) LED10(72)
LED3(74)  ~(1)     1(7)     2(13)    3(19)    4(24)    5(29)    6(35)    7(40)    8(45)    9(51)    0(57)     -(62)   =(79)    BackSpc(86)       Home(73)     LED11(75)
LED4(77)  Tab(2)   Q(8)     W(14)    E(20)    R(25)    T(30)    Y(36)    U(41)    I(46)    O(52)    P(58)    [(63)    ](90)                      PgUp(76)     LED12(78)
LED5(81)  Caps(3)  A(9)     S(15)    D(21)    F(26)    G(31)    H(37)    J(42)    K(47)    L(53)    ;(59)    "(64)    #(95)    Enter(97)         PgDn(87)     LED13(82)
LED6(84)  Sh_L(4)  \(67)    Z(10)    X(16)    C(22)    V(27)    B(32)    N(38)    M(43)    ,(48)    .(54)    /(60)             Sh_R(91) Up(94)   End(83)      LED14(85)
LED7(88)  Ct_L(5)  Win(11)  AltL(17)                           SPACE(33)                            AltR(49) FN(55)   Ct_R(65) Left(96) Down(98) Right(80)    LED15(89)
LED8(92)                                                                                                                                                      LED16(93)
*/

    // The FN key by default maps to a momentary toggle to layer 1 to provide access to the QK_BOOT key (to put the board into bootloader mode). Without
    // this mapping, you have to open the case to hit the button on the bottom of the PCB (near the USB cable attachment) while plugging in the USB
    // cable to get the board into bootloader mode - definitely not fun when you're working on your QMK builds. Remove this and put it back to KC_RGUI
    // if that's your preference.
    //
    // To put the keyboard in bootloader mode, use FN+Escape. If you accidentally put it into bootloader, you can just unplug the USB cable and
    // it'll be back to normal when you plug it back in.
    //
    [0] = LAYOUT(
          KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,           KC_MUTE,
          KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_HOME,
          KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,                   KC_PGUP,
          KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT,           KC_PGDN,
          KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   KC_END,
          MO(2),   KC_LGUI, KC_LALT,                            KC_SPC,                             KC_MEH,  KC_F13,  KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [1] = LAYOUT(
          KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,           KC_MUTE,
          KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_HOME,
          KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,                   KC_PGUP,
          KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT,           KC_PGDN,
          KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   KC_END,
          MO(2),   KC_LGUI, KC_LALT,                            KC_SPC,                             KC_MEH,  KC_HYPR, KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [2] = LAYOUT(
          QK_BOOT, KC_MYCM, KC_WHOM, KC_CALC, KC_MSEL, _______, _______, _______, _______, _______, _______, KC_WIN, KC_LIN,   _______,            _______,
          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_DEL,            RGB_NITE,
          _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, _______, _______, _______, _______, _______, _______,                    RGB_HUI,
          KC_CAPS, _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, _______, _______,   _______, _______,           RGB_SAI,
          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, RGB_MOD,  RGB_VAI,
          _______, _______, _______,                            _______,                            _______, _______, _______, RGB_SPD, RGB_RMOD, RGB_SPI
    ),

};
// clang-format on

#if defined(ENCODER_MAP_ENABLE)
    const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(_______, _______) },
    [2] = { ENCODER_CCW_CW(_______, _______) }
};
#endif

// RGB nightmode and Custom RGB settings are thanks to Jonavin's
#if defined(RGB_MATRIX_ENABLE)
    void activate_rgb_nightmode (bool turn_on);
    bool get_rgb_nightmode(void);

    // RGB night mode
    static bool rgb_nightmode = false;

    // Turn on/off nightmode if current state is different
    void activate_rgb_nightmode (bool turn_on) {
        if (rgb_nightmode != turn_on) {
            rgb_nightmode = !rgb_nightmode;
        }
    }

    bool get_rgb_nightmode(void) {
        return rgb_nightmode;
    }

    // Process key codes
    __attribute__ ((weak))  bool process_record_keymap(uint16_t keycode, keyrecord_t *record) { return true; }

    bool process_record_user(uint16_t keycode, keyrecord_t *record) {
        if (!process_record_keymap(keycode, record)) { return false; }
        switch (keycode) {
        case KC_WIN:
            if (record->event.pressed) {
                // Set default and change layer to _WINDOWS
                set_single_persistent_default_layer(0);
            }
            return false; // Skip all further processing of this key
        case KC_LIN:
            if (record->event.pressed) {
                // Set default and change layer to _LINUX
                set_single_persistent_default_layer(1);
            }
            return false; // Skip all further processing of this key
        case RGB_NITE:
            if(record->event.pressed) {
                rgb_nightmode = !rgb_nightmode;
            } else  unregister_code16(keycode);
            break;
        }
        return true;
    };

    // Custom RGB settings
    bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
        // Turns off RGB if nightmode is set, doesn't affect Capslock indicator
        if (get_rgb_nightmode()) rgb_matrix_set_color_all(RGB_OFF);
        // Light Capslock. Tab and left LEDs green when Capslock is enabled
        if (host_keyboard_led_state().caps_lock) {
            rgb_matrix_set_color(2, RGB_GREEN);   //Tab key
            rgb_matrix_set_color(3, RGB_GREEN);   //Capslock key
            }
        return false;
    }
#endif

// Improve matrix scan rate
// delay_inline sleeps for |cycles| (e.g. sleeping for F_CPU will sleep 1s).
// delay_inline assumes the cycle counter has already been initialized and
// should not be modified, i.e. it is safe to call during keyboard matrix scan.
//
// ChibiOS enables the cycle counter in chcore_v7m.c:
// https://github.com/ChibiOS/ChibiOS/blob/b63023915c304092acb9f33bbab40f3ec07a7f0e/os/common/ports/ARMCMx/chcore_v7m.c#L263
static void delay_inline(const uint32_t cycles) {
    const uint32_t start = DWT->CYCCNT;
    while ((DWT->CYCCNT - start) < cycles) {
        // busy-loop until time has passed
    }
}

void matrix_output_unselect_delay(uint8_t line, bool key_pressed) {
    // Use the cycle counter to do precise timing in microseconds. The ChibiOS
    // thread sleep functions only allow sleep durations starting at 1 tick, which
    // is 100μs in our configuration.

    // Empirically: e.g. 5μs is not enough, will result in keys that don’t work
    // and ghost key presses. 10μs seems to work well.

    // On some variants of the hardware, 20μs seems to be required. This was found
    // on a combination of KB600LF+stapelberg v2020-06-30+teensy41.

    // 720 cycles at 0.72 cycles/ns == 1μs
    const uint32_t cycles_per_us = 720;
    delay_inline(10 * cycles_per_us);
}
