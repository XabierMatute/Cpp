/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:58:05 by xmatute-          #+#    #+#             */
/*   Updated: 2023/07/17 19:10:00 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>
#include <iterator>

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

void	Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (container.size() + std::distance(begin, end) - 1 >= N)
		throw std::overflow_error("Span has not enought space");
	container.insert(container.begin(), begin, end);
}

void	Span::addNumbers(std::vector<int> to_add)
{
	addNumbers(to_add.begin(), to_add.end());
}

int	Span::min(std::vector<int> const container)
{
	return (*std::min_element(container.begin(), container.end()));
}

int	Span::max(std::vector<int> const container)
{
	return (*std::max_element(container.begin(), container.end()));
}

int	Span::min() const
{
	return (min(container));
}

int	Span::max() const
{
	return (max(container));
}

std::vector<int>	Span::diffs(std::vector<int> const container)
{
	std::vector<int>	diff;
	unsigned int i = 0;

	while (i < container.size())
	{
		diff.push_back(std::abs(container[i + 1] - container[i]));
		i++;
	}
	return diff;
}

unsigned int Span::shortestSpan()
{
	if (container.size() < 2)
		return 0;
	std::sort(container.begin(), container.end());
	return min(diffs(container));
}

unsigned int Span::longestSpan() const
{
	if (container.size() < 2)
		return 0;
	return (max() - min());
}
