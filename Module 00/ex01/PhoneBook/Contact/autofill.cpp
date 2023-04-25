/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   autofill.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 18:17:12 by xmatute-          #+#    #+#             */
/*   Updated: 2023/04/19 13:58:38 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Contact.hpp"

Contact	Contact::autofill()
{
	first_name = "Nombre";
	last_name = "Apellido";
	nickname = "Nick";
	phone_number = "000 000 000";
	darkest_secret = "shhhh";
	filled = true;
	return(*this);
}
