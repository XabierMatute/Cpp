/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:26:42 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/15 14:45:23 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

void	test0()
{
	std::cout << "\nTest 0" << std::endl;
	// ClapTrap nameless;//asi no le dejo
	ClapTrap zero("Zero");

	std::cout << "Tu capacidad de caminar distancias cortas sin morir conseguirá acabar con Jack el Guapo. \n";
}

void	test1()
{
	std::cout << "\nTest 1" << std::endl;

	ClapTrap zero("Zero");
	ClapTrap ym("Servibot");

	zero.attack("Servibot");
	ym.takeDamage(0);
	std::cout << "Imagina llamarte como un numero\n";
	zero.takeDamage(9);
	
	ClapTrap mayoneso = zero;
	mayoneso.beRepaired(5);
	std::cout << "Imagina llamarte como un numero\n";
	zero.takeDamage(9);
	mayoneso.beRepaired(5);
	zero.beRepaired(5);
	zero.attack("idk");

	int	i = 13;
	while (i--)
		ym.attack("NCR soldier");
}

int main()
{
	test0();
	test1();
	return 0;
}
