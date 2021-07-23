#include "Victim.hpp"

class	Peon: public Victim
{
	public:
		Peon(std::string);
		Peon(Peon const &);
		Peon &operator=(Peon const &);
		~Peon();
		void getPolymorphed(void) const;
	private:
		Peon();
};
