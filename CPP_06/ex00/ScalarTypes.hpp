/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarTypes.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:10:56 by carolinamc        #+#    #+#             */
/*   Updated: 2026/06/24 15:31:41 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <exception>

class ScalarTypes
{
	private:
		ScalarTypes();
		ScalarTypes(const ScalarTypes &other);
		ScalarTypes &operator=(const ScalarTypes &other);
		~ScalarTypes();
		
		// void convertToChar(double value);
		// void convertToInt(double value);
		// void convertToFloat(double value);
		// void convertToDouble(double value);
		
	public:
		static void convert(std::string input);
		static bool specialcases(std::string input);
};
