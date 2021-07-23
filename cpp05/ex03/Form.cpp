#include "Form.hpp"

Form::Form(std::string const &Name, const int &Grade, const int &Exec):grade(Grade), exec(Exec), name(Name)
{
	if (Grade > min_grade || Exec > min_grade)
		throw Form::GradeTooLowException();
	if (Grade < max_grade || Exec < max_grade)
		throw Form::GradeTooHighException();
	sign = 0;
}

Form::Form(Form const &form)
{
	*this = form;
}

Form &Form::operator=(Form const &form)
{
	grade = form.grade;
	exec = form.exec;
	name = form.name;
	sign = form.sign;
	return *this;
}

int Form::getGrade() const
{
	return grade;
}

int Form::getExec() const
{
	return exec;
}

bool Form::getSign() const
{
	return sign;
}

Form::~Form(){}

std::string Form::getName() const
{
	return name;
}

void Form::beSigned(Bureaucrat const &bob)
{
	if (bob.getGrade() > grade)
		throw Form::GradeTooLowException();
	sign = 1;
}

std::ostream &operator<<(std::ostream &out, Form const &bob)
{
	out << "This is the " << bob.getName() << "form and it needs " << bob.getGrade() << " to be signed" << std::endl;
	return out;
}

Form::GradeTooHighException::GradeTooHighException() throw() {}


Form::GradeTooHighException::~GradeTooHighException() throw() {}

const char *Form::GradeTooHighException::what() const throw()
{
	return "To high";
}

Form::GradeTooLowException::GradeTooLowException() throw() {}


Form::GradeTooLowException::~GradeTooLowException() throw() {}

const char *Form::GradeTooLowException::what() const throw()
{
	return "To low";
}

Form::NotYetSigned::NotYetSigned() throw() {}

Form::NotYetSigned::~NotYetSigned() throw() {}

const char *Form::NotYetSigned::what() const throw()
{
	return "Not yet signed";
}
