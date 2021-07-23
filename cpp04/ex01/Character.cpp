#include "Character.hpp"

Character::Character(){}

Character::Character(std::string const &Name)
{
	name = Name;
	ap = max_ap;
	weapon = 0;
}

Character &Character::operator=(Character const &ch)
{
	name = ch.name;
	ap = ch.ap;
	weapon = ch.weapon;
	return *this;
}

Character::Character(Character const &ch)
{
	*this = ch;
}

Character::~Character(){}

std::string &Character::getName(void)
{
	return (name);
}

int &Character::getAp(void)
{
	return (ap);
}

std::string Character::getWeapon(void)
{
	if (weapon)
		return (weapon->getName());
	return ("");
}

void	Character::recoverAP()
{
	ap += 10;
	if (ap > max_ap)
		ap = max_ap;
}

void	Character::equip(AWeapon *Weapon)
{
	weapon = Weapon;
}

void	Character::attack(Enemy *enemy)
{
	if (ap <= 0)
		return ;
	if (enemy->getHP() < 1)
		return ;
	if (weapon == 0)
		return ;
	std::cout << name << " attacks " << enemy->getType() << " with a " << weapon->getName() << std::endl;
	weapon->attack();
	enemy->takeDamage(weapon->getDamage());
	ap -= weapon->getAPCost();
	if (ap <= 0)
		ap = 0;
	if (enemy->getHP() < 1)
		delete enemy;
}

std::ostream &operator<<(std::ostream &out, Character &ch)
{
	if (ch.getWeapon() != "")
		out << ch.getName() << " has " << ch.getAp() << " AP and wields a " << ch.getWeapon() << std::endl;
	else
		out << ch.getName() << " has " << ch.getAp() << " AP and is unarmed" << std::endl;
	return out;
}
