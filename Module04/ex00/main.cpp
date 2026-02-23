/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 18:20:33 by adruz-to          #+#    #+#             */
/*   Updated: 2026/02/17 11:26:00 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
	std::cout << "\n=== ANIMAL ===" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal* k = new Animal();
	std::cout << "\n=== WRONGANIMAL ===" << std::endl;
	const WrongAnimal* l = new WrongAnimal();
	const WrongAnimal* m = new WrongCat();

	std::cout << "\n=== makeSound with polymorphism CORRECT ===" << std::endl;
	j->makeSound();
	i->makeSound();
	k->makeSound();

	std::cout << "\n=== makesound without polymorphism INCORRECT ===" << std::endl;
	l->makeSound();
	m->makeSound();
	
	std::cout << "\n=== DESTRUCTOR ===" << std::endl;
	delete j;
	delete i;
	delete k;
	delete l;
	delete m;

	return 0;
}