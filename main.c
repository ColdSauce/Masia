#include <stdio.h>
#include <gb/gb.h>
#include <gb/drawing.h>
#include "game_loop.h"
#include "sprite_util.h"




UBYTE joypad_state;
void main() {
	set_up_sprites();
	game_loop();
}


