#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT(
		//,-------+-------+-------+-------+-------+-------.										      ,-------+-------+-------+-------+-------+-------|
			 KC_ESC,   KC_1 ,  KC_2 ,  KC_3 , KC_4  , KC_5  ,										         KC_6 , KC_7  , KC_8  , KC_9  , KC_0  , KC_BSPC, 
		//,-------+-------+-------+-------+-------+-------|										      |-------+-------+-------+-------+-------+-------|
			 KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  ,											       KC_Y , KC_U  , KC_I  , KC_O  , KC_P  , KC_BSLS, 
		//,-------+-------+-------+-------+-------+-------|												  |-------+-------+-------+-------+-------+-------|
			 MO(1)  , KC_A  , KC_S  , KC_D  , KC_F  , KC_G ,												     KC_H , KC_J  , KC_K  , KC_L  ,KC_SCLN , KC_ENT, 
		//,-------+-------+-------+-------+-------+-------,   |-------/  \------|   ,-------+-------+-------+-------+-------|-------|
			 KC_LSFT, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  ,     KC_CAPS,		KC_DEL  ,    KC_N , KC_M  , KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, 
		//,-------+-------+-------+-------+-------+-------+----------/    \-------+-------+-------+-------+-------+-------+-------/
																		    KC_LCTL, KC_LGUI, KC_LGUI,		KC_SPC  , MO(2) , KC_RALT),
		//																	\-------+-------+-------.     .-------+-------+-------/

	[1] = LAYOUT(
		//,-------+-------+-------+-------+-------+-------.										      ,-------+-------+-------+-------+-------+-------|
			KC_ESC, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,														KC_CIRC, KC_AMPR, KC_ASTR, KC_LBRC, KC_RBRC, KC_BSPC, 
		//,-------+-------+-------+-------+-------+-------.										      ,-------+-------+-------+-------+-------+-------|
			KC_TAB,  KC_NO,  KC_GRV, KC_TILD, KC_MINS, KC_NO,														KC_LPRN, KC_LCBR, KC_RCBR, KC_RPRN, KC_PIPE, KC_QUOT, 
		//,-------+-------+-------+-------+-------+-------.										      ,-------+-------+-------+-------+-------+-------|
			KC_NO,  KC_LSFT,KC_UNDS,KC_EQL, KC_PLUS, KC_NO,														KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_COLN, KC_ENT, 
		//,-------+-------+-------+-------+-------+-------.		|-------/	\-------|		,-------+-------+-------+-------+-------+-------|
			KC_NO   , KC_NO , KC_NO , KC_NO , KC_NO , KC_NO,		  KC_NO,		KC_NO,			KC_PGDN, KC_PGUP, KC_LT, KC_GT, KC_QUES, KC_LCTL, 
		//,-------+-------+-------+-------+-------+-------|   |-------/  \------|   |-------+-------+-------+-------+-------|-------|
																				 KC_LCTL, KC_LGUI, KC_NO,			KC_NO   , KC_NO , KC_LALT),
		//																	 \-------+-------+-------.     .-------+-------+-------/
		
	[2] = LAYOUT(
		//,-------+-------+-------+-------+-------+-------.										      ,-------+-------+-------+-------+-------+-------|
			 KC_F1  , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,	KC_F6,														KC_F7 ,  KC_F8,  KC_F9, KC_F10, KC_F11, KC_F12, 
		//,-------+-------+-------+-------+-------+-------.										      ,-------+-------+-------+-------+-------+-------|
			 KC_NO  , KC_NO , KC_MS_U, KC_NO, KC_NO , KC_NO ,														KC_MRWD, KC_MPLY, KC_MFFD, KC_MUTE, KC_VOLD, KC_VOLU, 
		//,-------+-------+-------+-------+-------+-------.										      ,-------+-------+-------+-------+-------+-------|
			 KC_NO  , KC_MS_L, KC_MS_D, KC_MS_R, KC_NO, KC_NO,													KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, KC_MS_BTN2, KC_MS_BTN1, 
		//,-------+-------+-------+-------+-------+-------.		|-------/	\-------|		,-------+-------+-------+-------+-------+-------|
			 RESET  , RGB_HUD, RGB_HUI, RGB_SAD, RGB_SAI, KC_NO,  KC_NO,		KC_NO,		  KC_NO, KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, 
		//,-------+-------+-------+-------+-------+-------|   |-------/  \------|   |-------+-------+-------+-------+-------|-------|
																					RGB_VAD, RGB_VAI, RGB_MOD,			 KC_NO,   KC_NO, KC_NO)
		//																	 \-------+-------+-------.     .-------+-------+-------/

};


/* #define LAYOUT( \ */

/*     LA1,     LA2,     LA3,     LA4,     LA5,     LA6,                     RA6,     RA5,     RA4,     RA3,     RA2,     RA1,     \ */

/*     LB1,     LB2,     LB3,     LB4,     LB5,     LB6,                     RB6,     RB5,     RB4,     RB3,     RB2,     RB1,     \ */

/*     LC1,     LC2,     LC3,     LC4,     LC5,     LC6,                     RC6,     RC5,     RC4,     RC3,     RC2,     RC1,     \ */

/*     LD1,     LD2,     LD3,     LD4,     LD5,     LD6,    LE6,     RE6,    RD6,     RD5,     RD4,     RD3,     RD2,     RD1,     \ */

/*																			LE3,     LE4,     LE5,				RE5,     RE4,     RE3 \ */
