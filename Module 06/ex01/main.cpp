/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 17:19:51 by xmatute-          #+#    #+#             */
/*   Updated: 2023/06/29 17:29:51 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

#include <iostream>

int main()
{
	Data	*p = new Data;

	p->i = 42;
	p->name	= "Jacinto";
	
	std::cout << "p: " << p << " p->i: " << p->i << " p->name: " << p->name << std::endl;
	uintptr_t	i = Serializer::serialize(p);
	std::cout << "i: " << i << std::endl;
	Data	*d = Serializer::deserialize(i);
	std::cout << "d: " << d << " d->i: " << d->i << " d->name: " << d->name << std::endl;
	


	return 0;
}
