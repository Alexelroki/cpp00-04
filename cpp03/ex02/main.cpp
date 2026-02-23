/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 16:09:52 by adruz-to          #+#    #+#             */
/*   Updated: 2026/02/18 17:05:19 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	// CLAPTRAP TESTS
	std::cout << "\n=== CLAPTRAP TESTS ===" << std::endl;
	// TEST 1
	std::cout << "\n=== TEST 1: Basic attacks ===" << std::endl;
	ClapTrap clap1("Robot");
	clap1.attack("Enemy1");
	clap1.attack("Enemy2");
	// TEST 2
	std::cout << "\n=== TEST 2: Taking damage ===" << std::endl;
	clap1.takeDamage(3);
	clap1.takeDamage(5);
	clap1.takeDamage(10);
	clap1.attack("Enemy3");
	// TEST 3
	std::cout << "\n=== TEST 3: Repairing ===" << std::endl;
	ClapTrap clap2("NewRobot");
	clap2.takeDamage(5);
	clap2.beRepaired(3);
	clap2.beRepaired(2);
	// TEST 4
	std::cout << "\n=== TEST 4: Energy depletion ===" << std::endl;
	ClapTrap clap3("Tired");
	for (int i = 0; i < 11; i++)
		clap3.attack("Target");
	clap3.beRepaired(5);
	// TEST 5
	std::cout << "\n=== TEST 5: Copy constructor and assignment ===" << std::endl;
	ClapTrap clap4("OriginalRobot");
	ClapTrap clap5(clap4);
	ClapTrap clap6("ToBeAssigned"); 
	clap6 = clap4;
	// SCAVTRAP TESTS
	std::cout << "\n\n=== SCAVTRAP TESTS ===" << std::endl;
	// Creating ScavTrap
	std::cout << "\n=== TEST 1: Creating ScavTrap ===" << std::endl;
	ScavTrap scav("Guardian");
	// ScavTrap attacks
	std::cout << "\n=== TEST 2: ScavTrap attacks ===" << std::endl;
	scav.attack("Intruder");
	// ScavTrap takes damage
	std::cout << "\n=== TEST 3: ScavTrap takes damage ===" << std::endl;
	scav.takeDamage(30);
	// ScavTrap repairs
	std::cout << "\n=== TEST 4: ScavTrap repairs ===" << std::endl;
	scav.beRepaired(20);
	// ScavTrap special ability
	std::cout << "\n=== TEST 5: ScavTrap special ability ===" << std::endl;
	scav.guardGate();

	// FRAGTRAP TESTS
	std::cout << "\n\n=== FRAGTRAP TESTS ===" << std::endl;
	// Creating FragTrap
	std::cout << "\n=== TEST 1: Creating FragTrap ===" << std::endl;
	FragTrap frag("Bomber");
	// FragTrap attacks
	std::cout << "\n=== FragTrap attacks ===" << std::endl;
	frag.attack("Target");
	// FragTrap takes damage
	std::cout << "\n=== TEST 2: FragTrap takes damage ===" << std::endl;
	frag.takeDamage(40);
	// FragTrap repairs
	std::cout << "\n=== TEST 4: FragTrap repairs ===" << std::endl;
	frag.beRepaired(25);
	// FragTrap special ability
	std::cout << "\n=== TEST 5: FragTrap special ability ===" << std::endl;
	frag.highFivesGuys();

	std::cout << "\n=== Destructors will be called now ===" << std::endl;
	return 0;
}
