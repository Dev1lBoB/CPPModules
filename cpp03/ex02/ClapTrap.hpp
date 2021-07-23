#include <iostream>
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
class	ClapTrap
{
	public:
		virtual void rangedAttack(std::string const &) = 0;
		virtual void meleeAttack(std::string const &) = 0;
		virtual	void takeDamage(unsigned int) = 0;
		virtual void beRepaired(unsigned int) = 0;
		ClapTrap();
		ClapTrap(std::string, int, size_t, int, size_t, size_t, size_t, size_t, size_t);
		ClapTrap(ClapTrap const &);
		ClapTrap &operator=(ClapTrap&);
		virtual ~ClapTrap();
	protected:
		int	 hp;
		size_t max_hp;
		int	 ep;
		size_t max_ep;
		size_t lvl;
		std::string name;
		size_t m_ad;
		size_t r_ad;
		size_t armor;
};
#endif
