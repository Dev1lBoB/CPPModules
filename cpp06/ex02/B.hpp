#include "Base.hpp"

class B: public Base
{
	public:
		B();
		B(B const &);
		B &operator=(B const &);
		~B();
};
