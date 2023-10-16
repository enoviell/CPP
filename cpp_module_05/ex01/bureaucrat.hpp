#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include "form.hpp"

class Form;

class Bureaucrat
{
	protected:
		const	std::string name;
		int		grade;
	
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int i);
		~Bureaucrat();
		std::string	getName() const;
		int			getGrade() const;
		void		setGrade(int i);
		int			error(int i);
		int			operator++(int grade);
		int			operator--(int grade);
		void		signForm(Form &to_sign);
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