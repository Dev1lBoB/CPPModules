
#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include <fstream>
#include "Form.hpp"

class Bureaucrat;

class Form;

class PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm(PresidentialPardonForm const &form){*this = form;};
		PresidentialPardonForm &operator=(PresidentialPardonForm const &);
		~PresidentialPardonForm(){};
		PresidentialPardonForm(std::string const &);
		void execute(Bureaucrat const &) const;
		Form *clone(std::string const &);
	private:
		PresidentialPardonForm(){};
};

#endif
