all: json2c build

json2c: rwese.json
	qmk json2c rwese.json > rwese.c

build: rwese.c config.h keymap.c rules.mk
	qmk compile -kb redox/rev1 -km rwese -e AVR_CFLAGS="-Wno-array-bounds"

.PHONY: flash
flash:
	qmk flash -kb redox/rev1 -km rwese -e AVR_CFLAGS="-Wno-array-bounds"
