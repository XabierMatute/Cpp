/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:10:34 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/16 16:15:29 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

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

DiamondTrap::DiamondTrap() : ClapTrap()
{
	std::cout << BLUE << "🔧DiamondTrap: Default constructor called" << RESET << std::endl;
	HitPoints = max_HitPoints;
	EnergyPoints = init_EnergyPoints;
	AtackDamage = init_AtackDamage;
}

DiamondTrap::~DiamondTrap()
{std::cout << RED << "💣DiamondTrap: Destructor called" << RESET << std::endl;}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), name(name)
{
	std::cout << BLUE << "🤖DiamondTrap: Name constructor called (" << name << " ha sido construido)" << RESET << std::endl;
	HitPoints = max_HitPoints;
	EnergyPoints = init_EnergyPoints;
	AtackDamage = init_AtackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& to_copy) : ClapTrap(to_copy)
{
	std::cout << BLUE << "🛠 DiamondTrap: Copy constructor called" << RESET << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "I'm " << name << ", the DiamondTrap";
	std::cout << "(" << ClapTrap::name << ", the ClapTrap)\n";
}
