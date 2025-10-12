/* Copyright 2021 Jonavin Eng @Jonavin
   Copyright 2022 gourdo1 <gourdo1@outlook.com>
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

#pragma once

// Force n-key rollover
#define FORCE_NKRO

// Configure RGB Settings
#if defined(RGB_MATRIX_ENABLE)
    #define RGBLIGHT_HUE_STEP 10                                // The number of steps to cycle through the hue by (default 10)
    #define RGBLIGHT_SAT_STEP 17                                // The number of steps to increment the saturation by (default 17)
    #define RGBLIGHT_VAL_STEP 17                                // The number of steps to increment the brightness by (default 17)

    //Default mode and color options for QMK built in effects
    #define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_CUSTOM_dual_reactive  // Sets the default effect mode, if none has been set
    #define RGB_MATRIX_DEFAULT_HUE 145                          // Sets the default hue value, if none has been set
    #define RGB_MATRIX_DEFAULT_SAT 205                          // Sets the default saturation value, if none has been set
    #define RGB_MATRIX_DEFAULT_VAL 255                          // Sets the default brightness value, if none has been set
    #define RGB_MATRIX_DEFAULT_SPD 30
    #define RGB_MATRIX_LED_PROCESS_LIMIT (RGB_MATRIX_LED_COUNT + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
    #define RGB_MATRIX_LED_FLUSH_LIMIT 16                       // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
    #define RGB_DISABLE_WHEN_USB_SUSPENDED
    #define RGB_MATRIX_TIMEOUT 300000                           // 10 minutes (5 * 60 * 1000ms)
    #define RGB_MATRIX_KEYPRESSES                               // Enables RGB effects which reacts to keypresses
    #define RGB_MATRIX_SLEEP                                    // Turn off effects when suspended
    //#define RGB_MATRIX_SOLID_REACTIVE_GRADIENT_MODE           // Set if you want the background color to change hue on each keypress
    //#define RGB_MATRIX_FRAMEBUFFER_EFFECTS                    // Enables Heatmap, Rain

    // Uncomment any #undef line below to turn OFF any default enabled RGB background effect (enabled in keyboards/gmmk/pro/config.h).
    #undef ENABLE_RGB_MATRIX_SOLID_COLOR
    #undef ENABLE_RGB_MATRIX_ALPHAS_MODS                        // Static dual hue, speed is hue for secondary hue
    #undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN                   // Static gradient top to bottom, speed controls how much gradient changes
    #undef ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT                // Static gradient left to right, speed controls how much gradient changes
    #undef ENABLE_RGB_MATRIX_BREATHING                          // Single hue brightness cycling animation
    #undef ENABLE_RGB_MATRIX_BAND_SAT                           // Single hue band fading saturation scrolling left to right
    #undef ENABLE_RGB_MATRIX_BAND_VAL                           // Single hue band fading brightness scrolling left to right
    #undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT                  // Single hue 3 blade spinning pinwheel fades saturation
    #undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL                  // Single hue 3 blade spinning pinwheel fades brightness
    #undef ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT                    // Single hue spinning spiral fades saturation
    #undef ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL                    // Single hue spinning spiral fades brightness
    #undef ENABLE_RGB_MATRIX_CYCLE_ALL                          // Full keyboard solid hue cycling through full gradient
    #undef ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT                   // Full gradient scrolling left to right
    #undef ENABLE_RGB_MATRIX_CYCLE_UP_DOWN                      // Full gradient scrolling top to bottom
    #undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN                       // Full gradient scrolling out to in
    #undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL                  // Full dual gradients scrolling out to in
    #undef ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON             // Full gradent Chevron shapped scrolling left to right
    #undef ENABLE_RGB_MATRIX_CYCLE_PINWHEEL                     // Full gradient spinning pinwheel around center of keyboard
    #undef ENABLE_RGB_MATRIX_CYCLE_SPIRAL                       // Full gradient spinning spiral around center of keyboard
    #undef ENABLE_RGB_MATRIX_DUAL_BEACON                        // Full gradient spinning around center of keyboard
    #undef ENABLE_RGB_MATRIX_RAINBOW_BEACON                     // Full tighter gradient spinning around center of keyboard
    #undef ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS                  // Full dual gradients spinning two halfs of keyboard
    #undef ENABLE_RGB_MATRIX_RAINDROPS                          // Randomly changes a single key's hue
    #undef ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS                // Randomly changes a single key's hue and saturation
    #undef ENABLE_RGB_MATRIX_HUE_BREATHING                      // Hue shifts up a slight amount at the same time, then shifts back
    #undef ENABLE_RGB_MATRIX_HUE_PENDULUM                       // Hue shifts up a slight amount in a wave to the right, then back to the left
    #undef ENABLE_RGB_MATRIX_HUE_WAVE                           // Hue shifts up a slight amount and then back down in a wave to the right
    #undef ENABLE_RGB_MATRIX_PIXEL_RAIN                         // Non-sustained raindrops of pastel colors
    #undef ENABLE_RGB_MATRIX_PIXEL_FLOW                         // More active version of pixel rain with quick cycling
    #undef ENABLE_RGB_MATRIX_PIXEL_FRACTAL                      // Same as Pixel Flow but with current HSV only

    //Only enabled if RGB_MATRIX_FRAMEBUFFER_EFFECTS is defined
    #undef ENABLE_RGB_MATRIX_TYPING_HEATMAP                   // How hot is your WPM!
    #undef ENABLE_RGB_MATRIX_DIGITAL_RAIN                     // That famous computer simulation

    //Only enabled if RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES is defined
    #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE              // Pulses keys hit to hue & value then fades value out
    #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE                     // Static single hue, pulses keys hit to shifted hue then fades to current hue (Set as default)
    #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE                // Hue & value pulse near a single key hit then fades value out
    #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE           // Hue & value pulse near multiple key hits then fades value outf
    #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS               // Hue & value pulse the same column and row of a single key hit then fades value out
    #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS          // Hue & value pulse the same column and row of multiple key hits then fades value out
    #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS               // Hue & value pulse away on the same column and row of a single key hit then fades value out
    #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS          // Hue & value pulse away on the same column and row of multiple key hits then fades value out
    #undef ENABLE_RGB_MATRIX_SPLASH                             // Full gradient & value pulse away from a single key hit then fades value out
    #undef ENABLE_RGB_MATRIX_MULTISPLASH                        // Full gradient & value pulse away from multiple key hits then fades value out
    #undef ENABLE_RGB_MATRIX_SOLID_SPLASH                       // Hue & value pulse away from a single key hit then fades value out
    #undef ENABLE_RGB_MATRIX_SOLID_MULTISPLASH                  // Hue & value pulse away from multiple key hits then fades value out
#endif

/* Ensure optimal polling and scan rates */
#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 12 // Or a similar value, optimizes USB report generation

/* Set debounce time to 3ms */
#if defined(DEBOUNCE)
    #undef DEBOUNCE
    #define DEBOUNCE 2
#endif

// Use Caps Word
// Below requires customisation to wider qmk repo (changing DOUBLE_TAP_TURNS_ON_CAPS_WORD)
// Look for way to implement this without that
// #define DOUBLE_TAP_RSHIFT_TURNS_ON_CAPS_WORD
// Set Caps Word to 2s
//#define CAPS_WORD_IDLE_TIMEOUT 2000  // 2 seconds

// Show matrix scan rate if debug console in enabled
#define DEBUG_MATRIX_SCAN_RATE
