/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:55:05 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/02 17:22:30 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>


void	HumanB::setWeapon(class Weapon &Weapon)
{
	_Weapon = &Weapon;
}

HumanB::HumanB(std::string name): _name(name){_Weapon = NULL;}

void	HumanB::attack() const
{
	std::cout << _name;
	std::cout << " attacks with their ";
	if (_Weapon)
		std::cout << _Weapon->getType();
	else
		std::cout << "bare fists";
	std::cout << '\n';
}
