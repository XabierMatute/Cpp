/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:56:10 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/11 17:37:59 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0) {}
Point::Point(const Point& to_copy): x(to_copy.x), y(to_copy.y) {}
Point::Point(const Fixed &x, const Fixed &y): x(x), y(y) {}
Point::~Point() {}
Point& Point::operator=(const Point& to_asign)
{
	(Fixed)x = to_asign.x;
	(Fixed)y = to_asign.y;
	return *this;
}
