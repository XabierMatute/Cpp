/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:00:59 by xmatute-          #+#    #+#             */
/*   Updated: 2023/09/02 16:22:28 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BitcoinExchange_HPP
# define BitcoinExchange_HPP

#include <string>
#include <map>
#include <ctime>

#define BEmap std::map<time_t, double>

class	BitcoinExchange
{
	private:
		BEmap	database;
		static  const std::string		databaseHeader;
		static  const std::string		consultHeader;

	private:
		BEmap	parseDatabase(const std::string &path);
		void	parseLine(const char *line);
		void	consultLine(const char *line) const;
		void	printConsult(std::tm &date, double const &value) const;
		double	getRate(time_t date) const;

	private:
		BitcoinExchange();

	public:
		BitcoinExchange(const std::string &path);
		BitcoinExchange(const BitcoinExchange& to_copy);
		BitcoinExchange& operator=(const BitcoinExchange& to_asign);
		~BitcoinExchange();

		void	consult(const std::string &path) const;
};



#endif
