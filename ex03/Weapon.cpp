/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 22:28:49 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/09 23:57:03 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string weaponType )
{
	this->_type = weaponType;
}

void	Weapon::setType( std::string weaponType )
{
	this->_type = weaponType;
}

const std::string&	Weapon::getType()
{
	return (this->_type);
}
