/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 11:02:37 by carolinamc        #+#    #+#             */
/*   Updated: 2026/06/22 11:54:08 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarTypes.hpp"

int main(int ac, char **av)
{
	if(ac != 2)
	{
		std::cerr << "Error: Invalid number of arguments." << std::endl;
		return 1;
	}

	try
	{
		ScalarTypes::convert(std::string(av[1]));
	}
	catch(std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	return 0;
}
