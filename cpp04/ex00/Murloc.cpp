#include "Murloc.hpp"

Murloc::Murloc()
{
	name = "Default";
}

Murloc::Murloc(std::string Name):Victim(Name)
{
	std::cout << "Mrglrglrglglgl" << std::endl;
}

Murloc::~Murloc()
{
	std::cout << "Mrgll....." << std::endl;
}

Murloc::Murloc(Murloc const &vica)
{
	*this = vica;
}

Murloc &Murloc::operator=(Murloc const &vica)
{
	name = vica.name;
	return *this;
}

void Murloc::getPolymorphed(void) const
{
	std::cout << name << " has been turned into a Deathwing!" << std::endl;
}
