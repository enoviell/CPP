/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanuele <emanuele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:06:02 by emanuele          #+#    #+#             */
/*   Updated: 2023/09/26 14:00:06 by emanuele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	Clap("Goofy");
	ScavTrap	Scav("Scav");
	Clap.attack("duffy duck");
	Clap.takeDamage(5);
	Scav.beRepaired(4);
	Scav.guardGate();
	return (0);
}