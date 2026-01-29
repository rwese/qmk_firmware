# AGENTS.md

This document provides guidance for AI agents working on this QMK keyboard project.

## Project Overview

This is a custom keymap for the Redox keyboard running QMK firmware. The keymap features:

- Home row mods (L/R shift/ctrl/alt/gui)
- Layers: Base, Symbol, Navigation, Adjust, Media
- Combos for common actions
- Unicode and French keymap support

## Key Files

- `keymap.c` - Main keymap with custom code, tap dance, and keycodes
- `rwese_combos.c` - Combo definitions for key combinations
- `config.h` - QMK configuration settings (tapping term, combo settings)
- `rules.mk` - Build configuration
- `rwese.json` - QMK Configurator export
- `rwese.c` - Generated keymap (auto-generated from JSON)

## Build Commands

```bash
# Compile firmware
make

# Flash firmware
make flash
```

## Common Tasks

### Adding New Combos

Edit `rwese_combos.c`:

1. Add enum entry in the `enum combos` block
2. Add key sequence array with `COMBO_END`
3. Add action in `key_combos[]` array

Example:

```c
enum combos {
    COMBO_NEW,  // C + K
    COMBO_COUNT,
};

const uint16_t PROGMEM combo_new[] = {KC_C, KC_K, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    [COMBO_NEW] = COMBO(combo_new, KC_ESC),
};
```

### Modifying Layers

Edit `rwese.json` using QMK Configurator or manually, then run:

```bash
qmk json2c rwese.json > rwese.c
```

### Changing Tapping Term

Edit `config.h`:

```c
#define TAPPING_TERM 200  // milliseconds
```

## Agent Guidelines

1. **Never modify generated files** (`rwese.c`, `rwese.json`) directly - they are auto-generated
2. **Always compile after changes** to verify correctness
3. **Include relevant context** when asking for help (OS, keyboard type, issue description)
4. **Test changes** on actual hardware when possible
5. **Commit meaningful changes** with descriptive messages

## Testing

Flash the firmware and test:

- Key presses register correctly
- Layers switch properly
- Combos work as expected
- Home row mods are comfortable

**Always run `make` after changes to verify compilation succeeds before testing on hardware.**

## Resources

- [QMK Docs](https://docs.qmk.fm/)
- [Redox Keyboard](https://github.com/mattdibi/redox-keyboard)
- [QMK Configurator](https://config.qmk.fm/)
