#include "Zombie.hpp"

void	Zombie::announce()
{
	std::cout << name << " (" << type << "): " << "Greetings! Can I have a little bite on your brain, please?" << std::endl;
}

void	Zombie::set_type(std::string Type)
{
	type = Type;
}

void	Zombie::set_name(std::string Name)
{
	name = Name;
}
