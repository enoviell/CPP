/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanuele <emanuele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:06:02 by emanuele          #+#    #+#             */
/*   Updated: 2023/09/26 13:35:15 by emanuele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	Goofy("Goofy");
	
	Goofy.attack("Thor");
	Goofy.takeDamage(5);
	Goofy.beRepaired(4);
	return (0);
}