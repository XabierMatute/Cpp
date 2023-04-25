/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:16:00 by xmatute-          #+#    #+#             */
/*   Updated: 2023/04/25 17:11:40 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "./Contact/Contact.hpp"

const int	size = 2;

class	PhoneBook
{
	private:
		Contact	contactos[size];
		void	display(Contact quiensea);
		int		ask_index();
		void	display();

	public:
		void	add(Contact nuevo);

		void	add();
		void	search();
};
#endif
