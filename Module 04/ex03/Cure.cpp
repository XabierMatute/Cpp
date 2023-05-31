/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:56:28 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/31 17:23:10 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

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
Cure::Cure() : AMateria("cure")
{
	std::cout << BLUE << "🔧Cure: Default constructor called" << RESET << std::endl;
}
// Copy constructor
Cure::Cure(const Cure& to_copy) : AMateria(to_copy)
{
	std::cout << BLUE << "🛠 Cure: Copy constructor called" << RESET << std::endl;
	*this = to_copy;
}
// Destructor
Cure::~Cure() 
{
	std::cout << RED << "💣Cure: Destructor called" << RESET << std::endl;
}
// Copy assignment operator
Cure& Cure::operator=(const Cure& to_asign)
{
	(void)to_asign;
	return(*this);
}

Cure* Cure::clone() const {return (new Cure());}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
