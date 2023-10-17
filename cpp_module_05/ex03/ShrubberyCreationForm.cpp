#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target): AForm("ShrubberyCreationForm", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj) :AForm("ShrubberyCreationForm", 145, 137)
{
    *this = obj;
    return;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Form " << this->getName() << " distrutto" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
    (void)obj;
        return *this;

}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
     if (this->getSigned() == false)
        throw AForm::NotSigned();
    else if (executor.getGrade() > this->getGradeToExecute())
        throw AForm::gradeTooLowException();
    std::string filename = getTarget() + "_shrubbery";
    std::ofstream file(filename.c_str());

    if(file.is_open()){
             file << "   _-_     " << std::endl;
        file << " /~~    ~~     \\" << std::endl;
        file << "{               }" << std::endl;
        file << " \\  _-     -_  /" << std::endl;
        file << "      \\ \\ " << std::endl;
        file << "       | |" << std::endl;
        file << "       | |" << std::endl;
        file << "       |_|" << std::endl;

        file.close();
    }
    else
		std::cout << "Error: cannot open " << filename << std::endl;
}

std::string ShrubberyCreationForm::getTarget() const
{
    return (this->target);
}
