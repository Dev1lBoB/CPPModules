#include "Cure.hpp"

Cure::Cure():AMateria("cure")
{
}

Cure &Cure::operator=(Cure const &materia)
{
	xp = materia.xp;
	return *this;
}

Cure::Cure(Cure const &materia)
{
	*this = materia;
}

Cure::~Cure()
{}

void Cure::use(ICharacter &target)
{
	xp += 10;
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria *Cure::clone() const
{
	AMateria *nu = new Cure();
	nu->setXP(xp);
	return nu;
}
