/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:58:00 by xmatute-          #+#    #+#             */
/*   Updated: 2023/07/15 19:11:43 by xmatute-         ###   ########.fr       */
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
		~Span();
		Span(const Span& to_copy);
		Span& operator=(const Span& to_asign);

	public:
		Span(unsigned int N);
	
		void	addNumber(int to_add);

	private:
		int	min() const;
		int	max() const;
		
	public:
		unsigned int shortestSpan() const;
		unsigned int longestSpan() const;
};

#endif
