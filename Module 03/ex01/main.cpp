/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 13:26:42 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/16 13:24:22 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

void	test0()
{
	std::cout << "\nTest 0" << std::endl;
	// ClapTrap nameless;//asi no le dejo
	ClapTrap zero("Zero");

	std::cout << "Tu capacidad de caminar distancias cortas sin morir conseguirá acabar con Jack el Guapo. \n";
}

void	test02()
{
	std::cout << "\nTest 02" << std::endl;
	ScavTrap zero("Zero dos");

	std::cout << "Red: Finally, a proper bloody fight!\n";
	std::cout << "Belly: Well, I just ate, but... LET'S BOOGIE!\n";
}

void	test020()
{
	std::cout << "\nTest 020" << std::endl;
	ScavTrap zero("Zero dos");
	ScavTrap dzero(zero);
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

void	test2()
{
	std::cout << "\nTest 2" << std::endl;

	ScavTrap zero("Zero");
	ClapTrap ym("Servibot");

	zero.attack("Servibot");
	zero.ClapTrap::attack("Servibot");
	ym.takeDamage(20);
	std::cout << "Imagina llamarte como un numero\n";
	zero.takeDamage(9);
	
	ClapTrap mayoneso = zero;
	mayoneso.beRepaired(5);
	std::cout << "Imagina llamarte como un numero\n";
	zero.takeDamage(9);
	mayoneso.beRepaired(5);
	zero.beRepaired(5);
	zero.attack("idk");

	ym.attack("NCR soldier");
	// ScavTrap sb(ym);//no sepuede
	ClapTrap celio(zero);
	zero.attack("NCR soldier");
	celio.attack("NCR soldier");	
}

void	test22()
{
	std::cout << "\nTest 22" << std::endl;

	ClapTrap policeman("Seguritron Mark I");
	ScavTrap soldier("Seguritron Mark II");

	policeman.attack("enemy");
	soldier.attack("enemy");
	policeman.takeDamage(4);
	soldier.takeDamage(4);
	policeman.beRepaired(3);
	soldier.beRepaired(3);
	// policeman.guardGate();
	soldier.guardGate();
	policeman.takeDamage(42);
	soldier.takeDamage(42);
	policeman.attack("enemy");
	soldier.attack("enemy");
	policeman.beRepaired(3);
	soldier.beRepaired(3);
	
	ScavTrap servibot(soldier);

	servibot.beRepaired(69);
	servibot.guardGate();

	ClapTrap victor("Victor");
	victor.attack("Bennie");
	victor = soldier;
	victor.attack("Bennie");
	// victor.guardGate();
	// servibot = policeman;//no deja
}

int main()
{
	test0();
	test02();
	test020();
	test1();
	test2();
	test22();
	return 0;
}
