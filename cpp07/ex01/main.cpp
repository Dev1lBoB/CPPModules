#include "iter.hpp"

void	numPlusOneX2(int const &i)
{
	std::cout << (i + 2) * 2 << std::endl;
}

void	lol(std::string const &str)
{
	std::cout << str + "lol" << std::endl;
}

int		main(void)
{
	int	i[5] = {1, 2, 3, 4, 5};
	std::string str[3] = {"rofl", "lmao", "kek"};
	
	iter(i, 5, numPlusOneX2);
	iter(str, 3, lol);
}
