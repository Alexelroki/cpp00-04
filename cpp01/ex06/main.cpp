/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:25:46 by adruz-to          #+#    #+#             */
/*   Updated: 2026/02/09 16:57:16 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: ./harlFilter <level>" << std::endl;
		std::cerr << "Levels: DEBUG, INFO, WARNING, ERROR" << std::endl;
		return 1;
	}
	
	Harl harl;
	std::string level = argv[1];
	// Convert level to numeric index
	int levelIndex = -1;

	if (level == "DEBUG")
		levelIndex = 0;
	else if (level == "INFO")
		levelIndex = 1;
	else if (level == "WARNING")
		levelIndex = 2;
	else if (level == "ERROR")
		levelIndex = 3;

	// Use switch with fall-through (without breaks)
	// This is key: each case executes and continues to the following ones
	switch (levelIndex)
	{
		case 0: // DEBUG
			harl.complain("DEBUG"); // no break - intentional fall through continues to case 1
		case 1: // INFO
			harl.complain("INFO"); // no break continues to case 2
		case 2: // WARNING
			harl.complain("WARNING"); // no break continues to case 3
		case 3: // ERROR
			harl.complain("ERROR");
			break;
		default:
			std::cout << "[Probably complaining about insignificant problems]" << std::endl;
	}
	return 0;
}
