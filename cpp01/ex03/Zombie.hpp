#include <iostream>

class Zombie
{
	public:
		void	announce();
		void	set_type(std::string Type);
		void	set_name(std::string Namee);
	private:
		std::string name;
		std::string type;
};
