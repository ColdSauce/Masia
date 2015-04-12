#include "movement.h"

void move(UBYTE joypad_state, UBYTE* x, UBYTE* y) {
	if (joypad_state == J_RIGHT) {
		(*x)++;
	}
	else if (joypad_state == J_LEFT) {
		(*x)--;
	}
	else if (joypad_state == J_UP) {
		(*y)--;
	}
	else if (joypad_state == J_DOWN) {
		(*y)++;
	}
}