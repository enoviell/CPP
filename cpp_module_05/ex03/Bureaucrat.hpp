#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
#include <exception>

class AForm;

class Bureaucrat
{
	protected:
		std::string name;
		int		grade;
	
	public:
		Bureaucrat(Bureaucrat const &obj);
		Bureaucrat(std::string name, int i);
		~Bureaucrat();
		Bureaucrat &operator=(Bureaucrat const &copy);
		std::string	getName() const;
		int			getGrade() const;
		void		setGrade(int i);
		void 		executeForm(AForm const & form);
		void        operator++() ;
		void        operator--(); 
		void		signForm(AForm &to_sign);
		class gradeTooHighException : public std::exception
		{
			public:
				const char	*what(void) const throw()
				{
					return ("grade is too high");
				}
		};
		class gradeTooLowException : public std::exception
		{
			public:
				const char	*what(void) const throw()
				{
					return ("grade is too low");
				}
		};

};

std::ostream	&operator<<(std::ostream os, const Bureaucrat &first);
#endif