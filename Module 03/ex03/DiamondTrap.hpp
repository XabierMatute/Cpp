/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:13:40 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/16 16:03:22 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

class	DiamondTrap : public ScavTrap, public FlagTrap
{
	private:
		std::string	name;
		static const	int	max_HitPoints = FlagTrap::max_HitPoints;
		static const	int	init_EnergyPoints = ScavTrap::init_EnergyPoints;
		static const	int	init_AtackDamage = FlagTrap::init_AtackDamage;

	private:
		DiamondTrap();

	public:
		~DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& to_copy);
		DiamondTrap& operator=(const DiamondTrap& to_asign);

		using ScavTrap::attack;

		void whoAmI();
};

#endif
