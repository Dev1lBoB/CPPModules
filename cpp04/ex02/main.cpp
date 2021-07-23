#include "Squad.hpp"
#include "TacticalMarine.hpp"

int		main(void)
{
	ISquad *squad = new Squad;
	ISquad *squad2 = new Squad;
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new TacticalMarine;
	ISpaceMarine* bill = new TacticalMarine;
	bob->meleeAttack();
	squad->push(bob);
	squad->push(jim);
	squad->push(bill);
	*static_cast<Squad *>(squad2) = *static_cast<Squad *>(squad);
	delete squad2;
	squad->getUnit(0)->meleeAttack();
	delete squad;
	return 0;
}
