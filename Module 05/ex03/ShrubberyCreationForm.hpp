/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 19:23:54 by xmatute-          #+#    #+#             */
/*   Updated: 2023/06/06 08:41:38 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ShrubberyCreationForm_HPP
# define ShrubberyCreationForm_HPP

#include <string>
#include <exception>

#include "Bureaucrat.hpp"
#include "AForm.hpp"
class	Bureaucrat;
class	AForm;

class	ShrubberyCreationForm : public AForm
{
	private:
		std::string target;
		static const unsigned char	gradeToSign = 145;
		static const unsigned char	gradeToExecute = 137;

	private:
		ShrubberyCreationForm();
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& to_asign);

	protected:
		void	checkGradeExceptions(int grade) const;
		void	checkExecuteExceptions(Bureaucrat const& executor) const;

	public:
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& to_copy);

		ShrubberyCreationForm(std::string const &target);

		std::string	getTarget() const;
		
	private:
		void	performExecution() const;
};

#endif
