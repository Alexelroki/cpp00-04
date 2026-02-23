/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 10:00:47 by adruz-to          #+#    #+#             */
/*   Updated: 2026/01/19 15:57:38 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <string>
#include "Contact.hpp"

class PhoneBook
{
// Attributes (private)
private:
	Contact _contacts[8]; // Array of 8 contacts
	int	_nextIndex; // Index for the next contact
	int	_contactCount; // Saved contact counter

// Methods (public)
private:
	void	displayContacts(void) const; // Show the list of contacts (table)
	void	displayContact(int index) const; // Shows a specific contact
	std::string truncate(std::string str) const; // Truncates strings to 10 characters
	std::string getNonEmptyInput(const std::string &prompt);
public:
	PhoneBook(void);
	void	add(void);
	void	search(void);
};


#endif