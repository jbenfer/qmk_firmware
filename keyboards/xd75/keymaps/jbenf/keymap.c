/* Copyright 2017 REPLACE_WITH_YOUR_NAME
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "xd75.h"

// Fillers to make layering more clear
#define _______ KC_TRNS
#define ___T___ KC_TRNS
#define XXXXXXX KC_NO

// Layer shorthand
#define _QW 0
#define _LW 1
#define _RS 2
//#define _FN 3

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY - MIT ENHANCED / GRID COMPATIBLE
 * .---------------------------------------------------------------------------------------------------------------------- 2u ------------.
 * | ESC    | 1      | 2      | 3      | 4      | 5      | -      | `      | =      | 6      | 7      | 8      | 9      | 0      | BACKSP |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | TAB    | Q      | W      | E      | R      | T      | [      | \      | ]      | Y      | U      | I      | O      | P      | DEL      |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | LCTRL  | A      | S      | D      | F      | G      | HOME   | '      | PGUP   | H      | J      | K      | L      | ;      | ENTER  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | LSHIFT | Z      | X      | C      | V      | B      | END    | UP     | PGDN   | N      | M      | ,      | .      | /      | RSHIFT |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | CAPS   | LGUI   | LALT   | FN1    | SPACE  | SPACE  | LEFT   | DOWN   | RIGHT  | SPACE  | SPACE  | FN2    | RALT   | RGUI   | RCTRL  |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_QW] = { /* QWERTY */
  { KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_MINS, KC_GRV,  KC_EQL,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC  },
  { KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LBRC, KC_BSLS, KC_RBRC, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL   },
  { KC_LCTL, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_HOME, KC_QUOT, KC_PGUP, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT   },
  { OSM(MOD_LSFT), KC_Z, KC_X, KC_C,    KC_V,    KC_B,    KC_END,  KC_UP,   KC_PGDN, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, OSM(MOD_RSFT)  },
  { KC_CAPS, KC_LGUI, KC_LALT, TT(_LW), KC_SPC,  KC_NO,   KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,   KC_SPC,  TT(_RS), KC_RALT, KC_RGUI, KC_RCTL  },
 },

/* LOWERED
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * | F1     | F2     | F3     | F4     | F5     | F6     | NUMLOCK| /      | *      | F7     | F8     | F9     | F10    | F11    | F12    |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | SELECT | CALC   | MYCOMP | MAIL   |        |        | 7      | 8      | 9      | -      |        | INSERT | PRTSCRN| SCRLCK | PAUSE  |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | PREV   | PLAY   | NEXT   | STOP   |        |        | 4      | 5      | 6      | +      |        | BTLDR  |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * | VOLDN  | MUTE   | VOLUP  | APP    |        |        | 3      | 2      | 1      | NPENT  |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------+--------|
 * |        |        |        |        |        |        | 0      | FN10   | .      | NPENT  | NPENT  |        |        |        |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_LW] = { /* LOWERED */
  { KC_F1,     KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_NLCK, KC_PSLS, KC_PAST, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12   },
  { KC_SELECT, KC_CALC, KC_MYCM, KC_MAIL, _______, _______, KC_P7,   KC_P8,   KC_P9,   KC_PMNS, _______, KC_INS,  KC_PSCR, KC_SLCK, KC_PAUS  },
  { KC_MPRV,   KC_MPLY, KC_MNXT, KC_MSTP, _______, _______, KC_P4,   KC_P5,   KC_P6,   KC_PPLS, _______, RESET,   _______, _______, _______  },
  { KC_VOLD,   KC_MUTE, KC_VOLU, KC_APP,  _______, _______, KC_P3,   KC_P2,   KC_P1,   KC_PENT, _______, _______, _______, _______, _______  },
  { _______,   _______, _______, _______, _______, _______, KC_P0,   _______, KC_PDOT, KC_NO,   KC_PENT, _______, _______, _______, _______  },
 },

/* RAISED
 * .--------------------------------------------------------------------------------------------------------------------------------------.
 * |        |        |        |        | RGB TG | RGB MD | RGB HI | RGB HD | RGB SI | RGB SD | RGB VI | RGB VD |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        | MSPD0  | MSPD1  | MSPD2  |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
 * |        |        |        |        |        |        | MSWHLU | CNTCLCK| MSWHLD |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------+--------|
 * |        |        |        |        |        |        | LFTCLCK| MS UP  | RTCLCK |        |        |        |        |        |        |
 * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------+--------|
 * |        |        |        |        |        |        | MS LFT | MS DN  | MS RT  |        |        |        |        |        |        |
 * '--------------------------------------------------------------------------------------------------------------------------------------'
 */

 [_RS] = { /* RAISED */
  { _______, _______, _______, _______, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, _______, _______, _______  },
  { _______, _______, _______, _______, _______, _______, KC_ACL0, KC_ACL1, KC_ACL2, _______, _______, _______, _______, _______, _______  },
  { _______, _______, _______, _______, _______, _______, KC_WH_U, KC_BTN3, KC_WH_D, _______, _______, _______, _______, _______, _______  },
  { _______, _______, _______, _______, _______, _______, KC_BTN1, KC_MS_U, KC_BTN2, _______, _______, _______, _______, _______, _______  },
  { _______, _______, _______, _______, _______, _______, KC_MS_L, KC_MS_D, KC_MS_R, _______, _______, _______, _______, _______, _______  },
 },

};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
            #ifdef BACKLIGHT_ENABLE
              backlight_step();
            #endif
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};
