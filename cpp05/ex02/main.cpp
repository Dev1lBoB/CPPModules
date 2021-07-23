#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	std::srand (std::time (0));
	Bureaucrat bob("bob", 136);
	ShrubberyCreationForm form("home");
	
	bob.signForm(form);
	bob.executeForm(form);
	bob.incGrade();
	bob.executeForm(form);


	Bureaucrat bob2("bob2", 30);
	RobotomyRequestForm form2("robot");
	bob2.signForm(form2);
	bob2.executeForm(form2);


	Bureaucrat bob3("bob3", 2);
	PresidentialPardonForm form3("Solid Snake");
	bob3.signForm(form3);
	bob3.executeForm(form3);
}
