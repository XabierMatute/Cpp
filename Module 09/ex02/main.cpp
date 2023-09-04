/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:02:39 by xmatute-          #+#    #+#             */
/*   Updated: 2023/09/04 12:28:40 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>

int calculate(char const **input)
{
	try
	{
		PmergeMe	sorter;

		sorter.sort(input);
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
	if (argc < 2)
	{
		std::cerr << "Error: el programa no ha recibido argumentos" << std::endl;
		return 1;
	}
	return (short(argv + 1), argc - 1);
	return 0;
}