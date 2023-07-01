/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 10:30:54 by xmatute-          #+#    #+#             */
/*   Updated: 2023/07/01 10:52:17 by xmatute-         ###   ########.fr       */
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

	std::cout << "testing void identify(Base* p);" << std::endl;
	std::cout << "ABC" << std::endl;
	identify(a);
	identify(b);
	identify(c);
	std::cout << "Base" << std::endl;
	identify(nop);
	std::cout << "Base * generate(void);" << std::endl;
	identify(rando);
	identify(rando);
	std::cout << "testing void identify(Base& p);" << std::endl;
	std::cout << "ABC" << std::endl;
	identify(*a);
	identify(*b);
	identify(*c);
	std::cout << "Base" << std::endl;
	identify(*nop);
	std::cout << "Base * generate(void);" << std::endl;
	identify(*rando);
	identify(*rando);
	delete (a);
	delete (b);
	delete (c);
	delete (nop);
	delete (rando);
	return 0;
}
