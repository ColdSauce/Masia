#include "movement.h"
#include <stdio.h>
void move_player(UBYTE joypad_state, Player* player) {

	if (joypad_state == J_RIGHT) {
		if(player->direction != EAST){
			load_new_tile(player->sprite_pos, PLAYER_LOOKING_RIGHT);
		}
		(player->direction) = EAST;
		(player->x)++;
	}
	else if (joypad_state == J_LEFT) {
		if(player->direction != WEST){
			load_new_tile(player->sprite_pos, PLAYER_LOOKING_RIGHT);
			flip_sprite_horizontally(player->sprite_pos);
		}
		(player->direction) = WEST;
		(player->x)--;
	}
	else if (joypad_state == J_UP) {
		if(player->direction != NORTH){			
			load_new_tile(player->sprite_pos, PLAYER_LOOKING_DOWN);
			flip_sprite_vertically(player->sprite_pos);
		}
		(player->direction) = NORTH;
		(player->y)--;
	}
	else if (joypad_state == J_DOWN) {
		if(player->direction != SOUTH){			
			load_new_tile(player->sprite_pos, PLAYER_LOOKING_DOWN);
		}
		(player->direction) = SOUTH;
		(player->y)++;		
		
	}
}