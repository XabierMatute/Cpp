/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 08:45:56 by xmatute-          #+#    #+#             */
/*   Updated: 2023/06/06 08:48:37 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

#include <iostream>
#include <string>
#include <fstream>
#include "colors.h"

/*
** Orthodox Canonical PresidentialPardonForm
*/
// Default constructor
PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", gradeToSign, gradeToExecute)
{std::cout << BLUE << "🔧PresidentialPardonForm: Default constructor called" << RESET << std::endl;}
// Copy constructor
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& to_copy) :
AForm(to_copy),
target(to_copy.target)
{
	std::cout << BLUE << "🛠 PresidentialPardonForm: Copy constructor called" << RESET << std::endl;
}
// Destructor
PresidentialPardonForm::~PresidentialPardonForm() 
{std::cout << RED << "💣PresidentialPardonForm: Destructor called" << RESET << std::endl;}
// Copy assignment operator
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& to_asign)
{
	target = to_asign.target;
	return(*this);
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
AForm("PresidentialPardonForm", gradeToSign, gradeToExecute),
target(target)
{
	std::cout << BLUE << "🧧PresidentialPardonForm: Parametric constructor called, " << *this << " created" << RESET << std::endl;
}

std::string	PresidentialPardonForm::getTarget()	const {return target;}

void	PresidentialPardonForm::performExecution() const
{
	std::cout << target << " has been pardoned by Zaphod Beeblebrox.\n";
}
