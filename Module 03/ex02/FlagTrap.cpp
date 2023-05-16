/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:01:02 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/16 13:45:08 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

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

FlagTrap::FlagTrap() : ClapTrap()
{
	std::cout << BLUE << "🔧FlagTrap: Default constructor called" << RESET << std::endl;
	HitPoints = max_HitPoints;
	EnergyPoints = init_EnergyPoints;
	AtackDamage = init_AtackDamage;
}

FlagTrap::~FlagTrap()
{std::cout << RED << "💣FlagTrap: Destructor called" << RESET << std::endl;}

FlagTrap::FlagTrap(std::string name) : ClapTrap(name)
{
	std::cout << BLUE << "🤖FlagTrap: Name constructor called (" << name << " ha sido construido)" << RESET << std::endl;
	HitPoints = max_HitPoints;
	EnergyPoints = init_EnergyPoints;
	AtackDamage = init_AtackDamage;
}

FlagTrap::FlagTrap(const FlagTrap& to_copy) : ClapTrap(to_copy)
{
	std::cout << BLUE << "🛠 FlagTrap: Copy constructor called" << RESET << std::endl;
}


void FlagTrap::attack(const std::string& target)
{
	if	(EnergyPoints <= 0)
	{
		std::cout << "FlagTrap " << name << " has no energy to attack!\n";
		return;
	}
	if	(HitPoints <= 0)
	{
		std::cout << "FlagTrap " << name << " is out of combat, he can't attack!\n";
		return;
	}
	std::cout << "FlagTrap " << name << " attacks " << target << " causing " << AtackDamage << " points of damage!\n";
	EnergyPoints--;
	if (EnergyPoints <= 0)
		std::cout << "FlagTrap " << name << "'s Energy points depleted!\n";
}

void FlagTrap::takeDamage(unsigned int amount)
{
	std::cout << "FlagTrap " << name << " takes " << amount << " points of damage!\n";
	HitPoints -= amount;
	if (HitPoints <= 0)
		std::cout << "FlagTrap " << name << " is out of combat!\n";
}

void FlagTrap::beRepaired(unsigned int amount)
{
	if	(EnergyPoints <= 0)
	{
		std::cout << "FlagTrap " << name << " has no energy to repair itshelf!\n";
		return;
	}
	if	(HitPoints <= 0)
	{
		std::cout << "FlagTrap " << name << " is out of combat, he can't repair itshelf!\n";
		return;
	}
	if (HitPoints + amount > max_HitPoints)
		amount = max_HitPoints - HitPoints;
	std::cout << "FlagTrap " << name << " repair itself, getting " << amount << " hit points back!\n";
	HitPoints += amount;
	EnergyPoints--;
	if (EnergyPoints <= 0)
		std::cout << "FlagTrap " << name << "'s Energy points depleted!\n";
}

void FlagTrap::highFivesGuys()
{
	std::cout << "FlagTrap " << name << ":🖐  🤖\n";
}
