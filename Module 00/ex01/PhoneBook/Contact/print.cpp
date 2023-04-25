/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:54:19 by xmatute-          #+#    #+#             */
/*   Updated: 2023/04/18 18:13:21 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"

#include <iostream>

void	Contact::print()
{
	std::cout << first_name << ", " << last_name << " (" << nickname << ")\n";
	std::cout << "☎️" << phone_number << '\n';
	std::cout << "😰" << darkest_secret << '\n';
}
