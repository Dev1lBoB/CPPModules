#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class	Weapon
{
	public:
		Weapon(std::string weapon);
		Weapon();
		~Weapon();
		void	setType(std::string Type);
		const std::string &getType();
	private:
		std::string	type;
};
#endif
