/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 09:41:11 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/30 15:05:40 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#include <iostream>

// void	Animaltest0()
// {
// 	std::cout << "\nAnimal Test 0" << std::endl;
// 	Animal zero;

// 	std::cout << "Los animales son como la gente porque la gente son animales (Barbara T. Gates)" << std::endl;
// }

// void	Braintest0()
// {
// 	std::cout << "\nBrain Test 0" << std::endl;
// 	Brain pinky;

// 	std::cout << "Cerebro, ¿Qué Vamos a hacer esta noche?" << std::endl;
// }

// void	AnimalSoundtest()
// {
// 	std::cout << "\nAnimal Sound Test" << std::endl;

// 	Animal idea;
// 	idea.makeSound();

// 	Animal kevin("gamusino");
// 	kevin.makeSound();
// 	idea = kevin;
// 	idea.makeSound();	
// }

// void	Cattest0()
// {
// 	std::cout << "\nCat Test 0" << std::endl;
// 	Cat zero;

// 	std::cout << "Los gatos parecen conducirse según el principio de que nunca hace daño pedir lo que uno quiere. (Joseph Wood Krutch)" << std::endl;
// }

// void	CatSoundtest()
// {
// 	std::cout << "\nCat Sound Test" << std::endl;

// 	Cat	wally;
// 	wally.makeSound();

// 	// Cat kevin("gamusino");//no se puede	
// 	Animal idea;
// 	idea.makeSound();
// 	idea = wally;
// 	idea.makeSound();
// 	// idea.Cat::makeSound();//no deja
// }

// void	Dogtest0()
// {
// 	std::cout << "\nDog Test 0" << std::endl;
// 	Dog zero;

// 	std::cout << "Lord Byron fue quien dijo que \"cuanto más conozco a los hombres más quiero a mi perro\"" << std::endl;
// }

// void	DogSoundtest()
// {
// 	std::cout << "\nDog Sound Test" << std::endl;

// 	Dog	rantanplan;
// 	rantanplan.makeSound();

// 	// Dog kevin("gamusino");//no se puede	
// 	Animal idea;
// 	idea.makeSound();
// 	idea = rantanplan;
// 	idea.makeSound();
// 	// idea.Dog::makeSound();//no deja
// }

// void	Subject00Test()
// {
// 	std::cout << "\nSubject00 Test" << std::endl;

// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();
// 	delete (meta);
// 	delete (i);
// 	delete (j);
// }

// void	ideastest()
// {
// 	std::cout << "\nIdea Test" << std::endl;

// 	Brain cerebro;

// 	std::cout << cerebro.ideas[42] << std::endl;
// 	cerebro.ideas[42] = "Up2u";
// 	cerebro.ideas[69] = "hehe";
// 	std::cout << cerebro.ideas[42] << std::endl;
// 	std::cout << cerebro.ideas[69] << std::endl;
// 	Brain nuevo(cerebro);
// 	std::cout << nuevo.ideas[42] << std::endl;
// 	std::cout << nuevo.ideas[69] << std::endl;
// 	cerebro.ideas[69] = "juju";
// 	std::cout << nuevo.ideas[69] << std::endl;
// 	std::cout << cerebro.ideas[69] << std::endl;
// 	nuevo = cerebro;
// 	nuevo.ideas[42] = "el google vasco";
// 	std::cout << cerebro.ideas[42] << std::endl;
// 	std::cout << cerebro.ideas[69] << std::endl;
// 	std::cout << nuevo.ideas[42] << std::endl;
// 	std::cout << nuevo.ideas[69] << std::endl;

// }

// void	lobotomiagatunatest()
// {
// 	std::cout << "\nLobotomia gatuna Test" << std::endl;

// 	Cat 	volador;

// 	volador.getBrain()->ideas[0] = "";
// 	volador.getBrain()->brainstorm();
// 	volador.getBrain()->ideas[0] = "idea zero";
// 	volador.getBrain()->ideas[69] = "nice";
// 	volador.getBrain()->ideas[42] = "norm error";
// 	volador.getBrain()->ideas[99] = "idea final";
// 	// volador.getBrain()->ideas[100] = "idea fatal";
// 	volador.getBrain()->brainstorm();
// 	volador.getBrain()->ideas[1] = "miau";
// 	volador.getBrain()->ideas[2] = "no camino ni me arrastro";
// 	volador.getBrain()->ideas[3] = "soy el gato volador";
// 	volador.getBrain()->brainstorm();

// 	Cat volados(volador);

// 	volados.getBrain()->ideas[11] = "horrible";
// 	volados.getBrain()->ideas[3] = "soy el gato volados";
// 	volados.getBrain()->brainstorm();
// 	volador.getBrain()->brainstorm();
// 	volador = Cat();
// 	volados.getBrain()->brainstorm();
// 	volador.getBrain()->brainstorm();

// 	Dog	confuso;
// 	*(confuso.getBrain()) = *(volados.getBrain());
// 	confuso.makeSound();
// 	confuso.getBrain()->brainstorm();

// }


const	size_t	size = 4;

void	fillloop(Animal	*Array[size])
{
	size_t i = 0;

	while (i < size / 2)
	{
		Array[i] = new Dog;
		i++;
	}
	while (i < size)
	{
		Array[i] = new Cat;
		i++;
	}
}

void	deleteloop(Animal	*Array[size])
{
	size_t i = 0;

	while (i < size)
	{
		delete(Array[i]);
		i++;
	}
}

void	makesoundsloop(Animal	*Array[size])
{
	size_t i = 0;

	while (i < size)
	{
		Array[i]->makeSound();
		i++;
	}
}

void	mandatory()
{
	std::cout << "\nMandatory" << std::endl;

	Animal	*Array[size];

	fillloop(Array);

	makesoundsloop(Array);

	deleteloop(Array);
}

int main()
{
	// Animaltest0();
	// Braintest0();
	// AnimalSoundtest();
	// Cattest0();
	// CatSoundtest();
	// Dogtest0();
	// DogSoundtest();
	// Subject00Test();
	// ideastest();
	// lobotomiagatunatest();
	
	mandatory();
	return 0;
}
