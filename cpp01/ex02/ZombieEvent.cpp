#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(Zombie *zomb, std::string type)
{
	zomb->set_type(type);
}

Zombie*	ZombieEvent::newZombie(std::string Name)
{
	Zombie* zombie = new Zombie;
	
	zombie->set_name(Name);
	zombie->set_type("jentleman");
	return (zombie);
}
