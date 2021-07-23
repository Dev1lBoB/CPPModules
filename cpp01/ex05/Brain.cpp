#include "Brain.hpp"

std::string	Brain::identify(void)
{
	std::ostringstream address;
	address << this;
	return (address.str());
}

size_t		Brain::getIq()
{
	return iq;
}

size_t		Brain::getSize()
{
	return size;
}
