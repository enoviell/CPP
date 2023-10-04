#include "Character.hpp"
#include "ICharacter.hpp"

Character::Character(void) : _name("none")
{
	for (int i = 0; i < 4; ++i)
		this->_inventory[i] = 0;
}
Character::Character(std::string name) : _name(name)
{

}
Character::Character(const Character &copy)
{
    std::cout << "Character copy constructor called" << std::endl;
    this->_name = copy._name;
    for (int i = 0; i < 4; i++)
        this->_inventory[i] = copy._inventory[i]->clone();
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
       if(this->_inventory[i]==NULL)
        {    this->_inventory[i]=m;
            return;
        }
        

    }
    
    // static int i = 0;
    // while (i++ < 4)
    // {
    //     if (this->_inventory[i]==0)
    //         this->_inventory[i]=m;
    //     return;
    // }
}

void Character::unequip(int idx)
{
        this->_inventory[idx]=NULL;
    }

# include "Ice.hpp"
#include "Cure.hpp"

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
