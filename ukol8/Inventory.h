#pragma once
#include "Weapon.h"
#include "Shield.h"
#include <vector>
class Inventory
{
private:
	vector<Item*> Items;
	Hero* hero;
public:
	Inventory(Hero* hero);
	void addItem(Item* item);
	void PrintAllItems();
	void useItem(int index);
};

