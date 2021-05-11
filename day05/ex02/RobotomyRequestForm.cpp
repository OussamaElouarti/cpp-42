#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 25, 5, target)
{
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


/*
** --------------------------------- METHODS ----------------------------------
*/

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
	{
		throw std::string("From must be signed before executing");
	}
	else if (executor.getGrade() > this->getExecGrade())
	{	
		throw Form::GradeTooLowException();
	}
	std::cout << "Crrrrr Vrrrrrrr" << std::endl;
	if (rand() % 2 == 0)
		std::cout << this->getTarget() << " has been robotomized" << std::endl;
	else
		std::cout << "failled to robotomized" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */