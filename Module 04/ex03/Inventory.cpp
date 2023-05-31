/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Inventory.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:41:25 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/30 13:14:46 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inventory.hpp"

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

void	Inventory::init()
{
	int i = slots;
	while (i--)
		materias[i] = NULL;
}

void	Inventory::destroy()
{
	int i = slots;
	while (i--)
		if (materias[i])
			delete (materias[i]);
}

bool	Inventory::validIdx(int idx)
{
	return(idx >= 0 && idx < slots);
}

/*
** Orthodox Canonical Form
*/
// Default constructor
Inventory::Inventory()
{
	std::cout << BLUE << "🔧Inventory: Default constructor called" << RESET << std::endl;
	init();
}
// Copy constructor
Inventory::Inventory(const Inventory& to_copy)
{
	std::cout << BLUE << "🛠 Inventory: Copy constructor called" << RESET << std::endl;
	*this = to_copy;
}
// Destructor
Inventory::~Inventory() 
{
	std::cout << RED << "💣Inventory: Destructor called" << RESET << std::endl;
	destroy();
}
// Copy assignment operator
Inventory& Inventory::operator=(const Inventory& to_asign)
{
	size_t i = slots;

	destroy();
	while (i--)
		materias[i] = to_asign.materias[i];
	return(*this);
}

void Inventory::add(AMateria *to_add)
{
	int i = 0;

	while (i < slots)
	{
		if (!materias[i])
		{
			materias[i] = to_add;
			break;
		}
		i++;
	}
}

void Inventory::remove(int idx)
{
	if (!validIdx(idx))
		return;
	materias[idx] = NULL;
}

bool	Inventory::contain(std::string const & type)
{
	int i = slots;
	while (i--)
		if (materias[i] && materias[i]->getType() == type)
			return (true);
	return (false);
}

AMateria *Inventory::find(std::string const & type)
{
	int i = slots;
	while (i--)
		if (materias[i] && materias[i]->getType() == type)
			return (materias[i]);
	return (NULL);
}
