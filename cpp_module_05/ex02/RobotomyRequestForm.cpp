#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target):AForm("RobotomyRequestForm", 72, 45), target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj) :AForm("RobotomyRequestForm", 72, 45)
{
    (void)obj;
    *this = obj;
    return;
}
RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Form " << this->getName() << " distrutto" << std::endl;
}
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj)
{
    if(this == &obj)
        return *this;
    this->target = obj.getTarget();
    return *this;
}

std::string RobotomyRequestForm::getTarget() const
{
    return this->target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::gradeTooLowException();
	else
	{
		if (rand() % 2 == 0 )//50 e 50 di probabilità
			std::cout << target << " has been robotomized!" << std::endl;
		else
			std::cout << "Robotomy failed! " << target<< std::endl;
	}
}
