#include "character.h"
#include "enemy.h"
#include <cstdlib>

character::character() {
	hp = 100;
	damage = 5;
}

void character::attack() {
	damage = rand() % 10 + 1;
	enemy::hp -= damage;
}