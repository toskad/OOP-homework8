#include "Item.h"

Item::Item(string name)
{
	this->name = name;
}

string Item::ToString()
{
	return this->name;
}
