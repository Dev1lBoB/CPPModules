
#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include <iostream>
#include <fstream>
#include "Form.hpp"

class Bureaucrat;

class Form;

class RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm(RobotomyRequestForm const &form){*this = form;};
		RobotomyRequestForm &operator=(RobotomyRequestForm const &);
		RobotomyRequestForm(std::string const &);
		void execute(Bureaucrat const &) const;
		Form *clone(std::string const &);
	private:
		RobotomyRequestForm(){};
};

#endif
