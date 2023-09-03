/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:02:23 by xmatute-          #+#    #+#             */
/*   Updated: 2023/09/03 20:04:54 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

#include <string>

/*
** Orthodox Canonical Form
*/
// Default constructor
PmergeMe::PmergeMe(): stack() {}
// Copy constructor
PmergeMe::PmergeMe(const PmergeMe& to_copy) : stack(to_copy.stack) {}
// Destructor
PmergeMe::~PmergeMe() {}
// Copy assignment operator
PmergeMe& PmergeMe::operator=(const PmergeMe& to_asign)
{
	stack = to_asign.stack;
	 return(*this);
}