/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 13:36:00 by xmatute-          #+#    #+#             */
/*   Updated: 2023/06/04 12:09:04 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <exception>

#include "Form.hpp"
class	Form;

class	Bureaucrat
{
	private:
		const std::string	name;
		unsigned char		grade;

		static const unsigned char	highestGrade = 1;
		static const unsigned char	lowestGrade = 150;

	private:
		Bureaucrat();
		Bureaucrat& operator=(const Bureaucrat& to_asign);

		void	checkGradeExceptions(int grade);

	public:
		virtual ~Bureaucrat();
		Bureaucrat(const Bureaucrat& to_copy);

		Bureaucrat(std::string const &name, int grade);

		std::string	getName() const;
		int			getGrade() const;

		Bureaucrat&	incrementGrade();
		Bureaucrat&	decrementGrade();

		Bureaucrat&	incrementGrade(unsigned int i);
		Bureaucrat&	decrementGrade(unsigned int d);

		void	signForm(Form &form) const;

		class GradeTooHighException : public std::exception
		{public:	const char* what() const throw();};
		class GradeTooLowException : public std::exception
		{public:	const char* what() const throw();};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
