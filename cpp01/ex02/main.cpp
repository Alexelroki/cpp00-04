/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 15:34:29 by adruz-to          #+#    #+#             */
/*   Updated: 2026/02/09 16:57:12 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";

	std::string* stringPTR = &str; // pointer (has an address)
	std::string& stringREF = str; // reference (doesn't have its own address, it is str)

	std::cout << &str << std::endl; // actual string address
	std::cout << stringPTR << std::endl; // address stored by the pointer
	std::cout << &stringREF << std::endl; // same address as &str

	std::cout << str << std::endl; // direct value
	std::cout << *stringPTR << std::endl; // pointed value
	std::cout << stringREF << std::endl; // referenced value

	return (0);
}
