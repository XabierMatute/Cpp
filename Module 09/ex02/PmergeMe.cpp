/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:02:23 by xmatute-          #+#    #+#             */
/*   Updated: 2023/10/02 13:29:37 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

#include <string>
#include <ctime>
#include <iostream>

/*
** Orthodox Canonical Form
*/
// Default constructor
PmergeMe::PmergeMe(): list(), deque() {}
// Copy constructor
PmergeMe::PmergeMe(const PmergeMe& to_copy) : list(to_copy.list), deque(to_copy.deque) {}
// Destructor
PmergeMe::~PmergeMe() {}
// Copy assignment operator
PmergeMe& PmergeMe::operator=(const PmergeMe& to_asign)
{
	list = to_asign.list;
	deque = to_asign.deque;
	 return(*this);
}

// void	listprint(Ilist	list)
// {
// 	Ilist::iterator		l = list.begin();
// 	while (l != list.end())
// 	{
// 		std::cout << *l << ' ';
// 		l++;
// 	}
// }

// void	dequeprint(Ideque	list)
// {
// 	Ideque::iterator		l = list.begin();
// 	while (l != list.end())
// 	{
// 		std::cout << *l << ' ';
// 		l++;
// 	}
// }

Ilist	half(Ilist &list)
{
	Ilist	half;

	half.splice(half.begin(), list, list.begin(), std::next( list.begin(), list.size() / 2 ) );
	return (half);
}

static void	Merge(Ilist &list)
{
	if (list.size() < 3)
		return (list.sort());
	Ilist	halfl = half(list);
	Merge(halfl);
	Merge(list);
	list.merge(halfl);
}

void	PmergeMe::MergeInsertSortList()
{
	Merge(list);
}

Ideque	half(Ideque &deque)
{
	Ideque	half;
	size_t	i = deque.size() / 2;

	while (i--)
	{
		half.push_back(deque.front());
		deque.pop_front();
	}
	return (half);
}

static void	Merge(Ideque &deque)
{
	if (deque.size() < 3)
	{
		if (deque.front() > deque.back())
		{
			int	f = deque.front();
			deque.pop_front();
			deque.push_back(f);
		}
		return;
	}
	Ideque	halfd = half(deque);
	Merge(halfd);
	Merge(deque);
	while (!halfd.empty())
	{
		unsigned int	f = halfd.front();
		halfd.pop_front();
		Ideque::iterator	i = deque.begin();
		while (*i < f && i != deque.end())
			i++;
		deque.insert(i, f);
	}
}

void	PmergeMe::MergeInsertSortDeque()
{
	Merge(deque);
}

int		PmergeMe::sortList(const char **input)
{
	while (*input)
	{
		if (atoi(*input) < 0)
			throw (std::runtime_error("hay algun numero negativo"));
		list.push_back(atoi(*input));
		input++;
	}
	MergeInsertSortList();
	return (0);
}

int		PmergeMe::sortDeque(const char **input)
{
	while (*input)
	{
		if (atoi(*input) < 0)
			throw (std::runtime_error("hay algun numero negativo"));
		deque.push_back(atoi(*input));
		input++;
	}
	MergeInsertSortDeque();
	return (0);
}

void	PmergeMe::printC()
{
	if (list.empty() || deque.empty())
		return;
	
	Ilist::iterator		l = list.begin();
	Ideque::iterator	d = deque.begin();		
	
	if (*l != *d)
		throw (std::runtime_error("los dos contenedores no son iguales"));
	std::cout << *l << ' ';
	l++;
	d++;
	while (l != list.end() && d != deque.end())
	{
		if (*l != *d)
			throw (std::runtime_error("los dos contenedores no son iguales"));
		if (*l < *(std::prev(l)))
		{
			throw (std::runtime_error("la lista no se ha ordenado"));
		}
		if (*d < *(std::prev(d)))
			throw (std::runtime_error("la deque no se ha ordenado"));
		std::cout << *l << ' ';
		l++;
		d++;
	}
	if (l != list.end() || d != deque.end())
		throw (std::runtime_error("los dos contenedores no son iguales"));
}

int		PmergeMe::sort(const char **input, int size)
{
	time(NULL);
	clock_t t0 = clock();
	sortList(input);
	clock_t tl = clock() - t0;
	t0 = clock();
	sortDeque(input);
	clock_t td = clock() - t0;
	std::cout << "Before: ";
	while (*input)
	{
		std::cout << *input << ' ';
		input++;
	}
	std::cout << std::endl;
	std::cout << "After:  ";
	printC();
	std::cout << std::endl;
	std::cout << "Time to process a range of " << size << " elements with std::list  : " << static_cast<double>(tl) / CLOCKS_PER_SEC << " s" << std::endl;
	std::cout << "Time to process a range of " << size << " elements with std::deque : " << static_cast<double>(td) / CLOCKS_PER_SEC << " s" << std::endl;
	return(0);
}
