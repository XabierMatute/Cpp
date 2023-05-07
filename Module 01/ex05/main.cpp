/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 11:47:54 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/07 12:02:44 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main()
{
	Karen	Karen;

	Karen.complain("DEBUG");
	Karen.complain("INFO");
	Karen.complain("WARNING");
	Karen.complain("ERROR");
	Karen.complain("KAREN");
	Karen.complain("");

	Karen.complain(Karen::DEBUG);
	Karen.complain(Karen::INFO);
	Karen.complain(Karen::WARNING);
	Karen.complain(Karen::ERROR);
	Karen.complain(42);
	Karen.complain(-69);
	Karen.complain(4);
	return 0;
}
