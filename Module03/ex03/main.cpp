/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarrei <albarrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 16:09:52 by adruz-to          #+#    #+#             */
/*   Updated: 2026/06/06 17:44:38 by albarrei         ###   ########.fr       */
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
	diamond2.takeDamage(50);
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
	
	std::cout << "\n================ Testing Default Names 3 ================" << std::endl;
	ClapTrap	clapi;
	FragTrap	frapi;
	ScavTrap	scapi;

	std::cout << "clapi name: " << clapi << std::endl;
	std::cout << "frapi name: " << frapi << std::endl;
	std::cout << "scapi name: " << scapi << std::endl;

	std::cout << "\n================ Testing Default Names 1 ================" << std::endl;
	DiamondTrap	diapi;
	std::cout << "diapi name: " << diapi << std::endl;
	diapi.whoAmI();

	// std::cout << "diapi name: " << diapi << std::endl;
	// std::cout << "diapi name: " << diapi << std::endl;
	// std::cout << "diapi name: " << diapi << std::endl;

	std::cout << "\n=== Destructors will be called now ===" << std::endl;
	return 0;
}
