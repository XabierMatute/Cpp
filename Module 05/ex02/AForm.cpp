/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 13:41:17 by xmatute-          #+#    #+#             */
/*   Updated: 2023/06/02 16:10:32 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

#include <iostream>
#include <string>
#include "colors.h"

/*
** Orthodox Canonical AForm
*/
// Default constructor
AForm::AForm() : name("nameless AForm"), isSigned(false), gradeToSign(), gradeToExecute()
{std::cout << BLUE << "🔧AForm: Default constructor called" << RESET << std::endl;}
// Copy constructor
AForm::AForm(const AForm& to_copy) :
name(to_copy.name),
isSigned(to_copy.isSigned),
gradeToSign(to_copy.gradeToSign),
gradeToExecute(to_copy.gradeToExecute)
{
	std::cout << BLUE << "🛠 AForm: Copy constructor called" << RESET << std::endl;
}
// Destructor
AForm::~AForm() 
{std::cout << RED << "💣AForm: Destructor called" << RESET << std::endl;}
// Copy assignment operator
AForm& AForm::operator=(const AForm& to_asign)
{
	(std::string)name = to_asign.name;
	isSigned = to_asign.isSigned;
	// (unsigned char)gradeToSign.constcast = (unsigned char)to_asign.gradeToSign;
	// (unsigned char)gradeToExecute = (unsigned char)to_asign.gradeToExecute;
	return(*this);
}

AForm::AForm(std::string const &name, int gradeToSign, int gradeToExecute) :
name(name),
isSigned(false),
gradeToSign(gradeToSign),
gradeToExecute(gradeToExecute)
{
	std::cout << BLUE << "📄AForm: Parametric constructor called, " << *this << " created" << RESET << std::endl;
	checkGradeExceptions(gradeToSign);
	checkGradeExceptions(gradeToExecute);
}

void	AForm::beSigned(Bureaucrat const& signer)
{
	if (signer.getGrade() > gradeToSign)
		throw GradeTooLowException();
	isSigned = true;
}

void	AForm::execute(Bureaucrat const & executor) const
{
	checkExecuteExceptions(executor);
	performExecution();
}


std::string	AForm::getName()	const {return name;}
bool		AForm::getIsSigned() const {return isSigned;}
int			AForm::getGradeToSign() const {return gradeToSign;}
int			AForm::getGradeToExecute() const {return gradeToExecute;}

std::ostream& operator<<(std::ostream& os, const AForm& AForm)
{
	os << AForm.getName() << " (";
	if (!AForm.getIsSigned())
		os << "un";
	os << "signed AForm grade to sign:" << AForm.getGradeToSign() << " grade to execute:" << AForm.getGradeToExecute() << ")";
	return (os);
}

void	AForm::checkGradeExceptions(int grade) const
{
	if (grade < highestGrade)
		throw GradeTooHighException();
	if (grade > lowestGrade)
		throw GradeTooLowException();
}

void	AForm::checkExecuteExceptions(Bureaucrat const& executor) const
{
	if (!isSigned)
		throw UnsignedException();
	if (executor.getGrade() > gradeToExecute)
		throw GradeTooLowException();
}

const char* AForm::GradeTooHighException::what() const throw()
{return "AForm Error: Grade too high";}

const char* AForm::GradeTooLowException::what() const throw()
{return "AForm Error: Grade too low";}

const char* AForm::UnsignedException::what() const throw()
{return "AForm Error: The form is not signed";}
