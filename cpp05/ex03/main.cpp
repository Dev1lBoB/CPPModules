#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern Guy;
	Bureaucrat Bob("Bob", 10);
	Bureaucrat Rob("Rob", 3);

	Form *NewForm = Guy.makeForm("shrubbery creation", "home");
	Bob.signForm(*NewForm);
	Bob.executeForm(*NewForm);
	delete NewForm;
	NewForm = Guy.makeForm("presidential pardon", "Vin Disel");
	Bob.signForm(*NewForm);
	Bob.executeForm(*NewForm);
	Rob.executeForm(*NewForm);
}
