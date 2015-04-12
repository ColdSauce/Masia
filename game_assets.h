#ifndef game_assets_h
#define game_assets_h

#define PLAYER_LOOKING_RIGHT 0
#define PLAYER_LOOKING_DOWN 1

unsigned char player_tiles[] = {
	//Bird looking right
	0x00, 0x00, 0x1C, 0x1C,
	0xAA, 0xB2, 0xCD, 0xF3,
	0xE2, 0xFE, 0x9C, 0x9C,
	0x00, 0x00, 0x00, 0x00,
	
	//Bird looking down.
	0x3C, 0x3C, 0x18, 0x18,
	0x14, 0x1C, 0x22, 0x3E,
	0x2E, 0x32, 0x2A, 0x32,
	0x14, 0x1C, 0x08, 0x08
};


typedef enum {
	NORTH = 0, SOUTH = 1, EAST = 2, WEST = 3
} Direction;

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
	Direction direction;


} Player;

extern Player* get_current_player();

#endif game_assets_h