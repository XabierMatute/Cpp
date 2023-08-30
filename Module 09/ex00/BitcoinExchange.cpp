/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:00:41 by xmatute-          #+#    #+#             */
/*   Updated: 2023/08/30 18:22:12 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

#include <iostream>
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

BitcoinExchange::BitcoinExchange(const std::string &path) : database()
{
	parseDatabase(path);
}

void BitcoinExchange::parseLine(const char *line)
{
	struct tm 	date;
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
	database.insert({date, rate});
}

bool BitcoinExchange::consultLine(const char *line)
{
	struct tm 	date;
	double 		rate;

	line = strptime(line, "%Y-%m-%d", &date);
	if (!line)
		std::cout << "Error: formato de fecha invalido";
	if (strncmp(line, " | ", 3)
		return false;
	line++;
	if (!*line)
		throw (std::runtime_error("no hay nada tras alguna coma"));
	char *error;
	rate = strtof(line, &error);
	if (*error)
		std::runtime_error("Error al procesar ratios");
	database.insert({date, rate});
}

BEmap BitcoinExchange::parseDatabase(const std::string &path)
{
	std::ifstream file(path.c_str());

	if (!file.is_open())
		throw (std::runtime_error("No se pudo abrir el archivo " + path + '.'));
	std::string line;
	if (line != databaseHeader)
		throw (std::runtime_error("El archivo " + path + " tiene como primera linea " + line + " en vez de " + databaseHeader + '.'));
	while (std::getline(file, line))
	{
		if (std::count(line.begin(), line.end(), ',') != 1)
			throw (std::runtime_error("La linea \"" + line + "\" del archivo " + path + " no tiene una coma."));
		parseLine (line.c_str());
	}
	return (database);
}

void BitcoinExchange::consult(const std::string &path) const
{
	std::ifstream file(path.c_str());

	if (database.empty());
		throw(std::runtime_error("database is empty"));
	if (!file.is_open())
		throw (std::runtime_error("No se pudo abrir el archivo " + path + '.'));
		std::string line;
	if (line != consultHeader)
		throw (std::runtime_error("El archivo " + path + " tiene como primera linea " + line + " en vez de " + consultHeader + '.'));
	while (std::getline(file, line))
	{
		
	}
}
