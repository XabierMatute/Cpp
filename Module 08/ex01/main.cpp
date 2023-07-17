/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:58:30 by xmatute-          #+#    #+#             */
/*   Updated: 2023/07/15 19:23:00 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
	Span	s(42);

	s.addNumber(0);
	s.addNumber(42);
	s.addNumber(5);
	s.addNumber(-5);
	s.addNumber(-8);
	std::cout << s.longestSpan() << std::endl;
	return 0;
}
