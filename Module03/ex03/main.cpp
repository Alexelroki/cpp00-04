/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albarrei <albarrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 16:09:52 by adruz-to          #+#    #+#             */
/*   Updated: 2026/06/07 19:11:57 by albarrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

#include "DiamondTrap.hpp"
#include <iostream>

// ClapTrap's name -> [name + "_clap_name"], ScavTrap and FragTraps inherit the ClapTrap's name
// Hit Points -> FragTrap -> 100
// Energy Points -> ScavTrap -> 50
// Attack Damage -> FragTrap -> 30
// attack() -> ScavTrap

int main( void )
{
	std::cout << "--- CREATING DIAMONDTRAP ---" << std::endl;
	DiamondTrap	diamond("DI4M-TP");
	DiamondTrap	copy1("C0PY-TP");

	std::cout << "\n--- ACTION AND ATTACK TEST ---" << std::endl;
	diamond.attack("a dangerous bandit"); // Uses ScavTrap's attack
	diamond.guardGate(); // Uses ScavTrap's function
	diamond.takeDamage(40); // Uses ClapTrap's function
	diamond.beRepaired(20); // Uses ClapTrap's function
	diamond.whoAmI();
	diamond.highFivesGuys();

	std::cout << "\n--- ASSIGNMENT AND COPY TEST ---" << std::endl;

	std::cout << "1. \n";
	copy1.whoAmI();
	//copy1 = diamond;
	copy1.takeDamage(1);
	copy1.whoAmI();

	std::cout << "2. \n";
	DiamondTrap	copy2(diamond);
	copy2.takeDamage(1);
	copy2.whoAmI();

	/*std::cout << "\n--- ENERGY TEST ---" << std::endl;
	DiamondTrap	energytest("EN3RGY-TP");
	for (int i = 1; i <= 100; i++)
	{
		std::cout << i << ". ";
		energytest.attack("a dangerous bandit"); // 100 energy points consumed
	}
	energytest.attack("a dangerous bandit"); // No energy to attack*/

	std::cout << "\n--- DESTRUCTION CHAIN ---" << std::endl;
	return (0);
}

// int main(void)
// {
// 	std::cout << "=== Testing DiamondTrap ===" << std::endl;

// 	DiamondTrap diamond("Diamond");
// 	diamond.whoAmI();
// 	diamond.attack("target");
// 	diamond.guardGate();
// 	diamond.highFivesGuys();
// 	diamond.takeDamage(50);
// 	diamond.beRepaired(30);

// 	std::cout << "\n=== Testing DiamondTrap copy ===" << std::endl;
// 	DiamondTrap diamond2(diamond);
// 	diamond2.takeDamage(50);
// 	diamond2.whoAmI();

// 	std::cout << "\n=== Testing basic ClapTrap ===" << std::endl;
// 	ClapTrap clap("Clappy");
// 	clap.attack("enemy");

// 	std::cout << "\n=== Testing ScavTrap ===" << std::endl;
// 	ScavTrap scav("Scavy");
// 	scav.attack("target");
// 	scav.guardGate();

// 	std::cout << "\n=== Testing FragTrap ===" << std::endl;
// 	FragTrap frag("Fraggy");
// 	frag.attack("target");
// 	frag.highFivesGuys();
	
// 	std::cout << "\n================ Testing Default Names 3 ================" << std::endl;
// 	ClapTrap	clapi;
// 	FragTrap	frapi;
// 	ScavTrap	scapi;

// 	std::cout << "clapi name: " << clapi << std::endl;
// 	std::cout << "frapi name: " << frapi << std::endl;
// 	std::cout << "scapi name: " << scapi << std::endl;

// 	std::cout << "\n================ Testing Default Names 1 ================" << std::endl;
// 	DiamondTrap	diapi;
// 	std::cout << "diapi name: " << diapi << std::endl;
// 	diapi.whoAmI();

// 	// std::cout << "diapi name: " << diapi << std::endl;
// 	// std::cout << "diapi name: " << diapi << std::endl;
// 	// std::cout << "diapi name: " << diapi << std::endl;

// 	std::cout << "\n=== Destructors will be called now ===" << std::endl;
// 	return 0;
// }
