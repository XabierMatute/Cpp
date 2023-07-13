/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:10:38 by xmatute-          #+#    #+#             */
/*   Updated: 2023/07/13 13:06:47 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef easyfind_HPP
# define easyfind_HPP

#include <algorithm>

// template	<typename T>// Assuming T is a container of integers
// int	easyfind(T container, int to_find)
// {
// 	typename T::iterator	found = std::find(container.begin(), container.end(), to_find);

// 	if (found == container.end())
// 	{
// 		class NotFound : public std::exception
// 		{
// 			public:	const char* what() const throw()
// 		{return "easyfind Error: int not found";}
// 		};
// 		throw NotFound();
// 	}
// 	*found = 894685;
// 	return (*found);
// }

template	<typename T>// Assuming T is a container of integers
typename T::iterator	easyfind(T container, int to_find)
{
	return(std::find(container.begin(), container.end(), to_find));
}

#endif
