/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:01:37 by adruz-to          #+#    #+#             */
/*   Updated: 2026/02/04 16:56:46 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& t) : _type(t)
{
}

Weapon::~Weapon()
{
}

const std::string& Weapon::getType() const
{
	return _type;
}

void Weapon::setType(const std::string& newType)
{
	_type = newType;
}

