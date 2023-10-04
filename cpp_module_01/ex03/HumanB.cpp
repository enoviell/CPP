/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanuele <emanuele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:47:41 by emanuele          #+#    #+#             */
/*   Updated: 2023/09/19 16:03:45 by emanuele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std:: string name)
:name(name)
{
    
}
HumanB::~HumanB()
{
}

void HumanB::attack(void) const
{
    if(this->weapon)
       std::cout<<this->name<<" attacks with their "<<this->weapon->getType()<<std::endl;
       
}


void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}





