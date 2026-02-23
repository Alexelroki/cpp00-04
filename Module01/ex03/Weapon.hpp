/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 15:01:27 by adruz-to          #+#    #+#             */
/*   Updated: 2026/02/04 16:52:50 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{
private:
	std::string _type;
public:
	Weapon(const std::string& type);
	~Weapon();
const std::string& getType() const;
void setType(const std::string& newType);
};


#endif