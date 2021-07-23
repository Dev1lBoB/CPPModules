#include "AWeapon.hpp"

AWeapon::AWeapon(void){}

AWeapon::AWeapon(std::string const &Name, int Cost, int Dmg)
{
	name = Name;
	cost = Cost;
	dmg = Dmg;
}

AWeapon::~AWeapon(){}

AWeapon::AWeapon(AWeapon const &weapon)
{
	*this = weapon;
}

AWeapon &AWeapon::operator=(AWeapon const &weapon)
{
	name = weapon.name;
	cost = weapon.cost;
	dmg = weapon.dmg;
	return *this;
}

std::string AWeapon::getName(void) const
{
	return name;
}

int AWeapon::getAPCost(void) const
{
	return cost;
}

int AWeapon::getDamage(void) const
{
	return dmg;
}
