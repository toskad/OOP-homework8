#pragma once
#include "Item.h"
class Shield : public Item
{
private:
	int damageResist;
public:
	Shield(string name, int damageResist);
	string ToString();
	void use(Hero* hero);
};

