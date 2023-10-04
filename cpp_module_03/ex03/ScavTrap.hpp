/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanuele <emanuele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:40:21 by emanuele          #+#    #+#             */
/*   Updated: 2023/09/27 10:15:02 by emanuele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#ifndef SCAVTRAP_HPP
#define  SCAVTRAP_HPP

#include <unistd.h>
#include<iostream>
#include<string>
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap{

   public:
    ScavTrap(void);
    ~ScavTrap();
    ScavTrap(const std::string& name);
    ScavTrap(const ScavTrap& scavtrap);
    ScavTrap& operator=(const ScavTrap& scavtrap);
    void attack(const std::string &target);
    void guardGate();
    private:

};

#endif