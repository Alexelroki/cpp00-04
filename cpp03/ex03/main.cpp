/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 16:09:52 by adruz-to          #+#    #+#             */
/*   Updated: 2026/02/18 17:11:19 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	std::cout << "=== Testing DiamondTrap ===" << std::endl;

	DiamondTrap diamond("Diamond");
	diamond.whoAmI();
	diamond.attack("target");
	diamond.guardGate();
	diamond.highFivesGuys();
	diamond.takeDamage(50);
	diamond.beRepaired(30);

	std::cout << "\n=== Testing DiamondTrap copy ===" << std::endl;
	DiamondTrap diamond2(diamond);
	diamond2.whoAmI();

	std::cout << "\n=== Testing basic ClapTrap ===" << std::endl;
	ClapTrap clap("Clappy");
	clap.attack("enemy");

	std::cout << "\n=== Testing ScavTrap ===" << std::endl;
	ScavTrap scav("Scavy");
	scav.attack("target");
	scav.guardGate();

	std::cout << "\n=== Testing FragTrap ===" << std::endl;
	FragTrap frag("Fraggy");
	frag.attack("target");
	frag.highFivesGuys();
	
	std::cout << "\n=== Destructors will be called now ===" << std::endl;
	return 0;
}
