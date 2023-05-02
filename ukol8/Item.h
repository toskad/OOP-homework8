#pragma once
#include <string>

using namespace std;

class Item
{
private:
	string name;
public:
	Item(string name);
	virtual string ToString();
};

