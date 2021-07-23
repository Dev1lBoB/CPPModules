#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &)
{
	return *this;
}

Form *ShrubberyCreationForm::clone(std::string const &Name)
{
	ShrubberyCreationForm *newform = new ShrubberyCreationForm(Name);
	return newform;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &name):Form(name, 145, 135)
{}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > getExec())
		throw Form::GradeTooLowException();
	if (getSign() != 1)
		throw Form::NotYetSigned();
	std::ofstream fd;

	fd.open(getName() + "_shrubbery");
	fd <<"              _   _" << std::endl;
    fd <<"             / '-' \\" << std::endl;
    fd <<"            ;       ;" << std::endl;
    fd <<"         /'-|       |-'\\" << std::endl;
    fd <<"        |   |_______K   |" << std::endl;
    fd <<"        \\   '-------'   /" << std::endl;
    fd <<"         '.___.....___.'" << std::endl;
    fd <<"            | ;  : ;|" << std::endl;
    fd <<"           _|;__;__.|_" << std::endl;
    fd <<"          |     Y     |    .--." << std::endl;
    fd <<" .--.      \\__.'^'.__/    /;   \\" << std::endl;
    fd <<"/   ;\\      |_  ;  _|     |  ' |" << std::endl;
    fd <<"| ;  |      { `\"\"\"` }     |;   |" << std::endl;
    fd <<"|'   |      {       }     | ;  |" << std::endl;
    fd <<"|  ; |      {       }     |    |" << std::endl;
    fd <<"|;   |      ;`-.__.'|     |:  ;|" << std::endl;
    fd <<"| ;  \\      |;  ;   |_____/ ;  |" << std::endl;
    fd <<"|   '.'-----'      ' -_   .'   /" << std::endl;
    fd <<"\\  '.   - _  ' ;  ;  _  -    .'" << std::endl;
    fd <<" '.   -     - ;  ;   .------`" << std::endl;
    fd <<"   `--------.      ;|" << std::endl;
    fd <<"            |;  ,   |" << std::endl;
    fd <<"            |     ; |" << std::endl;
    fd <<"            |. ;    |" << std::endl;
    fd <<"            | :    :|" << std::endl;
    fd <<"            |   .   |" << std::endl;
    fd <<"            |;   ;  |" << std::endl;
    fd <<"            |;  ,   |" << std::endl;
    fd <<"            |     ; |" << std::endl;
    fd <<"            |. ;    |" << std::endl;
    fd <<"            | :    :|" << std::endl;
    fd <<"            |   .   |" << std::endl;
    fd <<"            |;   ;  |" << std::endl;
    fd <<"            |;  ,   |" << std::endl;
    fd <<"            |     ; |" << std::endl;
    fd <<"            |     ; |" << std::endl;
    fd <<"            |. ;    |" << std::endl;
    fd <<"            | :    :|" << std::endl;
    fd <<"            |   .   |" << std::endl;
    fd <<"            |;   ;  |" << std::endl;
    fd <<"            `\"-----\"`" << std::endl;
	fd.close();
}
