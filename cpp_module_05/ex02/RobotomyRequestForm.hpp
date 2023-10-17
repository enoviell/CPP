#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include <iostream>
#include <math.h>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm 
{
    private:
        std::string target;
    public:
            RobotomyRequestForm(std::string const &target);
            RobotomyRequestForm(RobotomyRequestForm const &obj);
            ~RobotomyRequestForm();
            RobotomyRequestForm	&operator=(RobotomyRequestForm const &obj);
            std::string getTarget() const;
            virtual void execute(Bureaucrat const & executor) const;
};
#endif
