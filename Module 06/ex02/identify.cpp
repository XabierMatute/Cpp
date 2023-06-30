/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identify.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 10:42:30 by xmatute-          #+#    #+#             */
/*   Updated: 2023/06/30 11:09:24 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

static char	ABC(Base* p)
{
	if (dynamic_cast<A *>(p))
		return ('A');
	if (dynamic_cast<B *>(p))
		return ('B');
	if (dynamic_cast<C *>(p))
		return ('C');
	return ('?');
}

void identify(Base* p)
{
	std::cout << ABC(p) << std::endl;
}

static char	ABC(Base& p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		return ('A');
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		(void)dynamic_cast<B &>(p);
		return ('B');
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		(void)dynamic_cast<C &>(p);
		return ('C');
	}
	catch(const std::exception& e)
	{
	}
	return ('?');
}

void identify(Base& p)
{
	std::cout << ABC(p) << std::endl;
}
