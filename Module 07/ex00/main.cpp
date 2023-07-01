/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 11:40:55 by xmatute-          #+#    #+#             */
/*   Updated: 2023/07/01 14:08:26 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "swap.hpp"
#include "min.hpp"
#include "max.hpp"
#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>

void	swapint()
{
	int a = 42;
	int b = 69;

	std::cout << "swapint :" << std::endl;
	std::cout << "a :" << a << std::endl;
	std::cout << "b :" << b << std::endl;
	swap(a, b);
	std::cout << "a :" << a << std::endl;
	std::cout << "b :" << b << std::endl;
	std::cout << "min :" << min(a, b) << std::endl;
	std::cout << "max :" << max(a, b) << std::endl;
}

void	swapchar()
{
	char a = 'a';
	char b = 'b';

	std::cout << "swapchar :" << std::endl;
	std::cout << "a :" << a << std::endl;
	std::cout << "b :" << b << std::endl;
	swap(a, b);
	std::cout << "a :" << a << std::endl;
	std::cout << "b :" << b << std::endl;
	std::cout << "min :" << min(a, b) << std::endl;
	std::cout << "max :" << max(a, b) << std::endl;
}

void	swapfix()
{
	Fixed a(69.420F);
	Fixed b(123.456F);

	std::cout << "swafix :" << std::endl;
	std::cout << "a :" << a << std::endl;
	std::cout << "b :" << b << std::endl;
	swap(a, b);
	std::cout << "a :" << a << std::endl;
	std::cout << "b :" << b << std::endl;
	std::cout << "min :" << min(a, b) << std::endl;
	std::cout << "max :" << max(a, b) << std::endl;
}

void	swappoint()
{
	Point a(69.420F, 123.456F);
	Point b(1,2);

	std::cout << "swafix :" << std::endl;
	std::cout << "a :" << a << std::endl;
	std::cout << "b :" << b << std::endl;
	swap(a, b);
	std::cout << "a :" << a << std::endl;
	std::cout << "b :" << b << std::endl;
	// std::cout << "min :" << min(a, b) << std::endl;
	// std::cout << "max :" << max(a, b) << std::endl;
}

void	subjectTest()
{
	std::cout << "S T :" << std::endl;

	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}

int main()
{
	swapint();
	swapchar();
	swapfix();
	swappoint();
	subjectTest();
	return 0;
}
