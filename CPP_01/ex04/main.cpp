/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 10:51:04 by carolinamc        #+#    #+#             */
/*   Updated: 2026/03/30 12:44:43 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int main(int argc, char **argv)
{	
	if (argc != 4)
	{
		std::cout << "Error: Invalid number of arguments." << std::endl;
		return 1;
	}
	int i = 1;
	while (argv[i])
	{
		std::string aux = argv[i];
		if (aux.empty() && i != 3)
		{
			std::cout << "Error: arguments 1 and 2 cannot be empty." << std::endl;
			return 1;
		}
		i++;
	}
	std::string stringFile = argv[1];
	std::string stringSearch = argv[2];
	std::string stringReplace = argv[3];

	File file(stringFile);
	File newFile(stringFile + ".replace");

	/* Read from file argv 1 */
	std::string content = file.readFromFile();

	/* Copy content on new file */
	newFile.writeToFile(content);

	/* Replace argv 2 with argv 3 */
	newFile.replaceString(stringSearch, stringReplace);

	std::cout << "Strings replaced successfully!!!" << std::endl;
	
	return 0;
}
