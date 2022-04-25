#include "keyblume_v2.h"
#include QMK_KEYBOARD_H

void board_init(void) {
    // B9 is configured as I2C1_SDA_PIN in the board file; that function must be
    // disabled before using B7 as I2C1_SDA.
    //setPinInputHigh(B9);
}

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}
