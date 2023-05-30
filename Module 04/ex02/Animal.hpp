/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 09:14:34 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/30 18:24:38 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class	Animal
{
	protected:
		std::string	type;

	public:
		Animal();
		virtual ~Animal() = 0;
		Animal(const Animal& to_copy);
		Animal& operator=(const Animal& to_asign);

		Animal(std::string type);

		std::string	getType() const;
		
	public:
		void virtual	makeSound() const = 0;
};

#endif
