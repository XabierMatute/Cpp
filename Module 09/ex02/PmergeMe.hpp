/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 16:02:31 by xmatute-          #+#    #+#             */
/*   Updated: 2023/09/04 18:11:49 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PmergeMe_HPP
# define PmergeMe_HPP

#include <deque>
#include <list>

typedef std::list<int> Ilist;
typedef std::deque<int> Ideque;

class	PmergeMe
{
	private:
		Ilist	list;
		Ideque	deque;

	private:
		int		sortList(const char **input);
		int		sortDeque(const char **input);

		void	MergeInsertSortList();

		
	public:
		PmergeMe();
		PmergeMe(const PmergeMe& to_copy);
		PmergeMe& operator=(const PmergeMe& to_asign);
		~PmergeMe();

		int		sort(const char **input, int size);
};

#endif
