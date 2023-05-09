/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:23:16 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/09 19:49:07 by xmatute-         ###   ########.fr       */
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

void	subjecttest()
{
	std::cout << "\nTest subject" << std::endl;

	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
}

int main()
{
	test0();
	test1();
	test2();
	subjecttest();
	return 0;
}
