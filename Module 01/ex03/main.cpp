/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:37:37 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/02 19:35:01 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Violence.hpp"
#include <iostream>

void	weapontest()
{
	std::cout << "\nweapon test\n";
	// Weapon Arma;//no le dejo no tener nombre/tipo
	Weapon Arma("Thomson M1921");

	std::cout << "Este arma es del tipo: " << Arma.getType() << '\n';
	Arma.setType(".45 Auto submachine gun");
	std::cout << "Este arma es del tipo: " << Arma.getType() << '\n';

}

void	 humanAtest()
{
	std::cout << "\nHuman A test\n";
	Weapon Arma("Thomson M1921");
	// HumanA	Daniel;//no le dejo no tener nombre
	// HumanA	Dani("Dani");//no le dejo no tener arma
	HumanA	Dani("Daniel", Arma);

	Dani.attack();
	// Dani.setWeapon(Arma);//a este humano no le dejo cambiar de arma
	std::cout << "Este arma es del tipo: " << Arma.getType() << '\n';
	Arma.setType(".45 Auto submachine gun");
	std::cout << "Este arma es del tipo: " << Arma.getType() << '\n';
	Dani.attack();
}

void	 humanBtest()
{
	std::cout << "\nHuman B test\n";
	Weapon Arma("Elf-Grinder");
	// HumanB	Daniel;//no le dejo no tener nombre
	HumanB	Rolff("Rolff Stone-Fist");//a este si le dejo no tener arma
	// HumanB	Rolff("Rolff Stone-Fist", Arma);//no se puede construir con arma

	Rolff.attack();
	Rolff.setWeapon(Arma);
	Rolff.attack();
	std::cout << "Este arma es del tipo: " << Arma.getType() << '\n';
	Arma.setType("Wuuthrad");
	std::cout << "Este arma es del tipo: " << Arma.getType() << '\n';
	Rolff.attack();
}

void	subjecttestA()
{
	std::cout << "\nexA\n";
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
}

void	subjecttestB()
{
	std::cout << "\nexB\n";
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
}

int main()
{
	weapontest();
	humanAtest();
	humanBtest();
	subjecttestA();
	subjecttestB();
	return 0;
}
