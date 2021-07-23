#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat bob("bob", 11);
	Form form("TAXES", 10, 11);
	try
	{
		Form toHign("toHigh", 0, 10);
	}
	catch (std::exception &e)
	{
		std::cout << "To high -_-" << std::endl;
	}
	bob.signForm(form);
	bob.incGrade();
	bob.signForm(form);
}
