/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanuele <emanuele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 11:34:24 by emanuele          #+#    #+#             */
/*   Updated: 2023/09/19 14:01:19 by emanuele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    Zombie *zombies = new Zombie[N];
    
    for(int i= 0; i<N; i++)
    {
        zombies[i].setName(name);
        zombies[i].announce();
    }
    return (zombies);
}