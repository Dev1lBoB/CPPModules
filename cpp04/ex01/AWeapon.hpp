#ifndef AWEAPON_HPP
#define AWEAPON_HPP
#include <iostream>

class AWeapon
{
	public:
		AWeapon();
		AWeapon(std::string const &, int, int);
		AWeapon(AWeapon const &);
		AWeapon &operator=(AWeapon const &);
		virtual ~AWeapon();
		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
	protected:
		std::string name;
		int cost;
		int dmg;
};
#endif
