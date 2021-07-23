#include "PowerFist.hpp"

PowerFist::PowerFist(void):AWeapon("Power Fist", 8, 50)
{}

PowerFist::~PowerFist(){}

PowerFist::PowerFist(PowerFist const &weapon)
{
	*this = weapon;
}

PowerFist &PowerFist::operator=(PowerFist const &weapon)
{
	name = weapon.getName();
	cost = weapon.getAPCost();
	dmg = weapon.getDamage();
	return *this;
}

void PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
