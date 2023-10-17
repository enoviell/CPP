#ifndef AFORM_HPP
# define AFORM_HPP
#include <iostream>
#include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const		std::string name;
		bool			is_signed;
		const int	gradeRequiredToSign;
		const int	gradeRequiredToExecute;
	
	public:
		AForm();
		AForm(std::string const &name, int const to_sign, int const to_exec);
		~AForm();
		AForm			&operator=(AForm const &obj);
		std::string	getName() const;
		bool			getSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;
		virtual void        execute(Bureaucrat const & executor) const =0;
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
		class NotSigned : public std::exception
	{
        public:
            virtual const char* what() const throw() { return "Form not signed"; }
    };


		void		setSigned();
		bool		beSigned(Bureaucrat const &designed);

};

std::ostream	&operator<<(std::ostream &os, AForm &module);
#endif