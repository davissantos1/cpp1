/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 22:45:35 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/10 00:06:44 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB
{
	private:
		Weapon* _weapon;
		std::string _name;
	public:
		HumanB( std::string name);
		void	setWeapon( Weapon& weapon );
		void	attack();
};

#endif
