#include "Item.h"
#include "Hero.h"
Item::Item(string name)
{
	this->name = name;
}

string Item::ToString()
{
	return this->name;
}

void Item::use(Hero* hero)
{
	
}
