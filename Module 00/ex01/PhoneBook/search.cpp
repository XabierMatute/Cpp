/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:07:52 by xmatute-          #+#    #+#             */
/*   Updated: 2023/04/23 13:34:20 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"

#include <iostream>

int	PhoneBook::ask_index()
{
	int	index;

	std::cout << "Index: ";
	if (!std::cin.good())
	{
		std::cerr << "❗️Error: algo no anda bien con la entrada estandar\n";
		exit(1);
	}
	std::cin >> index;
	if (index < 0)
	{
		std::cout << "Error: el indice no puede ser negativo\n";
		return (ask_index());
	}
	if (index > size || !contactos[index].filled)
	{
		std::cout << "Error: no hay ningun contacto con ese indice\n";
		return (-1);
	}
	return (index);
}

void PhoneBook::search()
{
	int	i;

	display();
	i = ask_index();
	if (i >= 0)
		display(contactos[i]);
	std::cout << "\n(pulse cualquier tecla para continuar)\n";
	std::cin.ignore();
}
