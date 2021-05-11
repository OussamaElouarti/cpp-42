#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern( const Intern & src )
{
	(void)src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/



/*
** --------------------------------- METHODS ----------------------------------
*/

Form*	Intern::makeForm(std::string form, std::string target)
{
	std::string formsName[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	Form *(*forms[3])(std::string target);
	forms[1] = PresidentialPardonForm::make;
	forms[0] = RobotomyRequestForm::make;
	forms[2] = ShrubberyCreationForm::make;
	for (int i = 0; i < 3; i++)
	{
		if (form == formsName[i])
		{
			std::cout << "Intern creates " << form << std::endl;
			return (forms[i])(target);
		}
	}
	std::cout << "Form not Found!" << std::endl;
	return (NULL);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */