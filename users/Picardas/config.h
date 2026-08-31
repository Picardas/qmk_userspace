#pragma once

// Caps Word: double-tapping left shift or right shift (same side twice) turns it on.
// QMK's built-in DOUBLE_TAP_SHIFT_TURNS_ON_CAPS_WORD only covers left shift, so this is
// handled in process_record_user()/process_record_keymap() in Picardas.c instead.
// Set Caps Word to 2s
//#define CAPS_WORD_IDLE_TIMEOUT 2000  // 2 seconds
