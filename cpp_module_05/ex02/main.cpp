# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int	main(void)
{

	Bureaucrat	robert("Robert", 15), james("James", 150), micheal("Micheal", 1);
	AForm		*scf;

	scf = new PresidentialPardonForm("Arthur");
	std::cout << "\033[1mSCF: " << *scf << "\033[0m" << std::endl;
	std::cout << "\033[1m" << robert.getName() << " tries to execute form " << scf->getName() << "\033[0m" << std::endl;
	robert.executeForm(*scf);
	std::cout << "\033[1m" << james.getName() << " tries to execute form " << scf->getName() << "\033[0m" << std::endl;
	james.executeForm(*scf);
	std::cout << "\033[1m" << robert.getName() << " tries to sign form " << scf->getName() << "\033[0m" << std::endl;
	robert.signForm(*scf);
	delete scf;
	return (0);
}
