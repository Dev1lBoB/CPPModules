#include <iostream>
#include "ISquad.hpp"

typedef struct s_squad
{
	s_squad  *next;
	ISpaceMarine *unit;
}			   t_squad;

class Squad: public ISquad
{
	public:
		~Squad();
		Squad();
		Squad(Squad const &);
		Squad &operator=(Squad const &);
		int getCount() const;
		ISpaceMarine* getUnit(int) const;
		int push(ISpaceMarine*);
	private:
		t_squad *squad;
		int	count;
};
