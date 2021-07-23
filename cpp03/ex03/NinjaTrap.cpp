#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	hp = 100;
	ep = 100;
	lvl = 1;
	name = "NinjaTrap";
}

NinjaTrap::NinjaTrap(std::string Name):ClapTrap(Name, 60, 60, 120, 120, 1, 60, 5, 0)
{
	std::cout << "In the shadows the " << Name << " was born!" << std::endl; 
}

NinjaTrap::~NinjaTrap()
{
	std::cout << name << " is not dead, he went into the shadows..." << std::endl;
}

std::ostream &operator<<(std::ostream &out, NinjaTrap &Trap)
{
	out << Trap.getName();
	return (out);
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &Trap)
{
	hp = Trap.hp;
	ep = Trap.ep;
	lvl = Trap.lvl;
	name = Trap.name;
	return *this;
}

NinjaTrap::NinjaTrap(NinjaTrap const &Trap)
{
	*this = Trap;
}

void	NinjaTrap::takeDamage(unsigned int amount)
{
	hp -= amount - armor;
	if (hp < 0)
		hp = 0;
	std::cout << name << " takes " << amount - armor << " points of dmg! " << hp << " hp left!" << std::endl;
}

int		NinjaTrap::rangedAttack(std::string const & target)
{
	std::cout << name << " tosses his 5kg shuriken at " << target << " dealing " << r_ad << " brain damage!" << std::endl;
	return (r_ad);
}

int		NinjaTrap::meleeAttack(std::string const & target)
{
	std::cout << name << " stabs 28 times " << target << " with his knife dealing " << m_ad << " brain damage!" << std::endl;
	return (m_ad);
}

void	NinjaTrap::beRepaired(unsigned int amount)
{
	hp += amount;
	if ((const size_t)hp > max_hp)
		hp = max_hp;
	std::cout << name << " eats ALL of the cheese in his inventory and restores " << amount << " health points! " << hp << " hp left!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &ninja)
{
	std::cout << "Ah, " << ninja << ", an old sneaky fool" << std::endl;
	std::cout << name << "?! Looks like you are the foolish one among us" << std::endl;
	std::cout << "no u" << std::endl;
	std::cout << "no u" << std::endl;
	std::cout << "no u" << std::endl;
	std::cout << "no u" << std::endl;
	std::cout << "no u" << std::endl;
	std::cout << "no u" << std::endl;
	std::cout << "no u" << std::endl;
	std::cout << "no u" << std::endl;
	std::cout << "no u" << std::endl;
	std::cout << "no u" << std::endl;
	std::cout << "no u" << std::endl;
	std::cout << "10 000 YEARS LATER" << std::endl;
	std::cout << "no u" << std::endl;
	std::cout << "no u" << std::endl;
	std::cout << "Ehh, lets move on" << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &Trap)
{
	std::cout << "Ah, another FragTrap... " << Trap << ", your armor is nothing against my sharp tongue!" << std::endl;
	Trap.takeDamage(rangedAttack(Trap.getName()));
	takeDamage(Trap.vaulthunter_dot_exe(name));
	beRepaired(10);
	Trap.beRepaired(10);
	Trap.takeDamage(meleeAttack(Trap.getName()));
	takeDamage(Trap.meleeAttack(name));
	Trap.takeDamage(meleeAttack(Trap.getName()));
}

void	NinjaTrap::ninjaShoebox(ScavTrap &Trap)
{
	std::cout << "Ah, look at this, a ScavTrap... " << Trap << ", your challenges are realy stupid, did you now that?" << std::endl;
	Trap.takeDamage(rangedAttack(Trap.getName()));
	takeDamage(Trap.challengeNewcomer(name));
	beRepaired(10);
	Trap.beRepaired(10);
	Trap.takeDamage(meleeAttack(Trap.getName()));
	takeDamage(Trap.meleeAttack(name));
	Trap.takeDamage(meleeAttack(Trap.getName()));

}
