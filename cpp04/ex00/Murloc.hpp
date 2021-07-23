#include "Victim.hpp"

class	Murloc: public Victim
{
	public:
		Murloc(std::string);
		Murloc(Murloc const &);
		Murloc &operator=(Murloc const &);
		~Murloc();
		void getPolymorphed(void) const;
	private:
		Murloc();
};
