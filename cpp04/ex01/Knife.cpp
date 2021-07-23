#include "Knife.hpp"

Knife::Knife(void):AWeapon("Knife", 0, 10)
{}

Knife::~Knife(){}

Knife::Knife(Knife const &weapon)
{
	*this = weapon;
}

Knife &Knife::operator=(Knife const &weapon)
{
	name = weapon.getName();
	cost = weapon.getAPCost();
	dmg = weapon.getDamage();
	return *this;
}

void Knife::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
