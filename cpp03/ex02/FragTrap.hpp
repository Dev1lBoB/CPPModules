#include <iostream>
#include "ClapTrap.hpp"

class	FragTrap: public ClapTrap
{
	public:
		void	rangedAttack(std::string const &);
		void	meleeAttack(std::string const &);
		void	takeDamage(unsigned int);
		void	beRepaired(unsigned int);
		FragTrap &operator=(FragTrap const &);
		void vaulthunter_dot_exe(std::string const &);
		FragTrap(std::string);
		FragTrap(FragTrap const &);
		~FragTrap();
	private:
		FragTrap();
};
