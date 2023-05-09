#include "Shield.h"

Shield::Shield(string name, int damageResist) : Item(name)
{
	this->damageResist = damageResist;
}

string Shield::ToString()
{
	return (Item::ToString() + "\nresist " + to_string(this->damageResist) + " damage\n");
}

void Shield::use(Hero* hero)
{
	hero->equipShield(this);
}
