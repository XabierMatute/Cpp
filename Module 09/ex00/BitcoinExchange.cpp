/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:00:41 by xmatute-          #+#    #+#             */
/*   Updated: 2023/08/20 14:28:26 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

#include <fstream>
#include <string>
#include <stdexcept>
#include <algorithm>

/*
** Orthodox Canonical Form
*/
// Default constructor
BitcoinExchange::BitcoinExchange() {}//
// Copy constructor
BitcoinExchange::BitcoinExchange(const BitcoinExchange& to_copy) : database(to_copy.database) {}
// Destructor
BitcoinExchange::~BitcoinExchange() {}
// Copy assignment operator
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& to_asign)
{
	database = to_asign.database;
	 return(*this);
}

BitcoinExchange::BitcoinExchange(const std::string &path) : database(initDatabase(path)) {}

bool	BitcoinExchange::validDate(const std::string date)
{
	size_t	i = 0;
	

	if (!isdigit(date[i]))
		return false;
	while (isdigit(date[i]))
		i++;
	if (date[i] != '-')
		return false;
	i++;
	if (!isdigit(date[i]))
		return false;
	while (isdigit(date[i]))
		i++;
	if (date[i] != '-')
		return false;
	if (!isdigit(date[i]))
		return false;
	while (isdigit(date[i]))
		i++;
	if (date[i])
		return false;
	return true;
}

void	BitcoinExchange::checkDatabase(const std::string &path)
{

}

BEmap BitcoinExchange::initDatabase(const std::string &path)
{
	return (parseDatabase(path));
}

BEmap BitcoinExchange::parseDatabase(const std::string &path)
{
	std::ifstream file(path.c_str());

	if (!file.is_open())
		throw (std::runtime_error("No se pudo abrir el archivo " + path + '.'));
	std::string line;
	if (!std::getline(file, line))
		throw (std::runtime_error("El archivo " + path + " está vacio."));
	if (line != databaseHeader)
		throw (std::runtime_error("El archivo " + path + " tiene como primera linea " + line + " en vez de " + databaseHeader + '.'));
	BEmap	database;
	
	while (std::getline(file, line))
	{
		if (std::count(line.begin(), line.end(), ',') != 1)
			throw (std::runtime_error("La linea \"" + line + "\" del archivo " + path + " no tiene una coma."));
		struct tm date;
		strptime(line.substr(0, line.find(','), "%Y-%m-%d", date)
		database.insert()
		// if (!validDate(line.substr(0, line.find(','))))
		// 	throw (std::runtime_error("en la linea " + line + " del archivo " + path + " no tiene una fecha en un formato: Year-Month-Day."));
		// if (!validRate(line.substr(line.find(',') + 1)))
		// 	throw (std::runtime_error("en la linea " + line + " del archivo " + path + " no tiene un exchange_rate valido (must be either a float or a positive integer between 0 and 1000.)."));
	}
}
