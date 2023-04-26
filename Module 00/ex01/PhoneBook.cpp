/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:15:10 by xmatute-          #+#    #+#             */
/*   Updated: 2023/04/26 16:10:17 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"

#include <iostream>

static void	wait()
{
	std::cout << "\n(pulse enter para continuar)\n";
	std::cin.ignore();
}

/* -------------------------------------------------------------------------- */
/* ADD----------------------------------------------------------------------- */
/* -------------------------------------------------------------------------- */

void PhoneBook::add(Contact nuevo)
{
	static int	i = 0;

	contactos[i] = nuevo;
	i++;
	if (i >= size)
	{
		std::cout << "\nLista de contactos llena\n";
		i -= size;
	}
}

void PhoneBook::add()
{
	Contact nuevo;

	add(nuevo.userfill());
	std::cout << "\nContacto añadido con exito!" << std::endl;
	wait();
}

/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/* SEARCH-------------------------------------------------------------------- */
/* -------------------------------------------------------------------------- */

int PhoneBook::ask_index()
{
	int	index;

	std::cout << "index: ";
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
	if (index > size || contactos[index].empty())
	{
		std::cout << "Error: no hay ningun contacto con ese indice\n";
		return (-1);
	}
	return (index);
}

void PhoneBook::search()
{
	display();
	int	i = ask_index();
	if (i >= 0)
		contactos[i].display();
	std::cin.ignore();
	wait();
}

/* -------------------------------------------------------------------------- */

#include <iomanip>

const int	width = 10;

static void	colum(std::string data)
{
	std::cout.imbue(std::locale(""));
	std::cout << std::setw(width) << std::right;
	if (data.length() > width)
		std::cout << data.substr(0, width - 1) + '.' << '|';
	else
		std::cout << data << '|';
}

void	PhoneBook::line()
{
	colum("index"); colum("first name") ;colum("last name") ; colum("nickname");
	std::cout << '\n';
}

void	PhoneBook::line(int i)
{
	colum(std::to_string(i));
	colum(contactos[i].getFirstName());
	colum(contactos[i].getLastName());
	colum(contactos[i].getNickname());
	std::cout << '\n';
}


void PhoneBook::display()
{
	std::cout << '\n';
	line();
	int	i = 0;
	while (i < size)
	{
		line(i);
		i++;
	}
}

/* -------------------------------------------------------------------------- */
