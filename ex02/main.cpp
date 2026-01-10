/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 20:25:41 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/09 22:21:13 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **av)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string &stringREF = brain;
	(void)av;
	
	if (ac != 1)
		return (1);
	else
	{
		std::cout << "Memory address of the string variable: " << &brain << std::endl;
		std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
		std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;
		std::cout << std::endl;
		std::cout << "Value of the string variable: " << brain << std::endl;
		std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
		std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
	}
	return (0);
}
