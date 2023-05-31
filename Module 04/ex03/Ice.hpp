/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:56:38 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/31 13:40:23 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

#include "ICharacter.hpp"

#include <string>

class Ice : public	AMateria
{
	public:
		Ice();
		~Ice();
		Ice(const Ice& to_copy);
		Ice& operator=(const Ice& to_asign);

		Ice* clone() const;
		void use(ICharacter& target);
};

#endif
