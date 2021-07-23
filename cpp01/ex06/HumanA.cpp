#include "HumanA.hpp"

HumanA::HumanA(std::string Name, Weapon &Weapon): weapon(Weapon), name(Name)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << name << " kindly touches with his " << weapon.getType() << std::endl;
}
