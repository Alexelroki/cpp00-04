/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 17:35:30 by adruz-to          #+#    #+#             */
/*   Updated: 2026/02/23 11:32:55 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain(); // constructor
		Brain(const Brain& other); // copy constructor
		Brain& operator=(const Brain& other); // copy assignment
		~Brain(); // destructor
		
		void setIdea(int index, const std::string &idea);
		std::string getIdea(int index) const;
};


#endif