/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sadarnau <sadarnau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:53:56 by sadarnau          #+#    #+#             */
/*   Updated: 2021/02/12 22:36:46 by sadarnau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	search_replace(std::string s1, std::string s2, std::string fileName)
{
	std::ifstream	in;
	std::ofstream	out;
	std::string		line;
	size_t 			found;

	in.open(fileName);

	if (!in.is_open()) 
	{
		std::cout << "Unable to open input file !" << std::endl;
		return (1);
	}	

	out.open(fileName + ".replace");
	if (!out.is_open()) 
	{
		in.close();
		std::cout << "Unable to open output file !" << std::endl;
		return (1);
	}

	while (getline(in,line))
	{
		found = line.find(s1);
		while (found != std::string::npos)
		{
			line.replace(line.find(s1), s1.length(), s2);
			found = line.find(s1);
		}
		out << line << std::endl;
	}

	in.close();
	out.close();
	return (0);
}

int main(int ac, char *av[])
{
	std::string s1, s2, fileName;

	if (ac != 4)
	{
		std::cout << "Wrong number of arguments !" << std::endl;
		std::cout << "Reminder : ./replace fileName str1 str2" << std::endl;
		return (1);
	}
	s1 = std::string(av[2]);
	s2 = std::string(av[3]);
	fileName = std::string(av[1]);
	if (!s1.length() || !s2.length())
	{
		std::cout << "There is an empty string" << std::endl;
		return (1);
	}
	return (search_replace(s1, s2, fileName));
}
