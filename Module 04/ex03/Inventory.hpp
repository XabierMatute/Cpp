/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Inventory.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:01:16 by xmatute-          #+#    #+#             */
/*   Updated: 2023/06/01 12:30:01 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INVENTORY_HPP
# define INVENTORY_HPP

#include "AMateria.hpp"
#include <string>

class	Inventory
{
	private:
		static const int	slots = 4;

	public:
		AMateria	*materias[slots];

	public:
		Inventory();
		~Inventory();
		Inventory(const Inventory& to_copy);
		Inventory& operator=(const Inventory& to_asign);

		static bool	validIdx(int idx);

		void	add(AMateria *to_add);
		void	remove(int idx);

		bool	contain(std::string const & type);

		AMateria *find(std::string const & type);

	private:
		void	init();
		void	destroy();
};

#endif
