
#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(std::string const &, const int &, const int &);
		std::string getName() const;
		Form();
		~Form(){};
		Form(Form const &);
		Form &operator=(Form const &);
		int getGrade() const;
		int getExec() const;
		bool getSign() const;
		void beSigned(Bureaucrat const &);
		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException () throw();
				~GradeTooHighException() throw();
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException () throw();
				~GradeTooLowException() throw();
				const char *what() const throw();
		};
	private:
		int grade;
		int exec;
		std::string name;
		int const static max_grade = 1;
		int const static min_grade = 150;
		bool sign;
};

std::ostream &operator<<(std::ostream &, Form const &);
#endif
