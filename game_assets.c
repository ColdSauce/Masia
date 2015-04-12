#include "game_assets.h"

#include <stdio.h>
#include "sprite_util.h"


static Player current_player;

//Signleton design pattern.
Player* get_current_player() {
	if (!current_player.created) {


		unsigned char* pointerToTiles = player_tiles;
		current_player.created++;
		current_player.sprite_tiles = pointerToTiles;
		return &current_player;
	}
	return &current_player;
}
