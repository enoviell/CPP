#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
    protected:
    std::string type;
    public:
    Animal();
    Animal(std::string type);
    Animal(const Animal &copy);
    Animal &operator=(const Animal &copy);
    virtual ~Animal();
    std::string getType() const ;
    virtual void makeSound() const ;
    virtual Brain& getBrain() const =0 ;
};

#endif