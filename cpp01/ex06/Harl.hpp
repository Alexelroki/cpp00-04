/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 15:25:57 by adruz-to          #+#    #+#             */
/*   Updated: 2026/02/10 17:03:52 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

/* Clase Harl (debug, inf, warning, error) */
class Harl
{
	private:
		void debug();
		void info();
		void warning();
		void error();
	public:
		void complain(std::string level);
};

#endif