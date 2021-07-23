#include "Brain.hpp"

class	Human
{
	public:
		std::string identify();
		Brain		&getBrain();
	private:
		Brain brain;
};
