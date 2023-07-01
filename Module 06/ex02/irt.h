/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   irt.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:10:49 by xmatute-          #+#    #+#             */
/*   Updated: 2023/07/01 10:49:05 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef IRT_H
# define IRT_H

#include <iostream>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
