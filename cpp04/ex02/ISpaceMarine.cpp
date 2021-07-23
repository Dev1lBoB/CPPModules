#include "ISpaceMarine.hpp"

ISpaceMarine::ISpaceMarine(){}

ISpaceMarine &ISpaceMarine::operator=(ISpaceMarine const &isc)
{
	(void)isc;
	return *this;
}

ISpaceMarine::ISpaceMarine(ISpaceMarine const &isc)
{
	*this = isc;
}
