/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanuele <emanuele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:38:31 by emanuele          #+#    #+#             */
/*   Updated: 2023/09/26 14:09:51 by emanuele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
    std::cout << "ClapTrap default constructor called" << std::endl;
    this->_name = "ClapTrap";
    this->_hp = 10;
    this->_energy = 10;
    this->_attack = 0;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name){
    std::cout << "ClapTrap name constructor called" << std::endl;
    this->_name = name;
    this->_hp = 10;
    this->_energy = 10;
    this->_attack = 0;
}

ClapTrap::ClapTrap(const ClapTrap& to_copy){
    std::cout << "copy constructor called" << std::endl;
    *this = to_copy;
}  

ClapTrap& ClapTrap::operator=(const ClapTrap& to_copy){
    
    std::cout << "assignation operator called" << std::endl;
    this->_name = to_copy._name;
    this->_hp = to_copy._hp;
    this->_energy = to_copy._energy;
    this->_attack = to_copy._attack;
    return *this;
}

void ClapTrap::attack(const std::string& target){
    if(!this->_energy)
        return;
    this->_energy --;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
if (this->_energy < 1)
return;
    this->_hp += amount;
if (this->_hp > 10)
	    this->_hp = 10;
    this->_energy -= 1;
    std::cout << "ClapTrap " << this->_name << " is being repaired, +" << amount << " hitpoints!" << std::endl;
    
}

void ClapTrap::takeDamage(unsigned int amount){
    this->_hp-= amount;
    if(this->_hp < 0)
        this->_hp = 0;
std::cout << this->_name << " takes " <<amount<< " damage. It has "
					<< this->_hp << " HP left."<< std::endl;
    
}

