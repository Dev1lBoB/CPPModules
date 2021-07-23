#include "IMateriaSource.hpp"
#include "Character.hpp"

class MateriaSource: public IMateriaSource
{
	public:
		~MateriaSource();
		MateriaSource();
		MateriaSource &operator=(MateriaSource const &);
		MateriaSource(MateriaSource const &);
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
	private:
		int size;
		int const static max_size = 4;
		t_materia *materia;
};
