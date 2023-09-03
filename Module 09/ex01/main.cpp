/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:01:44 by xmatute-          #+#    #+#             */
/*   Updated: 2023/09/03 18:52:02 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>

int calculate(char const *input)
{
	try
	{
		RPN	calculator;

		std::cout << calculator.calculate(input) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: no se ha podido realizar la operación\n" << e.what() << '\n';
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Error: el programa ha recibido " << argc << " argumentos en vez de 1" << std::endl;
		return 1;
	}
	return (calculate(argv[1]));
	return 0;
}
