#include <iostream>
#include "ClapTrap.hpp"

class	FragTrap: public ClapTrap
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
		~FragTrap();
	private:
		FragTrap();
};

std::ostream &operator<<(std::ostream &out, FragTrap &Trap);
