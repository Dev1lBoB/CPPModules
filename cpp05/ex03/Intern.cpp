#include "Intern.hpp"

Intern::Intern()
{
	patterns = new t_form;
	patterns->type = "shrubbery creation";
	patterns->form = new ShrubberyCreationForm("tmp");

	t_form *tmp = new t_form;
	tmp->type = "robotomy request";
	tmp->form = new RobotomyRequestForm("tmp");
	patterns->next = tmp;

	t_form *tmp2 = new t_form;;
	tmp2->type = "presidential pardon";
	tmp2->form = new PresidentialPardonForm("tmp");
	tmp->next = tmp2;
	tmp2->next = 0;
}

Intern::~Intern()
{
	t_form *tmp;
	while (patterns)
	{
		tmp = patterns->next;
		delete patterns->form;
		delete patterns;
		patterns = tmp;
	}
}

Intern &Intern::operator=(Intern const &lol)
{
	(void)lol;
	return *this;
}

Intern::Intern(Intern const &lol)
{
	*this = lol;
}

Form *Intern::makeForm(std::string const &Type, std::string const &Name)
{
	t_form *tmp = patterns;
	while (tmp)
	{
		if (Type == tmp->type)
		{
			std::cout << "Intern creates " << Type << " form" << std::endl;
			return (tmp->form->clone(Name));
		}
		tmp = tmp->next;
	}
	std::cout << "Form type <" << Type << "> not found" << std::endl;
	return 0;
}
