#include <iostream>
#include "Hero.h"
int main()
{
	Hero* h = new Hero();
	Inventory* i = new Inventory(h);

	Weapon* sword = new Weapon("Sword of lich king", 200);
	Weapon* dagger = new Weapon("Dagger of blood witch", 100);

	Shield* shield1 = new Shield("Shield of prince Artemis", 50);
	Shield* shield2 = new Shield("Shield of god of war", 75);

	i->addItem(sword);
	i->addItem(dagger);
	i->addItem(shield1);
	i->addItem(shield2);

	i->PrintAllItems();

	i->useItem(1);
	i->useItem(2);
}
