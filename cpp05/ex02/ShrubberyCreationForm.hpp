
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <iostream>
#include <fstream>
#include "Form.hpp"

class Bureaucrat;

class Form;

class ShrubberyCreationForm: public Form
{
	public:
		~ShrubberyCreationForm(){};
		ShrubberyCreationForm(ShrubberyCreationForm const &form){*this = form;};
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &form);
		ShrubberyCreationForm(std::string const &);
		void execute(Bureaucrat const &) const;
	private:
		ShrubberyCreationForm(){};
};

#endif
