/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 11:17:10 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/10 14:09:20 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain( std::string level )
{
	size_t	input;
	void	(Harl::*debugPtr)( void ) = &Harl::debug;
	void	(Harl::*infoPtr)( void ) = &Harl::info;
	void	(Harl::*warningPtr)( void ) = &Harl::warning;
	void	(Harl::*errorPtr)( void ) = &Harl::error;
	
	std::map<std::string, e_menu> menuMap;
	menuMap["DEBUG"] = DEBUG;
	menuMap["INFO"] = INFO;
	menuMap["WARNING"] = WARNING;
	menuMap["ERROR"] = ERROR;
	input = menuMap[level];
	switch (input)
	{
		case 1:
			(this->*debugPtr)();
			break ;
		case 2:
			(this->*infoPtr)();
			break ;
		case 3:
			(this->*warningPtr)();
			break ;
		case 4:
			(this->*errorPtr)();
			break ;
	}
}

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-specialketchup ";
	std::cout << "burger. I really do!";
	std::cout << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs ";
	std::cout << "more money. You didn’t put enough bacon in my burger! ";
	std::cout << "If you did, I wouldn’t be asking for more!";
	std::cout << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for ";
	std::cout << "free. I’ve been coming for years, whereas you ";
	std::cout << "started working here just last month.";
	std::cout << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! ";
	std::cout << "I want to speak to the manager now.";
	std::cout << std::endl;
}
