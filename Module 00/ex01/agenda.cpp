/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   agenda.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 13:43:05 by xmatute-          #+#    #+#             */
/*   Updated: 2023/04/25 18:33:18 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "agenda.hpp"

static void	show_comands()
{
	std::cout << "\nMi extraordinaria agenda\n\n";
	std::cout << "Introduzca uno de los siguientes comandos:\n";
	std::cout << ADD << ":ADD\n";
	std::cout << SEARCH << ":SEARCH\n";
	std::cout << EXIT << ":EXIT\n";
	std::cout << "\n> ";
}

static int	ask_comand()
{
	std::string comando;

	if (!std::cin.good())
	{
		std::cerr << "❗️Error: algo no anda bien con la entrada estandar\n";
		exit(1);
	}
	show_comands();
	std::getline(std::cin, comando);
	if (comando == "ADD" || comando[0] - '0' == ADD)
		return (ADD);
	if (comando == "SEARCH" || comando[0] - '0' == SEARCH)
		return (SEARCH);
	if (comando == "EXIT" || comando[0] - '0' == EXIT)
		return (EXIT);
	std::cout << "Error: comando " << '"' + comando + '"' << " no aceptado\n";
	std::cout << "Comandos aceptados:\n";
	std::cout << "\tADD: Agrega un nuevo contacto\n";
	std::cout << "\tSEARCH: Muestra un contacto especifico\n";
	std::cout << "\tEXIT\n";
	return (ask_comand());
}

int main(void)
{
	PhoneBook	agenda;
	int			comando;

	comando = ask_comand();
	while (comando != EXIT)
	{
		if (comando == ADD)
			agenda.add();
		if (comando == SEARCH)
			agenda.search();
		comando = ask_comand();
	}
	return 0;
}
