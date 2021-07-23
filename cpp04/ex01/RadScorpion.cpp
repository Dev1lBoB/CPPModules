#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void):Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &enemy)
{
	*this = enemy;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &enemy)
{
	type = enemy.type;
	hp = enemy.hp;
	return *this;
}
