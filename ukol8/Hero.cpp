
#include "Hero.h"

Hero::Hero()
{
	this->weapon = nullptr;
	this->shield = nullptr;
}

void Hero::equipWeapon(Weapon* weapon)
{
	this->weapon = weapon;
}

void Hero::equipShield(Shield* shield)
{
	this->shield = shield;
}

Weapon* Hero::getWeapon()
{
	return this->weapon;
}

Shield* Hero::getShield()
{
	return this->shield;
}
