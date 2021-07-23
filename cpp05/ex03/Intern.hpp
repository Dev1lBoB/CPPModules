#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

typedef struct	s_form
{
	struct s_form *next;
	std::string type;
	Form *form;
}				t_form;

class Intern
{
	public:
		Intern();
		Intern(Intern const &);
		Intern &operator=(Intern const &);
		~Intern();
		Form *makeForm(std::string const &, std::string const &);
	private:
		t_form *patterns;
};
