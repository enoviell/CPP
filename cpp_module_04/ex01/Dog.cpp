#include "Dog.hpp"

Dog::Dog(): Animal()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
    this->_brain = new Brain();
}

Dog::Dog(const Dog &copy): Animal(copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = copy;
}

Dog &Dog::operator=(const Dog &copy)
{
    std::cout << "Dog assignation operator called" << std::endl;
    this->type = copy.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete this->_brain;

}


void Dog::makeSound(void) const
{
    std::cout << "Woof woof" << std::endl;
}
Brain& Dog::getBrain() const
{
    return (*(this->_brain));
}
