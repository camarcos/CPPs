/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarTypes.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:10:53 by carolinamc        #+#    #+#             */
/*   Updated: 2026/06/24 15:32:09 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarTypes.hpp"

ScalarTypes::ScalarTypes() {}

ScalarTypes::ScalarTypes(const ScalarTypes &other) { (void)other; }

ScalarTypes::~ScalarTypes() {}

void printChar(char ch)
{
	if (ch < 32 || ch > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << ch << std::endl;
}

void ScalarTypes::convert(std::string input)
{
	std::cout << "input: " << input << std::endl;
	if(input.empty() == true)
		throw(std::invalid_argument("Non displayable"));
	if(ScalarTypes::specialcases(input) == true)
		return;
	if(input[0] == '\'')
	{
		if(input.size() != 3 || input[2] != '\'')
			throw(std::invalid_argument("Char not valid"));
		/*char*/
		{
			char ch = input[1];
			char convCh = static_cast<char>(ch);
			printChar(convCh);
			std::cout << "int: " << static_cast<int>(ch) << std::endl;
			std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(ch) << "f" << std::endl;
			std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(ch) << std::endl;
		}
	}
	else if(input.find('.') != std::string::npos)
	{
		if(input.find('f') != std ::string::npos)
		{
			/* float*/
			float fl = atof(input.c_str());
			char convCh = static_cast<char>(fl);
			printChar(convCh);
			std::cout << "int :" << static_cast<int>(fl) << std::endl;
			std::cout << "float: " << std::fixed << std::setprecision(1) << fl << "f" << std::endl;
			std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(fl) << std::endl;
		}
		else
		{
			/*double*/
			double db = atof(input.c_str());
			char convCh = static_cast<char>(db);
			printChar(convCh);
			std::cout << "int: " << static_cast<int>(db) << std::endl;
			std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(db) << "f" << std::endl;
			std::cout << "double: " << std::fixed << std::setprecision(1) << db << std::endl;
		}
	}
	else
	{
		/*int*/
		int n = atoi(input.c_str());
		char convCh = static_cast<char>(n);
		printChar(convCh);
		std::cout << "int: " << n << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(n) << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(n) << std::endl;
	}
}

bool ScalarTypes::specialcases(std::string input)
{
	if(input == "nan" || input == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if(input == "+inf" || input == "+inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if(input == "-inf" || input == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else
		throw(std::invalid_argument("Non displayable"));
	return true;
}
