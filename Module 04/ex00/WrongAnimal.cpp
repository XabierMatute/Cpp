/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 09:14:19 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/17 10:37:32 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

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
WrongAnimal::WrongAnimal() : type("wrong platonic animal") 
{std::cout << BLUE << "🔧WrongAnimal: Default constructor called" << RESET << std::endl;}
// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal& to_copy) : type(to_copy.type) 
{std::cout << BLUE << "🛠 WrongAnimal: Copy constructor called" << RESET << std::endl;}
// Destructor
WrongAnimal::~WrongAnimal() 
{std::cout << RED << "💣WrongAnimal: Destructor called" << RESET << std::endl;}
// Copy assignment operator
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& to_asign)
{
	type = to_asign.type;
	return(*this);
}

WrongAnimal::WrongAnimal(std::string type) : type(type) 
{std::cout << BLUE << "🐾WrongAnimal: Type constructor called, " << type << " created" << RESET << std::endl;}

std::string	WrongAnimal::getType() const {return type;}

void	WrongAnimal::makeSound() const
{
	std::cout << type << ": *wrong sound beyond your comprehension*" << std::endl;
}
