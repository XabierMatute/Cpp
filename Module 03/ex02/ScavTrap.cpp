/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:01:02 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/16 16:02:29 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << BLUE << "🔧ScavTrap: Default constructor called" << RESET << std::endl;
	HitPoints = max_HitPoints;
	EnergyPoints = init_EnergyPoints;
	AtackDamage = init_AtackDamage;
}

ScavTrap::~ScavTrap()
{std::cout << RED << "💣ScavTrap: Destructor called" << RESET << std::endl;}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << BLUE << "🤖ScavTrap: Name constructor called (" << name << " ha sido construido)" << RESET << std::endl;
	HitPoints = max_HitPoints;
	EnergyPoints = init_EnergyPoints;
	AtackDamage = init_AtackDamage;
}

ScavTrap::ScavTrap(const ScavTrap& to_copy) : ClapTrap(to_copy)
{
	std::cout << BLUE << "🛠 ScavTrap: Copy constructor called" << RESET << std::endl;
}


void ScavTrap::attack(const std::string& target)
{
	if	(EnergyPoints <= 0)
	{
		std::cout << "ScavTrap " << name << " has no energy to attack!\n";
		return;
	}
	if	(HitPoints <= 0)
	{
		std::cout << "ScavTrap " << name << " is out of combat, he can't attack!\n";
		return;
	}
	std::cout << "ScavTrap " << name << " attacks " << target << " causing " << AtackDamage << " points of damage!\n";
	EnergyPoints--;
	if (EnergyPoints <= 0)
		std::cout << "ScavTrap " << name << "'s Energy points depleted!\n";
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " is now in Gatekeeper mode.\n";
}
