#include <stdio.h>
#include <gb/gb.h>
#include <gb/drawing.h>
#include "movement.h"
#include "DownPipe.h"
#include "Bird.h"

UBYTE x;
UBYTE y;
UBYTE joypad_state;
void main() {
	x = 20;
	y = 20;
	VBK_REG = 1;
	set_sprite_data(0, 1, DownPipe);
	set_sprite_data(1, 1, bird);
	SPRITES_8x16;
	VBK_REG = 0;
	set_sprite_tile(0, 0);
	set_sprite_tile(1, 0);
	move_sprite(0, 75, 75);
	move_sprite(1, 15, 15);
	SHOW_SPRITES;
	while (1) {
		joypad_state = joypad();
		move(joypad_state, &x, &y);
		move_sprite(0, x, y);
		delay(10);
	}
}


