#ifndef FORM_HPP
# define FORM_HPP

# include "bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const		std::string name;
		int			is_signed;
		const int	gradeRequiredToSign;
		const int	gradeRequiredToExecute;
	
	public:
		Form();
		Form(std::string name, int to_sign, int to_exec);
		~Form();
		std::string	getName() const;
		int			getSigned();
		int			getGradeToSign() const;
		int			getGradeToExecute() const;
		class gradeToHighException : public std::exception
		{
			public:
				const char	*what(void) const throw()
				{
					return ("grade is too high");
				}
		};
		class gradeToLowException : public std::exception
		{
			public:
				const char	*what(void) const throw()
				{
					return ("grade is too low");
				}
		};
		void		setSigned();
		int			error(int i);
		void		beSigned(Bureaucrat designed);

};

std::ostream	&operator<<(std::ostream &os, Form &module);
#endif