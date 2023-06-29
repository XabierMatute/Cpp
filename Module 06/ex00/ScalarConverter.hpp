/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 18:39:04 by xmatute-          #+#    #+#             */
/*   Updated: 2023/06/29 16:54:03 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScalarConverter_HPP
# define ScalarConverter_HPP

#include <string>

class	ScalarConverter
{
	private:
		/*OCF*/
		ScalarConverter();
		ScalarConverter(const ScalarConverter& to_copy);
		~ScalarConverter();
		ScalarConverter& operator=(const ScalarConverter& to_asign);

		enum
		{
			CHAR,
			INT,
			FLOAT,
			DOUBLE,
			INVALID
		};

		static bool	isChar(const std::string	&literal);
		static bool	isChar(const unsigned char	&c);

		static bool	isIntFormat(const std::string	&literal);
		static bool	isIntRange(const std::string	&literal);
		static bool	isInt(const std::string	&literal);

		static bool	isParticularFloat(const std::string	&literal);
		static bool	isFloatFormat(const std::string	&literal);
		static bool	isFloat (const std::string	&literal);

		static bool	isParticularDouble(const std::string	&literal);
		static bool	isDoubleFormat(const std::string	&literal);
		static bool	isDouble(const std::string	&literal);

		static int	detectLiteral(const std::string	&literal);

		static int	convert(const char		&c);
		static int	convert(const int		&i);
		static int	convert(const float		&f);
		static int	convert(const double	&d);

		static int	display(const char		&c);
		static int	display(const int		&i);
		static int	display(const float		&f);
		static int	display(const double	&d);

	public:
		static int	convert(const std::string	&to_convert);
};

#endif
