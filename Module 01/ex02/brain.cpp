/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:15:20 by xmatute-          #+#    #+#             */
/*   Updated: 2023/04/27 18:15:27 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

void	function(std::string string_, std::string	*stringPTR, std::string &stringREF)
{
	std::cout << '\n';
	std::cout << "La dirección de memoria de la variable de tipo string: ";
	std::cout << &string_ << '\n';
	std::cout << "La dirección de memoria contenida en stringPTR: ";
	std::cout << stringPTR << '\n';
	std::cout << "La dirección de memoria contenida en stringREF: ";
	std::cout << &stringREF << '\n';
	std::cout << '\n';
	std::cout << "El valor de la variable string: ";
	std::cout << string_ << '\n';
	std::cout << "El valor apuntado por stringPTR: ";
	std::cout << *stringPTR << '\n';
	std::cout << "El valor apuntado por stringREF: ";
	std::cout << stringREF << '\n';
}

void	noerase(std::string string_)
{
	string_.erase();
}

void	erasec(std::string *string_)
{
	(*string_).erase();
}

void	erasecpp(std::string &string_)
{
	string_.erase();
}

int main()
{
	std::string	brain( "HI THIS IS BRAIN");
	std::string	*stringPTR = &brain;
	std::string &stringREF = brain;

	function(brain, &brain, brain);
	
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

	stringREF.erase();

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

	brain = "ey baby";

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

	noerase(brain);

	std::cout << '\n';
	std::cout << "Asi no se borra\n";
	std::cout << "La dirección de memoria de la variable de tipo string: ";
	std::cout << &brain << '\n';
	std::cout << "El valor de la variable string: ";
	std::cout << brain << '\n';
	std::cout << '\n';

	erasec(&brain);

	std::cout << '\n';
	std::cout << "Asi si\n";
	std::cout << "La dirección de memoria de la variable de tipo string: ";
	std::cout << &brain << '\n';
	std::cout << "El valor de la variable string: ";
	std::cout << brain << '\n';

	brain = "BORRAME";

	std::cout << '\n';
	std::cout << "La dirección de memoria de la variable de tipo string: ";
	std::cout << &brain << '\n';
	std::cout << "El valor de la variable string: ";
	std::cout << brain << '\n';

	erasecpp(brain);

	std::cout << '\n';
	std::cout << "Asi tambien\n";
	std::cout << "La dirección de memoria de la variable de tipo string: ";
	std::cout << &brain << '\n';
	std::cout << "El valor de la variable string: ";
	std::cout << brain << '\n';
	return 0;
}
