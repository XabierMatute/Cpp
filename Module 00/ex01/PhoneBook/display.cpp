/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 13:15:25 by xmatute-          #+#    #+#             */
/*   Updated: 2023/04/20 13:46:15 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhoneBook.hpp"

#include <iostream>
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

void PhoneBook::display()
{
	colum("index"); colum("first name") ;colum("last name") ; colum("nickname");
	std::cout << '\n';
	int	i = 0;
	while (i < size && contactos[i].filled)
	{
		colum(std::to_string(i)); colum(contactos[i].first_name) ;colum(contactos[i].last_name) ; colum(contactos[i].nickname);
		std::cout << '\n';
		i++;
	}
}

void PhoneBook::display(Contact quiensea)
{
	std::cout << quiensea.first_name << '\n';
	std::cout << quiensea.last_name << '\n';
	std::cout << quiensea.nickname << '\n';
	std::cout << quiensea.phone_number << '\n';
	std::cout << quiensea.darkest_secret << '\n';
	std::cout << '\n';
}
