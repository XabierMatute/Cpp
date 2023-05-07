/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 09:50:13 by xmatute-          #+#    #+#             */
/*   Updated: 2023/04/27 11:37:01 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class	Zombie
{
	private:
		std::string name;
	
	public:
		void	announce( void );

		static Zombie*	newZombie( std::string name );
		static void		randomChump( std::string name );

		Zombie();
		Zombie( std::string name );
		~Zombie();
};
#endif
