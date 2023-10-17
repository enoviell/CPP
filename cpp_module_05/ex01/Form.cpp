#include "Form.hpp"

Form::Form()
	:gradeRequiredToExecute(0), gradeRequiredToSign(0)
{
	std::cout << "base constructor called" << std::endl;
}
Form::Form(std::string const &name, int to_sign, int to_exec)
	:name(name), is_signed(0), gradeRequiredToSign(to_sign), gradeRequiredToExecute(to_exec)
{
	std::cout << "Form constructor called" << std::endl;
	try
	{
		if (to_sign < 1)
			throw (gradeTooHighException());
		else if (to_sign > 150)
			throw (gradeTooLowException());
	}
	catch (gradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (gradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		if (to_exec < 1)
			throw (gradeTooHighException());
		else if (to_exec > 150)
			throw (gradeTooLowException());
	}
	catch (gradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (gradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
Form::~Form()
{
	std::cout << "destructor called" << std::endl;
}

std::string	Form::getName() const
{
	return (this->name);
}

bool			Form::getSigned() const
{
	return (this->is_signed);
}

int			Form::getGradeToSign() const
{
	return (this->gradeRequiredToSign);
}

int			Form::getGradeToExecute() const
{
	return (this->gradeRequiredToExecute);
}

void		Form::setSigned()
{
	this->is_signed = 1;
}

bool Form::beSigned(Bureaucrat const &designed)
{
	if (this->getSigned())
	{
		std::cout<<"Form" << this->name << "is already signed"<<std::endl;
		return(false);
	}
	if (this->is_signed < designed.getGrade())
		throw (Form::gradeTooLowException());
	this->is_signed = true;
	return(true);
	
	
}

std::ostream	&operator<<(std::ostream &os, Form &module)
{
	os << "form name: " + module.getName() << std::endl;
	if (module.getSigned() == 1)
		os << "form is already signed" << std::endl;
	else
		os << "form is yet to sign" << std::endl;
	os << "form minimum grade to sign is: " << module.getGradeToSign() << std::endl;
	os << "form minimum grade to execute is: " << module.getGradeToExecute() << std::endl;

	return (os);
}