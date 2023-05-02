#pragma once
#include "Weapon.h"
#include "Shield.h"
#include <vector>
class Inventory
{
private:
	vector<Item*> Items;
public:
	Inventory();
	void addItem(Item* item);
	void PrintAllItems();
};

