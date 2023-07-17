/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:58:00 by xmatute-          #+#    #+#             */
/*   Updated: 2023/07/17 17:42:37 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Span_HPP
# define Span_HPP

#include <vector>

class	Span
{
	private:
		const unsigned int	N;
		std::vector<int>	container;
		
	private:
		/*OCF*/
		Span();
		Span(const Span& to_copy);
		Span& operator=(const Span& to_asign);

	public:
		Span(unsigned int N);
		~Span();
	
		void	addNumber(int to_add);
		void	addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	private:
		static int	min(std::vector<int> const container);
		static int	max(std::vector<int> const container);
		
		int	min() const;
		int	max() const;

		static std::vector<int>	diffs(std::vector<int> const container);
		
	public:
		unsigned int shortestSpan();
		unsigned int longestSpan() const;
};

#endif
