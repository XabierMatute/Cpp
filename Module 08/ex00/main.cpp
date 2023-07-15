/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 20:36:21 by xmatute-          #+#    #+#             */
/*   Updated: 2023/07/15 17:13:40 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <queue>
#include <algorithm>
#include "easyfind.hpp"

template	<typename T>// Assuming T is a container of integers
void testeasyfind(T container, int to_find)
{
	std::cout << "\nBuscando " << to_find << std::endl;
	typename T::iterator result = easyfind(container, to_find);

	if (result == container.end())
		std::cout << "No ";
	else
		std::cout << *result;
	std::cout << " encontrado" << std::endl;			
}

template	<typename T>// Assuming T is a container of printables
void	printc(T container)
{
    std::cout << "Elements in the container: " << std::endl;
	typename T::iterator	it = container.begin();
	while (it != container.end())
	{
 	   std::cout << *it << std::endl;
		it++;
	}

}

int main()
{
	std::vector<int> v;
	printc(v);
	v.push_back(1);
	v.push_back(42);
	v.push_back(69);
	printc(v);
	testeasyfind(v, 0);
	testeasyfind(v, 42);
	testeasyfind(v, 100);

	std::deque<int> d;
	printc(d);
	
	d.push_back(1);
	d.push_back(42);
	d.push_back(69);
	printc(v);
	testeasyfind(v, 42);
	testeasyfind(v, 69);
	testeasyfind(v, -13);
	*easyfind(d, 42) = -13;
	printc(d);
	testeasyfind(d, -13);

	std::list<int> l;
	l.push_back(1);
	l.push_back(42);
	l.push_back(-1);
	l.push_back(69);
	printc(l);
	testeasyfind(l, 1);
	testeasyfind(l, 0);
	testeasyfind(l, -1);
	l.insert(easyfind(l, -1), -2);
	printc(l);

    return 0;
}
