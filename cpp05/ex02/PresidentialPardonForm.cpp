#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &name):Form(name, 25, 5)
{}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &)
{
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > getExec())
		throw Form::GradeTooLowException();
	if (getSign() != 1)
		throw Form::NotYetSigned();
	std::cout << getName() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
