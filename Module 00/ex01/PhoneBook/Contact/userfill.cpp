/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   userfill.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:01:37 by xmatute-          #+#    #+#             */
/*   Updated: 2023/04/25 18:37:10 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"

#include <iostream>

static	std::string	ask(std::string name)
{
	std::string data;

	std::cout << name << ": ";
	if (!std::cin.good())
	{
		std::cerr << "❗️Error: algo no anda bien con la entrada estandar\n";
		exit(1);
	}
	std::getline(std::cin, data);
	if ((data).empty())
	{
		std::cout << "Error: este campo no puede estar vacio\n";
		return (ask(name));
	}
	return (data);
}

Contact	Contact::userfill()
{
	first_name = ask("First Name");
	last_name = ask("Last Name");
	nickname = ask("Nickname");
	phone_number = ask("Phone number");
	darkest_secret = ask("Darkest Secret");
	filled = true;
	return(*this);
}
