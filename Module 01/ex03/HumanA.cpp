/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:35:10 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/02 19:42:27 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string &name, Weapon &Weapon) : _name(name), _Weapon(Weapon){}

void	HumanA::attack() const
{
	std::cout << _name;
	std::cout << " attacks with their ";
	std::cout << _Weapon.getType();
	std::cout << '\n';
}
