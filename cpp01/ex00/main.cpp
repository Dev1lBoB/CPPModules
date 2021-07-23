#include "Pony.hpp"

void	ponyOnTheStack(void)
{
	Pony pony;

	std::cout << "Hello, I'm Pony on the stack!" << std::endl;
//	std::cout << "I'm " << pony.get_colour() << pony.get_age() << "\033[0m" << " yo" << std::endl;
//	std::cout << "My color is " << pony.get_colour() << pony.get_color() << "\033[0m" << std::endl;
//	std::cout << "I classifier myself as " << pony.get_colour() << pony.get_gender() << "\033[0m" << std::endl;
	std::cout << "The Pony on the stack... Is gone..." << std::endl;
}


void	ponyOnTheHeap(void)
{
	Pony *pony = new Pony();
	std::cout << "Hello, I'm Pony on the heap!" << std::endl;
//	std::cout << "I'm " << pony->get_colour() << pony->get_age() << "\033[0m" << " yo" << std::endl;
//	std::cout << "My color is " << pony->get_colour() << pony->get_color() << "\033[0m" << std::endl;
//	std::cout << "I classifier myself as " << pony->get_colour() << pony->get_gender() << "\033[0m" << std::endl;
	delete pony;
	std::cout << "The Pony on the heap... Is gone..." << std::endl;
}

int		main(void)
{
	ponyOnTheStack();
	ponyOnTheHeap();
}
