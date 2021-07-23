#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria(std::string const &);
		AMateria(AMateria const &);
		AMateria &operator=(AMateria const &);
		virtual ~AMateria();
		std::string const & getType() const;
		unsigned int getXP() const;
		void setXP(unsigned int);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
	protected:
		AMateria();
		unsigned int xp;
		std::string type;
};
#endif
