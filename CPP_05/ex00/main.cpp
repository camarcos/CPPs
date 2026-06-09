/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:31:47 by carolinamc        #+#    #+#             */
/*   Updated: 2026/06/08 17:34:26 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat b1("Off limit", 0);
		std::cout << b1 << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	Bureaucrat b2("In limit", 1);
	std::cout << b2 << std::endl;

	Bureaucrat b3("Paula", 23);
	std::cout << b3 << std::endl;

	Bureaucrat b4("Nadal", 123);
	std::cout << b4 << std::endl;

	Bureaucrat b5("In limit", 150);
	std::cout << b5 << std::endl;

	try
	{
		Bureaucrat b6("Off limit", 151);
		std::cout << b6 << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException& e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	
	return 0;
}
