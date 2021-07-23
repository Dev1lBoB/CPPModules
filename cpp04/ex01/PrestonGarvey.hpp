#include <iostream>
#include "Enemy.hpp"

class PrestonGarvey: public Enemy
{
	public:
		PrestonGarvey();
		PrestonGarvey(PrestonGarvey const &);
		PrestonGarvey &operator=(PrestonGarvey const &);
		~PrestonGarvey();
		void takeDamage(int);
};
