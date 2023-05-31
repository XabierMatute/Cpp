/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:18:06 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/31 18:04:40 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

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
MateriaSource::MateriaSource()
{
	std::cout << BLUE << "🔧MateriaSource: Default constructor called" << RESET << std::endl;
}
// Copy constructor
MateriaSource::MateriaSource(const MateriaSource& to_copy)
{
	std::cout << BLUE << "🛠 MateriaSource: Copy constructor called" << RESET << std::endl;
	*this = to_copy;
}
// Destructor
MateriaSource::~MateriaSource() 
{
	std::cout << RED << "💣MateriaSource: Destructor called" << RESET << std::endl;
}
// Copy assignment operator
MateriaSource& MateriaSource::operator=(const MateriaSource& to_asign)
{
	source = to_asign.source;
	return(*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	source.add(m);
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (source.contain(type))
		return (source.find(type)->clone());
	return (0);
}

