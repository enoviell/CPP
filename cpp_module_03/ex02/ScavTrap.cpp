/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanuele <emanuele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:40:13 by emanuele          #+#    #+#             */
/*   Updated: 2023/09/26 15:37:55 by emanuele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap(){
    this->_name = "ScavTrap";
    this->_hp = 100;
    this->_energy = 50;
    this->_attack = 20;
    std::cout<<"SCAVTRAP default constructor called"<<std::endl;
    
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name){
     this->_name = "ScavTrap";
    this->_hp = 100;
    this->_energy = 50;
    this->_attack = 20;
    std::cout<<"SCAVTRAP name constructor called"<<std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap): ClapTrap(scavtrap){
    std::cout<<"SCAVTRAP copy constructor called"<<std::endl;
    *this = scavtrap;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scavtrap)
{
    this->_name = scavtrap._name;
    this->_hp = scavtrap._hp;
    this->_energy = scavtrap._energy;
    this->_attack = scavtrap._attack;
    std::cout << "assignation operator called" << std::endl;
    return *this;
}
    


void ScavTrap::attack(ClapTrap &target)
{
    if(!this->_energy)
        return;
    this->_energy --;
    std::cout << this->_name << " attacks " << target.getName() << ", causing " << this->_attack << " points of damage! bySCAVTRAP" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout<<this->_name<<" has entered in Gate keeper mode"<<std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout<<"SCAVTRAP destructor called"<<std::endl;
}


