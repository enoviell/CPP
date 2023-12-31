#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{
	protected:
		const	std::string name;
		int		grade;
	
	public:
		Bureaucrat(std::string name, int i);
		Bureaucrat(Bureaucrat const &obj);
		~Bureaucrat();
		Bureaucrat&operator=(Bureaucrat const &copy);
		std::string	getName() const;
		int			getGrade() const;
		void		setGrade(int i);
		int			operator++(int grade);
		int			operator--(int grade);

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