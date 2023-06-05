/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 16:21:23 by xmatute-          #+#    #+#             */
/*   Updated: 2023/06/04 12:07:12 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
# define AForm_HPP

#include <string>
#include <exception>

#include "Bureaucrat.hpp"
class	Bureaucrat;

class	AForm
{
	private:
		const std::string	name;
		bool				isSigned;//= false
		const unsigned char	gradeToSign;
		const unsigned char	gradeToExecute;

		static const unsigned char	highestGrade = 1;
		static const unsigned char	lowestGrade = 150;

	private:
		AForm();
		AForm& operator=(const AForm& to_asign);

	protected:
		void	checkGradeExceptions(int grade) const;
		void	checkExecuteExceptions(Bureaucrat const& executor) const;

	public:
		virtual ~AForm() = 0;
		AForm(const AForm& to_copy);

		AForm(std::string const &name, int gradeToSign, int gradeToExecute);

		std::string	getName() const;
		bool		getIsSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;

		void		beSigned(Bureaucrat const& signer);

		void	execute(Bureaucrat const & executor) const;
	protected:
		virtual void	performExecution() const = 0;

	public:
		class GradeTooHighException : public std::exception
		{public:	const char* what() const throw();};
		class GradeTooLowException : public std::exception
		{public:	const char* what() const throw();};
		class UnsignedException : public std::exception
		{public:	const char* what() const throw();};
};

std::ostream& operator<<(std::ostream& os, const AForm& AForm);

#endif
