#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_split70(
        KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX, XXXXXXX, KC_INS,  
        KC_7,    KC_8,    KC_9,    KC_0,    KC_QUOT, XXXXXXX, KC_BSPC, KC_HOME, 
        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_ENT,  KC_PGUP, 
        KC_H,    KC_J,    KC_K,    KC_L,    KC_AT,   KC_HASH, XXXXXXX, KC_PGDN, 
        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_MINS, KC_LSFT, XXXXXXX, KC_END,  
        KC_SPC,  KC_LALT, XXXXXXX, KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX  
    ),

};