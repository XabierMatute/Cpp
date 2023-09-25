/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:00:41 by xmatute-          #+#    #+#             */
/*   Updated: 2023/09/25 19:41:44 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

#include <iostream>
#include <fstream>
#include <string>
#include <stdexcept>
#include <algorithm>

const std::string BitcoinExchange::databaseHeader = "date,exchange_rate";
const std::string BitcoinExchange::consultHeader = "date | value";

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

BitcoinExchange::BitcoinExchange(const std::string &path) : database()
{
	parseDatabase(path);
}

void BitcoinExchange::parseLine(const char *line)
{
	std::tm 	date = {};
	double 		rate;

	line = strptime(line, "%Y-%m-%d", &date);
	if (!line)
		throw (std::runtime_error("Error al procesar fechas"));
	if (*line != ',')
		throw (std::runtime_error("hay alguna fecha no seguida por coma"));
	line++;
	if (!*line)
		throw (std::runtime_error("no hay nada tras alguna coma"));
	char *error;
	rate = strtof(line, &error);
	if (*error)
		std::runtime_error("Error al procesar ratios");
	if (rate < 0)
		throw (std::runtime_error("Los ratios deben ser positivos"));
	database.insert(std::make_pair(mktime(&date), rate));
}

double	BitcoinExchange::getRate(time_t date) const
{	
	BEmap::const_iterator	it = database.find(date);

	if (it != database.end())
		return(it->second);
	it = database.lower_bound(date);
	if (it == database.begin())
		return(-1);
	it--;
	return(it->second);
}

void	BitcoinExchange::printConsult(std::tm &date, double const &value) const
{
	double	result = value * getRate(mktime(&date));
	if (result < 0)
		std::cerr << "Error: ratio no encontrado" << std::endl;
	else
		std::cout << date.tm_year + 1900 << '-' << date.tm_mon + 1 << '-' << date.tm_mday  << " => " << value << " = " << result << std::endl;
}

void BitcoinExchange::consultLine(const char *line) const
{
	struct tm 	date = {};
	double 		value;

	line = strptime(line, "%Y-%m-%d", &date);
	if (!line)
	{
		std::cerr << "Error: formato de fecha invalido" << std::endl;
		return;
	}
	if (strncmp(line, " | ", 3))
	{
		std::cerr << "Error: formato invalido" << std::endl;
		return;
	}
	line += 3;
	if (!*line)
	{
		std::cerr << "Error: formato invalido" << std::endl;
		return;
	}
	char *error;
	value = strtof(line, &error);
	if (*error)
	{
		std::cerr << "Error: formato de ratio invalido" << std::endl;
		return;
	}
	if (value < 0 || value > 1000)
	{
		std::cerr << "Error: el valor debe de estar entre 0 y 1000" << std::endl;
		return;
	}
	printConsult(date, value);
}

BEmap BitcoinExchange::parseDatabase(const std::string &path)
{
	std::ifstream file(path.c_str());
	
	std::cout << "opening " << path << "..." << std::endl;
	if (!file.is_open())
		throw (std::runtime_error("No se pudo abrir el archivo " + path + '.'));
	std::cout << path << " opened!" << std::endl;
	std::string line;
	std::getline(file, line);
	std::cout << "reading " << path;
	if (line != databaseHeader)
		throw (std::runtime_error("El archivo " + path + " tiene como primera linea \"" + line + "\" en vez de \"" + databaseHeader + "\"."));
	std::cout << "..." << std::endl;
	while (std::getline(file, line))
	{
		if (std::count(line.begin(), line.end(), ',') != 1)
			throw (std::runtime_error("La linea \"" + line + "\" del archivo " + path + " no tiene una coma."));
		parseLine (line.c_str());
	}
	std::cout << "database readed!" << std::endl;
	return (database);
}

void BitcoinExchange::consult(const std::string &path) const
{
	std::ifstream file(path.c_str());

	std::cout << std::endl;
	if (database.empty())
		throw(std::runtime_error("database is empty"));
	if (!file.is_open())
		throw (std::runtime_error("No se pudo abrir el archivo " + path + '.'));
		std::string line;
	std::getline(file, line);
	if (line != consultHeader)
		throw (std::runtime_error("El archivo " + path + " tiene como primera linea \"" + line + "\" en vez de \"" + consultHeader + "\"."));
	while (std::getline(file, line))
	{
		if	(line.empty())
			std::cout << std::endl;
		else
			consultLine(line.c_str());
	}
}
