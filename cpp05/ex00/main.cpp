#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat bob("bob", 100500);
	}
	catch (std::exception & e)
	{
		std::cout << "GOTCHA" << std::endl;
	}
	try
	{
		Bureaucrat bob("bob", 150);
		std::cout << bob;
		try
		{
			bob.decGrade();
		}
		catch (std::exception & e)
		{
			std::cout << "To weak" << std::endl;
		}
	}
	catch (std::exception & e)
	{
		std::cout << "GOTCHA" << std::endl;
	}
	try
	{
		Bureaucrat bob("bob", 1);
		std::cout << bob;
		try
		{
			bob.incGrade();
		}
		catch (std::exception & e)
		{
			std::cout << "To strong" << std::endl;
		}
	}
	catch (std::exception & e)
	{
		std::cout << "GOTCHA" << std::endl;
	}
}
