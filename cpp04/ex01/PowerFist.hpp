#include <iostream>
#include "AWeapon.hpp"

class PowerFist: public AWeapon
{
	public:
		PowerFist();
		PowerFist(PowerFist const &);
		PowerFist &operator=(PowerFist const &);
		~PowerFist();
		void attack() const;
};
