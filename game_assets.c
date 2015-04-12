#include "game_assets.h"

static Player current_player;

//Signleton design pattern.
Player* get_current_player() {
	if (!current_player.created) {
		unsigned char tiles[] =
		{
			0x00, 0x00, 0x1C, 0x1C, 0xAA, 0xB2, 0xCD, 0xF3,
			0xE2, 0xFE, 0x9C, 0x9C, 0x00, 0x00, 0x00, 0x00
		};

		unsigned char* pointerToTiles = &tiles;
		current_player.created++;
		current_player.sprite_tiles = pointerToTiles;
	}
	return &current_player;
}
