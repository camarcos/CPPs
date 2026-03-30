/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 10:51:01 by carolinamc        #+#    #+#             */
/*   Updated: 2026/03/30 13:13:18 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File(std::string fileName)
{
	this->fileName = fileName;
}

File::~File(void) {}

std::string	File::readFromFile(void)
{
	std::ifstream	readFile;
	std::string		content = "";
	std::string		aux;

	readFile.open(this->fileName, std::ios::in);
	if (!readFile.is_open())
	{
		std::cout << "Error: Cannot open the file specified." << std::endl;
		exit(EXIT_FAILURE);
	}
	while (std::getline(readFile, aux))
	{
		content += aux;
		if (!readFile.eof())
			content += '\n';
	}
	readFile.close();

	return content;
}

void	File::writeToFile(std::string content)
{	
	std::ofstream	writeFile;

	writeFile.open(this->fileName, std::ios::out | std::ios::trunc);
	if (!writeFile.is_open())
	{
		std::cout << "Error: Cannot open the file specified." << std::endl;
		exit(EXIT_FAILURE);
	}
	writeFile << content;
	writeFile.close();
}

void	File::replaceString(std::string str1, std::string str2)
{
	std::string content = this->readFromFile();
	if (content.find(str1) == std::string::npos)
		return ;

	std::fstream	modFile(this->fileName, std::ios::out | std::ios::trunc);
	if (!modFile.is_open())
	{
		std::cout << "Error: Cannot open the file specified." << std::endl;
		exit(EXIT_FAILURE);
	}
	size_t		posFound;
	size_t		posContent = 0;
	std::string	aux;

	while (1)
	{
		posFound = content.find(str1, posContent);
		aux = content.substr(posContent, posFound - posContent);
		modFile << aux;
		if (posFound == std::string::npos) 
			break ;
		modFile << str2;
		posContent = posFound + str1.length();
	}
	modFile.close();
}
