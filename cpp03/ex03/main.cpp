#include "NinjaTrap.hpp"

int		main(void)
{
	std::srand(std::time(0));
	NinjaTrap a("kek");
	NinjaTrap b("lol");
	FragTrap  c("rofl");
	ScavTrap  d("lmao");

	a.ninjaShoebox(b);
	a.beRepaired(15);
	a.ninjaShoebox(c);
	a.beRepaired(15);
	a.ninjaShoebox(d);
	a.beRepaired(15);
}
