/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 14:23:24 by adruz-to          #+#    #+#             */
/*   Updated: 2026/02/14 15:00:43 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create another child class of ClapTrap called FragTrap, very similar to ScavTrap 
	but with:
	- Different stats
	- Different messages
	- Different special ability
	FragTrap doesn't override attack(), it uses the parent's (ClapTrap)

	| Attribute 		| ClapTrap  | ScavTrap    | FragTrap 		|
	| Name.    		| parameter | parameter   | parameter 		|
	| ------------- | --------- | ----------- | --------------- |
	| Hit points	| 	10		|  **100**    |  **100**  		|
	| Energy points | 	10		|  **50**     |  **100**  		|
	| Attack damage |	 0		|  **20**     |  **30**   		|
	| Special ability |	---		| guardGate() | highFivesGuys() |
*/

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap " << this->_name << " constructor called" << std::endl;
}

// Destructor
FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " destructor called" << std::endl;
}

// Special ability
void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " request a positive high five!" << std::endl;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

// Copy assignment
FragTrap &FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &other)
		ClapTrap::operator=(other);
	return *this;
}

// Default constructor
FragTrap::FragTrap() : ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}
