#include "Zombie.hpp"

class	ZombieEvent
{
	public:
		void	setZombieType(Zombie *zomb, std::string type);
		Zombie* newZombie(std::string name);
};
