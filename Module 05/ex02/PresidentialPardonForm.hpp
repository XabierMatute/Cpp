/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 19:23:54 by xmatute-          #+#    #+#             */
/*   Updated: 2023/06/05 20:52:44 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_HPP
# define PresidentialPardonForm_HPP

#include <string>
#include <exception>

#include "Bureaucrat.hpp"
#include "AForm.hpp"
class	Bureaucrat;
class	AForm;

class	PresidentialPardonForm : public AForm
{
	private:
		std::string target;
		static const unsigned char	gradeToSign = 25;
		static const unsigned char	gradeToExecute = 5;

	private:
		PresidentialPardonForm();
		PresidentialPardonForm& operator=(const PresidentialPardonForm& to_asign);

	protected:
		void	checkGradeExceptions(int grade) const;
		void	checkExecuteExceptions(Bureaucrat const& executor) const;

	public:
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& to_copy);

		PresidentialPardonForm(std::string const &target);

		std::string	getTarget() const;

	private:
		void	performExecution() const;
};

#endif
