#include <iostream>
#include <sstream> 
#include <string>


class	Brain
{
	public:
		std::string	identify();
		size_t		getIq();
		size_t		getSize();
	private:
		size_t iq;
		size_t size;
		
};
