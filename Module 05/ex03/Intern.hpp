/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 14:09:36 by xmatute-          #+#    #+#             */
/*   Updated: 2023/06/26 20:53:32 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Intern_HPP
# define Intern_HPP

#include "AForm.hpp"
#include "AForm.hpp"

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	public:
		enum
		{
			ShrubberyCreation,
			PresidentialPardon,
			RobotomyRequest,
			KnownForms
		};

	private:
		typedef struct	s_form
		{
			std::string	name;
			int			i;
		}               t_form;

		static int	natoi( std::string name);

	public:
		Intern();
		~Intern();
		Intern(const Intern& to_copy);
		Intern& operator=(const Intern& to_asign);

		AForm	*makeForm(const std::string &name, const std::string &target) const;
};

#endif
