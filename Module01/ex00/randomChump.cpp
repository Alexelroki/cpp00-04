/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:36:06 by adruz-to          #+#    #+#             */
/*   Updated: 2026/02/10 11:25:43 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie zombie(name); // creates zombie on stack
	zombie.announce(); // announces itself
	// zombie is automatically destroyed here
}
