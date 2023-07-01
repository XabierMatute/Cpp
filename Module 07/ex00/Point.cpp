/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:56:10 by xmatute-          #+#    #+#             */
/*   Updated: 2023/07/01 13:40:19 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0) {}
Point::Point(const Point& to_copy): x(to_copy.x), y(to_copy.y) {}
Point::Point(const Fixed &x, const Fixed &y): x(x), y(y) {}
Point::~Point() {}
Point& Point::operator=(const Point& to_asign)
{
	x = to_asign.x;
	y = to_asign.y;
	return *this;
}
Fixed	Point::getX(void) const {return(x);}
Fixed	Point::getY(void) const {return(y);}

Fixed	Point::line(Point &A, Point &B)
{
	if (A.x == B.x)
		return (x - A.x);
	Fixed m = (B.y - A.y) / (B.x - A.x);
	Fixed n = A.y - A.x * m;
	
	return(y - (m * x + n));
}

std::ostream& operator<<(std::ostream& os, const Point& point)
{
	os << '(';
	os << point.getX();
	os << ',';
	os << point.getY();
	os << ')';
	return (os);
}
