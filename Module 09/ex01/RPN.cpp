/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:01:26 by xmatute-          #+#    #+#             */
/*   Updated: 2023/09/03 18:58:10 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

#include <string>

/*
** Orthodox Canonical Form
*/
// Default constructor
RPN::RPN(): stack() {}
// Copy constructor
RPN::RPN(const RPN& to_copy) : stack(to_copy.stack) {}
// Destructor
RPN::~RPN() {}
// Copy assignment operator
RPN& RPN::operator=(const RPN& to_asign)
{
	stack = to_asign.stack;
	 return(*this);
}

bool	RPN::issing(const char c)
{
	return (c == '-' || c == '+' || c == '*' || c == '/');
}

int		RPN::extract()
{
	if (stack.empty())
		throw (std::runtime_error("no hay suficientes valores para realizar alguna operación"));

	int i = stack.top();
	
	stack.pop();
	return(i);
}

int	RPN::operate(const char c)
{
	int b = extract();
	int a = extract();

	switch (c)
	{
		case '+':
			return(a + b);
		case '-':
			return(a - b);
		case '*':
			return(a * b);
		case '/':
			return(a / b);
		default:
			throw (std::runtime_error("❗️Error inesperado"));
	}
	return (0);
}

void	RPN::process(const char c)
{
	if (isdigit(c))
		stack.push(c - '0');
	else if (issing(c))
		stack.push(operate(c));
	else if (!isspace(c))
		throw (std::runtime_error("caracter invalido " + std::string(c, 1)));
}

int	RPN::calculate(const char *input)
{
	while (*input)
	{
		process(*input);
		input++;
	}
	if (stack.size() < 1)
		throw (std::runtime_error("la pila esta vacia"));
	if (stack.size() > 1)
		throw (std::runtime_error("sobran numeros en la pila"));
	return (stack.top());
}
