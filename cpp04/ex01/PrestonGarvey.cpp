#include "PrestonGarvey.hpp"

PrestonGarvey::PrestonGarvey(void):Enemy(2000, "PrestonGarvey")
{
	std::cout << "Minuteman need your help!" << std::endl;
}

PrestonGarvey::~PrestonGarvey()
{
	std::cout << "Ouch(!)" << std::endl;
}

PrestonGarvey::PrestonGarvey(PrestonGarvey const &enemy)
{
	*this = enemy;
}

PrestonGarvey &PrestonGarvey::operator=(PrestonGarvey const &enemy)
{
	type = enemy.type;
	hp = enemy.hp;
	return *this;
}

void PrestonGarvey::takeDamage(int dmg)
{
	if (dmg <= 50)
		return ;
	hp -= dmg - 50;
	if (hp <= 0)
		delete this;
}
