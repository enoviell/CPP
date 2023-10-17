#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"

class Intern {
public:
    Intern(void);
    Intern(Intern const &other);
    Intern &operator=(Intern const &other);
    ~Intern(void);
    void check(std::string const &name);
    AForm *makeForm(std::string name, std::string target);
    class	WrongRequestException: public std::exception
		{
			virtual const char	*what() const throw()
			{
				return ("Wrong office");
			}
		};
};
#endif