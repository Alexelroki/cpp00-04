/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 17:12:32 by adruz-to          #+#    #+#             */
/*   Updated: 2026/02/17 16:06:07 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

/* Fixed (fixed-point number) */
class Fixed
{
	private:
		int _value;
		static const int _fractionalBits = 8;
	public:
	// Ortodox Canonical Form
		Fixed();
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);
		~Fixed();

		// Getter
		int getRawBits(void) const;
		// Setter
		void setRawBits(int const raw);
};


#endif