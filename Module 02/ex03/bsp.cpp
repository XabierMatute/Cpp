/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:40:38 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/12 15:51:25 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool aligment(Point &A, Point &B, Point &C)
{
	if (C.line(A,B) == 0)
	{
		// std::cout << A << B << C << "alineados\n";
		return true;
	}
	return false;
}

bool sameside(Point &A, Point &B, Point &C)
{
	if (C.line(A,B) == 0)
		return true;
	return false;
}

bool	bsp(Point &A, Point &B, Point &C, Point &P)
{
	if (aligment(A, B, C))
	{
		// std::cout << "A B C estan alineados y no forman un triangulo\n";
		return false;
	}
	if (aligment(P, A, B) ||
		aligment(P, B, C) ||
		aligment(P, C, A))
	{
		// std::cout << "el punto pertenece a alguna de las rectas del triangulo por lo que no puede estar dentro\n";
		return false;
	}
	if (P.line(A, B) /
		C.line(A, B) > 0 &&
		P.line(C, A) /
		B.line(C, A) > 0 &&
		P.line(B, C) /
		A.line(B, C) > 0)
		return true;
	// std::cout << (P.line(A, B) * C.line(A, B) > 0) ;
	// std::cout << (P.line(C, A) * B.line(C, A) > 0) ;
	// std::cout << (P.line(B, C) * A.line(B, C) > 0) ;
	return(false);
}
