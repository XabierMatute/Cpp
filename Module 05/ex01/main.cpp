/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 14:03:49 by xmatute-          #+#    #+#             */
/*   Updated: 2023/06/06 21:52:16 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include "colors.h"

Bureaucrat *tc_Bureaucrat(std::string const &name, int grade)
{
	try
	{
		return(new Bureaucrat(name, grade));
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error creating " << name << ", " << e.what() << '\n';
		return(0);
	}
}

void	tc_incrementgrade(Bureaucrat &evaluated)
{
	try
	{
		evaluated.incrementGrade();
		std::cout << evaluated << " ha subido de rango" << '\n';

	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << evaluated << " no puede tener aun mas rango" << '\n';
	}
}

void	tc_decrementGrade(Bureaucrat &evaluated)
{
	try
	{
		evaluated.decrementGrade();
		std::cerr << evaluated << " ha bajado de rango" << '\n';

	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << evaluated << " no puede menos aun mas rango" << '\n';
	}
}

void	BureauTest0()
{
	std::cout << YELLOW << "\nBureauTest0" << RESET << std::endl;
	// Bureaucrat nameless;//nop
	Bureaucrat burocrata("Hermes Conrad", 34);
	
	std::cout << "    “La burocracia es una máquina gigantesca manejada por pigmeos.”  Honoré de Balzac" << std::endl;
}

void	FormTest0()
{
	std::cout << YELLOW << "\nFormTest0" << RESET << std::endl;
	// Bureaucrat nameless;//nop
	Form formulario("test", 42, 55);
	
	std::cout << "La burocracia en los países latinos parece que se ha establecido para vejar al público Pío Baroja (1872-1956) Escritor español.”  Honoré de Balzac" << std::endl;
}

void	BureauTest00()
{
	std::cout << YELLOW << "\nBureauTest00" << RESET << std::endl;
	Bureaucrat *zero = tc_Bureaucrat("Zero", 0);
	Bureaucrat *tolai = tc_Bureaucrat("To Lai", 1110);
	Bureaucrat *hermes = tc_Bureaucrat("Hermes Conrad", 34);
	std::cout << "„(…) Ante la burocracia somos todos extranjeros, (…) la burocracia es, en esencia (y en eso radica su utilidad), un código ajeno.“ — César Aira" << std::endl;
	delete zero;
	delete tolai;
	delete hermes;
}

void	BureauTest1()
{
	std::cout << YELLOW << "\nBureauTest1" << RESET << std::endl;
	Bureaucrat burocrata("Hermes Conrad", 34);
	
	std::cout << burocrata << std::endl;
	std::cout << burocrata.incrementGrade(30) << std::endl;
	// std::cout << burocrata.incrementGrade(30) << std::endl;//si no se catchea peta
	tc_incrementgrade(burocrata);
	tc_incrementgrade(burocrata);
	tc_incrementgrade(burocrata);
	tc_incrementgrade(burocrata);
	tc_incrementgrade(burocrata);
	tc_incrementgrade(burocrata);
	tc_incrementgrade(burocrata);
	std::cout << burocrata.decrementGrade(148) << std::endl;
	tc_decrementGrade(burocrata);
	tc_decrementGrade(burocrata);
	tc_decrementGrade(burocrata);

}

void	SingTest1()
{
	std::cout << YELLOW << "\nSingTest1" << RESET << std::endl;
	Bureaucrat 	bureaucrat("Hermes Conrad", 34);
	Form		approval("Bending unit 2716057 approval", 96, 40);
	std::cout	<< approval << std::endl;

	bureaucrat.signForm(approval);
	std::cout	<< approval << std::endl;

	Form		approval2716058("Bending unit 2716058 approval", 96, 40);
	std::cout	<< approval2716058 << std::endl;
	
	approval2716058.beSigned(bureaucrat);//lo firma pero sin mensaje
	std::cout	<< approval2716058 << std::endl;

	Form		nukelaw("Legalize nuclear bombs law", 10, 1);

	bureaucrat.signForm(nukelaw);
	// nukelaw.beSigned(bureaucrat);//esto sin un try catch da crash

	Form		declaration("Tax declaration", 34, 33);
	
	bureaucrat.signForm(declaration);
}

int main()
{
	BureauTest0();
	FormTest0();
	BureauTest00();
	BureauTest1();
	SingTest1();
	return 0;
}
