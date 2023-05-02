#pragma once
#include "Item.h"
class Weapon : public Item
{
private:
	int bonusDamage;
public:
	Weapon(string name, int bonusDamage);
	string ToString();
};

