#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{

	public:

		Form(std::string name, int signGrade, int execGrade);
		Form( Form const & src );
		~Form();
		void beSigned(Bureaucrat &);
		const std::string & getName() const;
		bool		  getSigned() const;
		int 		  getSignGrade() const;
		int			  getExecGrade() const;
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
		const std::string _name;
		bool _signed;
		const int _signGrade;
		const int _execGrade;

};

std::ostream &			operator<<( std::ostream & o, Form const & i );

#endif /* ************************************************************ FORM_H */