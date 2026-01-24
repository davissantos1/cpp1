/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dasimoes <dasimoes@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 07:58:36 by dasimoes          #+#    #+#             */
/*   Updated: 2026/01/24 17:49:23 by dasimoes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

int	read_and_replace(std::string fileName, char **av)
{
	int			pos;
	std::string line;
	std::string	s1;
	std::string	s2;

	s1 = av[2];
	s2 = av[3];
	std::ifstream	inFile(av[1]);
	std::ofstream	outFile(fileName.c_str());
	if (!inFile.is_open() || !outFile.is_open())
	{
		std::cerr << "Could not open file! Try again!"<< std::endl;
		return (2);
	}
	while (std::getline(inFile, line))
	{
		pos = line.find(s1);
		while (pos >= 0)
		{
			line.erase(pos, s1.size());
			line.insert(pos, s2);
			pos = line.find(s1);
		}
		outFile << line + "\n";
	}
	return (0);
}

int	main(int ac, char **av)
{
	std::string fileName;

	if (ac != 4)
	{
		std::cerr << "Wrong number of arguments!\n";
		std::cerr << "Type in ./better-sed <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	else
	{
		fileName = av[1];
		
		fileName = fileName + ".replace";
		if (read_and_replace(fileName, av) == 2)
			return (2);
	}
	return (0);
}
