/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adruz-to <adruz-to@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 15:33:32 by adruz-to          #+#    #+#             */
/*   Updated: 2026/02/17 16:53:13 by adruz-to         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

/* ORTHODOX CANONICAL FORM */

// Default constructor
Fixed::Fixed() : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// Int constructor
Fixed::Fixed(const int n) : _value(n << _fractionalBits)
{
	std::cout << "Int constructor called" << std::endl;
}

// Float constructor
Fixed::Fixed(const float f) : _value(roundf(f * (1 << _fractionalBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed &other) : _value(other._value)
{
	std::cout << "Copy constructor called" << std::endl;
}

// Copy assigment operator
Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assigment operator called" << std::endl;
	if (this != &other)
		this->_value = other._value;
	return *this;
}

// Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// Convert to float
float Fixed::toFloat(void) const
{
	return (float)_value / (1 << _fractionalBits);
}

// Convert to int
int Fixed::toInt(void) const
{
	return _value >> _fractionalBits;
}

/* Operator Overload << */

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}

/* Comparison operators*/

bool Fixed::operator>(const Fixed &other) const
{
	return this->_value > other._value;
}

bool Fixed::operator<(const Fixed &other) const
{
	return this->_value < other._value;
}

bool Fixed::operator>=(const Fixed &other) const
{
	return this->_value >= other._value;
}

bool Fixed::operator<=(const Fixed &other) const
{
	return this->_value <= other._value;
}

bool Fixed::operator==(const Fixed &other) const
{
	return this->_value == other._value;
}

bool Fixed::operator!=(const Fixed &other) const
{
	return this->_value != other._value;
}

/* Arithmetic Operators */

Fixed Fixed::operator+(const Fixed &other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) const
{
	return Fixed(this->toFloat() / other.toFloat());
}

/* Increment/Decrement Operators */

// Pre-increment: ++a
Fixed &Fixed::operator++()
{
	++this->_value;
	return *this;
}

// Post-increment: a++
Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->_value++;
	return temp;
}

// Pre-decrement: --a
Fixed &Fixed::operator--()
{
	--this->_value;
	return *this;
}

// Post-decrement: a--
Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	this->_value--;
	return temp;
}

/* MIN/MAX Static Functions */

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return (a < b) ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a < b) ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b) ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b) ? a : b;
}

