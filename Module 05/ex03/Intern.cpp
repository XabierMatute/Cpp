/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:10:06 by xmatute-          #+#    #+#             */
/*   Updated: 2023/06/26 20:35:54 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

#include <iostream>

#include "colors.h"

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

// void	Intern::init()
// {
// 	source.add(new ShrubberyCreationForm);
// }

/*
** Orthodox Canonical Form
*/
// Default constructor
Intern::Intern()
{
	std::cout << BLUE << "🔧Intern: Default constructor called" << RESET << std::endl;
}
// Copy constructor
Intern::Intern(const Intern& to_copy)
{
	std::cout << BLUE << "🛠 Intern: Copy constructor called" << RESET << std::endl;
	*this = to_copy;
}
// Destructor
Intern::~Intern() 
{
	std::cout << RED << "💣Intern: Destructor called" << RESET << std::endl;
}
// Copy assignment operator
Intern& Intern::operator=(const Intern& to_asign)
{
	(void)to_asign;
	return(*this);
}

int	Intern::natoi( std::string name)
{
	const	t_form	form[KnownForms] =
	{
		{"presidential pardon", PresidentialPardon},
		{"robotomy request", RobotomyRequest},
		{"shrubbery creation", ShrubberyCreation},
	};
	int	i = 0;

	while (i < KnownForms)
	{
		if (form[i].name == name)
			return form[i].i;
		i++;
	}
	return (-1);
}

AForm	*Intern::makeForm(const std::string &name, const std::string &target) const
{
	AForm	*form;
	
	switch (natoi(name))
	{
	case -1:
		std::cerr << "❌Error: Intern does not know how to create " << name << std::endl;
		return (NULL);
	case PresidentialPardon:
		form = new PresidentialPardonForm(target);
		break;
	case RobotomyRequest:
		form = new RobotomyRequestForm(target);
		break;
	case ShrubberyCreation:
		form = new ShrubberyCreationForm(target);
		break;
	default:
		std::cerr << "❗️Unexpected Error: Intern does not know how to create " << name << std::endl;
		return (NULL);
		break;
	}
	std::cout << "Intern creates " << name << std::endl;
	return (form);
}

