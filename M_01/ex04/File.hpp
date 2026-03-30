/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 10:51:16 by carolinamc        #+#    #+#             */
/*   Updated: 2026/03/30 12:44:24 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>

class	File
{
	private:
		std::string	fileName;
	
	public:
		File(std::string fileName);
		~File();

		std::string	readFromFile(void);
		void		writeToFile(std::string content);
		void		replaceString(std::string str1, std::string str2);
};
