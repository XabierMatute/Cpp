/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 18:56:24 by xmatute-          #+#    #+#             */
/*   Updated: 2023/07/02 20:09:24 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

template	<typename T>
void	printArray(Array<T> a)
{
	std::cout << "Size: " << a.size() << std::endl;
	std::cout << "Content: " << a.size() << std::endl;
	try
	{
		unsigned int i = 0;
		std::cout << i << ": " << a[i] << std::endl;
		while (++i)
			std::cout << i << ": " << a[i] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main()
{
	Array<int>	a;
	std::cout << "a: " << std::endl;
	printArray(a);

	Array<int>	b(5);
	std::cout << "b: " << std::endl;
	printArray(b);

	b[2] = 22;
	b[0] = 42;
	b[3] = 69;

	std::cout << "b: " << std::endl;
	printArray(b);
	a = b;
	b[1] = -13;
	a[3] = 71;
	std::cout << "a: " << std::endl;
	printArray(a);
	std::cout << "b: " << std::endl;
	printArray(b);
	b = a;
	std::cout << "a: " << std::endl;
	printArray(a);
	std::cout << "b: " << std::endl;
	printArray(b);

	
	Array<char>	s(4);
	printArray(s);

	Array<void *>	pa(3);
	printArray(pa);
	
	return 0;
}
