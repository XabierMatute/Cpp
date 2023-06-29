/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:52:52 by xmatute-          #+#    #+#             */
/*   Updated: 2023/06/29 15:04:51 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

#include <iostream>

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		std::cerr << "❌Error: enter only one argument" << std::endl;
		return (1);
	}
	return ScalarConverter::convert (argv[1]);
	
}
