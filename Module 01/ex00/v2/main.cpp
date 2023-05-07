/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 10:46:57 by xmatute-          #+#    #+#             */
/*   Updated: 2023/04/27 12:04:58 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

// void	test0()
// {
// 	std::cout << "\nTEST 0\n";
// 	Zombie	nameless;
// 	Zombie	zero("Zero");
// }

// void	test1()
// {
// 	std::cout << "\nTEST 1\n";
// 	Zombie	nameless;
// 	Zombie	zero("Asier");

// 	nameless.announce();
// 	zero.announce();
// }


void	test2()
{
	std::cout << "\nTEST 2\n";
	Zombie	*zero = Zombie::newZombie("ChowChow");
	Zombie	*ale = Zombie::newZombie("Alejandro");

	zero->announce();
	delete(zero);
	delete(ale);
}

void	test2c()
{
	std::cout << "\nTEST 2 con crash\n";
	Zombie	*nameless = Zombie::newZombie(NULL);
	Zombie	*zero = Zombie::newZombie("ChowChow");

	nameless->announce();
	zero->announce();
	delete(zero);
	delete(nameless);
}

void	test3()
{
	std::cout << "\nTEST 3\n";
	Zombie::randomChump("Aitana");
	Zombie::randomChump("Zoilo");
}

int main(void)
{
	// test0();
	// test1();
	test2();
	// test2c();
	test3();
	return 0;
}
