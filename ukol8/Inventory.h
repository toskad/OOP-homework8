#pragma once
#include <vector>
#include "Item.h"
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

