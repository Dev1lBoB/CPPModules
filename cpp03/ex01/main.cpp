#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	FragTrap a("kek");
	FragTrap b = FragTrap("lol");	
	ScavTrap c("rofl");
	ScavTrap d = ScavTrap("lmao");	
	std::srand (std::time (0));
	a.rangedAttack("rofl");
	b.meleeAttack("lmao");
	c.rangedAttack("lol");
	d.meleeAttack("kek");
	a.takeDamage(60);
	a.takeDamage(50);
	c.takeDamage(80);
	c.takeDamage(30);
	a.takeDamage(30);
	a.beRepaired(30);
	a.beRepaired(30);
	a.beRepaired(70);
	a.vaulthunter_dot_exe("lmao");
	b.vaulthunter_dot_exe("rofl");
	c.challengeNewcomer("lol");
	d.challengeNewcomer("kek");
	a.vaulthunter_dot_exe("rofl");
	c.challengeNewcomer("kek");
}
