#ifndef sprite_util_h
#define sprite_util_h

#include <gb/gb.h>
#define PLAYER_SPRITE "Athais"
#define P_SPRITE_POS = 0
#define E_1_POS = 1
#define E_2_POS = 2
#define E_3_POS = 3
#define E_4_POS = 4
#define E_5_POS = 5


typedef enum enemy_type {
	ONE,TWO,THREE,FOUR,FIVE
} enemy_type;

void set_up_sprites();
void flip_sprite_horizontally(UBYTE sprite_pos);
void flip_sprite_vertically(UBYTE sprite_pos);
void reset_sprite(UBYTE sprite_pos);
void load_new_tile(UBYTE sprite_pos, UBYTE tile_pos);



#endif sprite_util_h