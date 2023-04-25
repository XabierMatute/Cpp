/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   agenda.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 13:11:49 by xmatute-          #+#    #+#             */
/*   Updated: 2023/04/20 13:47:54 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook/PhoneBook.hpp"
#include <iostream>
#include <string>

static	std::string	ask_comand()
{
	std::string comando;

	std::cout << "\nMi extraordinaria agenda\n";
	if (!std::cin.good())
	{
		std::cerr << "❗️Error: algo no anda bien con la entrada estandar\n";
		exit(1);
	}
	std::getline(std::cin, comando);
	if (comando == "ADD" || comando == "SEARCH" || comando == "EXIT")
		return (comando);
	std::cout << "Error: comando " << '"' + comando + '"' << " no aceptado\n";
	std::cout << "Comandos aceptados:\n";
	std::cout << "\tADD: Agrega un nuevo contacto\n";
	std::cout << "\tSEARCH: Muestra un contacto especifico\n";
	std::cout << "\tEXIT\n";
	return (comando);
}

int main(void)
{
	PhoneBook	agenda;
	std::string	comando;

	Contact	c;
	agenda.add(c.autofill());
	agenda.add(c);
	agenda.add(c);
	agenda.add(c);
	agenda.add(c);
	agenda.add(c);
	comando = ask_comand();
	while (comando != "EXIT")
	{
		if (comando == "ADD")
			agenda.add();
		if (comando == "SEARCH")
			agenda.search();
		comando = ask_comand();
	}
	return 0;
}
