#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PrestonGarvey.hpp"
#include "Character.hpp"
#include "Knife.hpp"

int		main(void)
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	Enemy* p = new PrestonGarvey();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* k = new Knife();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	me->equip(k);
	std::cout << *me;
	me->attack(p);
	std::cout << *me;
	me->attack(p);
	std::cout << *me;
	return 0;
}
