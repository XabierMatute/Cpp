/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:02:12 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/30 13:56:45 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

#include <string>

class	Cat : public Animal
{
	private:
		Brain *catbrain;

	public:
		Cat();
		~Cat();
		Cat(const Cat& to_copy);
		Cat& operator=(const Cat& to_asign);

		Brain *getBrain() const;

	public:
		void	makeSound() const;
};

#endif
