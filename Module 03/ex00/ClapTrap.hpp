/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:00:13 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/16 16:00:25 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
// #include <iostream>
#include <string>

class	ClapTrap
{
	private:
		std::string	name;
		int			HitPoints;
		int			EnergyPoints;
		int			AtackDamage;

		static const	int	max_HitPoints = 10;
		static const	int	init_EnergyPoints = 10;
		static const	int	init_AtackDamage = 0;

		ClapTrap();

	public:
		~ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& to_copy);
		ClapTrap& operator=(const ClapTrap& to_asign);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		
};

#endif
