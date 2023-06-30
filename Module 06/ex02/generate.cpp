/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 10:41:34 by xmatute-          #+#    #+#             */
/*   Updated: 2023/06/30 10:59:41 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	switch (std::rand() % 3)
	{
	case 0:
		return(new A);
	case 1:
		return(new B);
	case 2:
		return(new C);
	default:
		return(NULL);
	}
}
