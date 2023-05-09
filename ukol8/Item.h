#pragma once
#include <string>
#include "Hero.h"
using namespace std;

class Item
{
private:
	string name;
public:
	Item(string name);
	virtual string ToString();
	virtual void use(Hero* hero);
};

