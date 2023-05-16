/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:00:13 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/16 16:03:26 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

#include "ClapTrap.hpp"

#include <string>

class	FlagTrap : public virtual ClapTrap
{
	protected:
		static const	int	max_HitPoints = 100;
		static const	int	init_EnergyPoints = 100;
		static const	int	init_AtackDamage = 30;

		FlagTrap();

	public:
		~FlagTrap();
		FlagTrap(std::string name);
		FlagTrap(const FlagTrap& to_copy);
		FlagTrap& operator=(const FlagTrap& to_asign);

		void attack(const std::string& target);

		void highFivesGuys(void);
		
};

#endif
