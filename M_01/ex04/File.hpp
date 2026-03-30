/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: camarcos <camarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 10:51:16 by carolinamc        #+#    #+#             */
/*   Updated: 2026/03/30 16:09:41 by camarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <fstream>
#include <stdlib.h>

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
