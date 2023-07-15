/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:58:05 by xmatute-          #+#    #+#             */
/*   Updated: 2023/07/15 19:12:17 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*
** Orthodox Canonical Form
*/
// Default constructor
Span::Span() : N(0) {} 
// Copy constructor
Span::Span(const Span& to_copy) : N(to_copy.N), container(to_copy.container) {}
// Destructor
Span::~Span(){}
// Copy assignment operator
Span& Span::operator=(const Span& to_asign){(void)to_asign;return (*this);}//

Span::Span(unsigned int N) : N(N) {container.reserve(N);}

void	Span::addNumber(int to_add)
{
	if (container.size() >= N)
		throw std::overflow_error("Span is already full");
	container.push_back(to_add);
}

int	Span::min() const
{
	return (*std::min_element(container.begin(), container.end()));
}

int	Span::max() const
{
	return (*std::max_element(container.begin(), container.end()));
}

unsigned int Span::shortestSpan() const
{
	return 1;
}

unsigned int Span::longestSpan() const
{
	if (container.size() < 2)
		return 0;
	return (max() - min());
}
