/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:15:10 by xmatute-          #+#    #+#             */
/*   Updated: 2023/04/23 13:34:14 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"

#include <iostream>

void PhoneBook::add(Contact nuevo)
{
	static int	i = 0;

	contactos[i] = nuevo;
	i++;
	if (i >= size)
		i -= size;
}

void PhoneBook::add()
{
	Contact nuevo;

	add(nuevo.userfill());
	std::cout << "\nContacto añadido con exito!\n(pulse cualquier tecla para continuar)\n";
	std::cin.ignore();
}
