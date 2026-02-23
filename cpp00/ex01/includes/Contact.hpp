/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 10:00:30 by adruz-to          #+#    #+#             */
/*   Updated: 2026/01/19 10:48:21 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
// Attributes (private)
private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _phoneNumber;
	std::string _darkestSecret;

// Methods (public)
public:
	Contact(); // constructor

	// setter: assign values
	void	setFirstName(const std::string &firstName);
	void	setLastName(const std::string &lastName);
	void	setNickname(const std::string &nickname);
	void	setPhoneNumber(const std::string &phoneNumber);
	void	setDarkestSecret(const std::string &darkestSecret);

	// getter: obtain values
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;
};



#endif