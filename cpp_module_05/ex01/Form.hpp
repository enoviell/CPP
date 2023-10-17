#ifndef FORM_HPP
# define FORM_HPP
#include <iostream>
#include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const		std::string name;
		bool			is_signed;
		const int	gradeRequiredToSign;
		const int	gradeRequiredToExecute;
	
	public:
		Form();
		Form(std::string const &name, int const to_sign, int const to_exec);
		~Form();
		Form			&operator=(Form const &obj);
		std::string	getName() const;
		bool			getSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;
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


		void		setSigned();
		int			error(int i);
		bool		beSigned(Bureaucrat const &designed);

};

std::ostream	&operator<<(std::ostream &os, Form &module);
#endif