/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 18:20:33 by adruz-to          #+#    #+#             */
/*   Updated: 2026/02/23 11:36:36 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	std::cout << "\n=== TEST 1: Basic creation & deletion ===" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	std::cout << "\n=== TEST 2: Array of Animals (Deep Copy) ===" << std::endl;
	const int size = 4;
	Animal* animals[size];

	for (int x = 0; x < size / 2; x++)
		animals[x] = new Dog();
	
	for (int x = size / 2; x < size; x++)
		animals[x] = new Cat();
	
	for (int x = 0; x < size; x++)
		delete animals[x];

	std::cout << "\n=== TEST 3: Deep copy verification - Dog ===" << std::endl;
	{
		Dog basic;
		Dog tmp = basic;
	}
	
	std::cout << "\n=== TEST 4: Deep copy verification - Cat ===" << std::endl;
	{
		Cat basic;
		Cat tmp = basic;
	}
	return 0;
}
