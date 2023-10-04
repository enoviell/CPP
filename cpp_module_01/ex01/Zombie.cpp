/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanuele <emanuele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:49:09 by emanuele          #+#    #+#             */
/*   Updated: 2023/09/19 14:01:39 by emanuele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie(void)
{
    std::cout <<this->_name << " is dead" << std::endl;
};

void Zombie::announce(void)
{
    std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
};

Zombie::Zombie(void)
{
   return ;
};

Zombie::Zombie(std::string name)
{
    this->_name = name;
    std::cout << "Zombie created" << std::endl;
};

void Zombie::setName(std::string name)
{
    this->_name = name;
};