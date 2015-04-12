#include "sprite_util.h"
#include "game_assets.h"
#include <gb/gb.h>
#include <stdio.h>
static const UBYTE AMOUNT_OF_PLAYER_SPRITES= 1;

//This piece of fine code has been taken from UraKn0x's
//2048 GB Github repo.
//Check it out here: https://github.com/UraKn0x/gameboy-2048/
#define array(x, y, tileArray) (*(tileArray + (4 * x) + (y)))
#define two_d_to_one_d(x,y) (4 * x) + y



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
	set_sprite_data(0,2,currentPlayer->sprite_tiles);
	set_sprite_tile(0,PLAYER_LOOKING_RIGHT);
	set_sprite_tile(0,PLAYER_LOOKING_DOWN);
}


void set_up_sprites(){
	SPRITES_8x8;
	VBK_REG = 1;
	set_up_player_sprite();
	set_up_enemy_sprite(ONE);
	VBK_REG = 0;
	SHOW_SPRITES;

}

void load_new_tile(UBYTE sprite_pos, UBYTE tile_pos){
	set_sprite_tile(sprite_pos,tile_pos);
	set_sprite_prop(sprite_pos,0x0);
}

//The following functions are a lot more readible than the functions
//they call.
void flip_sprite_horizontally(UBYTE sprite_pos){
	set_sprite_prop(sprite_pos,0x20);
}
void flip_sprite_vertically(UBYTE sprite_pos){
	set_sprite_prop(sprite_pos,0x40);
}

void reset_sprite(UBYTE sprite_pos){
	set_sprite_prop(sprite_pos,0);
}
