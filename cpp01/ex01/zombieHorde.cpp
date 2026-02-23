/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 20:17:09 by adruz-to          #+#    #+#             */
/*   Updated: 2026/02/09 16:57:19 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
- Single allocation: we use new Zombie[N] to allocate all zombies at once
- Default constructor: necessary to create arrays of objects
- setName(): to initialize each zombie after creation
*/
Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return NULL;
	Zombie* horde = new Zombie[N];
	
	for (int i = 0; i < N; i++)
	{
		horde[i].setName(name);
	}
	return horde;
}
