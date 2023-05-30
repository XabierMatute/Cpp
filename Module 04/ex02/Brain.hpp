/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 12:41:15 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/30 13:09:12 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class	Brain
{
	private:
		static const size_t	idea_capacity = 100;
	
	public:
		std::string	ideas[idea_capacity];

	public:
		Brain();
		virtual ~Brain();
		Brain(const Brain& to_copy);
		Brain& operator=(const Brain& to_asign);

		void	brainstorm() const;
};

#endif
