#include <iostream>

class	FragTrap
{
	public:
		void rangedAttack(std::string const &);
		void meleeAttack(std::string const &);
		void takeDamage(unsigned int);
		void beRepaired(unsigned int);
		void vaulthunter_dot_exe(std::string const &);
		FragTrap(std::string);
		FragTrap(FragTrap const &);
		FragTrap &operator=(FragTrap&);
		~FragTrap();
	private:
		FragTrap();
		int	 hp;
		static const size_t max_hp = 100;
		int	 ep;
		static const size_t max_ep = 100;
		size_t lvl;
		std::string name;
		static const size_t m_ad = 30;
		static const size_t r_ad = 20;
		static const size_t armor = 5;
};
