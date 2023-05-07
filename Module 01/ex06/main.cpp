/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 11:47:54 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/07 12:20:04 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char const *argv[])
{
	Karen	Karen;

	if (argc != 2)
		return 1;
	switch (Karen.letoi(argv[1]))
	{
	case Karen::DEBUG:
		Karen.complain(Karen::DEBUG);
	case Karen::INFO:
		Karen.complain(Karen::INFO);
	case Karen::WARNING:
		Karen.complain(Karen::WARNING);
	case Karen::ERROR:
		Karen.complain(Karen::ERROR);
	break;
	default:
		Karen.complain(-1);
	}
	return 0;
}

