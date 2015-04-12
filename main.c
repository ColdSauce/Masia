#include <stdio.h>
#include <gb/gb.h>
#include <gb/drawing.h>
#include "bird.h"
#include "downpipe.h"

UBYTE x;
UBYTE y;
UBYTE joypad_state;
void main() {
	x = 20;
	y = 20;
	VBK_REG = 1;
	set_sprite_data(0, 1, DownPipe);
	SPRITES_8x16;
	VBK_REG = 0;
	set_sprite_tile(0, 0);
	move_sprite(0, 75, 75);
	SHOW_SPRITES;
	while (1) {
		joypad_state = joypad();
		if (joypad_state == J_RIGHT) {
			x++;
		}
		else if (joypad_state == J_LEFT) {
			x--;
		}
		else if (joypad_state == J_UP) {
			y--;
		}
		else if (joypad_state == J_DOWN) {
			y++;
		}
		x %= 255;
		y %= 255;

		move_sprite(0, x, y);
		delay(10);
	}
}


