#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):AForm("PresidentialPardonForm", 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj) :AForm("PresidentialPardonForm", 25, 5)
{
    *this = obj;
    return;
}
PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Form " << this->getName() << " distrutto" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
    (void)obj;
    return *this;
}

std::string PresidentialPardonForm::getTarget() const
{
    return (this->target);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor)const{
  if ( executor.getGrade() > this->getGradeToExecute() )
        throw AForm::NotSigned();
    else
        std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}