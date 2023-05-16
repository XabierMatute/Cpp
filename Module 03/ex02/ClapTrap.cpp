/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:01:02 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/16 16:06:24 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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

ClapTrap::ClapTrap() :
HitPoints(max_HitPoints),
EnergyPoints(init_EnergyPoints),
AtackDamage(init_AtackDamage)
{std::cout << BLUE << "🔧ClapTrap: Default constructor called" << RESET << std::endl;}

ClapTrap::~ClapTrap()
{std::cout << RED << "💣ClapTrap: Destructor called" << RESET << std::endl;}

ClapTrap::ClapTrap(std::string name) :
name(name),
HitPoints(max_HitPoints),
EnergyPoints(init_EnergyPoints),
AtackDamage(init_AtackDamage)
{std::cout << BLUE << "🤖ClapTrap: Name constructor called (" << name << " ha sido construido)" << RESET << std::endl;}

ClapTrap& ClapTrap::operator=(const ClapTrap& to_asign)
{
	name = to_asign.name;
	HitPoints = to_asign.HitPoints;
	EnergyPoints = to_asign.EnergyPoints;
	AtackDamage = to_asign.AtackDamage;
	return(*this);
}

ClapTrap::ClapTrap(const ClapTrap& to_copy)
{
	std::cout << BLUE << "🛠 ClapTrap: Copy constructor called" << RESET << std::endl;
	*this = to_copy;
}


void ClapTrap::attack(const std::string& target)
{
	if	(EnergyPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " has no energy to attack!\n";
		return;
	}
	if	(HitPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " is out of combat, he can't attack!\n";
		return;
	}
	std::cout << "ClapTrap " << name << " attacks " << target << " causing " << AtackDamage << " points of damage!\n";
	EnergyPoints--;
	if (EnergyPoints <= 0)
		std::cout << "ClapTrap " << name << "'s Energy points depleted!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!\n";
	HitPoints -= amount;
	if (HitPoints <= 0)
		std::cout << "ClapTrap " << name << " is out of combat!\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if	(EnergyPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " has no energy to repair itshelf!\n";
		return;
	}
	if	(HitPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " is out of combat, he can't repair itshelf!\n";
		return;
	}
	std::cout << "ClapTrap " << name << " repair itself, getting " << amount << " hit points back!\n";
	HitPoints += amount;
	EnergyPoints--;
	if (EnergyPoints <= 0)
		std::cout << "ClapTrap " << name << "'s Energy points depleted!\n";
}
