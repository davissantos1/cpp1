/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/08 15:19:34 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/09 21:21:43 by dasimoes         ###   ########.fr       */
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
		Zombie() {};
		Zombie( std::string name );
		~Zombie();

		void	announce( void );
		void	setName( std::string name );
};

Zombie* zombieHorde( int N, std::string name );

#endif
