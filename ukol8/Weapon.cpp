#include "Weapon.h"
#include <iostream>

using namespace std;

Weapon::Weapon(string name, int bonusDamage) : Item(name)
{
	this->bonusDamage = bonusDamage;
}

string Weapon::ToString()
{
	return (Item::ToString() + "\ndeal " + to_string(this->bonusDamage) + " damage\n");
}
