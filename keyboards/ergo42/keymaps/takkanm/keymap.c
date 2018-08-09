#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

#define BASE 0
#define META 1
#define SYMB 2
#define GAME 3

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* BASE
   * ,------------------------------------------------.   ,------------------------------------------------.
   * | ESC  | Tab  |   Q  |   W  |   E  |   R  |  T   |   |  Y   |   U  |   I  |   O  |   P  |   [  | Bksp |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * | Del  | RCtrl|   A  |   S  |   D  |   F  |  G   |   |  H   |   J  |   K  |   L  |   ;  |   ]  | Enter|
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | SYMB | LSft |   Z  |   X  |   C  |   V  |  B   |   |  N   |   M  |   ,  |   .  |   /  |  UP  | RSft |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * | META | LCtrl|   `  |   \  | LAlt | LGUI |Space |   |Space |   '  |   -  |   =  | LEFT | DOWN | RIGHT|
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [BASE] = LAYOUT( \
    KC_TAB,   KC_Q,    KC_W,   KC_E,    KC_R,    KC_T,   S(KC_4),   S(KC_5),  KC_Y,   KC_U,   KC_I,     KC_O,    KC_P,    KC_BSLS, \
    KC_LCTL,  KC_A,    KC_S,   KC_D,    KC_F,    KC_G,   S(KC_9),   S(KC_0),  KC_H,   KC_J,   KC_K,     KC_L,    KC_SCLN, KC_QUOT, \
    KC_LSFT,  KC_Z,    KC_X,   KC_C,    KC_V,    KC_B,   MO(SYMB),  MO(META), KC_N,   KC_M,   KC_COMM,  KC_DOT,  KC_SLSH, KC_RSFT , \
    MO(META), KC_GRV,  GAME,   KC_LALT, KC_SPC,  KC_ESC, KC_LGUI,   KC_RGUI,  KC_ENT, KC_SPC, MO(META), KC_LBRC, KC_RBRC, MO(SYMB)\
  ),

  /* META
   * ,------------------------------------------------.   ,------------------------------------------------.
   * | Reset|   1  |   2  |   3  |   4  |   5  |  [   |   |  ]   |   6  |   7  |   8  |   9  |   0  | Bksp |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * | Del  |  F1  |      |Muhen | Henk |      |      |   | Left | Down |  Up  |Right |      |      | Enter|
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | SYMB |  F2  |  F3  |  F4  |  F5  |  F6  |  {   |   |  }   |  F7  |  F8  |  F9  | F10  | F11  | F12  |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * | META | LCtrl|   `  |   \  | LAlt | LGUI |Space |   |Space |   '  |   -  |   =  |      |      |      |
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [META] = LAYOUT( \
      KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, S(KC_4),    S(KC_5), KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______, \
      _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   S(KC_9),    S(KC_0), KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_RCBR, KC_PIPE, \
      _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_LPRN,    KC_RPRN, KC_F12,  KC_F6,   _______, KC_HOME, KC_END,  _______, \
      _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, KC_VOLU, KC_MPLY, _______ \
  ),

  /* SYMB
   * ,------------------------------------------------.   ,------------------------------------------------.
   * | ESC  |   !  |   @  |   #  |   $  |   %  |  [   |   |  ]   |   ^  |   &  |   *  |   (  |   )  | Bksp |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * | Del  |      |      |      |      |      |  (   |   |  )   |      |      |      |      |      | Enter|
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | SYMB |      |      |      |      |      |  {   |   |  }   |      |      |      |      |  UP  | Sft  |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * | META | LCtrl|   `  |   \  | LAlt | LGUI |Space |   |Space |   '  |   -  |   =  | LEFT | DOWN | RIGHT|
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [SYMB] = LAYOUT( \
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    S(KC_4),    S(KC_5), KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL, \
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   S(KC_9),    S(KC_0), KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, \
    _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  _______,    _______, KC_F12,  _______, _______, KC_PGDN, KC_PGUP, _______, \
    _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, KC_VOLU, KC_MPLY, _______ \
  ),

  [GAME] =  LAYOUT( \
      _______, RESET,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_DEL, \
      _______, _______, _______, AU_ON,   AU_OFF,  AG_NORM, _______, _______, AG_SWAP, _______,  _______, _______,  _______, _______, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, \
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, RGB_HUD, RGB_SAD, RGB_VAD \
  )
};

