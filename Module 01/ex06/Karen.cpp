/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:46:39 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/07 12:00:06 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

const std::string Karen::l[LEVELS] =
{
	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR",
};

void (Karen::*Karen::f[LEVELS])() =
{
	&Karen::debug,
	&Karen::info,
	&Karen::warning,
	&Karen::error,
};

void	Karen::debug(void)
{
	std::cout << "“I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!”\n";
}

void	Karen::info(void)
{
	std::cout << "“I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!”\n";
}

void	Karen::warning(void)
{
	std::cout << "“I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.”\n";
}

void	Karen::error(void)
{
	std::cerr << "“This is unacceptable! I want to speak to the manager now.”\n";
}

void Karen::unknown(void)
{
	std::cout << "(I have no comment on this level.)\n";
}


void Karen::complain(	int level )
{
	if (level > -1 && level < LEVELS)
		(this->*f[level])();
	else
		unknown();
}

int	Karen::letoi( std::string level )
{
	int	i = 0;

	while (i < LEVELS)
	{
		if (l[i] == level)
			return i;
		i++;
	}
	return (-1);
}

void Karen::complain( std::string level )
{
	complain(letoi(level));
}
