/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:35:22 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/02 17:14:19 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string _name;
		Weapon *_Weapon;
	
	public:
		void	setWeapon(class Weapon &Weapon);
		HumanB(std::string name);
		void	attack() const;
};
#endif
