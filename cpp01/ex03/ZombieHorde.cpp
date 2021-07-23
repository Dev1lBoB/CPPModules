#include "ZombieHorde.hpp"

std::string	randomChump(void)
{
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
	return Name;
}

ZombieHorde::ZombieHorde(size_t N)
{
	std::cout << "Construction of ZombieHorde" << std::endl;
	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		horde[i].set_name(randomChump());
		if (i % 2 == 0)
			horde[i].set_type("Dancer");
		else
			horde[i].set_type("Singer");
		horde[i].announce();
	}
}

ZombieHorde::~ZombieHorde(void)
{
	std::cout << "Destruction of ZombieHorde" << std::endl;
	delete[] horde;
}
