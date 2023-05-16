/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:00:13 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/16 16:04:03 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

// #include <iostream>
#include <string>

class	ScavTrap : public virtual ClapTrap
{
	protected:
		static const	int	max_HitPoints = 100;
		static const	int	init_EnergyPoints = 50;
		static const	int	init_AtackDamage = 20;

		ScavTrap();

	public:
		~ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& to_copy);
		ScavTrap& operator=(const ScavTrap& to_asign);

		void attack(const std::string& target);

		void guardGate();
		
};

#endif
