/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:46:25 by adruz-to          #+#    #+#             */
/*   Updated: 2026/02/10 11:25:44 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(std::string name); // Constructor
		~Zombie(void); // Destructor
		void announce(void); // announce method
};

// Functions
Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif