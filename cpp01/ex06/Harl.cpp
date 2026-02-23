/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:26:11 by adruz-to          #+#    #+#             */
/*   Updated: 2026/02/09 16:57:17 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Extension of ex05 (Harl 2.0) that implements a filtering system by
	log levels.
	- When you select a level, it displays that level and higher ones
		(cascade effect).
	- Level hierarchy (from lowest to highest severity):
		DEBUG < INFO < WARNING < ERROR
	KEY POINTS:
	- We must use switch mandatory
	- The program takes 1 command line parameter
	- Displays the specified level and all higher ones (cascade effect)

*/

#include "Harl.hpp"
#include <iostream>

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
	std::cout << std::endl;
}

void Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger!" << std::endl;
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years, whereas you started working here just last month." << std::endl;
	std::cout << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable!" << std::endl;
	std::cout << "I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void Harl::complain(std::string level)
{
	// Array of levels
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	// Array of member function pointers
	// Syntax: return_type (ClassName::*array_name[])(parameters)
	void (Harl::*complaints[])(void) =
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	// Search and execute the corresponding function
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			// Syntax to call: (object.*function_pointer)()
			(this->*complaints[i])(); // We use this->* to call
			return ;
		}
	}
}