#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	hp = 100;
	ep = 100;
	lvl = 1;
	name = "FragTrap";
}

FragTrap::FragTrap(std::string Name):ClapTrap(Name, 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::cout << "A " << Name << " was born! But he already wants to die..." << std::endl; 
}

FragTrap::~FragTrap()
{
	std::cout << "Finally... a peaceful death for " << name << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &Trap)
{
	hp = Trap.hp;
	ep = Trap.ep;
	lvl = Trap.lvl;
	name = Trap.name;
	return *this;
}

FragTrap::FragTrap(FragTrap const &Trap)
{
	*this = Trap;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	hp -= amount - armor;
	if (hp < 0)
		hp = 0;
	std::cout << name << " takes " << amount - armor << " points of dmg! " << hp << " hp left!" << std::endl;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << name << " shouting out loud at " << target << " dealing " << r_ad << " brain damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << name << " kindly touches " << target << " dealing " << m_ad << " brain damage!" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	hp += amount;
	if ((const size_t)hp > max_hp)
		hp = max_hp;
	std::cout << name << " sets his finger and restores " << amount << " health points! " << hp << " hp left!" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string lines[] = {" uses gydropump(?!) at ", " uses swear words at ", " slaps with his imagination ", " sings very badly to ", " uses sneaky attack from the front at "};
	int		dmg[] = {30, 15, 5, 15, 25};
	if (ep < 25)
	{
		std::cout << "Not enough energy... for " << name << " to attack. How sad!" << std::endl;
		return ;
	}
	ep -= 25;
	if (ep < 0)
		ep = 0;
	int i = rand() % 5;
	std::cout << name << lines[i] << target << " dealing " << dmg[i] << " brain damage!" << std::endl;
}
