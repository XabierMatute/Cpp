/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:37:35 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/09 19:42:49 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

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

Fixed& Fixed::operator=(const Fixed& to_asign)
{
	std::cout << YELLOW << "👆Assignation operator called" << RESET << std::endl;
	value = to_asign.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << GRAY << "🔍getRawBits member function called" << RESET << std::endl;
	return value;
}

void Fixed::setRawBits ( int const raw )
{
	std::cout << GRAY << "✏️setRawBits member function called" << RESET <<  std::endl;
	value = raw;
}
