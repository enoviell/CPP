# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"


int main() {
    Intern intern;
    AForm* form1 = intern.makeForm("ShrubberyCreationForm", "garden");
    AForm* form2 = intern.makeForm( "Bender","RobotomyRequestForm");
    AForm* form3 = intern.makeForm("PresidentialPardonForm", "Zaphod Beeblebrox");

    if (form1) {
        std::cout << "Intern created a ShrubberyCreationForm for the garden." << std::endl;
        delete form1;
    } else {
        std::cerr << "Form creation failed." << std::endl;
    }

    if (form2) {
        std::cout << "Intern created a RobotomyRequestForm for Bender." << std::endl;
        delete form2;
    } else {
        std::cerr << "Form creation failed." << std::endl;
    }

    if (form3) {
        std::cout << "Intern created a PresidentialPardonForm for Zaphod Beeblebrox." << std::endl;
        delete form3;
    } else {
        std::cerr << "Form creation failed." << std::endl;
    }

    return 0;
}
