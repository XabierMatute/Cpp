/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:00:59 by xmatute-          #+#    #+#             */
/*   Updated: 2023/08/20 14:14:46 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BitcoinExchange_HPP
# define BitcoinExchange_HPP

#include <string>
#include <map>
#include <ctime>

#define BEmap std::map<struct tm, float>

class	BitcoinExchange
{
	private:
		BEmap	database;
		static  const std::string		databaseHeader;

	private:
		static bool	validDate(const std::string date);
		static bool	validRate(const std::string date);

		static void		checkDatabase(const std::string &path);
		static BEmap	initDatabase(const std::string &path);
		static BEmap	parseDatabase(const std::string &path);

	private:
		BitcoinExchange();

	public:
		BitcoinExchange(const std::string &path);
		BitcoinExchange(const BitcoinExchange& to_copy);
		BitcoinExchange& operator=(const BitcoinExchange& to_asign);
		~BitcoinExchange();

};

const std::string BitcoinExchange::databaseHeader = "date,exchange_rate";

#endif
