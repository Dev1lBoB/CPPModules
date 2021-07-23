#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Behold before new ClapTrap!" << std::endl;
}

ClapTrap::ClapTrap(std::string Name, int Hp, size_t Max_hp, int Ep, size_t Max_ep, size_t Lvl, size_t M_ad, size_t R_ad, size_t Armor)
{
	name = Name;
	hp = Hp;
	max_hp = Max_hp;
	ep = Ep;
	max_ep = Max_ep;
	lvl = Lvl;
	m_ad = M_ad;
	r_ad = R_ad;
	armor = Armor;
}

ClapTrap::ClapTrap(ClapTrap const &Trap)
{
	name = Trap.name;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Finally ClapTrap " << name << " died... Lets hope we will never meet him again! " << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap &Trap)
{
	hp = Trap.hp;
	ep = Trap.ep;
	lvl = Trap.lvl;
	name = Trap.name;
	return *this;
}
