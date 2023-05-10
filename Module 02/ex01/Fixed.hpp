/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 13:31:30 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/09 21:49:01 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class	Fixed
{
	private:
		int				value;
		static const int bit_num = 8;

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& to_copy);
		Fixed& operator=(const Fixed& to_asign);
		Fixed(const int& to_asign);
		Fixed(const float& to_asign);

		int getRawBits( void ) const;
		void setRawBits ( int const raw );

		float toFloat( void ) const;
		int toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
