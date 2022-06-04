#include "enemy.h"
#include "character.h"
#include <cstdlib>

enemy::enemy() {
	hp = 100;
	damage = 5;
}

void enemy::attack() {
	damage = rand() % 10 + 1;
	character::hp -= damage;
}