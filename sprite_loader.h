#ifndef sprite_loader_h
#define sprite_loader_h

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


#endif sprite_loader_h