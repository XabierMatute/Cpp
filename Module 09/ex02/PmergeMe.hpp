/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:02:31 by xmatute-          #+#    #+#             */
/*   Updated: 2023/09/03 20:04:51 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PmergeMe_HPP
# define PmergeMe_HPP

#include <stack>

typedef std::stack<int> PmergeMestack;

class	PmergeMe
{
	private:
		PmergeMestack	stack;

	private:
		static bool	issing(const char c);
		int		extract();
		
		void	process(const char c);
		int		operate(const char c);

	public:
		PmergeMe();
		PmergeMe(const PmergeMe& to_copy);
		PmergeMe& operator=(const PmergeMe& to_asign);
		~PmergeMe();

		int		calculate(const char *input);
};

#endif
