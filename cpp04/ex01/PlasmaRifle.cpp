#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void):AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::~PlasmaRifle()
{}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &weapon)
{
	*this = weapon;
}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &weapon)
{
	name = weapon.getName();
	cost = weapon.getAPCost();
	dmg = weapon.getDamage();
	return *this;
}

void PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
