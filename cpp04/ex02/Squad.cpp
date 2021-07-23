#include "Squad.hpp"

Squad::Squad()
{
	squad = new t_squad;
	squad->unit = 0;
	squad->next = 0;
	count = 0;
}

Squad::Squad(Squad const &Squad)
{
	*this = Squad;
}

Squad &Squad::operator=(Squad const &Squad)
{
	t_squad *tmp;
	t_squad *tmp2 = Squad.squad;
	if (squad)
	{
		for (int i = 0; i < count; i++)
		{
			delete squad->unit;
			tmp = squad;
			squad = squad->next;
			delete tmp;
		}
	}
	for (int i = 0; i < Squad.count; i++)
	{
		push(tmp2->unit->clone());
		tmp2 = tmp2->next;
	}
	count = Squad.count;
	return *this;
}

Squad::~Squad()
{
	if (squad)
	{
		t_squad *tmp;
		for (int i = 0; i < count; i++)
		{
			tmp = squad;
			delete squad->unit;
			squad = squad->next;
			delete tmp;
		}
	}
}

int Squad::getCount(void) const
{
	return (count);
}

ISpaceMarine *Squad::getUnit(int N) const
{
	if (N < 0 || N >= count || count == 0)
		return (0);
	t_squad *tmp = squad;	
	for (int i = 0; i < N; i++)
		tmp = tmp->next;
	return (tmp->unit);
}

int Squad::push(ISpaceMarine *unit)
{
	if (squad->unit == 0)
	{
		squad->unit = unit;
		return (++count);
	}
	t_squad *tmp;
	tmp = squad;
	for (int i = 0; i < count - 1; i++)
		tmp = tmp->next;
	t_squad *newbee = new t_squad;
	newbee->unit = unit;
	newbee->next = 0;
	tmp->next = newbee;
	++count;
	return (count);
}
