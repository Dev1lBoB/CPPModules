#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class	FragTrap: public virtual ClapTrap
{
	public:
		int		rangedAttack(std::string const &);
		int		meleeAttack(std::string const &);
		void	takeDamage(unsigned int);
		void	beRepaired(unsigned int);
		FragTrap &operator=(FragTrap const &);
		int vaulthunter_dot_exe(std::string const &);
		FragTrap(std::string);
		FragTrap(FragTrap const &);
		FragTrap(std::string, void *);
		~FragTrap();
	protected:
		FragTrap();
};

std::ostream &operator<<(std::ostream &out, FragTrap &Trap);
#endif
