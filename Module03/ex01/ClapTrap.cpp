/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 16:10:17 by adruz-to          #+#    #+#             */
/*   Updated: 2026/02/18 16:43:39 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name), _hitPoints(other._hitPoints), _energyPoints(other._energyPoints), _attackDamage(other._attackDamage)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destructor called" << std::endl;
}

// Attack function
void ClapTrap::attack(const std::string &target)
{
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is dead and can´t attack!" << std::endl;
		return;
	}
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy points left!" << std::endl;
		return;
	}
	_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage
			<< " points of damage!" << std::endl;
}

// take damage function
void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
		return;
	}
	if (amount >= _hitPoints)
	{
		_hitPoints = 0;
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage! Hit points left: "
				<< std::endl;
	}
	else
	{
		_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage! Hit points left: "
				<< std::endl;
	}
}

// Be repaired function
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " is dead and can't be repaired!" << std::endl;
		return;
	}
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy points left to repair!" << std::endl;
		return;
	}
	_energyPoints--;
	_hitPoints += amount;
	std::cout << "ClapTrap " << _name << " is repaired for " << amount << " hit points! Total HP: " << _hitPoints
			<< std::endl;
}
