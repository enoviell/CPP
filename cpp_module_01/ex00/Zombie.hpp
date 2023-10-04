/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanuele <emanuele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 10:38:26 by emanuele          #+#    #+#             */
/*   Updated: 2023/09/19 11:21:17 by emanuele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
    std::string name;
    
public:
    Zombie(std::string name);
    ~Zombie(void);
    void announce(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
