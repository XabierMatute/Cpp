/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 10:30:54 by xmatute-          #+#    #+#             */
/*   Updated: 2023/06/30 11:11:10 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"irt.h"

int main()
{
	std::srand(time(nullptr));
	Base	*rando  = generate();

	Base	*a = new A;
	Base	*b = new B;
	Base	*c = new C;
	Base	*nop = new Base;
	identify(a);
	identify(b);
	identify(c);
	identify(nop);
	identify(rando);
	identify(rando);
	identify(*rando);
	identify(*rando);
	delete (a);
	delete (b);
	delete (c);
	delete (nop);
	delete (rando);
	return 0;
}
