
#ifndef IMATERIA_HPP
# define IMATERIA_HPP

#include <iostream>
#include <string>
#include "AMateria.hpp"

class IMateria
{
    public:
    virtual ~IMateria() =0;
    virtual void learnMateria(AMateria*) =0;
    virtual AMateria* createMateria(std::string const & type) =0;
};

#endif
