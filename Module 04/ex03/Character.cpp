/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:43:44 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/31 17:20:50 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

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
Character::Character()
{
	std::cout << BLUE << "🔧Character: Default constructor called" << RESET << std::endl;
}
// Copy constructor
Character::Character(const Character& to_copy)
{
	std::cout << BLUE << "🛠 Character: Copy constructor called" << RESET << std::endl;
	*this = to_copy;
}
// Destructor
Character::~Character() 
{
	std::cout << RED << "💣Character: Destructor called" << RESET << std::endl;
}
// Copy assignment operator
Character& Character::operator=(const Character& to_asign)
{
	name = to_asign.name;
	inventory = to_asign.inventory;
	return(*this);
}

Character::Character(std::string const & name) : name(name) 
{
	std::cout << BLUE << "👤Character: Name constructor called, " << name << " created" << RESET << std::endl;
}


std::string const & Character::getName() const {return name;}

void Character::equip(AMateria* m)
{
	inventory.add(m);
}

void Character::unequip(int idx)
{
	inventory.remove(idx);
}

void Character::use(int idx, ICharacter& target)
{
	if (!inventory.validIdx(idx) || !inventory.materias[idx])
		return;
	inventory.materias[idx]->use(target);	
}
