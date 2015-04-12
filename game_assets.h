#ifndef game_assets_h
#define game_assets_h



typedef struct Player {
	unsigned char x;
	unsigned char y;
	unsigned char sprite_pos;
	unsigned char health;
	unsigned char damage;
	//TODO: Timeout. How long it takes from when they are hit to recover.
	unsigned char current_level;
	unsigned int experience;
	unsigned char created;
	unsigned char* sprite_tiles;
} Player;

extern Player* get_current_player();

#endif game_assets_h