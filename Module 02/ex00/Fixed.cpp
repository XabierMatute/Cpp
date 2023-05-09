/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 16:37:35 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/09 19:00:24 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>


Fixed::Fixed() 
{
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& to_copy) 
{
	std::cout << "Copy constructor called" << std::endl;
	*this = to_copy;
}

Fixed& Fixed::operator=(const Fixed& to_asign)
{
	std::cout << "Assignation operator called" << std::endl;
	value = to_asign.getRawBits();
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void Fixed::setRawBits ( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}
