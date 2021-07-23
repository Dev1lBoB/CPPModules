#include <iostream>

class	Pony
{
	public:
		std::string	get_color();
		std::string	get_colour();
		std::string	get_gender();
		size_t	get_age();
	private:
		std::string	colour;
		std::string	color;
		std::string	gender;
		size_t		age;
};
