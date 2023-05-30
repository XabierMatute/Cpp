/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 09:14:19 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/17 11:27:05 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

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
Animal::Animal() : type("platonic animal") 
{std::cout << BLUE << "🔧Animal: Default constructor called" << RESET << std::endl;}
// Copy constructor
Animal::Animal(const Animal& to_copy) : type(to_copy.type) 
{std::cout << BLUE << "🛠 Animal: Copy constructor called" << RESET << std::endl;}
// Destructor
Animal::~Animal() 
{std::cout << RED << "💣Animal: Destructor called" << RESET << std::endl;}
// Copy assignment operator
Animal& Animal::operator=(const Animal& to_asign)
{
	type = to_asign.type;
	return(*this);
}

Animal::Animal(std::string type) : type(type) 
{std::cout << BLUE << "🐾Animal: Type constructor called, " << type << " created" << RESET << std::endl;}

std::string	Animal::getType() const {return type;}

void	Animal::makeSound() const
{
	std::cout << type << ": *sound beyond your comprehension*" << std::endl;
}
