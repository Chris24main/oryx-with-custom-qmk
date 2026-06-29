#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
  M_KEYBOARD,
  M_UCHORD,
  M_ICHORD,
  M_LCHORD,
  M_NCHORD,
  M_OCHORD,
  M_CCHORD,
  M_TCHORD,
  
  // Other custom keys
};


#define DUAL_FUNC_0 LT(6, KC_Z)
#define DUAL_FUNC_1 LT(3, KC_F1)
#define DUAL_FUNC_2 LT(4, KC_F5)
#define DUAL_FUNC_3 LT(10, KC_V)
#define DUAL_FUNC_4 LT(10, KC_2)
#define DUAL_FUNC_5 LT(2, KC_F17)
#define DUAL_FUNC_6 LT(3, KC_9)
#define DUAL_FUNC_7 LT(3, KC_Z)
#define DUAL_FUNC_8 LT(8, KC_F9)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_UP,          KC_RIGHT,       
    KC_TAB,         KC_MEH,         KC_D,           KC_R,           KC_V,           KC_F2,                                          KC_MS_BTN1,     KC_Q,           KC_U,           KC_P,           KC_DOWN,        KC_TRANSPARENT, 
    KC_LEFT_CTRL,   LT(5, KC_A),    KC_S,           LT(4, KC_H),    KC_T,           KC_G,                                           KC_F,           KC_N,           KC_E,           KC_O,           KC_I,           KC_DOT,         
    KC_LEFT_ALT,    KC_Z,           KC_X,           KC_M,           KC_C,           KC_W,                                           KC_Y,           KC_L,           KC_B,           KC_J,           KC_K,           KC_RIGHT_GUI,   
                                                    KC_LEFT_SHIFT,  KC_SPACE,                                       KC_ENTER,       MO(1)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_HOME,        KC_PAGE_UP,     KC_END,         
    KC_TRANSPARENT, KC_ESCAPE,      KC_BSLS,        DUAL_FUNC_0,    DUAL_FUNC_1,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_7,           KC_8,           KC_9,           KC_PGDN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_BSPC,        KC_G,        KC_TRANSPARENT, KC_W,           QK_REP,                                         KC_0,           KC_4,           KC_5,           KC_6,           KC_MINUS,       KC_DOT,         
    KC_TRANSPARENT, LCTL(KC_BSPC),  KC_NUBS,        DUAL_FUNC_2,    KC_SCLN,        DUAL_FUNC_3,                                    DUAL_FUNC_4,    KC_1,           KC_2,           KC_3,           KC_SLASH,       KC_EQUAL,       
                                                    KC_TRANSPARENT, QK_AREP,                                 MO(2),          KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    QK_DYNAMIC_TAPPING_TERM_PRINT,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F7,          KC_F8,          KC_F9,          KC_TRANSPARENT, KC_TRANSPARENT, 
    QK_DYNAMIC_TAPPING_TERM_UP,KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,KC_MEDIA_STOP,                                  KC_F10,         KC_F4,          KC_F5,          KC_F6,          KC_F11,         KC_F12,         
    QK_DYNAMIC_TAPPING_TERM_DOWN,KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,                                KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    NAVIGATOR_DEC_CPI,NAVIGATOR_INC_CPI,KC_TRANSPARENT, KC_TRANSPARENT, TOGGLE_SCROLL,  QK_LLCK,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, LGUI(LCTL(KC_LEFT)),KC_TRANSPARENT, LGUI(LCTL(KC_RIGHT)),KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DRAG_SCROLL,    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MS_BTN1,     KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, DUAL_FUNC_5,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_WWW_REFRESH, KC_TRANSPARENT, DRAG_SCROLL,    LALT(LCTL(LSFT(KC_R))),                                KC_WWW_BACK,    DUAL_FUNC_6,    KC_MS_BTN1,     DUAL_FUNC_7,    KC_MS_BTN2,     KC_WWW_FORWARD, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, DUAL_FUNC_8,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_PC_COPY,     KC_PC_PASTE,                                    KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, NAVIGATOR_INC_CPI,KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_WWW_REFRESH, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, NAVIGATOR_DEC_CPI,KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LGUI(LCTL(KC_LEFT)),LALT(LSFT(KC_1)),LALT(LSFT(KC_2)),LALT(LSFT(KC_3)),LALT(LSFT(KC_4)),LGUI(LCTL(KC_RIGHT)),
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PSCR,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_PC_COPY,     KC_PC_PASTE,                                    KC_TRANSPARENT, KC_TRANSPARENT
  ),
};



uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LT(5, KC_A):
            return g_tapping_term + 40;
        case LT(4, KC_H):
            return g_tapping_term + 30;
        case KC_ENTER:
            return g_tapping_term + 50;
        case MO(1):
            return g_tapping_term + 50;
        default:
            return g_tapping_term;
    }
}

    // Additional definition to allow Alt-repeat

uint16_t get_alt_repeat_key_keycode_user(uint16_t keycode, uint8_t mods) {
    switch (keycode) {
        case KC_K: return M_KEYBOARD;
        case KC_U: return M_UCHORD;
		case KC_I: return M_ICHORD;
		case KC_L: return M_LCHORD;
		case KC_N: return M_NCHORD;
		case KC_O: return M_OCHORD;
		case KC_C: return M_CCHORD;
		case KC_T: return M_TCHORD;
    }

    return KC_TRNS;
}

extern rgb_config_t rgb_matrix_config;

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {44,140,233}, {18,218,204}, {18,218,204}, {18,218,204}, {0,0,0}, {0,0,255}, {18,218,204}, {18,218,204}, {18,218,204}, {18,218,204}, {18,218,204}, {0,0,255}, {18,218,204}, {18,218,204}, {18,218,204}, {18,218,204}, {18,218,204}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {18,218,204}, {18,218,204}, {18,218,204}, {74,255,255}, {0,0,0}, {18,218,204}, {18,218,204}, {18,218,204}, {18,218,204}, {18,218,204}, {18,218,204}, {18,218,204}, {18,218,204}, {18,218,204}, {18,218,204}, {18,218,204}, {0,0,255}, {0,0,255}, {0,0,255} },

    [1] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {18,218,204}, {18,218,204}, {18,218,204}, {18,218,204}, {0,0,0}, {0,0,0}, {152,255,255}, {152,255,255}, {152,255,255}, {152,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {74,255,255}, {74,255,255}, {74,255,255}, {0,0,0}, {74,180,196}, {74,180,196}, {74,180,196}, {74,255,255}, {0,0,0}, {74,180,196}, {74,180,196}, {74,180,196}, {74,180,196}, {152,255,255}, {152,255,255}, {152,255,255}, {74,180,196}, {74,180,196}, {74,180,196}, {152,255,255}, {152,255,255}, {0,0,0}, {0,0,0} },

    [2] = { {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {252,255,232}, {169,147,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {11,218,204}, {252,255,232}, {252,255,232}, {252,255,232}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {46,180,236}, {46,180,236}, {46,180,236}, {0,0,0}, {0,0,0}, {46,180,236}, {46,180,236}, {46,180,236}, {46,180,236}, {46,180,236}, {46,180,236}, {0,0,0}, {46,180,236}, {46,180,236}, {46,180,236}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [5] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {41,255,255}, {41,255,255}, {41,255,255}, {0,245,245}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {41,255,255}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
    switch (biton32(layer_state)) {
      case 0:
        set_layer_color(0);
        break;
      case 1:
        set_layer_color(1);
        break;
      case 2:
        set_layer_color(2);
        break;
      case 5:
        set_layer_color(5);
        break;
     default:
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
	  
    // Inserted code here for alt-repeat
  case M_KEYBOARD: 
      if (record->event.pressed) {
        SEND_STRING("ay"); 
      }
      return false;

  case M_UCHORD: 
      if (record->event.pressed) {
        SEND_STRING("gh"); 
      }
      return false;
	  
   case M_ICHORD: 
      if (record->event.pressed) {
        SEND_STRING("g"); 
      }
      return false;
	  
   case M_LCHORD: 
      if (record->event.pressed) {
        SEND_STRING("y"); 
      }
      return false;
	  
   case M_NCHORD: 
      if (record->event.pressed) {
        SEND_STRING("g"); 
      }
      return false;
	  
   case M_OCHORD: 
      if (record->event.pressed) {
        SEND_STRING("uld"); 
      }
      return false;
	  
   case M_CCHORD: 
      if (record->event.pressed) {
        SEND_STRING("h"); 
      }
      return false;
	  
   case M_TCHORD: 
      if (record->event.pressed) {
        SEND_STRING("h"); 
      }
      return false;
  
    // Resumed code from ZSA
	
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode)) || IS_CONSUMER_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_QUOTE);
        } else {
          unregister_code16(KC_QUOTE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_DQUO);
        } else {
          unregister_code16(KC_DQUO);
        }  
      }  
      return false;
    case DUAL_FUNC_1:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_GRAVE);
        } else {
          unregister_code16(KC_GRAVE);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_CIRC);
        } else {
          unregister_code16(KC_CIRC);
        }  
      }  
      return false;
    case DUAL_FUNC_2:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_COMMA);
        } else {
          unregister_code16(KC_COMMA);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_UNDS);
        } else {
          unregister_code16(KC_UNDS);
        }  
      }  
      return false;
    case DUAL_FUNC_3:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_LBRC);
        } else {
          unregister_code16(KC_LBRC);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_LABK);
        } else {
          unregister_code16(KC_LABK);
        }  
      }  
      return false;
    case DUAL_FUNC_4:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_RBRC);
        } else {
          unregister_code16(KC_RBRC);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_RABK);
        } else {
          unregister_code16(KC_RABK);
        }  
      }  
      return false;
    case DUAL_FUNC_5:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_UP);
        } else {
          unregister_code16(KC_UP);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_HOME));
        } else {
          unregister_code16(LCTL(KC_HOME));
        }  
      }  
      return false;
    case DUAL_FUNC_6:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_LEFT);
        } else {
          unregister_code16(KC_LEFT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_HOME);
        } else {
          unregister_code16(KC_HOME);
        }  
      }  
      return false;
    case DUAL_FUNC_7:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_RIGHT);
        } else {
          unregister_code16(KC_RIGHT);
        }
      } else {
        if (record->event.pressed) {
          register_code16(KC_END);
        } else {
          unregister_code16(KC_END);
        }  
      }  
      return false;
    case DUAL_FUNC_8:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_DOWN);
        } else {
          unregister_code16(KC_DOWN);
        }
      } else {
        if (record->event.pressed) {
          register_code16(LCTL(KC_END));
        } else {
          unregister_code16(LCTL(KC_END));
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

// Custom QMK here
const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);

// This globally defines all key overrides to be used
const key_override_t *key_overrides[] = {
	&delete_key_override
};
