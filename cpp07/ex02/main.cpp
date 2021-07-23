#include "Array.hpp"

int		main(void)
{
	Array<int> kek(5);
	Array<int> lol(10);
	Array<std::string> rofl(3);

	rofl[0] = "lmao";
	std::cout << "rofl[0]: " << rofl[0] << std::endl;
	lol = kek;
	lol[1] = 2;
	kek[1] = 1;
	std::cout << "kek[1] = " << kek[1] << std::endl;
	std::cout << "lol[1] = " << lol[1] << std::endl;
	try
	{
		std::cout << "lol[10] = " << lol[10] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
