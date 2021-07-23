#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	setType(type);
}

Weapon::Weapon(void)
{
}

Weapon::~Weapon(void)
{
}

void	Weapon::setType(std::string Type)
{
	type = Type;
}

const std::string	&Weapon::getType(void)
{
	std::string &ref = type;
	return (type);
}
