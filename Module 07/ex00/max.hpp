/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 11:23:56 by xmatute-          #+#    #+#             */
/*   Updated: 2023/07/01 12:14:49 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef max_HPP
# define max_HPP

template	<typename T>
T	&max(T &a, T &b)
{
	if (a > b)
		return a;
	return b;
}

#endif