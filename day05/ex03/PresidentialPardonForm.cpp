#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 72, 45, target)
{
}



/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

/*
** --------------------------------- METHODS ----------------------------------
*/

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
	{
		std::cout << "Form " << this->getName() <<" not signed" << std::endl;
		return;
	}
	else if (executor.getGrade() > this->getExecGrade())
	{	
		throw Form::GradeTooLowException();
		return;
	}
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

Form * PresidentialPardonForm::make(std::string target)
{
	return( new PresidentialPardonForm(target));
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */