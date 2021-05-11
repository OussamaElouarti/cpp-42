# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int main(void)
{
    srand(time(NULL));
	Form		*form;
	Bureaucrat	john("John", 1);
	Intern		intern;

	form = intern.makeForm("robotomy request", "John");
	john.signForm(*form);
	john.executeForm(*form);
	delete form;
	form = intern.makeForm("shr", "John");
	form = intern.makeForm("shrubbery creation", "house");
	john.signForm(*form);
	john.executeForm(*form);
	delete form;
	form = intern.makeForm("presidential pardon", "Micheal");
	john.signForm(*form);
	john.executeForm(*form);
	delete form;
	return (0);
}