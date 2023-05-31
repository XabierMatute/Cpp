/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:58:43 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/31 17:20:36 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Inventory.hpp"

#include <string>

class Character : public ICharacter
{
	private:
		std::string	name;
		Inventory	inventory;

	private:
		Character();
	
	public:
		~Character();
		Character(const Character& to_copy);
		Character& operator=(const Character& to_asign);

		Character(std::string const & name);

	public:
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};
