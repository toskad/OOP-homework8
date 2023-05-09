#pragma once
class Weapon;
class Shield;

class Hero
{
private:
	Weapon* weapon;
	Shield* shield;
public:
	Hero();
	void equipWeapon(Weapon* weapon);
	void equipShield(Shield* shield);
	Weapon* getWeapon();
	Shield* getShield();
};
