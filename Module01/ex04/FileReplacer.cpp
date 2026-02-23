/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:02:33 by adruz-to          #+#    #+#             */
/*   Updated: 2026/02/09 16:57:15 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"
#include <iostream>
#include <sstream>

FileReplacer::FileReplacer(const std::string& file, const std::string& search, 
	const std::string& replace) : _filename(file), _s1(search), _s2(replace)
{
}

FileReplacer::~FileReplacer()
{
}

bool FileReplacer::validateInputs() const
{
	if (_filename.empty())
	{
		std::cerr << "Error: filename cannot be empty" << std::endl;
		return false;
	}
	if (_s1.empty())
	{
		std::cerr << "Error: search string (s1) cannot be empty" << std::endl;
		return false;
	}
	return true;
}

std::string FileReplacer::replaceAll(const std::string& content)
{
	std::string result;
	size_t pos = 0;
	size_t lastPos = 0;

	// Search for each occurrence of s1
	while ((pos = content.find(_s1, lastPos)) != std::string::npos)
	{
		// Add the part before the occurrence
		result.append(content, lastPos, pos - lastPos);
		// Add the replacement
		result.append(_s2);
		// Move position after s1
		lastPos = pos + _s1.length();
	}
	// Add the rest of the content
	result.append(content, lastPos, content.length() - lastPos);
	return result;
}

bool FileReplacer::execute()
{
	// validate inputs
	if (!validateInputs())
	{
		return false;
	}
	// Open input file
	std::ifstream inputFile(_filename.c_str());
	if (!inputFile.is_open())
	{
		std::cerr << "Error: cannot open file '" << _filename << "'" << std::endl;
		return false;
	}
	// Read all file content
	std::stringstream buffer;
	buffer << inputFile.rdbuf();
	std::string content = buffer.str();
	inputFile.close();
	// Perform the replacement
	std::string newContent = replaceAll(content);
	// Create output filename
	std::string outputFilename = _filename + ".replace";
	// Open output file
	std::ofstream outputFile(outputFilename.c_str());
	if (!outputFile.is_open())
	{
		std::cerr << "Error: cannot create output file '" << outputFilename << "'" << std::endl;
		return false;
	}
	// Write modified content
	outputFile << newContent;
	outputFile.close();

	std::cout << "File processed successfully. Output: " << outputFilename << std::endl;
	return true;
}
