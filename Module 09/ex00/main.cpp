/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:01:08 by xmatute-          #+#    #+#             */
/*   Updated: 2023/08/30 18:17:16 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <string>
#include <iostream>

const std::string databasePath = "data.csv";

int consult(char const *path)
{
	try
	{
		BitcoinExchange	database(databasePath);

		database.consult(path);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error: no se ha podido realizar la consulta\n" e.what() << '\n';
		return (EXIT_FAILURE));
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
	return (consult(argv[1]));
}
