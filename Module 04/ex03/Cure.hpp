/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:56:38 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/31 13:40:23 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

#include "ICharacter.hpp"

#include <string>

class Cure : public	AMateria
{
	public:
		Cure();
		~Cure();
		Cure(const Cure& to_copy);
		Cure& operator=(const Cure& to_asign);

		Cure* clone() const;
		void use(ICharacter& target);
};

#endif
