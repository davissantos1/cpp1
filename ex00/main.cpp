/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 20:25:41 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/09 20:59:49 by dasimoes         ###   ########.fr       */
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
		Zombie	*heap = newZombie("HEAP");
		randomChump("STACK");
		delete (heap);
	}
	return (0);
}
