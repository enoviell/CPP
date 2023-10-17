#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "AForm.hpp"
 
class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm(std::string const &target);
        ShrubberyCreationForm(ShrubberyCreationForm const &obj);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &obj);
        void execute(Bureaucrat const & executor) const;
        std::string getTarget() const;
};









#endif