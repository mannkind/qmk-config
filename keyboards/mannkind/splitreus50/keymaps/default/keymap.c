#include "splitreus50.h"
#include "action_layer.h"
#include "split_util.h"
#include "version.h"

#define _QWERTY 0
#define _COLEMAK 1
#define _SYMB 2
#define _DIR 3
#define _ALT1 4
#define _ALT2 5

#define KC_RGHT KC_RIGHT

#define MOSYMB MO(_SYMB)
#define MODIR MO(_DIR)
#define MOALT1 MO(_ALT1)
#define MOALT2 MO(_ALT2)
#define QWERTY DF(_QWERTY)
#define COLEMAK DF(_COLEMAK)
#define LGUIENT MT(MOD_LGUI, KC_ENT)
#define LCTLENT MT(MOD_LCTL, KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// Qwerty 
[_QWERTY] = LAYOUT( 
  KC_ESC , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                       KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_QUOT,
  LCTLENT, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                       KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, LCTLENT, 
  KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,                       KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, KC_RSFT,
  KC_NO  , KC_LCTL, KC_LALT, KC_LGUI, MODIR  , KC_SPC , KC_TAB ,     KC_DEL , KC_BSPC, MOSYMB , KC_RGUI, KC_RALT, KC_LCTL, KC_NO
),

// Colemak 
[_COLEMAK] = LAYOUT( 
  KC_TRNS, KC_TRNS, KC_TRNS, KC_F   , KC_P   , KC_G   ,                       KC_J   , KC_L   , KC_U   , KC_Y   , KC_SCLN, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_R   , KC_S   , KC_T   , KC_D   ,                       KC_TRNS, KC_N   , KC_E   , KC_I   , KC_O   , KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                       KC_K   , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),

// Symbols
[_SYMB] = LAYOUT(
  KC_TRNS,  KC_EXLM, KC_AT,   KC_LCBR, KC_RCBR, KC_PIPE,                       KC_EQL , KC_7   , KC_8   , KC_9   , KC_ASTR, KC_TRNS,
  KC_TRNS,  KC_HASH, KC_DLR,  KC_LPRN, KC_RPRN, KC_GRV ,                       KC_MINS, KC_4   , KC_5   , KC_6   , KC_PLUS, KC_TRNS,
  KC_TRNS,  KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD,                       KC_AMPR, KC_1   , KC_2   , KC_3   , KC_BSLS, KC_TRNS,
  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_0   , KC_DOT , KC_TRNS, KC_TRNS
),

// Directional Keys
[_DIR] = LAYOUT(
  KC_TRNS,  KC_TRNS, KC_HOME, KC_UP  , KC_END , KC_PGUP,                       KC_TRNS, KC_F7  , KC_F8  , KC_F9  , KC_F10 , KC_TRNS,
  KC_TRNS,  KC_TRNS, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN,                       KC_TRNS, KC_F4  , KC_F5  , KC_F6  , KC_F11 , KC_TRNS,
  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                       KC_TRNS, KC_F1  , KC_F2  , KC_F3  , KC_F12 , KC_TRNS,
  KC_TRNS,  KC_TRNS, KC_TRNS, QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS, KC_DEL , KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
),

// Commands
 [_ALT1] = LAYOUT(
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, QWERTY , COLEMAK, KC_TRNS,                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS 
),

// Commands
 [_ALT2] = LAYOUT(
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, QWERTY , COLEMAK, KC_TRNS,                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS 
),

// Blank
};