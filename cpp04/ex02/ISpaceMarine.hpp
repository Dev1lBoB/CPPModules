#ifndef ISPACEMARINE_HPP
#define ISPACEMARINE_HPP
#include <iostream>

class ISpaceMarine
{
	public:
		ISpaceMarine();
		ISpaceMarine(ISpaceMarine const &);
		ISpaceMarine &operator=(ISpaceMarine const &);
		virtual ~ISpaceMarine() {}
		virtual ISpaceMarine* clone() const = 0;
		virtual void battleCry() const = 0;
		virtual void rangedAttack() const = 0;
		virtual void meleeAttack() const = 0;
};

#endif
