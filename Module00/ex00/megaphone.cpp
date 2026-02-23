/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 16:16:00 by adruz-to          #+#    #+#             */
/*   Updated: 2026/01/19 10:52:01 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> // for std::cout y str::endl
#include <cctype> // for str::toupper

int	main(int ac, char **av)
{
	if (ac == 1) // if there are no arguments, print a feedback message
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		// Go through each argument
		for (int i = 1; i < ac; i++)
			// Iterate through each character of the current argument
			for (int j = 0; av[i][j]; j++)
				// Uppercase and print
				std::cout << (char)std::toupper(av[i][j]);
	}
	std::cout << std::endl; // Print line break at the end
	return (0);
}
