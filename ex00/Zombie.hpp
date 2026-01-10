/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:19:34 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/09 20:58:40 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class	Zombie
{
	private:
		std::string _name;

	public:
		Zombie( std::string name );
		void announce( void );
		~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
