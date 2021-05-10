#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{

	public:

		Form(std::string name, int signGrade, int execGrade, std::string target);
		Form( Form const & src );
		virtual ~Form();
		void beSigned(Bureaucrat &);
		virtual void execute(Bureaucrat const & executor) const = 0;
		const std::string & getName() const;
		bool		  getSigned() const;
		int 		  getSignGrade() const;
		int			  getExecGrade() const;
		const std::string & getTarget() const;
		Form &		operator=( Form const & rhs );
		class GradeTooHighException : public std::exception
		{
			public :
				GradeTooHighException() throw();
				virtual ~GradeTooHighException() throw();
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public :
				GradeTooLowException() throw();
				virtual ~GradeTooLowException() throw();
				virtual const char* what() const throw();
		};
	private:
		std::string _name;
		bool _signed;
		int _signGrade;
		int _execGrade;
		std::string _target;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */