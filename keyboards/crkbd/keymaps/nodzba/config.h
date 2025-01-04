/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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

#define VIAL_KEYBOARD_UID {0x3B, 0x6B, 0xA0, 0x29, 0x80, 0x56, 0xED, 0xD1}
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}


#define DYNAMIC_KEYMAP_LAYER_COUNT 10
//#define TAPPING_TERM 180



#define OLED_FONT_H "keyboards/crkbd/keymaps/nodzba/glcdfont.c"


#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY              0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL           15
#undef MOUSEKEY_MOVE_DELTA
#define MOUSEKEY_MOVE_DELTA         6
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED          3
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX        30
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY        0
#undef MOUSEKEY_WHEEL_DELTA
#define MOUSEKEY_WHEEL_DELTA        20
#undef MOUSEKEY_WHEEL_MAX_SPEED 
#define MOUSEKEY_WHEEL_MAX_SPEED    2
#undef MOUSEKEY_WHEEL_TIME_TO_MAX
#define MOUSEKEY_WHEEL_TIME_TO_MAX  30


//#define USE_MATRIX_I2C
#ifdef KEYBOARD_crkbd_rev1_legacy
#    undef USE_I2C
#    define USE_SERIAL
#endif

/* Select hand configuration */

//#define MASTER_LEFT
// #define MASTER_RIGHT
#define EE_HANDS




#ifdef RGBLIGHT_ENABLE
    #undef RGBLIGHT_LED_COUNT
    #define RGBLIGHT_LED_COUNT 54
    #define RGBLED_SPLIT { 27, 27 }
    #define RGBLIGHT_LIMIT_VAL 120
    #define RGBLIGHT_HUE_STEP 10
    #define RGBLIGHT_SAT_STEP 17
    #define RGBLIGHT_VAL_STEP 17
    
    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
    #define RGBLIGHT_EFFECT_SNAKE
    #define RGBLIGHT_EFFECT_KNIGHT
    #define RGBLIGHT_EFFECT_CHRISTMAS
    #define RGBLIGHT_EFFECT_STATIC_GRADIENT
    #define RGBLIGHT_EFFECT_RGB_TEST
    #define RGBLIGHT_EFFECT_ALTERNATING
    #define RGBLIGHT_EFFECT_TWINKLE
#endif
