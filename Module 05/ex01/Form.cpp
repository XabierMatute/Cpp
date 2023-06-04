/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 13:41:17 by xmatute-          #+#    #+#             */
/*   Updated: 2023/06/02 16:10:32 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

#include <iostream>
#include <string>
#include "colors.h"

/*
** Orthodox Canonical Form
*/
// Default constructor
Form::Form() : name("nameless Form"), isSigned(false), gradeToSign(), gradeToExecute()
{std::cout << BLUE << "🔧Form: Default constructor called" << RESET << std::endl;}
// Copy constructor
Form::Form(const Form& to_copy) :
name(to_copy.name),
isSigned(to_copy.isSigned),
gradeToSign(to_copy.gradeToSign),
gradeToExecute(to_copy.gradeToExecute)
{
	std::cout << BLUE << "🛠 Form: Copy constructor called" << RESET << std::endl;
}
// Destructor
Form::~Form() 
{std::cout << RED << "💣Form: Destructor called" << RESET << std::endl;}
// Copy assignment operator
Form& Form::operator=(const Form& to_asign)
{
	(std::string)name = to_asign.name;
	isSigned = to_asign.isSigned;
	// (unsigned char)gradeToSign.constcast = (unsigned char)to_asign.gradeToSign;
	// (unsigned char)gradeToExecute = (unsigned char)to_asign.gradeToExecute;
	return(*this);
}

Form::Form(std::string const &name, int gradeToSign, int gradeToExecute) :
name(name),
isSigned(false),
gradeToSign(gradeToSign),
gradeToExecute(gradeToExecute)
{
	std::cout << BLUE << "📄Form: Parametric constructor called, " << *this << " created" << RESET << std::endl;
	checkGradeExceptions(gradeToSign);
	checkGradeExceptions(gradeToExecute);
}

void	Form::beSigned(Bureaucrat const& signer)
{
	if (signer.getGrade() > gradeToSign)
		throw GradeTooLowException();
	isSigned = true;
}

std::string	Form::getName()	const {return name;}
bool		Form::getIsSigned() const {return isSigned;}
int			Form::getGradeToSign() const {return gradeToSign;}
int			Form::getGradeToExecute() const {return gradeToExecute;}

std::ostream& operator<<(std::ostream& os, const Form& Form)
{
	os << Form.getName() << " (";
	if (!Form.getIsSigned())
		os << "un";
	os << "signed form grade to sign:" << Form.getGradeToSign() << " grade to execute:" << Form.getGradeToExecute() << ")";
	return (os);
}

void	Form::checkGradeExceptions(int grade)
{
	if (grade < highestGrade)
		throw GradeTooHighException();
	if (grade > lowestGrade)
		throw GradeTooLowException();
}

const char* Form::GradeTooHighException::what() const throw()
{return "Form Error: Grade too high";}

const char* Form::GradeTooLowException::what() const throw()
{return "Form Error: Grade too low";}
