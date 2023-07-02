/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 09:50:13 by xmatute-          #+#    #+#             */
/*   Updated: 2023/07/02 10:55:57 by xmatute-         ###   ########.fr       */
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

		static Zombie*	zombieHorde( int N, std::string name );

		~Zombie();
		
	private:
		Zombie();
		Zombie( std::string name );
};
#endif
