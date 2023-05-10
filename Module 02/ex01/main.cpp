/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:23:16 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/09 21:59:05 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

void	test0()
{
	std::cout << "\nTest 0" << std::endl;
	Fixed zero;
	std::cout << "hola jonh comanche" << std::endl;
	
}

void	test1()
{
	std::cout << "\nTest 1" << std::endl;
	Fixed numero;
	std::cout << numero.getRawBits() << std::endl;
	numero.setRawBits(42);
	std::cout << numero.getRawBits() << std::endl;
}

void	test2()
{
	std::cout << "\nTest 2" << std::endl;
	Fixed numero;
	std::cout << numero.getRawBits() << std::endl;
	numero.setRawBits(42);
	std::cout << numero.getRawBits() << std::endl;
	Fixed otro(numero);
	std::cout << otro.getRawBits() << std::endl;
	Fixed	zero;
	std::cout << zero.getRawBits() << std::endl;
	numero = zero;
	std::cout << numero.getRawBits() << std::endl;
	std::cout << (zero = otro).getRawBits() << std::endl;
	std::cout << zero.getRawBits() << std::endl;
}


void	subjecttest00()
{
	std::cout << "\nTest subject 00" << std::endl;

	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
}

void	subjecttest01()
{
	std::cout << "\nTest subject 01" << std::endl;

	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
}

int main()
{
	test0();
	test1();
	test2();
	subjecttest00();
	subjecttest01();
	return 0;
}
