/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 14:57:04 by adruz-to          #+#    #+#             */
/*   Updated: 2026/02/18 17:09:57 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap();
		DiamondTrap(std::string _name);
		DiamondTrap(const DiamondTrap &other);
		DiamondTrap& operator=(const DiamondTrap& other);
		~DiamondTrap();

		void whoAmI();
		using ScavTrap::attack;
};

#endif