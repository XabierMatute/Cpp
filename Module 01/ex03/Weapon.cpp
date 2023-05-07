/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:29:49 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/02 19:40:21 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string	&Weapon::getType() const {return type;}
// void	Weapon::setType(std::string	&type){this->type = type;}
void	Weapon::setType(const std::string	&stype){type = stype;}
Weapon::Weapon(std::string const type): type(type){}
