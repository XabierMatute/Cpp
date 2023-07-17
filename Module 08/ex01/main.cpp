/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:58:30 by xmatute-          #+#    #+#             */
/*   Updated: 2023/07/17 19:47:17 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

std::vector<int> randomVector(unsigned int	N)
{
	std::vector<int>	aitana;

	std::cout << "Creando vector alearorio...\n";
	aitana.reserve(N);
	while (N--)
	{
		int	r = std::rand();
		if ((std::rand() % 2))
			r *= -1;
		std::cout << " " << r;
		aitana.push_back(r);
	}
	std::cout << std::endl;
	return(aitana);
}

int main()
{
	srand (time(NULL));
	Span	s(20500);

	s.addNumbers(randomVector(10000));
	std::cout << "longest: " << s.longestSpan() << std::endl;
	std::cout << "shortest: " << s.shortestSpan() << std::endl;
	s.addNumbers(randomVector(10000));
	std::cout << "longest: " << s.longestSpan() << std::endl;
	std::cout << "shortest: " << s.shortestSpan() << std::endl;
	s.addNumber(INT_MAX);
	s.addNumber(INT_MIN);
	s.addNumber(INT_MIN + 1);
	std::cout << "longest: " << s.longestSpan() << std::endl;
	std::cout << "longest: " << std::hex << s.longestSpan() << std::endl;
	std::cout << "shortest: " << s.shortestSpan() << std::endl;
	s.addNumber(INT_MAX);
	std::cout << "shortest: " << s.shortestSpan() << std::endl;
	return 0;
}
