#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &Name, int Grade)
{
	if (Grade > min_grade)
		throw Bureaucrat::GradeTooLowException();
	if (Grade < max_grade)
		throw Bureaucrat::GradeTooHighException();
	name = Name;
	grade = Grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &bob)
{
	*this = bob;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &bob)
{
	grade = bob.grade;
	name = bob.name;
	return *this;
}

int Bureaucrat::getGrade() const
{
	return grade;
}

std::string Bureaucrat::getName() const
{
	return name;
}

void Bureaucrat::incGrade()
{
	if (grade == max_grade)
		throw Bureaucrat::GradeTooHighException();
	--grade;
}

void Bureaucrat::decGrade()
{
	if (grade == min_grade)
		throw Bureaucrat::GradeTooLowException();
	++grade;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bob)
{
	out << bob.getName() << ", bureaucrat grade " << bob.getGrade() << std::endl;
	return out;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() throw() {}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "To high";
}

Bureaucrat::GradeTooLowException::GradeTooLowException() throw() {}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "To low";
}
