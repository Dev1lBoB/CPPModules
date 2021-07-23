#include <iostream>
#include "AWeapon.hpp"

class Knife: public AWeapon
{
	public:
		Knife();
		Knife(Knife const &);
		Knife &operator=(Knife const &);
		~Knife();
		void attack() const;
};
