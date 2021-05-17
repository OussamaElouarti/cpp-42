#include "Form.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(std::string name, const int signGrade, const int execGrade, std::string target) : _name(name) , _signGrade(signGrade), _execGrade(execGrade)
{
	_signed = false;
	_target = target;
	if (signGrade <= 0 || execGrade <= 0)  
		throw Form::GradeTooHighException();
	else if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException();
}
/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/


std::ostream &			operator<<( std::ostream & o, Form const & i )
{
	o << "Form name : " << i.getName() << " signed :" << i.getSigned() << " required grade to sign : " << i.getSignGrade() << " required grade to execute : " << i.getExecGrade() << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	Form::beSigned(Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
const std::string & Form::getName() const
{
	return (this->_name);
}

const std::string & Form::getTarget() const
{
	return (this->_target);
}

bool		  Form::getSigned() const
{
	return (this->_signed);
}

int 		  Form::getSignGrade() const
{
	return (this->_signGrade);
}

int			  Form::getExecGrade() const
{
	return (this->_execGrade);
}

/* ************************************************************************** */

Form::GradeTooHighException::GradeTooHighException() throw() {}
Form::GradeTooHighException::~GradeTooHighException() throw() {}
const char* Form::GradeTooHighException::what() const throw() { return ("Grade is too high."); }
Form::GradeTooLowException::GradeTooLowException() throw() {}
Form::GradeTooLowException::~GradeTooLowException() throw() {}
const char* Form::GradeTooLowException::what() const throw() { return ("Grade is too low."); }