/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 09:14:34 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/17 10:37:15 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

#include <string>

class	WrongAnimal
{
	protected:
		std::string	type;

	public:
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(const WrongAnimal& to_copy);
		WrongAnimal& operator=(const WrongAnimal& to_asign);

		WrongAnimal(std::string type);

		std::string	getType() const;

	public:
		void	makeSound() const;
};

#endif
