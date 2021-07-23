#include "Character.hpp"

Character::Character(){}

Character::Character(std::string const &Name)
{
	name = Name;
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

Character &Character::operator=(Character const &ch)
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
	tmp = ch.materia;
	t_materia *newbee;

	while (tmp)
	{
		newbee = new t_materia;
		newbee->materia = tmp->materia->clone();
		push_back(&materia, newbee);
		tmp = tmp->next;
	}
	return *this;
}

Character::Character(Character const &ch)
{
	*this = ch;
}
Character::~Character()
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

std::string const &Character::getName() const
{
	return name;
}

void Character::equip(AMateria *m)
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

void Character::unequip(int idx)
{
	if (size == 0 || idx > size - 1)
		return ;
	if (size == 0)
	{
		delete materia;
		materia = 0;
		return ;
	}
	t_materia *tmp = materia;
	t_materia *tmp2;
	for (int i = 1; i < idx; i++)
		tmp = tmp->next;
	tmp2 = tmp->next->next;
	delete tmp->next;
	tmp->next = tmp2;
	--size;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx > size - 1 || size == 0)
		return ;
	t_materia *tmp = materia;
	while (idx--)
		tmp = tmp->next;
	tmp->materia->use(target);
}
