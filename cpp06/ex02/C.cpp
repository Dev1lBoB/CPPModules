#include "C.hpp"

C::C(){}

C::C(C const &a)
{
	*this = a;
}

C &C::operator=(C const &a)
{
	(void)a;
	return *this;
}

C::~C(){};
