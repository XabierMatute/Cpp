/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 18:39:08 by xmatute-          #+#    #+#             */
/*   Updated: 2023/07/01 10:24:36 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

#include <limits.h>

#include <float.h>

#include <iostream>

#include <math.h>

#include <cstdlib>

/*
** Orthodox Canonical Form
*/
// Default constructor
ScalarConverter::ScalarConverter(){}
// Copy constructor
ScalarConverter::ScalarConverter(const ScalarConverter& to_copy){(void)to_copy;}
// Destructor
ScalarConverter::~ScalarConverter(){}
// Copy assignment operator
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& to_asign){(void)to_asign;return (*this);}

bool	ScalarConverter::isChar(const unsigned char &c)
{
	return (isprint(c) && !isdigit(c));
}

bool	ScalarConverter::isChar(const std::string	&literal)
{
	if (literal.length() != 1)
		return (false);
	return (isChar(literal[0]));	
}

bool	ScalarConverter::isIntFormat(const std::string	&literal)
{
	size_t	i = 0;

	if (literal[0] == '+' || literal[0] == '-')
		i++;
	while (literal[i])
	{
		if (!isdigit(literal[i]))
			return (false);
		i++;
	}
	return (true);	
}

bool	ScalarConverter::isIntRange(const std::string	&literal)
{
	if (literal.length() > std::to_string(INT_MAX).length() &&
		literal.length() > std::to_string(INT_MIN).length())
		return (false);
	if (literal.length() == std::to_string(INT_MAX).length() &&
		literal > std::to_string(INT_MAX))
		return (false);
	if (literal.length() == std::to_string(INT_MIN).length() &&
		literal < std::to_string(INT_MIN))
		return (false);
	return(true);
}

bool	ScalarConverter::isInt(const std::string &literal)
{
	return (isIntFormat(literal) && isIntRange(literal));
}

bool	ScalarConverter::isParticularFloat(const std::string	&literal)
{
	return (literal == "-inff" ||
			literal == "+inff" ||
			literal == "inff" ||
			literal == "nanf");
}

bool	ScalarConverter::isFloatFormat(const std::string	&literal)
{
	size_t	i = 0;

	if (literal[i] == '+' || literal[i] == '-')
		i++;
	if (!isdigit(literal[i]))
		return (false);
	while (literal[i] && isdigit(literal[i]))
		i++;
	if (literal[i] == '.')
		i++;
	if (!isdigit(literal[i]))
		return (false);
	while (literal[i] && isdigit(literal[i]))
		i++;
	return (literal[i] == 'f');
}

bool	ScalarConverter::isFloat(const std::string &literal)
{
	return (isParticularFloat(literal) || isFloatFormat(literal));
}

bool	ScalarConverter::isParticularDouble(const std::string	&literal)
{
	return (literal == "-inf" ||
			literal == "+inf" ||
			literal == "inf" ||
			literal == "nan");
}

bool	ScalarConverter::isDoubleFormat(const std::string	&literal)
{
	size_t	i = 0;

	if (literal[i] == '+' || literal[i] == '-')
		i++;
	if (!isdigit(literal[i]))
		return (false);
	while (literal[i] && isdigit(literal[i]))
		i++;
	if (literal[i] == '.')
		i++;
	if (!isdigit(literal[i]))
		return (false);
	while (literal[i] && isdigit(literal[i]))
		i++;
	return (i == literal.length());	
}

bool	ScalarConverter::isDouble(const std::string &literal)
{
	return (isParticularDouble(literal) || (isDoubleFormat(literal)));
}

int	ScalarConverter::detectLiteral(const std::string	&literal)
{
	if (isChar(literal))
		return (CHAR);
	if (isInt(literal))
		return (INT);
	if (isFloat(literal))
		return (FLOAT);
	if (isDouble(literal))
		return (DOUBLE);
	return(INVALID);
}

int	ScalarConverter::convert(const std::string &to_convert)
{
	switch (detectLiteral(to_convert))
	{
	case CHAR :
		return (convert(to_convert[0]));
	case INT :
		return (convert(atoi(to_convert.c_str())));
	case FLOAT :
		return (convert((float)atof(to_convert.c_str())));
	case DOUBLE	:
		return (convert(atof(to_convert.c_str())));
	case INVALID :
		std::cerr << "❌Error: invalid imput" << std::endl;
		return (1);
	default:
		std::cerr << "❗️Unexpected Error: ScalarConverter can not convert " << to_convert << std::endl;
		return (2);
	}
	return (0);
}

int	ScalarConverter::convert(const char	&c)
{
	display(c);
	display(static_cast<int>(c));
	display(static_cast<float>(c));
	display(static_cast<double>(c));
	return (0);
}

int	ScalarConverter::convert(const int	&i)
{
	if (i > CHAR_MAX || i < CHAR_MIN)
		std::cout << "char: impossible" << std::endl;
	else
		display(static_cast<char>(i));
	display(i);
	display(static_cast<float>(i));
	display(static_cast<double>(i));
	return (0);
}

int	ScalarConverter::convert(const float &f)
{
	if (isnan(f) || f > CHAR_MAX || f < CHAR_MIN)
		std::cout << "char: impossible" << std::endl;
	else
		display(static_cast<char>(f));
	if (isnan(f) || f > INT_MAX || f < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		display(static_cast<int>(f));
	display(f);
	display(static_cast<double>(f));
	return (0);
}

int	ScalarConverter::convert(const double &d)
{
	if (isnan(d) || d > CHAR_MAX || d < CHAR_MIN)
		std::cout << "char: impossible" << std::endl;
	else
		display(static_cast<char>(d));
	if (isnan(d) || d > INT_MAX || d < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		display(static_cast<int>(d));
	if ((!isnan(d) && !isinf(d)) &&
		(d > FLT_MAX ||
		d < -FLT_MAX))
		std::cout << "float: impossible" << std::endl;
	else
		display(static_cast<float>(d));
	display(d);
	return (0);	
}

int	ScalarConverter::display(const char	&c)
{
	if (isprint(c))
	{
		std::cout << "char: '" << c << "'" << std::endl;
		return (0);
	}
	std::cout << "char: Non displayable" << std::endl;
	return (1);
}

int	ScalarConverter::display(const int	&i)
{
	std::cout << "int: " << i << std::endl;
	return (0);
}

int	ScalarConverter::display(const float &f)
{
	double aux;
	if (!isinf(f) && !isnan(f) && !modf(f, &aux))
		std::cout << "float: " << f << ".0f" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;
	return (0);
}

int	ScalarConverter::display(const double &d)
{
	double aux;
	if (!isinf(d) && !isnan(d) && !modf(d, &aux))
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: " << d << std::endl;
	return (0);
}
