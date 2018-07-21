#include "ymdk_np21.h"
#include "action_layer.h"

#define _NP 0
#define _BL  1
#define KC_CST1 RCTL(KC_KP_0)
#define KC_CST2 RALT(KC_KP_0)
#define KC_CST3 RCTL(KC_KP_1)
#define KC_CST4 RALT(KC_KP_1)
#define KC_CST5 RCTL(KC_KP_2)
#define KC_CST6 RALT(KC_KP_2)
#define KC_CST7 RCTL(KC_KP_3)
#define KC_CST8 RALT(KC_KP_3)

enum custom_keycodes {
  NP = SAFE_RANGE,
  BL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Qwerty
 * ,--------------------------------------------------------------.
 * |   0        |   1     |   4  |   7        | KC_CST5 | KC_CST1 |
 * |------------+---------+------+------------+---------+---------|
 * |   KC_CST8  |   2     |   5  |   8        |   /     | KC_CST2 |---,
 * |------------+---------+------+------------+---------+---------|USB|
 * |  DOT       |   3     |   6  |   9        |   *     | KC_CST3 |---'
 * |------------+---------+------+------------+---------+---------|
 * | Enter      | KC_CST7 |   +  |   KC_CST6  |   -     | KC_CST4 |
 * `--------------------------------------------------------------'
 */
[_NP] = KEYMAP( \
  KC_KP_0,     KC_KP_1,     KC_KP_4,    KC_KP_7,    KC_CST5,        KC_CST1,   \
  KC_CST8,     KC_KP_2,     KC_KP_5,    KC_KP_8,    KC_KP_SLASH,    KC_CST2,   \
  KC_KP_DOT,   KC_KP_3,     KC_KP_6,    KC_KP_9,    KC_KP_ASTERISK, KC_CST3,   \
  KC_KP_ENTER, KC_CST7,     KC_KP_PLUS, KC_CST6,    KC_KP_MINUS,    KC_CST4    \
),
/* Qwerty
 * ,---------------------------------------------.
 * | BL_BRTG |        |         |        |   |   |
 * |---------+--------+---------+--------+---+---|
 * |         | BL_OFF | BL_TOGG | BL_ON  |   |   |---,
 * |---------+--------+---------+--------+---+---|USB|
 * |         |        |         |        |   |   |---'
 * |---------+--------+---------+--------+---+---|
 * | BL_DEC  | BL_DEC | BL_INC  | BL_INC |   |   |
 * `---------------------------------------------'
 */
[_BL] = KEYMAP( \
  BL_BRTG, _______, _______, _______, _______, _______, \
  _______, BL_OFF,  BL_TOGG, BL_ON,   _______, _______, \
  _______, _______, _______, _______, _______, _______, \
  BL_DEC,  BL_DEC,  BL_INC,  BL_INC,  _______, _______  \
)
};
