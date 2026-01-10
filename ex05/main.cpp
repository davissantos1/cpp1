/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 10:45:55 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/10 14:10:00 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

static void	menu()
{		
	std::cout << "How will Harl complain?";
	std::cout << std::endl << std::endl;
	std::cout << "Input a single digit for an option below:";
	std::cout << std::endl;
	std::cout << "(0) EXIT: leaves the program." << std::endl;
	std::cout << "(1) DEBUG: print contextual error information." << std::endl;
	std::cout << "(2) INFO: print extensive error information." << std::endl;;
	std::cout << "(3) WARNING: print potential error messages." << std::endl;;
	std::cout << "(4) ERROR: print critical error messages." << std::endl;;
}

int	main(int ac, char **av)
{
	int	option;
	(void)av;

	if (ac != 1)
	{
		std::cerr << "No parameters supported, try again!\n";
		return (1);
	}
	else
	{
		while (1)
		{
			Harl harl;
			menu();
			std::cout << std::endl;
			std::cin >> option;
			if (std::cin.eof())
				break;
			if (std::cin.fail() || std::cin.bad())
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				continue;
			}
			std::cout << std::endl;
			switch (option)
			{
				case 1:
					harl.complain("DEBUG");
					break ;	
				case 2:
					harl.complain("INFO");
					break ;	
				case 3:
					harl.complain("WARNING");
					break ;	
				case 4:
					harl.complain("ERROR");
					break ;	
			}
			if (!option)
				break;
			std::cout << std::endl;
		}
	}
	return (0);
}
