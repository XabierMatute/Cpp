/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:29:24 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/31 17:19:50 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"

class ICharacter;

#include <string>

class AMateria
{
	protected:
		std::string	type;

	private:
		AMateria();
	public:
		virtual ~AMateria() = 0;
		AMateria(const AMateria& to_copy);
		AMateria& operator=(const AMateria& to_asign);

	public:
		AMateria(std::string const & type);
		//
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
