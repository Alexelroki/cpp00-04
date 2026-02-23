/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:58:03 by adruz-to          #+#    #+#             */
/*   Updated: 2026/02/09 16:57:13 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
Create a program that:
  - Receives 3 arguments: filename, s1 (string to search for) and s2 (replacement string)
  - Reads the file filename
  - Creates a new file filename.replace
  Copies all content replacing each occurrence of s1 with s2
*/

#include "FileReplacer.hpp"
#include <iostream>

int	main(int argc, char **argv)
{
	// Validate arguments
	if (argc != 4)
	{
		// Open input file
		std::cerr << "Usage: " << argv[0] << " <_filename> <_s1> <_s2>" << std::endl;
		std::cerr << " _filename: file to process" <<std::endl;
		std::cerr << " _s1: string to serach for" << std::endl;
		std::cerr << " _s2: string to replace with" << std::endl;
		return 1;
	}
	std::string _filename = argv[1];
	std::string _s1 = argv[2];
	std::string _s2 = argv[3];
	
	FileReplacer replacer(_filename, _s1, _s2);
	
	if (!replacer.execute())
	{
		return 1;
	}
	return 0;
}
