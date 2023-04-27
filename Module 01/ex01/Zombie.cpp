/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 09:50:29 by xmatute-          #+#    #+#             */
/*   Updated: 2023/04/27 16:10:51 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#include <iostream>

void	Zombie::announce( void )
{
	if (name.empty())
		std::cout << "Un zombie sin nombre";
	std::cout << name;
	std::cout << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie*	Zombie::newZombie( std::string name )
{
	return (new Zombie(name));
}

void	Zombie::randomChump( std::string name )
{
	Zombie	foo(name);

	foo.announce();
}

Zombie::Zombie()
{
	std::cout << "🧟un nuevo zombie ha sido creado.\n";
}

Zombie::Zombie( std::string name )
{
	this->name = name;
	std::cout << "🧟un nuevo zombie ha sido creado, " << name << " es su nombre.\n";
}

Zombie::~Zombie()
{
	std::cout << "🦩";
	if (name.empty())
		std::cout << "Un zombie sin nombre";
	std::cout << name << " ha sido liberado de la no muerte.\n";
}

Zombie*	Zombie::zombieHorde( int N, std::string name )
{
	Zombie	*horda = new Zombie[N](/*name*/);

	while (N--)
		horda[N].name = name;
	return (horda);
}
