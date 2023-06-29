/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 17:07:13 by xmatute-          #+#    #+#             */
/*   Updated: 2023/06/29 17:27:32 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Serializer_HPP
# define Serializer_HPP

#include "Data.h"

class	Serializer
{
	private:
		/*OCF*/
		Serializer();
		Serializer(const Serializer& to_copy);
		~Serializer();
		Serializer& operator=(const Serializer& to_asign);

	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
