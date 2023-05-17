/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:02:12 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/17 10:37:21 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

#include <string>

class	Cat : public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat& to_copy);
		Cat& operator=(const Cat& to_asign);

	public:
		void	makeSound() const;
};

#endif
