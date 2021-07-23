#include "AMateria.hpp"

AMateria::AMateria()
{
	xp = 0;
}

AMateria::AMateria(std::string const &Type)
{
	type = Type;
	xp = 0;
}

AMateria &AMateria::operator=(AMateria const &materia)
{
	type = materia.type;
	xp = materia.xp;
	return *this;
}

AMateria::AMateria(AMateria const &materia)
{
	*this = materia;
}

AMateria::~AMateria(){}

void AMateria::use(ICharacter &target)
{
	xp += 10;
	target.getName();
}

unsigned int AMateria::getXP(void) const
{
	return xp;
}

void AMateria::setXP(unsigned int Xp)
{
	xp = Xp;
}

std::string const &AMateria::getType(void) const
{
	return type;
}
