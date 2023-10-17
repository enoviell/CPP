
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void)
{
    std::cout << "default Intern constructor called" << std::endl;
	return ;
}

Intern::Intern(Intern const &other)
{
    *this = other;
}

Intern &Intern::operator=(Intern const &other)
{
    (void)other;
    return (*this);
}

Intern::~Intern(void)
{
}

void Intern::check(std::string const &name)
{
    if (name != "robotomy request" && name != "presidential pardon" && name != "shrubbery creation")
        throw WrongRequestException();
}

AForm *Intern::makeForm(std::string name, std::string target) {
    AForm *form = nullptr;
    int k = -1;
    bool flag = false;
    static const std::string formNames[3] = {
        "ShrubberyCreationForm",
        "RobotomyRequestForm",
        "PresidentialPardonForm"
    };
try{
    for (int i = 0; i < 3; i++) {
        if (name == formNames[i]) {
            k = i;
            flag = true;
            break; // Esci se non troci =
        }
    }

    if (!flag) {
        this->check(name); // fallo esplodere se dbagliato speriamo ora vada
    }

    switch (k) {
        case 0:
            form = new ShrubberyCreationForm(target);
            break;
        case 1:
            form = new RobotomyRequestForm(target);
            break;
        case 2:
            form = new PresidentialPardonForm(target);
            break;
        default:
            // Gestisci un valore k non valido, se necessario.
            break;
    }
}
catch (std::exception &e)
	{
		std::cout << "IERROR: " << e.what() << std::endl;
	}
    return form;
}
