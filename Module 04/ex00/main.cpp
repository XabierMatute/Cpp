/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 09:41:11 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/17 12:05:46 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

void	Animaltest0()
{
	std::cout << "\nAnimal Test 0" << std::endl;
	Animal zero;

	std::cout << "Los animales son como la gente porque la gente son animales (Barbara T. Gates)" << std::endl;
}

void	AnimalSoundtest()
{
	std::cout << "\nAnimal Sound Test" << std::endl;

	Animal idea;
	idea.makeSound();

	Animal kevin("gamusino");
	kevin.makeSound();
	idea = kevin;
	idea.makeSound();	
}

void	WrongAnimaltest0()
{
	std::cout << "\nWrongAnimal Test 0" << std::endl;
	WrongAnimal zero;

	std::cout << "Los WrongAnimales son como la Wronggente porque la gente son WrongAnimales (WrongBarbara F. WrongGates)" << std::endl;
}

void	WrongAnimalSoundtest()
{
	std::cout << "\nWrongAnimal Sound Test" << std::endl;

	WrongAnimal idea;
	idea.makeSound();

	WrongAnimal kevin("gamusino");
	kevin.makeSound();
	idea = kevin;
	idea.makeSound();	
}

void	Cattest0()
{
	std::cout << "\nCat Test 0" << std::endl;
	Cat zero;

	std::cout << "Los gatos parecen conducirse según el principio de que nunca hace daño pedir lo que uno quiere. (Joseph Wood Krutch)" << std::endl;
}

void	CatSoundtest()
{
	std::cout << "\nCat Sound Test" << std::endl;

	Cat	wally;
	wally.makeSound();

	// Cat kevin("gamusino");//no se puede	
	Animal idea;
	idea.makeSound();
	idea = wally;
	idea.makeSound();
	// idea.Cat::makeSound();//no deja
}

void	WrongCattest0()
{
	std::cout << "\nWrongCat Test 0" << std::endl;
	WrongCat zero;

	std::cout << "Los gatos no parecen conducirse según el principio de que nunca hace daño pedir lo que uno quiere. (Joseph Wrong Krutch)" << std::endl;
}

void	WrongCatSoundtest()
{
	std::cout << "\nWrongCat Sound Test" << std::endl;

	WrongCat	wally;
	wally.makeSound();

	// WrongCat kevin("gamusino");//no se puede	
	WrongAnimal idea;
	idea.makeSound();
	idea = wally;
	idea.makeSound();
	// idea.WrongCat::makeSound();//no deja
}

void	Dogtest0()
{
	std::cout << "\nDog Test 0" << std::endl;
	Dog zero;

	std::cout << "Lord Byron fue quien dijo que \"cuanto más conozco a los hombres más quiero a mi perro\"" << std::endl;
}

void	DogSoundtest()
{
	std::cout << "\nDog Sound Test" << std::endl;

	Dog	rantanplan;
	rantanplan.makeSound();

	// Dog kevin("gamusino");//no se puede	
	Animal idea;
	idea.makeSound();
	idea = rantanplan;
	idea.makeSound();
	// idea.Dog::makeSound();//no deja
}

void	SubjectTest()
{
	std::cout << "\nSubject Test" << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete (meta);
	delete (i);
	delete (j);
}

void	WSubjectTest()
{
	std::cout << "\nWrongSubject Test" << std::endl;

	const WrongAnimal* meta = new WrongAnimal();
	const Animal* j = new Dog();
	const WrongAnimal* i = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete (meta);
	delete (i);
	delete (j);
}

void	testo()
{
	std::cout << "\ntesto" << std::endl;

	Animal bicho;
	WrongAnimal bichomalo;
	Cat gato;
	WrongCat gatomalo;
	Dog perro;

	bicho.makeSound();
	bichomalo.makeSound();
	gato.makeSound();
	gatomalo.makeSound();
	perro.makeSound();
	
	bicho = gato;
	std::cout << std::endl << bicho.getType() << " " << std::endl;
	bicho.makeSound();
	const Animal	&mascota = gato;
	std::cout << mascota.getType() << " " << std::endl;
	mascota.makeSound();
	bichomalo = gatomalo;
	std::cout << std::endl << bichomalo.getType() << " " << std::endl;
	bichomalo.makeSound();
	const WrongAnimal	&comida = gatomalo;
	std::cout << comida.getType() << " " << std::endl;
	comida.makeSound();

	// mascota = perro;
	// std::cout << mascota.getType() << " " << std::endl;
	// mascota.makeSound();
	// std::cout << gato.getType() << " " << std::endl;
	// gato.makeSound();
}

int main()
{
	Animaltest0();
	AnimalSoundtest();
	WrongAnimaltest0();
	WrongAnimalSoundtest();
	Cattest0();
	CatSoundtest();
	WrongCattest0();
	WrongCatSoundtest();
	Dogtest0();
	DogSoundtest();
	SubjectTest();
	WSubjectTest();
	testo();
	return 0;
}
