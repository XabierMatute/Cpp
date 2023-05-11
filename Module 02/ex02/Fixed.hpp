/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:31:30 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/11 15:42:54 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

const int	FIXED_BIT_NUM = 8;

class	Fixed
{
	private:
		int				value;
		static const int bit_num = FIXED_BIT_NUM;

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& to_copy);
		Fixed& operator=(const Fixed& to_asign);
		Fixed(const int& to_asign);
		Fixed(const float& to_asign);
		
		bool operator>(const Fixed& other) const;
		bool operator>=(const Fixed& other) const;
		bool operator<(const Fixed& other) const;
		bool operator<=(const Fixed& other) const;
		bool operator==(const Fixed& other) const;
		bool operator!=(const Fixed& other) const;

		Fixed operator+(const Fixed& other) const;
		Fixed operator-(const Fixed& other) const;
		Fixed operator*(const Fixed& other) const;
		Fixed operator/(const Fixed& other) const;

		Fixed operator++(int);
		Fixed operator--(int);

		Fixed operator++();
		Fixed operator--();
		// Fixed operator++(int);

		int getRawBits( void ) const;
		void setRawBits ( int const raw );

		float toFloat( void ) const;
		int toInt( void ) const;

		static const Fixed& min(Fixed const &one, Fixed const &other);
		static const Fixed& max(Fixed const &one, Fixed const &other);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
