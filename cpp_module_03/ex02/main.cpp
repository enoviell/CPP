/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanuele <emanuele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:06:02 by emanuele          #+#    #+#             */
/*   Updated: 2023/09/26 15:27:17 by emanuele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ClapTrap	Clap("Clap");
	ScavTrap	Scav("Scav");
	FragTrap	Frag("Frag");
	Clap.attack("Frag");
	Clap.takeDamage(5);
	Scav.beRepaired(4);
	Scav.guardGate();
	Frag.highFivesGuys();
	return (0);
}