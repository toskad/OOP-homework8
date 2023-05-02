#include <iostream>
#include "Hero.h"
int main()
{
	Hero* h = new Hero();

	Weapon* sword = new Weapon("Sword of lich king", 200);
	Weapon* dagger = new Weapon("Dagger of blood witch", 100);

	Shield* shield1 = new Shield("Shield of prince Artemis", 50);
	Shield* shield2 = new Shield("Shield of god of war", 75);

	h->GetInventory()->addItem(sword);
	h->GetInventory()->addItem(dagger);
	h->GetInventory()->addItem(shield1);
	h->GetInventory()->addItem(shield2);

	h->GetInventory()->PrintAllItems();
	
}
