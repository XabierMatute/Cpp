/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 19:24:00 by xmatute-          #+#    #+#             */
/*   Updated: 2023/06/05 21:15:23 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

#include <iostream>
#include <string>
#include <fstream>
#include "colors.h"

/*
** Orthodox Canonical ShrubberyCreationForm
*/
// Default constructor
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", gradeToSign, gradeToExecute)
{std::cout << BLUE << "🔧ShrubberyCreationForm: Default constructor called" << RESET << std::endl;}
// Copy constructor
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& to_copy) :
AForm(to_copy),
target(to_copy.target)
{
	std::cout << BLUE << "🛠 ShrubberyCreationForm: Copy constructor called" << RESET << std::endl;
}
// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm() 
{std::cout << RED << "💣ShrubberyCreationForm: Destructor called" << RESET << std::endl;}
// Copy assignment operator
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& to_asign)
{
	target = to_asign.target;
	return(*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
AForm("ShrubberyCreationForm", gradeToSign, gradeToExecute),
target(target)
{
	std::cout << BLUE << "🌳ShrubberyCreationForm: Parametric constructor called, " << *this << " created" << RESET << std::endl;
}

std::string	ShrubberyCreationForm::getTarget()	const {return target;}

void	ShrubberyCreationForm::performExecution() const
{
	std::ofstream shrubbery(target + "_shrubbery");

	int	i = 5;
	while (i--)
	{
		shrubbery << "                   .o00o\n";
		shrubbery << "                   o000000oo\n";
		shrubbery << "                  00000000000o\n";
		shrubbery << "                 00000000000000\n";
		shrubbery << "              oooooo  00000000  o88o\n";
		shrubbery << "           ooOOOOOOOoo  ```''  888888\n";
		shrubbery << "         OOOOOOOOOOOO'.qQQQQq. `8888'\n";
		shrubbery << "        oOOOOOOOOOO'.QQQQQQQQQQ/.88'\n";
		shrubbery << "        OOOOOOOOOO'.QQQQQQQQQQ/ /q\n";
		shrubbery << "         OOOOOOOOO QQQQQQQQQQ/ /QQ\n";
		shrubbery << "           OOOOOOOOO `QQQQQQ/ /QQ'\n";
		shrubbery << "             OO:F_P:O `QQQ/  /Q'\n";
		shrubbery << "               \\. \\ |  // |\n";
		shrubbery << "                d\\ \\\\|_////\n";
		shrubbery << "                qP| \\ _' `|Ob\n";
		shrubbery << "                   \\  / \\  \\Op\n";
		shrubbery << "                   |  | O| |\n";
		shrubbery << "           _       /\\. \\_/ /\\\n";
		shrubbery << "            `---__/|_\\   //|  __\n";
		shrubbery << "                  `-'  `-'`-'-'\n\n";
	}


}
