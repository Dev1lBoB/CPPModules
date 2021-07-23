#include <iostream>
#include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap
{
	public:
		void rangedAttack(std::string const &);
		void meleeAttack(std::string const &);
		void takeDamage(unsigned int);
		void beRepaired(unsigned int);
		void challengeNewcomer(std::string const &);
		ScavTrap(std::string);
		ScavTrap(ScavTrap const &);
		ScavTrap &operator=(ScavTrap&);
		~ScavTrap();
	private:
		ScavTrap();
};
