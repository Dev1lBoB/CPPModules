#include "Base.hpp"

class C: public Base
{
	public:
		C();
		C(C const &);
		C &operator=(C const &);
		~C();
};
