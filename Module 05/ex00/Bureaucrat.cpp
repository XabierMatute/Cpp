/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 13:41:17 by xmatute-          #+#    #+#             */
/*   Updated: 2023/06/02 15:11:04 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#include <iostream>
#include <string>
#include "colors.h"

/*
** Orthodox Canonical Form
*/
// Default constructor
Bureaucrat::Bureaucrat() : name("nameless Bureaucrat"), grade()
{std::cout << BLUE << "🔧Bureaucrat: Default constructor called" << RESET << std::endl;}
// Copy constructor
Bureaucrat::Bureaucrat(const Bureaucrat& to_copy) : name(to_copy.name), grade(to_copy.grade) 
{
	std::cout << BLUE << "🛠 Bureaucrat: Copy constructor called" << RESET << std::endl;
}
// Destructor
Bureaucrat::~Bureaucrat() 
{std::cout << RED << "💣Bureaucrat: Destructor called" << RESET << std::endl;}
// Copy assignment operator
Bureaucrat& Bureaucrat::operator=(const Bureaucrat& to_asign)
{
	(std::string)name = to_asign.name;
	grade = to_asign.grade;
	return(*this);
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : name(name), grade(grade)
{
	std::cout << BLUE << "👔Bureaucrat: Parametric constructor called, " << *this << " created" << RESET << std::endl;
	checkGradeExceptions(grade);
}

std::string	Bureaucrat::getName()	const {return name;}
int			Bureaucrat::getGrade()	const {return grade;}

Bureaucrat&	Bureaucrat::incrementGrade() {return incrementGrade(1);}
Bureaucrat&	Bureaucrat::incrementGrade(unsigned int i)
{
	checkGradeExceptions(grade - i);
	grade -= i;
	return(*this);
}

Bureaucrat&	Bureaucrat::decrementGrade() {return decrementGrade(1);}
Bureaucrat&	Bureaucrat::decrementGrade(unsigned int d)
{
	checkGradeExceptions(grade + d);
	grade += d;
	return (*this);
}


std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << " (bureaucrat of grade " << bureaucrat.getGrade() << ")";
	return (os);
}

void	Bureaucrat::checkGradeExceptions(int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{return "Error: Grade too high";}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{return "Error: Grade too low";}
