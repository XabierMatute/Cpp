/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:33:07 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/31 17:36:01 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

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
AMateria::AMateria() : type("platonic Materia") 
{std::cout << BLUE << "🔧AMateria: Default constructor called" << RESET << std::endl;}
// Copy constructor
AMateria::AMateria(const AMateria& to_copy) : type(to_copy.type) 
{std::cout << BLUE << "🛠 AMateria: Copy constructor called" << RESET << std::endl;}
// Destructor
AMateria::~AMateria() 
{std::cout << RED << "💣AMateria: Destructor called" << RESET << std::endl;}
// Copy assignment operator
AMateria& AMateria::operator=(const AMateria& to_asign)
{
	(void)to_asign;
	return(*this);
}

AMateria::AMateria(std::string const & type) : type(type) 
{std::cout << BLUE << "⚛️ AMateria: Type constructor called, " << type << " created" << RESET << std::endl;}

std::string const & AMateria::getType() const {return type;}

void AMateria::use(ICharacter& target)
{
	std::cout << "* ";
	if (getType().empty())
		std::cout << "nameless Materia";
	std::cout << getType() << " used targeting " << target.getName() << " *" << std::endl;
}
