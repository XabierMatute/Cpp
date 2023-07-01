/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 16:50:46 by xmatute-          #+#    #+#             */
/*   Updated: 2023/07/01 13:31:07 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class	Point
{
	private:
		Fixed 	x;
		Fixed 	y;

	public:
		Point();
		~Point();
		Point(const Point& to_copy);
		Point(const Fixed &x, const Fixed &y);
		Point& operator=(const Point& to_asign); //yo lo hacia privado

		Fixed	getX(void) const;
		Fixed	getY(void) const;

		Fixed	line(Point &A, Point &B);
};

std::ostream& operator<<(std::ostream& os, const Point& point);

#endif
