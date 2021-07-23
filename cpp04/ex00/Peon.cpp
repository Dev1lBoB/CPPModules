#include "Peon.hpp"

Peon::Peon()
{
	name = "Default";
}

Peon::Peon(std::string Name):Victim(Name)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon::Peon(Peon const &vica)
{
	*this = vica;
}

Peon &Peon::operator=(Peon const &vica)
{
	name = vica.name;
	return *this;
}

void Peon::getPolymorphed(void) const
{
	std::cout << name << " has been turned into a pink pony!" << std::endl;
}
