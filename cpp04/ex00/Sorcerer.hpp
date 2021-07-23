#include <iostream>
#include "Peon.hpp"
#include "Murloc.hpp"

class Sorcerer
{
	public:
		Sorcerer(std::string, std::string);
		Sorcerer(Sorcerer const &);
		Sorcerer &operator=(Sorcerer const &);
		~Sorcerer();
		std::string getName();
		std::string getTitle();
		void polymorph(Victim const &);
	private:
		Sorcerer();
		std::string name;
		std::string title;
};

std::ostream &operator<<(std::ostream &, Sorcerer &);
