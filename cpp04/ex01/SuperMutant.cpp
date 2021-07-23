#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void):Enemy(170, "SuperMutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &enemy)
{
	*this = enemy;
}

SuperMutant &SuperMutant::operator=(SuperMutant const &enemy)
{
	type = enemy.type;
	hp = enemy.hp;
	return *this;
}

void SuperMutant::takeDamage(int dmg)
{
	if (dmg <= 3)
		return ;
	hp -= dmg - 3;
	if (hp <= 0)
		delete this;
}
