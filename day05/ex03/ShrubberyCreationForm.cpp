#include "ShrubberyCreationForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string  target) : Form("ShrubberyCreationForm", 145, 137, target)
{
}



/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/



/*
** --------------------------------- METHODS ----------------------------------
*/

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getSigned() == false)
	{
		throw std::string("From must be signed before executing");
		return ;
	}
	if (executor.getGrade() > this->getExecGrade())
	{
		throw Form::GradeTooLowException();
		return ;
	}
	std::string filename = this->getTarget() + "_shrubbery";
	std::ofstream Nfile;
	Nfile.open(filename.c_str());
	if (Nfile.is_open())
	{
		Nfile << "              # #### ####" << std::endl
		<< "            ### \\/#|### |/####" << std::endl
		<< "           ##\\/#/ \\||/##/_/##/_#" << std::endl
		<< "         ###  \\/###|/ \\/ # ###" << std::endl
		<< "       ##_\\_#\\_\\## | #/###_/_####" << std::endl
		<< "      ## #### # \\ #| /  #### ##/##" << std::endl
		<< "       __#_--###`  |{,###---###-~" << std::endl
		<< "                 \\ }{" << std::endl
		<< "                  }}{" << std::endl
		<< "                  }}{" << std::endl
		<< "               {{}" << std::endl
		<< "            , -=-~{ .-^- _" << std::endl
		<< "                   `}" << std::endl
		<< "                   {" << std::endl;
	}
	else
		std::cout << "opening file issue" << std::endl;
	Nfile.close();
}

Form *ShrubberyCreationForm::make(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */