#include <iostream>

int		main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *pointer = &str;
	std::cout << "String using pointer: " << *pointer << std::endl;
	std::string &ref = str;
	std::cout << "String using reference: " << ref << std::endl;
}
