#include <iostream>
#include "ClapTrap.hpp"

class	ScavTrap: public ClapTrap
{
	public:
		int rangedAttack(std::string const &);
		int meleeAttack(std::string const &);
		void takeDamage(unsigned int);
		void beRepaired(unsigned int);
		int challengeNewcomer(std::string const &);
		ScavTrap(std::string);
		ScavTrap(ScavTrap const &);
		ScavTrap &operator=(ScavTrap&);
		~ScavTrap();
	private:
		ScavTrap();
};

std::ostream &operator<<(std::ostream &, ScavTrap &);
