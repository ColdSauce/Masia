#include "game_loop.h"
#include "movement.h"
#include "game_assets.h"


static UBYTE joypad_state = 0;
void game_loop() {
	Player* player = get_current_player();
	while (1) {
		joypad_state = joypad();
		move_player(joypad_state, player);
		move_sprite(player->sprite_pos, player->x, player->y);
		DELAY;		
	}
}