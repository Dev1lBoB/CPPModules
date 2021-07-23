#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	hp = 100;
	ep = 50	;
	lvl = 1;
	name = "ScavTrap";
}

ScavTrap::ScavTrap(std::string Name):ClapTrap(Name, 100, 100, 50, 50, 1, 20, 15, 3)
{
	std::cout << "A " << Name << " has arrived! But how?" << std::endl; 
}

ScavTrap::ScavTrap(ScavTrap const &Trap)
{
	hp = Trap.hp;
	ep = Trap.ep;
	lvl = Trap.lvl;
	name = Trap.name;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Finally... " << name << " went into TrapHeaven " << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap &Trap)
{
	hp = Trap.hp;
	ep = Trap.ep;
	lvl = Trap.lvl;
	name = Trap.name;
	return *this;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << name << " throws teftels at " << target << " dealing " << r_ad << " brain damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << name << " smashes with his huge bolt " << target << " dealing " << m_ad << " brain damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	hp -= amount - armor;
	if (hp < 0)
		hp = 0;
	std::cout << name << " takes " << amount - armor << " points of dmg! " << hp << " hp left!" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	hp += amount;
	if ((const size_t)hp > max_hp)
		hp = max_hp;
	std::cout << name << " drinks estus and restores " << amount << " health points! " << hp << " hp left!" << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string lines[] = {" not to think about Traps ", " with Ice Bucket Challenge ", " to spit over his back ", " with a rap battle ", " not to breathe for 5 minutes "};
	int		dmg[] = {30, 5, 15, 15, 20};
	if (ep < 25)
	{
		std::cout << "Not enough energy... for " << name << " to challenge. Thanks God!" << std::endl;
		return ;
	}
	ep -= 25;
	if (ep < 0)
		ep = 0;
	int i = rand() % 5;
	std::cout << name << " challenges " << target << lines[i] << "dealing " << dmg[i] << " brain damage!" << std::endl;
	

}
