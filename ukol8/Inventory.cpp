
#include "Inventory.h"
#include <iostream>

using namespace std;

Inventory::Inventory(Hero* hero)
{
	this->hero = hero;
}

void Inventory::addItem(Item* item)
{
	this->Items.push_back(item);
}

void Inventory::PrintAllItems()
{
	cout << "Items:" << endl << endl;
	for (int i = 0; i < this->Items.size(); i++) {
		cout << (i+1) << ") " << this->Items[i]->ToString() << endl;
	}
}

void Inventory::useItem(int index)
{
	this->Items[index]->use(this->hero);
}
