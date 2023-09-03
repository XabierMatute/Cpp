/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:01:35 by xmatute-          #+#    #+#             */
/*   Updated: 2023/09/03 18:44:03 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <stack>

typedef std::stack<int> RPNstack;

class	RPN
{
	private:
		RPNstack	stack;

	private:
		static bool	issing(const char c);
		int		extract();
		
		void	process(const char c);
		int		operate(const char c);

	public:
		RPN();
		RPN(const RPN& to_copy);
		RPN& operator=(const RPN& to_asign);
		~RPN();

		int		calculate(const char *input);
};

#endif
