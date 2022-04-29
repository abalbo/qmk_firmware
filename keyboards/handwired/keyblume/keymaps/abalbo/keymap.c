#include QMK_KEYBOARD_H

#define ____ KC_TRANSPARENT

enum Layers {
    _BASE = 0,
    _FN  = 1,
};

enum Encoder {
    _ENCODER_LEFT  = 0,
    _ENCODER_RIGHT = 1,
};

enum CUSTOM_KEYCODES {
    ALT_E = SAFE_RANGE,
    M_NEXT_PREV,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BASE] = LAYOUT_split70(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,   KC_F11,  KC_F12,  KC_MPLY, M_NEXT_PREV, KC_DEL,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,     KC_MINS, KC_EQL,  KC_MUTE, KC_BSPC, KC_HOME,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC, KC_RBRC, KC_ENT,  KC_END,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,  KC_QUOT, KC_NUHS, KC_PGUP,
        KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,   KC_SLSH, KC_RSFT, KC_UP,   KC_PGDN,
        KC_LCTL, KC_LGUI, KC_LALT, KC_SPC,  KC_SPC,  KC_RALT, MO(_FN), KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [_FN] = LAYOUT_split70(
        ____,  ____,   ____,   ____,   ____,   ____,   ____,   ____,   ____,   ____,   ____,   ____,  ____,  ____, ____, ____,
        ____,  ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,     ____, ____,  ____, ____, ____,
        ____,  ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ALT_E, ____, ____,  ____,
        ____, ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____,  ____, ____, ____,
        ____, ____, ____,    ____,    ____,    ____,    ____,    ____,    ____,    ____, ____,   ____, ____, ____,   ____,
        ____, ____, ____, ____,  ____,  ____, ____, ____, ____, ____, ____
    ),

};

// IT_CEGR --> È
#if defined(ENCODER_ENABLE)
static int8_t ticks = 0;
bool encoder_update_user(uint8_t index, bool clockwise) {
    layer_state_t current_state = get_highest_layer(layer_state);
    if (index==_ENCODER_RIGHT)
    {

        if (clockwise) {
                ticks++;
                if (get_mods() & MOD_BIT(KC_LCTL)) {
                    if (abs(ticks) >= 5)
                        {
                            tap_code(KC_RGHT);
                            ticks = 0;
                        }
                    return false;
                }
                if (get_mods() & MOD_BIT(KC_LSFT)) {
                    if (abs(ticks) >= 15)
                        {
                            unregister_code(KC_LSFT);
                            tap_code(KC_MEDIA_NEXT_TRACK);
                            register_code(KC_LSFT);
                            ticks = 0;
                        }
                    return false;
                }

                switch (current_state) {
                    case _BASE:
                    default:
                        if (abs(ticks) >= 5)
                        {
                            tap_code(KC_AUDIO_VOL_UP);
                            ticks = 0;
                        }
                        break;
                    case _FN:
                        //tbd
                        break;
                }
            } else {
                ticks--;

                if (get_mods() & MOD_BIT(KC_LCTL)) {
                    if (abs(ticks) >= 5)
                        {
                            tap_code(KC_LEFT);
                            ticks = 0;
                        }
                    return false;
                }
                if (get_mods() & MOD_BIT(KC_LSFT)) {
                    if (abs(ticks) >= 15)
                        {
                            unregister_code(KC_LSFT);
                            tap_code(KC_MEDIA_PREV_TRACK);
                            register_code(KC_LSFT);
                            ticks = 0;
                        }
                    return false;
                }
                switch (current_state) {
                    case _BASE:
                    default:
                        if (abs(ticks) >= 5)
                        {
                            tap_code(KC_AUDIO_VOL_DOWN);
                            ticks = 0;
                        }
                        break;
                    case _FN:
                        //tbd
                        break;
                }
            }
    }
    return false;
}
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ALT_E:
      if (record->event.pressed) {
        // Do something when pressed
        SEND_STRING(SS_TAP(X_NLCK) SS_DOWN(X_LALT) SS_TAP(X_P0) SS_TAP(X_P2) SS_TAP(X_P0) SS_TAP(X_P0) SS_UP(X_LALT) SS_TAP(X_NLCK));
      } else {
        // Do something else when release
      }
      return false; // Skip all further processing of this key
    case M_NEXT_PREV:
      if (record->event.pressed) {
        if (get_mods() & MOD_BIT(KC_LSFT)) {
            unregister_code(KC_LSFT);
            tap_code(KC_MPRV);
            register_code(KC_LSFT);
        }
        else
        {
            tap_code(KC_MNXT);
        }
      }
      return false;
    default:
      return true; // Process all other keycodes normally
  }
}