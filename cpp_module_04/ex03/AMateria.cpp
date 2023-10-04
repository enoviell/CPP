#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria default constructor called" << std::endl;

}

AMateria::AMateria(std::string const &type)
{
    std::cout << "AMateria type constructor called" << std::endl;
    this->_type = type;
}

AMateria &AMateria::operator=(const AMateria &copy)
{
    std::cout << "AMateria assignation operator called" << std::endl;
    this->_type = copy.getType();
    return (*this);
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

std::string const &AMateria::getType() const
{
    return this->_type;
}

void AMateria::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
