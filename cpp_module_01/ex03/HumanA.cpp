/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanuele <emanuele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:22:48 by emanuele          #+#    #+#             */
/*   Updated: 2023/09/19 16:03:50 by emanuele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name , Weapon &weapon)
:name(name),weapon(weapon)
{
   
}
HumanA::~HumanA()
{
}

void HumanA::attack(void) const
{
    std::cout<<this->name<<" attacks with their "<<weapon.getType()<<std::endl;
}

