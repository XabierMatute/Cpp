/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 17:07:17 by xmatute-          #+#    #+#             */
/*   Updated: 2023/06/29 17:29:59 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

/*
** Orthodox Canonical Form
*/
// Default constructor
Serializer::Serializer(){}
// Copy constructor
Serializer::Serializer(const Serializer& to_copy){(void)to_copy;}
// Destructor
Serializer::~Serializer(){}
// Copy assignment operator
Serializer& Serializer::operator=(const Serializer& to_asign){(void)to_asign;return (*this);}

uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
