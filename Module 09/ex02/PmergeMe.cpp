/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:02:23 by xmatute-          #+#    #+#             */
/*   Updated: 2023/09/04 18:40:44 by xmatute-         ###   ########.fr       */
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

void	PmergeMe::MergeInsertSortList()
{
	int	pairs[list.size() / 2 + list.size() % 2][2];

	int i = 0;
	while (!list.empty())
	{
		pairs[i][0] = list.top();
	}
	
}


int		PmergeMe::sortList(const char **input)
{
	while (*input)
	{
		list.push_back(atoi(*input));
		input++;
	}
	MergeInsertSortList();
}

int		PmergeMe::sort(const char **input, int size)
{
	time_t t0 = time(NULL);
	sortList(input);
	time_t tl = t0 - time(NULL);
	t0 = time(NULL);
	sortDeque(input);
	time_t td = t0 - time(NULL);
	std::cout << "Before: ";
	while (*input)
	{
		std::cout << *input;
		input++;
	}
	std::cout << std::endl;
	std::cout << "Time to process a range of " << size << " elements with std::list  : " << tl << " us" << std::endl;
	std::cout << "Time to process a range of " << size << " elements with std::deque : " << td << " us" << std::endl;
}
