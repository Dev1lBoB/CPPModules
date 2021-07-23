#include "B.hpp"

B::B(){}

B::B(B const &a)
{
	*this = a;
}

B &B::operator=(B const &a)
{
	(void)a;
	return *this;
}

B::~B(){};
