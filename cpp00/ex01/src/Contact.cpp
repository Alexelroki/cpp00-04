/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 10:01:27 by adruz-to          #+#    #+#             */
/*   Updated: 2026/01/19 12:26:46 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/* Constructor */
Contact::Contact(void)
	: _firstName(""),
	  _lastName(""),
	  _nickname(""),
	  _phoneNumber(""),
	  _darkestSecret("")
{
	return ;
}

/* Getters */
std::string Contact::getFirstName(void) const
{
	return (this->_firstName);
}

std::string Contact::getLastName(void) const
{
	return (this->_lastName);
}

std::string Contact::getNickname(void) const
{
	return (this->_nickname);
}

std::string Contact::getPhoneNumber(void) const
{
	return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret(void) const
{
	return (this->_darkestSecret);
}

/* Setters */

void	Contact::setFirstName(const std::string &firstName)
{
	this->_firstName = firstName;
}

void	Contact::setLastName(const std::string &lastName)
{
	this->_lastName = lastName;
}

void	Contact::setNickname(const std::string &nickname)
{
	this->_nickname = nickname;
}

void	Contact::setPhoneNumber(const std::string &phoneNumber)
{
	this->_phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(const std::string &darkSecret)
{
	this->_darkestSecret = darkSecret;
}
