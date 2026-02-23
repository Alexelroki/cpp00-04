/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 16:09:52 by adruz-to          #+#    #+#             */
/*   Updated: 2026/02/18 16:38:31 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	// TEST 1
	std::cout << "=== TEST 1: Basic attacks ===" << std::endl;
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

	std::cout << "\n=== Destructors will be called now ===" << std::endl;
	return 0;
}
