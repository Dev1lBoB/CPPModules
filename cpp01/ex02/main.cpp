#include "ZombieEvent.hpp"

void	randomChump(void)
{
	ZombieEvent event;
	Zombie		*zombie;
	int		len = rand() % 3 + 4;
	char	word;
	char	g[] = "eyuioa";
	char	s[] = "qrtpsdfghjklzxcvbnm";
	char	name[len];
	std::string Name;

	for (int i = 0; i <= len; i++)
	{
		if (i % 2 == 0)
			name[i] = s[rand() % 19];
		else
			name[i] = g[rand() % 6];
	}
	Name = name;
	zombie = event.newZombie(Name);
	zombie->announce();
	delete zombie;
}

int		main(void)
{
	std::srand (std::time (0));
	randomChump();
}
