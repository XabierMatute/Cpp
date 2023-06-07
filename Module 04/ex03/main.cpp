/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 19:06:04 by xmatute-          #+#    #+#             */
/*   Updated: 2023/06/07 12:43:43 by xmatute-         ###   ########.fr       */
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

void	PruebadeHieloTest()
{
	std::cout << "\nPrueba de hielo" << std::endl;
	IMateriaSource* icesrc = new MateriaSource();
	icesrc->learnMateria(new Ice());
	icesrc->learnMateria(new Ice());
	icesrc->learnMateria(icesrc->createMateria("ice"));
	icesrc->learnMateria(new Ice());
	// icesrc->learnMateria(new Ice());//a partir de aqui leaks si se hace asi
	
	if (!icesrc->createMateria("cure"))
	{
		std::cout << "De donde no hay no se puede sacar" << std::endl;
	}
	AMateria* tmp;
	tmp = icesrc->createMateria("ice");
	if (tmp)
	{
		std::cout << "«El hielo no tiene nada de bonito. El hielo no produce nada. Pero tenemos esto en la mente de que tenemos que enfriar todo». Don Young." << std::endl;
		delete tmp;
	}
	if (!icesrc->createMateria("materiainexistente"))
	{
		std::cout << "“Sea la inexistencia” ― Jaime García Maffla" << std::endl;
	}
	delete icesrc;
}

void	magicTest()
{
	std::cout << "\nmagic test" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* mage = new Character("Montblanc");
	ICharacter* fool = new Character("Nolan");
	mage->use(1, *mage);
	mage->equip(src->createMateria("ice"));
	mage->use(0, *fool);
	AMateria* tirita = src->createMateria("cure");
	fool->equip(tirita);
	fool->use(0, *fool);
	fool->unequip(0);
	mage->equip(tirita);
	mage->use(1, *mage);
	mage->unequip(1);
	delete tirita;//solo si está en el suelo (no está equipado), sino crash
	mage->use(0, *fool);
	fool->use(0, *fool);
	mage->use(0, *fool);
	fool->use(0, *fool);
	delete mage;
	delete fool;
	delete src;
}

int main()
{
	Charactertest0();
	Icetest0();
	Curetest0();
	MStest0();
	test1();
	subjectTest();
	PruebadeHieloTest();
	magicTest();
}
