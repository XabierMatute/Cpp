/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:02:39 by xmatute-          #+#    #+#             */
/*   Updated: 2023/09/26 16:28:46 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iostream>

int sort(char const **input, int size)
{
	try
	{
		PmergeMe	sorter;

		sorter.sort(input, size);
	}
	catch(const std::exception& e)
	{
		std::cerr << '\n' << "Error: no se ha podido realizar la ordenación\n" << e.what() << '\n';
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
	return (sort(argv + 1, argc - 1));
	return 0;
}
