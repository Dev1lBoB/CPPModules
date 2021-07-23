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

void Bureaucrat::signForm(Form &form)
{
	if (form.getSign())
	{
		std::cout << "Form " << form.getName() << " already signed" << std::endl;
		return ;
	}
	try
	{
		form.beSigned(*this);
	}
	catch (...)
	{
		std::cout << "Bureaucrat " << name << " cannot sign form " << form.getName() << " because he has too small grade" << std::endl;
		return ;
	}
	std::cout << "Bureaucrat " << name << " signs form " << form.getName() << std::endl;
}

void Bureaucrat::executeForm(Form &form)
{
	try
	{
		form.execute(*this);
	}
	catch (Form::GradeTooLowException)
	{
		std::cout << "Bureaucrat " << name << " cannot execute form " << form.getName() << " because he has too small grade" << std::endl;
		return ;
	}
	catch (Form::NotYetSigned)
	{
		std::cout << "Form " << form.getName() << " not yet signed to be executed" << std::endl;
		return ;
	}
	std::cout << "Bureaucrat " << name << " succesfully executes form " << form.getName() << std::endl;
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
