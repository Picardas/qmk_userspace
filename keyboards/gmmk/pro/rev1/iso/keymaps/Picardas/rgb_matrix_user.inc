RGB_MATRIX_EFFECT(dual_reactive)

// Step 2.
// Define effects inside the `RGB_MATRIX_CUSTOM_EFFECT_IMPLS` ifdef block
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

// e.g: A simple effect, self-contained within a single method
static bool dual_reactive(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    rgb_t rgb;
    for (uint8_t i = led_min; i < led_max; i++) {
        switch (i) {
            // Alphanumeric keys (main typing area, numbers, and common symbols)
            // Numbers row: `~`, `1`-`0`, `-`, `=`
            case 1:
            case 7:
            case 13:
            case 19:
            case 24:
            case 29:
            case 35:
            case 40:
            case 45:
            case 51:
            case 57:
            case 62:
            case 79:
            // QWEgggggRTY row: `Q`-`P`, `[`, `]`
            case 8:
            case 14:
            case 20:
            case 25:
            case 30:
            case 36:
            case 41:
            case 46:
            case 52:
            case 58:
            case 63:
            case 90:
            // ASDF row: `A`-`L`, `;`, `'`, `#`
            case 9:
            case 15:
            case 21:
            case 26:
            case 31:
            case 37:
            case 42:
            case 47:
            case 53:
            case 59:
            case 64:
            case 95:
            // ZXCVB row: `Z`-`M`, `,`, `.`, `/`
            case 10:
            case 16:
            case 22:
            case 27:
            case 32:
            case 38:
            case 43:
            case 48:
            case 54:
            case 60:
            // Space
            case 33:
                rgb.r = 0xf7;
                rgb.g = 0xff;
                rgb.b = 0xff;
                break;
            // Backspace and Enter
            case 86:
            case 97:
                rgb.r = 0xff;
                rgb.g = 0xc7;
                rgb.b = 0x00;
                break;
            default:
                rgb.r = 0x2f;
                rgb.g = 0xe7;
                rgb.b = 0xa7;
                break;
        }
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
    return rgb_matrix_check_finished_leds(led_max);
}
#endif
