#include "Span.hpp"

int main()
{
	int size = 10000;
	Span span(size);
	
	std::srand(std::time(0));
	try
	{
		for (int i = 0; i < size + 1; i++)
			span.addNumber(rand() % size);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << span.shortestSpan() << std::endl;
	std::cout << span.longestSpan() << std::endl;
}
