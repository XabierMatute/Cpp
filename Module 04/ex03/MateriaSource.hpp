/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:18:06 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/31 17:59:35 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Inventory.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		Inventory	source;

	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource& to_copy);
		MateriaSource& operator=(const MateriaSource& to_asign);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};
