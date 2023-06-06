/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 19:23:54 by xmatute-          #+#    #+#             */
/*   Updated: 2023/06/05 20:52:44 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyRequestForm_HPP
# define RobotomyRequestForm_HPP

#include <string>
#include <exception>

#include "Bureaucrat.hpp"
#include "AForm.hpp"
class	Bureaucrat;
class	AForm;

class	RobotomyRequestForm : public AForm
{
	private:
		std::string target;
		static const unsigned char	gradeToSign = 145;
		static const unsigned char	gradeToExecute = 137;

	private:
		RobotomyRequestForm();
		RobotomyRequestForm& operator=(const RobotomyRequestForm& to_asign);

	protected:
		void	checkGradeExceptions(int grade) const;
		void	checkExecuteExceptions(Bureaucrat const& executor) const;

	public:
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& to_copy);

		RobotomyRequestForm(std::string const &target);

		std::string	getTarget() const;

	private:
		void	performExecution() const;
};

#endif
