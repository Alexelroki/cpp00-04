/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 15:35:14 by adruz-to          #+#    #+#             */
/*   Updated: 2026/02/17 12:05:35 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	// Heap: persists, we must delete it
	Zombie* heapZombie = newZombie("HeapZombie");
	heapZombie->announce();
	delete heapZombie; // Free memory

	// Stack: automatically destroyed
	randomChump("StackZombie");
	return (0);
}

/*
When to use each:
	- Stack: when you only need the object temporarily within a function
	- Heap: when you need the object to survive outside the function's scope
*/