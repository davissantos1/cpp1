/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 22:45:12 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/10 00:06:17 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name )
{
	this->_name = name;
	this->_weapon = NULL;
}
	
void	HumanB::attack()
{
	std::string weapon = this->_weapon ? this->_weapon->getType() : "";
	std::cout << this->_name << " attacks with their " << weapon;
	std::cout << std::endl;
}

void	HumanB::setWeapon( Weapon& weapon )
{
	this->_weapon = &weapon;
}
