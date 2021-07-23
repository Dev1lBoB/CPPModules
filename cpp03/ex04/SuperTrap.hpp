#include <iostream>
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class	SuperTrap: public FragTrap, public NinjaTrap
{
	public:
		int		rangedAttack(std::string const &);
		int		meleeAttack(std::string const &);
		void	takeDamage(unsigned int);
		void	beRepaired(unsigned int);
		SuperTrap &operator=(SuperTrap const &);
		SuperTrap(std::string);
		SuperTrap(SuperTrap const &);
		~SuperTrap();
	private:
		SuperTrap();
};

std::ostream &operator<<(std::ostream &out, SuperTrap &Trap);
