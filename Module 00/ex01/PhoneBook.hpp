/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:16:00 by xmatute-          #+#    #+#             */
/*   Updated: 2023/04/25 18:29:58 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class	PhoneBook
{
	private:
		static const int	size = 8;
		Contact	contactos[size];
		int		ask_index();
		void	display();
		void	line();
		void	line(int i);
		void	add(Contact nuevo);
		
	public:
		void	add();
		void	search();
};
#endif
