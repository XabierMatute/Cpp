/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 18:23:16 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/12 16:01:57 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
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

void	test3()
{
	std::cout << "\nTest 3" << std::endl;
	
	Fixed	a(42);
	Fixed	b(+0.1F);
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "a + b is " << a + b << std::endl;
	std::cout << "b - a is " << b - a << std::endl;
	Fixed ft(42);
	Fixed ten(10);
	std::cout << "42 * 10 is " << ft * ten << std::endl;
	std::cout << "42 / 10 is " << ft / ten << std::endl;
	std::cout << "42 / 21 is " << ft / Fixed(21) << std::endl;
	std::cout << "42 / 84 is " << ft / Fixed(84) << std::endl;
	std::cout << "42 * b is " << ft * b << std::endl;
	std::cout << "1--" << --Fixed(1) << std::endl;
}

void	test4()
{
	std::cout << "\nTest 4" << std::endl;

	int i = 257;
	Fixed n(256);

	while (i--)
	{
		std::cout << (int)i << "/256= " << Fixed(i) / n << '\n';
	}
}

void	test5()
{
	std::cout << "\nTest 5" << std::endl;

	int i = 257;
	Fixed n(256);

	while (i /= 2)
	{
		std::cout << (int)i << "/256= " << Fixed(i) / n << '\n';
	}
}

void	test6()
{
	std::cout << "\nTest 6" << std::endl;

	int i = 10;
	Fixed n(10);

	while (i -= 1)
	{
		std::cout << (int)i << "/10= " << Fixed(i) / n << '\n';
	}
}

void	test7()
{
	std::cout << "\nTest 7" << std::endl;

	int i = 256;
	Fixed n(2560);

	while (i--)
	{
		std::cout << (int)i << "/2560= " << Fixed(i) / n << '(' << Fixed(i) / n * 256 << "/256)" << '\n';
	}
}

void	test16()
{
	std::cout << "\nTest 16" << std::endl;

	int i = 257;
	Fixed n(256);

	std::cout << std::hex;
	while (i--)
	{
		std::cout << (int)i << "/" << n << "= " << Fixed(i) / n << '\n';
	}
	std::cout << float(42) << "/" << float(10) << "= " << float(42) / float(10) << '\n';
	std::cout << std::dec;
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

void	subjecttest02()
{
	std::cout << "\nTest subject 02" << std::endl;

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
}

void	linetest(Point A, Point B, Point P)
{
	std::cout << "la distancia de P" << P << "a la recta A" << A << "-B" << B << " es " << P.line(A, B) << "\n";
}
#include "bsp.h"

void	bsptest(Point A, Point B, Point C,Point P)
{
	if	(!bsp(A, B, C, P))
		std::cout << "🥀el punto P " << P << " NO";
	else
		std::cout << "🦋el punto P " << P;
		
	std::cout << " pertenece al triangulo A" << A << "-B" << B << "-C" << C << "\n";
}

void	multibsptest(Point A, Point B, Point C)
{
	Point zero;
	Point P(1, 1);
	Point PP(1.01F, 1.01F);
	Point PM(0.99F, 0.99F);
	Point PPM(0.99F, 1);
	Point F(-42.69F, 1999.113F);
	Point FT(42 / 10, 42 * 10);
	Point Felix(9.99F,10.11F);
	Point Felix2(9.99F,100.11F);
	Point Mikel(0,0.11F);
	Point Mikel2(0,3.33F);
	Point inigo(30, 35);
	Point Amparo1(10.23F, -3.02F);
	Point Amparo2(10, -5.33F);
	Point Amparo3(13.76F, -5.33F);
	bsptest(A, B, C, zero);
	bsptest(A, B, C, P);
	bsptest(A, B, C, PP);
	bsptest(A, B, C, PM);
	bsptest(A, B, C, PPM);
	bsptest(A, B, C, F);
	bsptest(A, B, C, FT);
	bsptest(A, B, C, Felix);
	bsptest(A, B, C, Felix2);
	bsptest(A, B, C, Mikel);
	bsptest(A, B, C, Mikel2);
	bsptest(A, B, C, Amparo1);
	bsptest(A, B, C, Amparo2);
	bsptest(A, B, C, Amparo3);
}

int main()
{
	// test0();
	// test1();
	// test2();
	// test3();
	// test4();
	// test5();
	// test6();
	// test7();
	// test16();
	// subjecttest00();
	// subjecttest01();
	// subjecttest02();	
	// std::cout << std::hex;
	// linetest(Point(-1,-1), Point(-1,-1), Point(2 * 1.52F,-2 * 1.52F));
	multibsptest(Point(0,0), Point(0,0), Point(0,0));
	multibsptest(Point(-1,-1), Point(56,0), Point(0,33.33F));
	multibsptest(Point(0,0), Point(2,0), Point(0,2));
	multibsptest(Point(0,0), Point(3,0), Point(0,3));
	multibsptest(Point(-46,100.101F), Point(46,100.101F), Point(0, -111.111F));
	multibsptest(Point(3,6), Point(6.69F,72.9F), Point(15, 0));
	multibsptest(Point(3,2), Point(-2, 5.75F), Point(0, 3));
	multibsptest(Point(70, 90), Point(40, 30), Point(10, 15));
	multibsptest(Point(70, 90), Point(40, 30), Point(10, 15));
	multibsptest(Point(10.23F, -3.02F), Point(9, -6.88F), Point(13.36F, -6.68F));
	return 0;
}
