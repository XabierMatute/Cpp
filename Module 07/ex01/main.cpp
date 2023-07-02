/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:19:07 by xmatute-          #+#    #+#             */
/*   Updated: 2023/07/02 11:04:31 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "Zombie.hpp"
#include <string>
#include <iostream>

template	<typename T>
void	increment(T &i)
{
	i++;
}

template	<typename T>
void	decrement(T &i)
{
	i--;
}

char &toupperR(char &c)
{
	c = toupper(c);
	return (c);
}

void	announceZ(Zombie	&anouncer)
{
	anouncer.announce();
}

template	<class C>
void	announce(C &o)
{
	o.announce();
}

int main()
{
	char s[] = "Hola Mundo\n";

	std::cout << s;
	iter(s, 12, putchar);
	iter(s, 11, toupperR);
	std::cout << s;
	iter(s, 10, increment<char>);
	std::cout << s;
	iter(s, 10, decrement<char>);
	std::cout << s;

	Zombie	*horda = Zombie::zombieHorde(7, "piscinero");

	iter(horda, 7, announceZ);
	iter(horda, 3, announce<Zombie>);

	delete[](horda);

	return 0;
}
