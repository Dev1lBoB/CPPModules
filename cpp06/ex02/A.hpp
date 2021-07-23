#include "Base.hpp"

class A: public Base
{
	public:
		A();
		A(A const &);
		A &operator=(A const &);
		~A();
};
