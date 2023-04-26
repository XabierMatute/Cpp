/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 14:19:44 by xmatute-          #+#    #+#             */
/*   Updated: 2023/04/26 15:36:40 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

#include <iostream>

/* -------------------------------------------------------------------------- */

std::string	Contact::getFirstName(){return first_name;}
std::string	Contact::getLastName (){return last_name;}
std::string	Contact::getNickname (){return nickname;}

/* -------------------------------------------------------------------------- */


/* -------------------------------------------------------------------------- */
/* FILL---------------------------------------------------------------------- */
/* -------------------------------------------------------------------------- */

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
	return(*this);
}

bool	Contact::empty() const {return (first_name.empty());}

/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
/* DISPLAY------------------------------------------------------------------- */
/* -------------------------------------------------------------------------- */

void	Contact::display() const
{
	std::cout << first_name << '\n';
	std::cout << last_name << '\n';
	std::cout << nickname << '\n';
	std::cout << phone_number << '\n';
	std::cout << darkest_secret << '\n';
	std::cout << '\n';
}

/* -------------------------------------------------------------------------- */
