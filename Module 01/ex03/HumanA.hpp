/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:35:22 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/02 16:34:08 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string _name;
		Weapon &_Weapon;
	
	public:
		HumanA(std::string name, Weapon &Weapon);
		void	attack() const;
};
#endif
