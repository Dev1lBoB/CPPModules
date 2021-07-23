#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	materia = 0;
	size = 0;
}

static void push_back(t_materia **materia, t_materia *mat)
{
	t_materia *tmp;
	t_materia *tmp2;

	tmp = *materia;
	tmp2 = new t_materia;
	tmp2->materia = mat->materia;
	tmp2->next = 0;
	if (tmp == 0)
	{
		tmp = tmp2;
		return ;
	}
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = tmp2;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &ch)
{
	t_materia *tmp;
	if (size != 0)
	{
		while (materia)
		{
			tmp = materia->next;
			delete materia->materia;
			delete materia;
			materia = tmp;
		}
	}
	materia = 0;
	while (ch.materia)
		push_back(&materia, ch.materia);
	return *this;
}

MateriaSource::MateriaSource(MateriaSource const &ch)
{
	*this = ch;
}
MateriaSource::~MateriaSource()
{
	t_materia *tmp;
	if (size != 0)
	{
		while (materia)
		{
			tmp = materia->next;
			delete materia;
			materia = tmp;
		}
	}
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (size == max_size)
		return ;
	t_materia *tmp = new t_materia;
	tmp->materia = m;
	tmp->next = 0;
	if (!materia)
	{
		materia = tmp;
		++size;
		return ;
	}
	t_materia *tmp2 = materia;
	while (tmp2->next)
		tmp2 = tmp2->next;
	tmp2->next = tmp;
	++size;
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	t_materia *tmp = materia;
	while (tmp)
	{
		if (tmp->materia->getType() == type)
		{
			AMateria *nu = tmp->materia->clone();
			return (nu);
		}
		tmp = tmp->next;
	}
	return 0;
}
