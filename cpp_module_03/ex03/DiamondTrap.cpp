#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap(), ScavTrap(), FragTrap()
{
    std::cout<<"DIAMONDTRAP default constructor called"<<std::endl;
    this->_name = _name ;
     this->_name =ClapTrap::_name  + "_clap_name";
    this->_hp = FragTrap::_hp;
    this->_energy=ScavTrap::_energy  ;
    this->_attack = FragTrap::_attack;
}

DiamondTrap::DiamondTrap( std::string name): ClapTrap(name),ScavTrap(name ), FragTrap(name)
{
    std::cout<<"DIAMONDTRAP name constructor called"<<std::endl;
    this->_name = _name;
    this->_name = ClapTrap::_name +"_clap_name";
    this->_hp = FragTrap::_hp;
    this->_energy=ScavTrap::_energy ;
    this->_attack=FragTrap::_attack;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondtrap):ClapTrap(diamondtrap),ScavTrap(diamondtrap),FragTrap(diamondtrap)
{
    std::cout<<"DIAMONDTRAP copy constructor called"<<std::endl;
    *this = diamondtrap;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondtrap)
{
    this->_name = diamondtrap._name;
    this->FragTrap::_hp = diamondtrap.FragTrap::_hp;
    this->ScavTrap::_energy = diamondtrap.ScavTrap::_energy;
    this->FragTrap::_attack = diamondtrap.FragTrap::_attack;
    std::cout << "assignation operator called" << std::endl;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout<<"DIAMONDTRAP destructor called"<<std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout<<"My name is "<<this->_name<<" and my ClapTrap name is "<<ClapTrap::_name<<std::endl;
}


void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}

