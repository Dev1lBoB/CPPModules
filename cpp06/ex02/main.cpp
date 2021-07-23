#include "A.hpp"
#include "C.hpp"
#include "B.hpp"
#include <iostream>

Base *getRandomClass(void)
{
	int i = rand() % 3;

	if (i == 1)
	{
		std::cout << "New A class" << std::endl;
		return new A;
	}
	else if (i == 2)
	{
		std::cout << "New B class" << std::endl;
		return new B;
	}
	else
	{
		std::cout << "New C class" << std::endl;
		return new C;
	}
	return 0;
}

void identify_from_pointer(Base * p)
{
	std::cout << "By ptr" << std::endl;
	A *a = dynamic_cast<A *>(p);
	if (a != 0)
	{
		std::cout << "A" << std::endl;
		return ;
	}
	B *b = dynamic_cast<B *>(p);
	if (b != 0)
	{
		std::cout << "B" << std::endl;
		return ;
	}
	C *c = dynamic_cast<C *>(p);
	if (c != 0)
	{
		std::cout << "C" << std::endl;
		return ;
	}
	std::cout << "Error" << std::endl;
}

void identify_from_reference( Base & p)
{
	std::cout << "By ref" << std::endl;
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (...)
	{
		try
		{
			B &b = dynamic_cast<B &>(p);
			(void)b;
			std::cout << "B" << std::endl;
		}
		catch (...)
		{
			try
			{
				C &c = dynamic_cast<C &>(p);
				(void)c;
				std::cout << "C" << std::endl;
			}
			catch (...)
			{
				std::cout << "Error" << std::endl;
			}
		}
	}

}

int	main(void)
{
	std::srand(std::time(0));
	Base *ptr = getRandomClass();
	identify_from_pointer(ptr);
	identify_from_reference(*ptr);
}
