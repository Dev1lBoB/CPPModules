#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &name):Form(name, 72, 45)
{}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &)
{
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > getExec())
		throw Form::GradeTooLowException();
	if (getSign() != 1)
		throw Form::NotYetSigned();
	if (rand() % 2 == 0)
		std::cout << getName() << " has been robotomized successfully" << std::endl;
	else
		std::cout << "Attempt to robotomize " << getName() << " has been failed" << std::endl;
}
