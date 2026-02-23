/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:35:53 by adruz-to          #+#    #+#             */
/*   Updated: 2026/02/10 11:25:35 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Zombie* (return type)
	- Allocates memory on the heap (dynamic memory)
	- Calls Zombie constructor passing it the name
	- Returns a pointer to a Zombie object, the memory address where the
		zombie was created
	- The * indicates it's a memory address, not the complete object
newZombie (function name)
	- Descriptive name: creates a new zombie
std::string name (parameter)
	- Receives the name to be assigned to the zombie
NOTE: the object is not destroyed when the function ends because it's on the heap
*/
Zombie*	newZombie(std::string name)
{
	Zombie* zombie = new Zombie(name); // creates zombie on heap
	// If we use new, we must use delete to avoid memory leaks
	return (zombie); // Returns the pointer
}