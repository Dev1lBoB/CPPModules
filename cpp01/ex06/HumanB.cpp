#include "HumanB.hpp"

HumanB::HumanB(std::string Name): name(Name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &Weapon)
{
	weapon = &Weapon;
}

void	HumanB::attack()
{
	std::cout << name << " kindly touches with his " << weapon->getType() << std::endl;
}
