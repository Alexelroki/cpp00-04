/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:52:09 by adruz-to          #+#    #+#             */
/*   Updated: 2026/02/10 11:25:45 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanB
{
	private:
		std::string _name;
		Weapon* _weapon;
	public:
		HumanB(std::string name); // doesn't receive weapon
		~HumanB();

		void setWeapon(Weapon& weapon); // receives a reference, but stores a pointer
		void attack() const;
};

#endif