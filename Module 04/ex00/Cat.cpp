/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:02:04 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/17 10:37:41 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

#include <iostream>

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
Cat::Cat() : Animal("Cat")
{std::cout << BLUE << "🔧Cat: Default constructor called" << RESET << std::endl;}
// Copy constructor
Cat::Cat(const Cat& to_copy)
{
	*this = to_copy;
	std::cout << BLUE << "🛠 Cat: Copy constructor called" << RESET << std::endl;
}
// Destructor
Cat::~Cat() 
{std::cout << RED << "💣Cat: Destructor called" << RESET << std::endl;}
// Copy assignment operator
Cat& Cat::operator=(const Cat& to_asign)
{
	(void)to_asign;
	return(*this);
}

void	Cat::makeSound() const
{
	std::cout << type << ": Miau :3" << std::endl;
}
