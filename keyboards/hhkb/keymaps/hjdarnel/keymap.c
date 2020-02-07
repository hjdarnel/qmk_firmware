/*  -*-  eval: (turn-on-orgtbl); -*-
 * default HHKB Layout
 */
#include QMK_KEYBOARD_H

#define BASE 0
#define HHKB 1
#define _______ KC_TRNS
#define KC_CTLG LCTL(KC_GRV)
#define KC_CTLS LGUI(KC_BSLASH)
#define KC_CTLC LCTL(KC_C)
#define KC_CTLU LCTL(KC_U)
#define KC_CTCU LGUI(LCTL(KC_V))
#define KC_CSIX LCTL(KC_CIRC)

enum custom_keycodes {
    MY_CUSTOM_MACRO = SAFE_RANGE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* BASE Level: Default Layer
     Space Cadet left and right shifts
     |-------+---+---+---+---+---+---+---+---+---+---+-------+-----+-------+---|
     | GESC  | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 0 | -     | =   | \     | ` |
     |-------+---+---+---+---+---+---+---+---+---+---+-------+-----+-------+---|
     | Tab   | Q | W | E | R | T | Y | U | I | O | P | [     | ]   | Backs |   |
     |-------+---+---+---+---+---+---+---+---+---+---+-------+-----+-------+---|
     | L2    | A | S | D | F | G | H | J | K | L | ; | '     | Ent |       |   |
     |-------+---+---+---+---+---+---+---+---+---+---+-------+-----+-------+---|
     | Shift | Z | X | C | V | B | N | M | , | . | / | Shift | L1 |       |   |
     |-------+---+---+---+---+---+---+---+---+---+---+-------+-----+-------+---|

            |------+------+-----------------------+------+------|
            | LAlt | LGUI | ******* Space ******* | LCTRL| RAlt |
            |------+------+-----------------------+------+------|
    */

    [BASE] = LAYOUT( //  default layer
        KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSLS, KC_GRV,
        KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSPC,
        MO(2), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSHIFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSHIFT, MO(HHKB),
        KC_LALT, KC_LGUI, /*        */ KC_SPC, KC_LCTL, KC_RALT),

    /* Layer 1: HHKB mode (HHKB Fn)
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      | Pwr  | F1  | F2  | F3  | F4 | F5 | F6 | F7 | F8  | F9  | F10 | F11 | F12   | Ins   | Del |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      | Caps |     |     |     |    |    |    |    | Psc | Slk | Pus | Up  |       | Backs |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      |      | VoD | VoU | Mut |    |    | *  | /  | Hom | PgU | Lef | Rig | Enter |       |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      |      |     |     |     |    |    | +  | -  | End | PgD | Dow |     |       |       |     |
      |------+-----+-----+-----+----+----+----+----+-----+-----+-----+-----+-------+-------+-----|

                 |------+------+----------------------+------+------+
                 | **** | **** | ******************** | **** | **** |
                 |------+------+----------------------+------+------+

     */

    [HHKB] = LAYOUT(
        KC_PWR, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_INS, KC_DEL,
        KC_CAPS, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, KC_SLCK, KC_PAUS, KC_UP, _______, KC_BSPC,
        _______, KC_VOLD, KC_VOLU, KC_MUTE, _______, _______, KC_PAST, KC_PSLS, KC_HOME, KC_PGUP, KC_LEFT, KC_RGHT, KC_PENT,
        _______, _______, _______, _______, _______, _______, KC_PPLS, KC_PMNS, KC_END, KC_PGDN, KC_DOWN, _______, _______,
        _______, _______, _______, _______, _______),

        /* Layer 2: Extra stuff (Control key)
      |------+-----+-----+-----+--------+----+ CSh^+----+-----+-----+-----+-----+-------+-------+-----|
      |      |     |     |     |        |    |    |    |     |     | Mut | VoD | VoU   |       | Cmd\|
      |------+-----+-----+-----+--------+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      |      | VoU |     |     |        |    |    |    | CtlU|     |     |     |       |       |     |
      |------+-----+-----+-----+--------+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      |      | Prev| Pau | Nxt |        |    |    |    | lft | dn  |  up | rig |       |       | +:  |
      |------+-----+-----+-----+--------+----+----+----+-----+-----+-----+-----+-------+-------+-----|
      |      | VoD |     | CtlC| CtlCmdV|    |    |    |     |     |     |     |       |       |     |
      |------+-----+-----+-----+--------+----+----+----+-----+-----+-----+-----+-------+-------+-----|

                 |------+------+----------------------+------+------+
                 | **** | **** | ******************** | **** | **** |
                 |------+------+----------------------+------+------+

     */

    [2] = LAYOUT(
        _______, _______, _______, _______, _______, _______, KC_CSIX, _______, _______, _______, KC_MUTE, KC_VOLD, KC_VOLU, _______, KC_CTLS,
        _______, KC_VOLU, _______, _______, _______, _______, _______, KC_CTLU, _______, _______, _______, _______, _______, KC_DEL,
        _______, KC_MEDIA_REWIND, KC_MEDIA_PLAY_PAUSE, KC_MEDIA_FAST_FORWARD, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, _______, _______, MY_CUSTOM_MACRO,
        _______, KC_VOLD, _______, KC_CTLC, KC_CTCU, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______)};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    // MACRODOWN only works in this function
    switch (id)
    {
    case 0:
        if (record->event.pressed)
        {
            register_code(KC_RSFT);
        }
        else
        {
            unregister_code(KC_RSFT);
        }
        break;
    }
    return MACRO_NONE;
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch(keycode) {
            case MY_CUSTOM_MACRO:
                SEND_STRING("+:");
                return false;
        }
    }
    return true;
};