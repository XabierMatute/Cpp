/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:10:00 by xmatute-          #+#    #+#             */
/*   Updated: 2023/07/01 14:51:19 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef iter_HPP
# define iter_HPP

#include <cstddef>

template	<typename T, typename F>
void	iter(T *array, size_t const len,  F function)
{
	size_t i = 0;
	while (i < len)
	{
		function(array[i]);
		i++;
	}
}

#endif
