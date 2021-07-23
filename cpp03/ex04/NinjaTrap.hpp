#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	NinjaTrap: public virtual ClapTrap
{
	public:
		virtual int		rangedAttack(std::string const &);
		int		meleeAttack(std::string const &);
		void	takeDamage(unsigned int);
		void	beRepaired(unsigned int);
		void	ninjaShoebox(NinjaTrap &);
		void	ninjaShoebox(FragTrap &);
		void	ninjaShoebox(ScavTrap &);
		NinjaTrap &operator=(NinjaTrap const &);
		NinjaTrap(std::string);
		NinjaTrap(std::string, void *);
		NinjaTrap(NinjaTrap const &);
		~NinjaTrap();
	protected:
		NinjaTrap();
};

std::ostream &operator<<(std::ostream &out, NinjaTrap &);
#endif
