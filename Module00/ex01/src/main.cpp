/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 10:01:18 by adruz-to          #+#    #+#             */
/*   Updated: 2026/01/19 10:57:15 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <string>

int	main(void)
{
	PhoneBook	phonebook; // Create a phonebook
	std::string	command; // variable for reading commands

	while (true)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command); // Read the entire line

		if (command == "ADD")
			phonebook.add();
		else if (command == "SEARCH")
			phonebook.search();
		else if (command == "EXIT")
			break; // Exit and end the program
		else
			std::cout << "Invalid command" << std::endl;
	}
	return (0);
}