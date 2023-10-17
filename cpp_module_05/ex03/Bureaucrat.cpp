#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( Bureaucrat const &obj)
{
	*this = obj;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int i)
	: name(name)
{
	std::cout << "Bureaucrat costructor called" << std::endl;
	try
	{
		if (i >= 1 && i <= 150)
			this->grade = i;
		else if (i < 1)
			throw (gradeTooHighException());
		else
			throw (gradeTooLowException());
	}
	catch (gradeTooHighException &e){
		std::cerr << e.what() << std::endl;}
	catch (gradeTooLowException &e){
		std::cerr << e.what() << std::endl;
	}
}
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &copy)
{
	if (this == &copy)
		return (*this);
	this->grade = copy.getGrade();
	this->name = copy.getName();
	return (*this);
}
Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat distructor called" << std::endl;
}

std::string	Bureaucrat::getName() const
{
	return (this->name);
}

int			Bureaucrat::getGrade() const
{
	return (this->grade);
}

void		Bureaucrat::setGrade(int i)
{
	this->grade = i;
}

void	Bureaucrat::signForm(AForm &to_sign)
{
	if (this->grade < to_sign.getGradeToSign())
	{
		std::cout << this->name << " signed " << to_sign.getName() << std::endl;
			to_sign.setSigned();
	}
	else
		std::cout << this->name << " couldn't sign " << to_sign.getName() << " because is grade is not high enough" << std::endl;
}

std::ostream	&operator<<(std::ostream &os, Bureaucrat &first)
{
	os << first.getName() << ", bureaucrat grade is " << first.getGrade() << std::endl;
	return (os);
}

void Bureaucrat::operator++() {
    try {
        if (grade <= 1)
            throw gradeTooHighException();
        else
            grade--;
    } catch (gradeTooHighException &e) {
        std::cerr << e.what() << std::endl;
    }
}

void Bureaucrat::operator--() {
    try {
        if (grade >= 150)
            throw gradeTooLowException();
        else
            grade++;
    } catch (gradeTooLowException &e) {
        std::cerr << e.what() << std::endl;
    }
}

void    Bureaucrat::executeForm( AForm const  &form )
{
    try
	{
        form.execute(*this);
    }
	catch (std::exception& e)
	{
        std::cout << name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}
