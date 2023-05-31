/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:06:04 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/31 18:31:32 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include <iostream>

// void	AMateriatest0()
// {
// 	AMateria zero;//nop
// }

void	Charactertest0()
{
	std::cout << "\nCharacter Test 0" << std::endl;
	// Character nameless;//nop
	Character zero("Zero");
	
	std::cout << "En todo hay una parte de todo (Anaxágoras)" << std::endl;
}

void	Icetest0()
{
	std::cout << "\nIce Test 0" << std::endl;
	Ice fresco;
	
	std::cout << "«Sin el hielo, la tierra caerá». Emma Thompson." << std::endl;
}

void	Curetest0()
{
	std::cout << "\nCure Test 0" << std::endl;
	Cure culito;
	
	std::cout << "“No hay medicina que cure lo que no cura la felicidad.” Gabriel García Márquez" << std::endl;
}

void	MStest0()
{
	std::cout << "\nMS Test 0" << std::endl;
	MateriaSource fuente;
	
	std::cout << "Aquello que sale del corazón, lleva el matiz y el calor de su lugar de origen." << std::endl;
}

void	test1()
{
	std::cout << "\ntest1" << std::endl;
	Cure culito;
	Ice fresco;
	Character zero("Zero");
	
	fresco.use(zero);
	culito.use(zero);
}

void	subjectTest()
{
	std::cout << "\nsubjectTest" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
}

// void	subjectTest()
// {
// 	std::cout << "\nsubjectTest" << std::endl;
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter* me = new Character("me");
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");

// 	me->equip(tmp);
// 		// me->use(0, *me);
// 	tmp = new Cure;
// 		// me->use(1, *me);
// 	me->equip(tmp);
// 		me->use(1, *me);

// 	ICharacter* bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	delete bob;
// 	delete me;
// 	delete src;
// }

int main()
{
	Charactertest0();
	Icetest0();
	Curetest0();
	MStest0();
	test1();
	subjectTest();
}
