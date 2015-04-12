#include "sprite_loader.h"
#include "game_assets.h"
static const UBYTE AMOUNT_OF_PLAYER_SPRITES= 1;

static void set_up_enemy_sprite(enemy_type enemy){
	switch(enemy){
		case ONE:
			//TODO: Do stuff for enemy one.
			break;
		case TWO:
			//TODO: Do stuff for enemy two.
			break;
		case THREE:
			//TODO: Do stuff for enemy three.
			break;
		case FOUR:
			//TODO: Do stuff for enemy four.
			break;
		case FIVE:
			//TODO: Do stuff for enemy five.
			break;
	}
}

static void set_up_player_sprite(){
	Player* currentPlayer = get_current_player();
	set_sprite_data(currentPlayer->sprite_pos,1,*(currentPlayer->sprite_tiles));
}

void set_up_sprites(){
	VBK_REG = 1;
	set_up_player_sprite();
	set_up_enemy_sprite(ONE);
	VBK_REG = 0;
	SHOW_SPRITES;

}