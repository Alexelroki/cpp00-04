/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:02:23 by adruz-to          #+#    #+#             */
/*   Updated: 2026/02/08 18:41:14 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACER_HPP
# define FILEREPLACER_HPP

#include <string>
#include <fstream>

class FileReplacer
{
	private:
		std::string	_filename;
		std::string _s1;
		std::string _s2;

		std::string replaceAll(const std::string& content);
		bool validateInputs() const;
	public:
		FileReplacer(const std::string& file, const std::string& search, const std::string& replace);
		~FileReplacer();
	bool execute();
};

#endif