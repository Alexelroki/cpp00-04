/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 20:19:10 by adruz-to          #+#    #+#             */
/*   Updated: 2026/02/09 16:57:18 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
- delete[]: important instead of delete to free the array
- for loop to call announce() on each zombie in the array
- pointer zombieHorde() must return a pointer to the first element of the array
- testing: test with different values of N to verify it works correctly
*/

int	main()
{
	int N = 5;
	// create a horde of zombies
	Zombie* horde = zombieHorde(N, "Horde of Zombies");
	// make each zombie announce itself
	for (int i = 0; i < N; i++)
		horde[i].announce(); // for each of the zombies
	// Free the entire array's memory
	delete[] horde; // calls each zombie's destructor and then frees the memory
	return (0);
	// second additional horde ??
}