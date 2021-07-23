#include "ISquad.hpp"

ISquad::ISquad(){}

ISquad &ISquad::operator=(ISquad const &isc)
{
	(void)isc;
	return *this;
}

ISquad::ISquad(ISquad const &isc)
{
	*this = isc;
}
