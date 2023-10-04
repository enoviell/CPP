#include "Cure.hpp"

Cure::Cure()
{
    std::cout << "Cure default constructor called" << std::endl;
    this->_type = "cure";
}

Cure::Cure(const Cure &copy):AMateria(copy._type)
{
    std::cout << "Cure copy constructor called" << std::endl;

}

Cure &Cure::operator=(const Cure &copy)
{
    std::cout << "Cure assignation operator called" << std::endl;
    this->_type = copy.getType();
    return (*this);
}

Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}

AMateria *Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
    std::cout<<"heals"<<target.getName()<<"'s wounds"<<std::endl;
}

