/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanuele <emanuele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:26:36 by emanuele          #+#    #+#             */
/*   Updated: 2023/09/26 14:08:54 by emanuele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define  CLAPTRAP_HPP

#include <unistd.h>
#include<iostream>
#include<string>

class ClapTrap{

    protected:
    std::string _name;
    int _hp;
    int _energy;
    int _attack ;
    public:
    
    std::string getName(void) const;
    ClapTrap(void);
    ~ClapTrap();
    ClapTrap(const std::string& name);
    ClapTrap(const ClapTrap& claptrap);
    ClapTrap& operator=(const ClapTrap& claptrap);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    
};

#endif