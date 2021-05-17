#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:

		const std::string _name;
		int _grade;

	public:

		Bureaucrat(const std::string name, int grade);
		Bureaucrat( Bureaucrat const & src );
		~Bureaucrat();

		Bureaucrat &		operator=( Bureaucrat const & rhs );
		const std::string & getName(void) const;
		int getGrade(void) const;
		void	increment();
		void 	decrement();
		void    signForm(Form &);

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

};

std::ostream &			operator<<( std::ostream & o, const Bureaucrat & i );

#endif /* ****************************************************** BUREAUCRAT_H */