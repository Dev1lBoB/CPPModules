#include "FragTrap.hpp"

int		main(void)
{
	FragTrap a("kek");
	FragTrap b = FragTrap("lol");	
	std::srand (std::time (0));
	a.rangedAttack("lol");
	b.meleeAttack("kek");
	a.takeDamage(30);
	a.takeDamage(30);
	a.takeDamage(30);
	a.takeDamage(30);
	a.takeDamage(30);
	a.beRepaired(30);
	a.beRepaired(30);
	a.beRepaired(70);
	a.vaulthunter_dot_exe("lol");
	a.vaulthunter_dot_exe("lol");
	a.vaulthunter_dot_exe("lol");
	a.vaulthunter_dot_exe("lol");
	a.vaulthunter_dot_exe("lol");
	b.vaulthunter_dot_exe("kek");
	b.vaulthunter_dot_exe("kek");
}
