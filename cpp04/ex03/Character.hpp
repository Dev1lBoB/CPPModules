#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"

#ifndef S_MATERIA
#define S_MATERIA
typedef struct s_materia
{
	s_materia *next;
	AMateria *materia;
}			   t_materia;
#endif
class Character: public ICharacter
{
	public:
		~Character();
		Character(std::string const &);
		Character &operator=(Character const &);
		Character(Character const &);
		std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
	private:
		Character();
		std::string name;
		t_materia *materia;
		int	size;
		int const static max_size = 4;
};
#endif
