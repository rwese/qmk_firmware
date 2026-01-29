// Combo definitions for rwese keymap
// Add new combos here and update COMBO_COUNT in config.h

// Enum must match the order in key_combos array below
enum combos {
    COMBO_E_R_SPACE,          // E + R
    COMBO_G_R_ENT,            // G + R
    COMBO_H_U_ENT,            // H + U
    COMBO_U_I_SPACE,          // U + I
    // COMBO_CAPS_G_BOOT,        // Caps + G
    // COMBO_J_SCLN_COLN,        // J + ; (with Shift)
    // COMBO_M_N_SHIFT,          // M + N
    // COMBO_V_B_SHIFT,          // V + B
    // COMBO_C_V_M_COMM_CTRL,    // C + V or M + , = Ctrl
    // COMBO_X_C_COMMA_DOT_ALT,  // X + C or , + . = Alt
    // COMBO_Z_X_DOT_SLSH_SUPER, // Z + X or . + / = Super
    COMBO_COUNT,
};

// Combo key sequences - add new combos here
const uint16_t PROGMEM combo_e_r_space[]      = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo_g_r_ent[]        = {KC_G, KC_R, COMBO_END};
const uint16_t PROGMEM combo_h_u_ent[]        = {KC_H, KC_U, COMBO_END};
const uint16_t PROGMEM combo_u_i_space[]      = {KC_U, KC_I, COMBO_END};
// const uint16_t PROGMEM combo_caps_g_boot[]    = {KC_CAPS, KC_G, COMBO_END};
// const uint16_t PROGMEM combo_j_scln_coln[]    = {KC_J, KC_SCLN, COMBO_END};
// const uint16_t PROGMEM combo_m_n_shift[]      = {KC_M, KC_N, COMBO_END};
// const uint16_t PROGMEM combo_v_b_shift[]      = {KC_V, KC_B, COMBO_END};
// const uint16_t PROGMEM combo_c_v_ctrl[]       = {KC_C, KC_V, COMBO_END};
// const uint16_t PROGMEM combo_m_comm_ctrl[]    = {KC_M, KC_COMM, COMBO_END};
// const uint16_t PROGMEM combo_x_c_alt[]        = {KC_X, KC_C, COMBO_END};
// const uint16_t PROGMEM combo_comma_dot_alt[]  = {KC_COMMA, KC_DOT, COMBO_END};
// const uint16_t PROGMEM combo_z_x_super[]      = {KC_Z, KC_X, COMBO_END};
// const uint16_t PROGMEM combo_dot_slsh_super[] = {KC_DOT, KC_SLSH, COMBO_END};

// Combo actions - order must match enum above
combo_t key_combos[COMBO_COUNT] = {
    [COMBO_E_R_SPACE] = COMBO(combo_e_r_space, KC_SPC),
    [COMBO_G_R_ENT] = COMBO(combo_g_r_ent, KC_ENT),
    [COMBO_H_U_ENT] = COMBO(combo_h_u_ent, KC_ENT),
    [COMBO_U_I_SPACE] = COMBO(combo_u_i_space, KC_SPC),
    // [COMBO_CAPS_G_BOOT] = COMBO(combo_caps_g_boot, QK_BOOT),
    // [COMBO_J_SCLN_COLN] = COMBO(combo_j_scln_coln, KC_COLN),
    // [COMBO_M_N_SHIFT] = COMBO(combo_m_n_shift, KC_LSFT),
    // [COMBO_V_B_SHIFT] = COMBO(combo_v_b_shift, KC_LSFT),
    // [COMBO_C_V_M_COMM_CTRL] = COMBO(combo_c_v_ctrl, KC_LCTL),
    // [COMBO_C_V_M_COMM_CTRL] = COMBO(combo_m_comm_ctrl, KC_LCTL),
    // [COMBO_X_C_COMMA_DOT_ALT] = COMBO(combo_x_c_alt, KC_LALT),
    // [COMBO_X_C_COMMA_DOT_ALT] = COMBO(combo_comma_dot_alt, KC_LALT),
    // [COMBO_Z_X_DOT_SLSH_SUPER] = COMBO(combo_z_x_super, KC_LGUI),
    // [COMBO_Z_X_DOT_SLSH_SUPER] = COMBO(combo_dot_slsh_super, KC_LGUI),
};
