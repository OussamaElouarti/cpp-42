#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
}	



/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

std::ostream &			operator<<( std::ostream & o, const Bureaucrat & i )
{
	o  << i.getName() << ", bureaucrat grade " << i.getGrade() << "." << std::endl;
	return o;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void Bureaucrat::decrement()
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += 1;
}

void Bureaucrat::increment()
{
	if (this->_grade - 1 <= 0)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= 1;
}

void Bureaucrat::signForm(Form & form)
{
	if (form.getSigned() == true)
		std::cout << this->_name << " cant sign " << form.getName() << " because he see that is already signed." << std::endl;
	else
		try
		{
			form.beSigned(*this);
			std::cout << this->_name << " signs " << form.getName() << std::endl;
		}
		catch (std::exception & e)
		{
			std::cout << this->_name << " cant sign " << form.getName() << " because ";
			std::cout << e.what() << std::endl;
		}
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
const std::string & Bureaucrat::getName( void ) const
{
	return (this->_name);
}

int			Bureaucrat::getGrade( void ) const
{
	return (this->_grade);
}
/* ************************************************************************** */

Bureaucrat::GradeTooHighException::GradeTooHighException() throw() {}
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {}
const char* Bureaucrat::GradeTooHighException::what() const throw() { return ("Grade is too high."); }
Bureaucrat::GradeTooLowException::GradeTooLowException() throw() {}
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {}
const char* Bureaucrat::GradeTooLowException::what() const throw() { return ("Grade is too low."); }
