#include "Victim.hpp"

Victim::Victim()
{
	name = "Default";
}

Victim::Victim(std::string Name)
{
	std::cout << "Some random victim called " << Name << " just appeared!" << std::endl;
	name = Name;
}

Victim::~Victim()
{
	std::cout << "Victim " << name << " just died for no apparent reason!" << std::endl;
}

Victim::Victim(Victim const &vica)
{
	*this = vica;
}

Victim &Victim::operator=(Victim const &vica)
{
	name = vica.name;
	return *this;
}

std::string Victim::getName(void)
{
	return (name);
}

void Victim::getPolymorphed(void) const
{
	std::cout << name << " has benn turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &out, Victim &vica)
{
	out << "I'm " << vica.getName() << " and I like otters!" << std::endl;
	return (out);
}
