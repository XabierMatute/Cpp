/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 19:24:00 by xmatute-          #+#    #+#             */
/*   Updated: 2023/06/05 21:15:23 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

#include <iostream>
#include <string>
#include <fstream>
#include "colors.h"

/*
** Orthodox Canonical RobotomyRequestForm
*/
// Default constructor
RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", gradeToSign, gradeToExecute)
{std::cout << BLUE << "🔧RobotomyRequestForm: Default constructor called" << RESET << std::endl;}
// Copy constructor
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& to_copy) :
AForm(to_copy),
target(to_copy.target)
{
	std::cout << BLUE << "🛠 RobotomyRequestForm: Copy constructor called" << RESET << std::endl;
}
// Destructor
RobotomyRequestForm::~RobotomyRequestForm() 
{std::cout << RED << "💣RobotomyRequestForm: Destructor called" << RESET << std::endl;}
// Copy assignment operator
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& to_asign)
{
	target = to_asign.target;
	return(*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
AForm("RobotomyRequestForm", gradeToSign, gradeToExecute),
target(target)
{
	std::cout << BLUE << "🤖RobotomyRequestForm: Parametric constructor called, " << *this << " created" << RESET << std::endl;
	srand(time(NULL));
}

std::string	RobotomyRequestForm::getTarget()	const {return target;}

void	RobotomyRequestForm::performExecution() const
{
    std::cout << "* Makes some drilling noises *\n";
    if (rand() % 2)
        std::cout << getTarget() << " has been robotomized successfully!\n";
    else
        std::cout << "Robotomy failed for " << getTarget() << ".\n";
}
