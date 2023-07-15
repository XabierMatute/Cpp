/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:10:38 by xmatute-          #+#    #+#             */
/*   Updated: 2023/07/14 20:35:46 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef easyfind_HPP
# define easyfind_HPP

#include <algorithm>

template	<typename T>// Assuming T is a container of integers
typename T::iterator	easyfind(T &container, int to_find)
{
	return(std::find(container.begin(), container.end(), to_find));
}

#endif
