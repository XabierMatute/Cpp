/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:37:35 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/12 16:30:23 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

// Definición de macros para colores
#define RESET   "\033[0m"
#define BLACK   "\033[0;30m"
#define RED     "\033[0;31m"
#define GREEN   "\033[0;32m"
#define YELLOW  "\033[0;33m"
#define BLUE    "\033[0;34m"
#define MAGENTA "\033[0;35m"
#define CYAN    "\033[0;36m"
#define WHITE   "\033[0;37m"
#define GRAY    "\033[0;90m"

static float pow(int a, int n)
{
	float p;

	p = 1;
	while (n--)
		p *= a;
	return(p);
}

static int ipow(int a, int n)
{
	int p;

	p = 1;
	while (n--)
		p *= a;
	return(p);
}

Fixed::Fixed() 
{
	std::cout << BLUE << "🔧Default constructor called" << RESET << std::endl;
	value = 0;
}

Fixed::~Fixed() 
{
	std::cout << RED << "💣Destructor called" << RESET << std::endl;
}

Fixed::Fixed(const Fixed& to_copy) 
{
	std::cout << BLUE << "🛠 Copy constructor called" << RESET << std::endl;
	*this = to_copy;
}

Fixed::Fixed(const int& to_asign) 
{
	std::cout << BLUE << "🔢Int constructor called" << RESET << std::endl;
	value = to_asign * pow(2, bit_num);
}

Fixed::Fixed(const float& to_asign) 
{
	std::cout << BLUE << "☁️Float constructor called" << RESET << std::endl;
	value = (int)roundf(to_asign * pow(2, bit_num));
}

Fixed& Fixed::operator=(const Fixed& to_asign)
{
	// std::cout << YELLOW << "👆Assignation operator called" << RESET << std::endl;
	value = to_asign.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	// std::cout << GRAY << "🔍getRawBits member function called" << RESET << std::endl;
	return value;
}

void Fixed::setRawBits ( int const raw )
{
	std::cout << GRAY << "✏️setRawBits member function called" << RESET <<  std::endl;
	value = raw;
}

float Fixed::toFloat( void ) const
{
	// std::cout << GRAY << "☁️toFloat member function called" << RESET << std::endl;
	return ((float)value / pow(2, bit_num));
}

int Fixed::toInt( void ) const
{
	// std::cout << GRAY << "🔢toFloat member function called" << RESET << std::endl;
	return (int(value / pow(2, bit_num)));
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	if (!(std::cout.flags() & std::ios_base::hex))
		return (os <<(fixed.toFloat()));
	os << std::hex << fixed.toInt();
	os << '.';
	os << std::hex << fixed.getRawBits() % ipow(2, FIXED_BIT_NUM);
	return (os);
}

bool Fixed::operator>(const Fixed& other) const
{
	return(value > other.value);
}

bool Fixed::operator>=(const Fixed& other) const
{
	return(value >= other.value);
}

bool Fixed::operator<(const Fixed& other) const
{
	return(value < other.value);
}

bool Fixed::operator<=(const Fixed& other) const
{
	return(value <= other.value);
}

bool Fixed::operator==(const Fixed& other) const
{
	return(value == other.value);
}

bool Fixed::operator!=(const Fixed& other) const
{
	return(value == other.value);
}

Fixed Fixed::operator+(const Fixed& other) const
{
	Fixed	result;

	result.value = value + other.value;
	return (result);
}

Fixed Fixed::operator-(const Fixed& other) const
{
	Fixed	result;

	result.value = value - other.value;
	return (result);
}

Fixed Fixed::operator*(const Fixed& other) const
{
	Fixed	result;

	result.value = value * other.value / ipow(2, bit_num);
	return (result);
}

Fixed Fixed::operator/(const Fixed& other) const
{
	Fixed	result;

	result.value = value * ipow(2, bit_num) / other.value;
	return (result);
}

Fixed Fixed::operator++()
{
	value++;
	return (*this);
}

Fixed Fixed::operator--()
{
	value--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	tmp(*this);
	value++;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed	tmp(*this);
	value--;
	return (tmp);
}

const Fixed& Fixed::min(Fixed const &one, Fixed const &other)
{
	if (one < other)
		return (one);
	return (other);
}

const Fixed& Fixed::max(Fixed const &one, Fixed const &other)
{
	if (one > other)
		return (one);
	return (other);
}
