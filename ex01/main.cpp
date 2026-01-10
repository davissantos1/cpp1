/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 20:25:41 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/09 21:33:47 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av)
{
	(void)av;
	
	if (ac != 1)
		return (1);
	else
	{
		Zombie* bobs = zombieHorde(3, "BOB");
		for (int i = 0; i < 3; i++)
			(bobs + i)->announce();
		Zombie* steves = zombieHorde(4, "STEVE");
		for (int j = 0; j < 4; j++)
			steves[j].announce();
		delete[] (bobs);
		delete[] (steves);
	}
	return (0);
}
