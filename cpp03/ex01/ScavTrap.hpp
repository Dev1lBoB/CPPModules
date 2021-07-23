#include <iostream>

class	ScavTrap
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
		int	 hp;
		static const size_t max_hp = 100;
		int	 ep;
		static const size_t max_ep = 50;
		size_t lvl;
		std::string name;
		static const size_t m_ad = 20;
		static const size_t r_ad = 15;
		static const size_t armor = 3;
};
