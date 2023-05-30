/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 10:02:12 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/30 13:56:51 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
# define Dog_HPP

#include "Animal.hpp"
#include "Brain.hpp"

#include <string>

class	Dog : public Animal
{
	private:
		Brain	*dogbrain;

	public:
		Dog();
		~Dog();
		Dog(const Dog& to_copy);
		Dog& operator=(const Dog& to_asign);

		Brain	*getBrain() const;

	public:
		void	makeSound() const;
};

#endif
