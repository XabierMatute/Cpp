/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandatory.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:15:20 by xmatute-          #+#    #+#             */
/*   Updated: 2023/04/27 18:16:15 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
	std::string	brain( "HI THIS IS BRAIN");
	std::string	*stringPTR = &brain;
	std::string &stringREF = brain;
	
	std::cout << '\n';
	std::cout << "La dirección de memoria de la variable de tipo string: ";
	std::cout << &brain << '\n';
	std::cout << "La dirección de memoria contenida en stringPTR: ";
	std::cout << stringPTR << '\n';
	std::cout << "La dirección de memoria contenida en stringREF: ";
	std::cout << &stringREF << '\n';
	std::cout << '\n';
	std::cout << "El valor de la variable string: ";
	std::cout << brain << '\n';
	std::cout << "El valor apuntado por stringPTR: ";
	std::cout << *stringPTR << '\n';
	std::cout << "El valor apuntado por stringREF: ";
	std::cout << stringREF << '\n';
	std::cout << '\n';

	return 0;
}
