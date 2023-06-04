/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 16:21:23 by xmatute-          #+#    #+#             */
/*   Updated: 2023/06/04 12:07:12 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Form_HPP
# define Form_HPP

#include <string>
#include <exception>

#include "Bureaucrat.hpp"
class	Bureaucrat;

class	Form
{
	private:
		const std::string	name;
		bool				isSigned;//= false
		const unsigned char	gradeToSign;
		const unsigned char	gradeToExecute;

		static const unsigned char	highestGrade = 1;
		static const unsigned char	lowestGrade = 150;

	private:
		Form();
		Form& operator=(const Form& to_asign);

		void	checkGradeExceptions(int grade);

	public:
		virtual ~Form();
		Form(const Form& to_copy);

		Form(std::string const &name, int gradeToSign, int gradeToExecute);

		std::string	getName() const;
		bool		getIsSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;

		void		beSigned(Bureaucrat const& signer);

		class GradeTooHighException : public std::exception
		{public:	const char* what() const throw();};
		class GradeTooLowException : public std::exception
		{public:	const char* what() const throw();};
};

std::ostream& operator<<(std::ostream& os, const Form& Form);

#endif
