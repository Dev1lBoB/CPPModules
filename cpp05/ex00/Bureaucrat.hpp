#include <iostream>

class Bureaucrat
{
	public:
		Bureaucrat(std::string const &, int);
		std::string getName() const;
		int getGrade() const;
		void incGrade();
		void decGrade();
		~Bureaucrat(){};
		Bureaucrat(Bureaucrat const &);
		Bureaucrat &operator=(Bureaucrat const &);
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
		Bureaucrat(){};
		int grade;
		int const static max_grade = 1;
		int const static min_grade = 150;
		std::string name;
};

std::ostream &operator<<(std::ostream &, Bureaucrat const &);
