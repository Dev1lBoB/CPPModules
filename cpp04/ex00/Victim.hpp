#include <iostream>
#ifndef VICTIM_HPP
#define VICTIM_HPP

class Victim
{
	public:
		Victim(std::string);
		Victim(Victim const &);
		Victim &operator=(Victim const &);
		virtual ~Victim();
		std::string getName();
		virtual void getPolymorphed() const;
	protected:
		Victim();
		std::string name;
};

std::ostream &operator<<(std::ostream &, Victim &);
#endif
