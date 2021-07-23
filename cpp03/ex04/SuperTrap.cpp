#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	hp = 100;
	ep = 100;
	lvl = 1;
	name = "SuperTrap";
}

SuperTrap::SuperTrap(std::string Name):FragTrap(Name, NULL), NinjaTrap(Name, NULL)
{
	r_ad = NinjaTrap::r_ad;
	name = FragTrap::name;
	std::cout << "The fusion is comlete! " << Name << " was born! Behold!" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << name << " is dead... Impossible!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, SuperTrap &Trap)
{
	out << Trap.getName();
	return (out);
}

SuperTrap &SuperTrap::operator=(SuperTrap const &Trap)
{
	hp = Trap.hp;
	ep = Trap.ep;
	lvl = Trap.lvl;
	name = Trap.name;
	return *this;
}

SuperTrap::SuperTrap(SuperTrap const &Trap)
{
	*this = Trap;
}

void	SuperTrap::takeDamage(unsigned int amount)
{
	FragTrap::takeDamage(amount);
}

int	SuperTrap::rangedAttack(std::string const & target)
{
	return (FragTrap::rangedAttack(target));
}

int	SuperTrap::meleeAttack(std::string const & target)
{
	return (NinjaTrap::meleeAttack(target));
}

void	SuperTrap::beRepaired(unsigned int amount)
{
	NinjaTrap::beRepaired(amount);
}
