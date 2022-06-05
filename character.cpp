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

void character::make_invincible() {
	invincibility = 1;
	invtime = 3;
}

void character::heal() {
	Random^ rnd = gcnew Random();
	hp += rnd->Next(30) + 1;
}