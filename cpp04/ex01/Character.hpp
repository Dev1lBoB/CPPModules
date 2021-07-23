#include "Enemy.hpp"
#include "AWeapon.hpp"

class Character
{
	public:
		Character(std::string const &);
		Character(Character const &);
		Character &operator=(Character const &);
		~Character();
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string getName() const;
		std::string &getName();
		std::string getWeapon();
		int &getAp();
	private:
		Character();
		std::string name;
		int ap;
		static const int max_ap = 40;
		AWeapon *weapon;
};

std::ostream &operator<<(std::ostream &, Character &);
