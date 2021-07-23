#include "Ice.hpp"

Ice::Ice():AMateria("ice")
{
}

Ice &Ice::operator=(Ice const &materia)
{
	xp = materia.xp;
	return *this;
}

Ice::Ice(Ice const &materia)
{
	*this = materia;
}

Ice::~Ice()
{}

void Ice::use(ICharacter &target)
{
	xp += 10;
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria *Ice::clone() const
{
	AMateria *nu = new Ice();
	nu->setXP(xp);
	return nu;
}
