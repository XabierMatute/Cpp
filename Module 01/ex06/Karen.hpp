/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:46:26 by xmatute-          #+#    #+#             */
/*   Updated: 2023/05/07 12:10:01 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#define ENUM_VALUE_NAME(e, value) BOOST_PP_STRINGIZE(e##value)

#include <string>

class	Karen
{
	public:
		enum
		{
			DEBUG,
			INFO,
			WARNING,
			ERROR,
			LEVELS
		};

	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

		void unknown( void );

		static const std::string l[LEVELS];

		static void (Karen::*f[LEVELS])();
		
	
	public:
		int	letoi( std::string level );
		void complain( std::string level );
		void complain(int level);
};

#endif
