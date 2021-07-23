#include "Human.hpp"

std::string	Human::identify(void)
{
	return (brain.identify());
}

Brain &Human::getBrain(void)
{
	return (brain);
}
