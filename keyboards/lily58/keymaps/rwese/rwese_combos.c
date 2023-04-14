enum combos {
    G_Q_OPEN_CONSOLE,
    G_R_ENT,
    CAPS_G_QK_BOOT,
    J_SCLN_RSFT_T_SCLN,
};

const uint16_t PROGMEM g_q_open_console[]   = {KC_G, KC_Q, COMBO_END};
const uint16_t PROGMEM g_r_ent[]            = {KC_G, KC_R, COMBO_END};
const uint16_t PROGMEM caps_g_qk_boot[]     = {KC_CAPS, KC_G, COMBO_END};
const uint16_t PROGMEM j_scln_rsft_t_scln[] = {KC_J, KC_SCLN, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    [G_Q_OPEN_CONSOLE]   = COMBO(g_q_open_console, OPEN_CONSOLE),
    [G_R_ENT]            = COMBO(g_r_ent, KC_ENT),
    [CAPS_G_QK_BOOT]     = COMBO(caps_g_qk_boot, QK_BOOT),
    [J_SCLN_RSFT_T_SCLN] = COMBO(j_scln_rsft_t_scln, KC_COLN),
};
