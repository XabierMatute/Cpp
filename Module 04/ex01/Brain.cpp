/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:41:25 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/30 13:14:46 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

#include <iostream>
#include <string>

// Definición de macros para colores
#define RESET   "\033[0m"
#define BLACK   "\033[0;30m"
#define RED     "\033[0;31m"
#define GREEN   "\033[0;32m"
#define YELLOW  "\033[0;33m"
#define BLUE    "\033[0;34m"
#define MAGENTA "\033[0;35m"
#define CYAN    "\033[0;36m"
#define WHITE   "\033[0;37m"
#define GRAY    "\033[0;90m"

/*
** Orthodox Canonical Form
*/
// Default constructor
Brain::Brain()
{std::cout << BLUE << "🔧Brain: Default constructor called" << RESET << std::endl;}
// Copy constructor
Brain::Brain(const Brain& to_copy)
{
	std::cout << BLUE << "🛠 Brain: Copy constructor called" << RESET << std::endl;
	*this = to_copy;
}
// Destructor
Brain::~Brain() 
{std::cout << RED << "💣Brain: Destructor called" << RESET << std::endl;}
// Copy assignment operator
Brain& Brain::operator=(const Brain& to_asign)
{
	size_t i = idea_capacity;

	while (i--)
		ideas[i] = to_asign.ideas[i];
	return(*this);
}

void	Brain::brainstorm() const
{
	size_t i = 0;

	while (i < idea_capacity)
	{
		if (!ideas[i].empty())
			std::cout << i << ": " << ideas[i] << std::endl;
		i++;
	}
}
