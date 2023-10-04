#include "FragTrap.hpp"

FragTrap::FragTrap(void):ClapTrap()
{
    this->_name = "FragTrap";
    this->_attack = 30;
    this->_hp = 100;
    this->_energy = 100;
    std::cout<<"FRAGTRAP default constructor called"<<std::endl;
}

FragTrap::~FragTrap()
{
    std::cout<<"FRAGTRAP destructor called"<<std::endl;
}

FragTrap::FragTrap(const std::string &name): ClapTrap(name)
{
    this->_name = name;
    this->_attack = 30;
    this->_hp = 100;
    this->_energy = 100;
    std::cout<<"FRAGTRAP name constructor called"<<std::endl;
    
}
FragTrap::FragTrap(const FragTrap &fragtrap): ClapTrap(fragtrap)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = fragtrap;
}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap)
{
    this->_name = fragtrap._name;
    this->_hp = fragtrap._hp;
    this->_energy = fragtrap._energy;
    this->_attack = fragtrap._attack;
    std::cout << "Fragtrap assignation operator called" << std::endl;
    return *this;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << this->_name << " is asking for high fives" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    if (!this->_energy)
        return;
    this->_energy--;
    std::cout << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage! by FRAGTRAP" << std::endl;
}
