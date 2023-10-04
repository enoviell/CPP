#include "Brain.hpp"

Brain::Brain()
{
    std::cout<<"Brain default constructor called"<<std::endl;
    for (int i = 0; i < 100; i++)
		this->setIdea(i,"no idea");

}

Brain::Brain(const Brain &copy)
{
    std::cout<<"Brain copy constructor called"<<std::endl;
    *this = copy;
}

Brain& Brain::operator=(const Brain &copy)
{
    std::cout<<"Brain assignation operator called"<<std::endl;
    for (int i = 0; i < 100; i++)
        this->setIdea(i,copy.getIdea(i));
    return (*this);
}

Brain::~Brain()
{
    std::cout<<"Brain destructor called"<<std::endl;
}

std::string Brain::getIdea(int index) const
{
    return (this->_ideas[index]);
}

std::string Brain::setIdea(int index, std::string idea)
{
    this->_ideas[index] = idea;
    return (this->_ideas[index]);
}
