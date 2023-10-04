/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emanuele <emanuele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:06:02 by emanuele          #+#    #+#             */
/*   Updated: 2023/09/27 10:18:14 by emanuele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	ClapTrap	Clap("Clap");
	ScavTrap	Scav("Scav");
	FragTrap	Frag("Frag");
	DiamondTrap Diamond("Diamond");

	std::cout<<Diamond.getName()<<std::endl;
	Clap.attack("Frag");
	Clap.takeDamage(5);
	Scav.beRepaired(4);
	Scav.guardGate();
	Frag.highFivesGuys();
	Diamond.whoAmI();
	Diamond.attack("Clap");
	Scav.attack("Clap");
	return (0);
}