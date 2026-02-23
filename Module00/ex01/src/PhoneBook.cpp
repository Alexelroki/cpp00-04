/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 10:01:23 by adruz-to          #+#    #+#             */
/*   Updated: 2026/01/19 11:11:18 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream> // for std::cout
#include <iomanip> // for std::setw and format the table

/* Constructor: resets the counter to 0 */
PhoneBook::PhoneBook()
{
	_nextIndex = 0; // Starts at position 0 of the array
	_contactCount =0; // There are no contacts at the beginning
}


/**************** Methods ****************/

std::string PhoneBook::getNonEmptyInput(const std::string &prompt)
{
	std::string input;

	do
	{
		std::cout << prompt;
		std::getline(std::cin, input);
	} while (input.empty());

	return input;
}

/* ADD method: ask the user for data and add a new contact */
void	PhoneBook::add(void)
{
	Contact newContact; // Temporary contact

	// Ask the user for each field
	newContact.setFirstName(getNonEmptyInput("First Name: "));
	newContact.setLastName(getNonEmptyInput("Last Name: "));
	newContact.setNickname(getNonEmptyInput("Nickname: "));
	newContact.setPhoneNumber(getNonEmptyInput("Phone Number: "));
	newContact.setDarkestSecret(getNonEmptyInput("Darkest Secret: "));
	
	_contacts[_nextIndex] = newContact; // Save contact at current position
	_nextIndex = (_nextIndex + 1) % 8; // circular, % returns to 0 after 7, never exceeds 8
	
	// Increase the counter only if the 8 spaces have not yet been filled.
	if (_contactCount < 8)
		_contactCount++;
}

// Display the table with saved contacts
void	PhoneBook::displayContacts() const
{
	// Top line
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	// Print the table header
	std::cout << "|" << std::setw(10) << "Index" << '|'
			  << std::setw(10) << "First Name" << '|'
			  << std::setw(10) << "Last Name" << '|'
			  << std::setw(10) << "Nickname" << "|" << std::endl;
	// Separation line
	std::cout << "+----------+----------+----------+----------+" << std::endl;
	// Go through all the saved contacts
	for (int i = 0; i < _contactCount; i++)
	{
		// Display each row: index (starting from 1) + truncated data
		std::cout << "|" << std::setw(10) << i + 1 << '|' // i+1 to display indices of 1/8 instead of 0/7
			  << std::setw(10) << truncate(_contacts[i].getFirstName()) << '|'
			  << std::setw(10) << truncate(_contacts[i].getLastName()) << '|'
			  << std::setw(10) << truncate(_contacts[i].getNickname()) << "|" << std::endl;
	}
	// Bottom line
	std::cout << "+----------+----------+----------+----------+" << std::endl;
}

// Shows the most complete details for a specific contact
void	PhoneBook::displayContact(int index) const
{
	// Validate that the index is within the valid range
	if (index < 0 || index >= _contactCount)
	{
		std::cout << "Invalid index!" << std::endl;
		return ;
	}
	// Display all contact fields without truncation
	std::cout << "First Name: " << _contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << _contacts[index].getLastName() << std::endl;
	std::cout << "Nickname: " << _contacts[index].getNickname() << std::endl;
	std::cout << "Phone Number: " << _contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << _contacts[index].getDarkestSecret() << std::endl;
}

/* Truncates a string to 10 characters, adding ‘.’ if it is longer */ 
std::string PhoneBook::truncate(std::string str) const
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

/* SEARCH method: displays the list and allows you to select a contact */
void	PhoneBook::search(void)
{
	// Verify that there is at least one contact.
	if (_contactCount == 0)
	{
		std::cout << "PhoneBook is empty!" << std::endl;
		return;
	}
	// Display the table with all contacts
	displayContacts();

	int index;
	std::cout << "Enter index: ";

	// Validate that the input is a number
	if (!(std::cin >> index)) // Detects if the reading failed (letter instead of number)
	{
		std::cout << "Invalid input! Please enter a number." << std::endl;
		std::cin.clear(); // Clear the error status
		std::cin.ignore(10000, '\n'); // Discard invalid buffer input
		return;
	}
	std::cin.ignore(); // Cleans up the ‘\n’ left by cin in the buffer

	// Validate that it is within the range 1.._contactCount
	if (index < 1 || index > _contactCount)
	{
		std::cout << "Invalid index!" << std::endl;
		return;
	}
	// Display the contact (subtracting 1 because the user sees indexes 1-8)
	displayContact(index - 1);
}

