#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        _materia[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
   *this = other;
return;
}
MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
            delete this->_materia[i];
    }

MateriaSource &MateriaSource::operator=(MateriaSource const &other)
{
    for (int i = 0; i < 4; i++)
        this->_materia[i] = other._materia[i]->clone();
    return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
    int i = 0;
    if(m==0)
    {
        std::cout << "Materia is null" << std::endl;
        return;
    }
    for(i=0;i<4;i++)
    {
        if(!this->_materia[i])
        break;
    }
    if(i==4)
    {
        std::cout << "MateriaSource is full" << std::endl;
        return;
    }
    this->_materia[i] = m;
    return;
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	AMateria	*tmp;
	int		i;

	for (i = 0; i < 4; i++)
	{
		tmp = this->_materia[i];
		if (tmp && tmp->getType() == type)
			break ;
	}
	if (i == 4)
	{
		std::cout << "Materia " << type << " missing" << std::endl;
		return (0);
	}
	return (tmp->clone());
}