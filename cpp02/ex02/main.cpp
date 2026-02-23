/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 15:33:17 by adruz-to          #+#    #+#             */
/*   Updated: 2026/02/17 16:56:15 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2)); // b = 5.05 * 2 = 10.1016
	
	std::cout << a << std::endl; // 0
	std::cout << ++a << std::endl; // Pre-increment: a = 0.00390625,
	std::cout << a << std::endl; // a = 0.00390625
	std::cout << a++ << std::endl; // Post-increment: print 0.00390625
	std::cout << a << std::endl; // a = 0.0078125
	
	std::cout << b << std::endl; // 10.1016
	
	std::cout << Fixed::max(a, b) << std::endl; // max(0.0078125, 10.1016) = 10.1016
	
	return 0;
}