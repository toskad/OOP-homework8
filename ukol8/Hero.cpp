
#include "Hero.h"

Hero::Hero()
{
	this->inventory = new Inventory();
}

Inventory* Hero::GetInventory()
{
	return this->inventory;
}
