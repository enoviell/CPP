#include "Character.hpp"
#include "ICharacter.hpp"

Character::Character()
{
    std::cout << "Character default constructor called" << std::endl;
}
Character::Character(std::string name)
{
    std::cout << "Character name constructor called" << std::endl;
    this->_name = name;
    this->_unequipped = NULL;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
}
Character::Character(const Character &copy)
{
    std::cout << "Character copy constructor called" << std::endl;
    this->_name = copy._name;
    this->_unequipped = copy._unequipped;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = copy._inventory[i];
}

Character &Character::operator=(const Character &copy)
{
    std::cout << "Character assignation operator called" << std::endl;
    this->_name = copy._name;
    this->_unequipped = copy._unequipped;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = copy._inventory[i];
    return (*this);
}

Character::~Character()
{
    std::cout << "Character destructor called" << std::endl;
    this->clearInventory();
}

std::string const &Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria *m)
{
    for(int i=0; i<4;i++)
    {
       if(this->_inventory[i]==0)
            this->_inventory[i]=m;
        return;
    }
    this->_unequipped = m;
}

void Character::unequip(int idx)
{
        this->_inventory[idx]=NULL;
    }


void Character::use(int idx, ICharacter &target)
{
    if(this->_inventory[idx])
        this->_inventory[idx]->use(target);
}

void Character::clearInventory()
{
    for(int i=0; i<4;i++)
    {
        if(this->_inventory[i])
            delete this->_inventory[i];
    }
    if(this->_unequipped)
        delete this->_unequipped;
}
