/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 20:36:21 by xmatute-          #+#    #+#             */
/*   Updated: 2023/07/13 12:41:02 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>
#include "easyfind.hpp"

template	<typename T>// Assuming T is a container of integers
void test(T container)
{
	try
	{
		int result = easyfind(container, 42);
		std::cout << "Element found: " << result << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}

template	<typename T>// Assuming T is a container of integers
void test(T container, int to_find)
{
	try
	{
		int result = easyfind(container, to_find);
		std::cout << "Element found: " << result << " seaching for " << to_find << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const std::list<int>& myList) {
    os << "Elements in the list: ";
    for (std::list<int>::const_iterator it = myList.begin(); it != myList.end(); ++it) {
        os << *it << " ";
    }
    return os;
}


int main()
{
	// std::vector<int> v;
	// test(v);
	// v.push_back(1);
	// test(v);
	// v.push_back(42);
	// test(v);
	// v.push_back(69);
	// test(v);

	// std::deque<int> d;
	// test(d);
	// d.push_back(1);
	// test(d);
	// d.push_back(42);
	// test(d);
	// d.push_back(69);
	// test(d);

	std::list<int> l;
	// test(l);
	// std::cout << l << std::endl;
	l.push_back(1);
	// test(l);
	l.push_back(42);
	std::cout << l << std::endl;

	test(l);
	l.push_back(69);
	std::cout << l << std::endl;

	test(l);
	test(l, 1);
	test(l, 1);
	std::cout << l << std::endl;

	test(l);
	// int	&i = *easyfind(l, 42);
	// i = 13;
	test(l);

	std::cout << l << std::endl;
	// 	test(l, 69);
	// test(l, 1);
	// l.push_back(69);
	// test(l);
	// l.push_front(69);
	// test(l);
	// std::cout << l << std::endl;


//	haz pruebas de usar la referencia para alterarlo

    return 0;
}
