#include "AForm.hpp"

AForm::AForm()
	:gradeRequiredToExecute(0), gradeRequiredToSign(0)
{
	std::cout << "base constructor called" << std::endl;
}
AForm::AForm(std::string const &name, int to_sign, int to_exec)
	:name(name), is_signed(0), gradeRequiredToSign(to_sign), gradeRequiredToExecute(to_exec)
{
	std::cout << "AForm constructor called" << std::endl;
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
AForm::~AForm()
{
	std::cout << "destructor called" << std::endl;
}

std::string	AForm::getName() const
{
	return (this->name);
}

bool			AForm::getSigned() const
{
	return (this->is_signed);
}

int			AForm::getGradeToSign() const
{
	return (this->gradeRequiredToSign);
}

int			AForm::getGradeToExecute() const
{
	return (this->gradeRequiredToExecute);
}


void		AForm::setSigned()
{
	this->is_signed = 1;
}

bool AForm::beSigned(Bureaucrat const &designed)
{
	if (this->getSigned())
	{
		std::cout<<"AForm" << this->name << "is already signed"<<std::endl;
		return(false);
	}
	if (this->is_signed < designed.getGrade())
		throw (AForm::gradeTooLowException());
	this->is_signed = true;
	return(true);
	
	
}

std::ostream	&operator<<(std::ostream &os, AForm &module)
{
	os << "Aform name: " + module.getName() << std::endl;
	if (module.getSigned() == 1)
		os << "Aform is already signed" << std::endl;
	else
		os << "Aform is yet to sign" << std::endl;
	os << "Aform minimum grade to sign is: " << module.getGradeToSign() << std::endl;
	os << "Aform minimum grade to execute is: " << module.getGradeToExecute() << std::endl;

	return (os);
}