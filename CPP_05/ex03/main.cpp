/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:31:47 by carolinamc        #+#    #+#             */
/*   Updated: 2026/06/09 10:55:18 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(NULL));

	std::cout << "\n--- CREANDO OBJETOS ---" << std::endl;
	Intern someRandomIntern;
	Bureaucrat boss("Boss", 1);
	AForm* form = NULL;

	std::cout << "\n--- TEST 1: ROBOTOMY REQUEST FORM ---" << std::endl;
	try
	{
		form = someRandomIntern.makeForm("robotomy request", "Ben");
		if (form)
		{
			boss.signForm(*form);
			boss.executeForm(*form);
			delete form;
		}
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n--- TEST 2: SHRUBBERY CREATION FORM ---" << std::endl;
	try
	{
		form = someRandomIntern.makeForm("shrubbery creation", "Jardin");
		if (form)
		{
			boss.signForm(*form);
			boss.executeForm(*form);
			delete form;
		}
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n--- TEST 3: PRESIDENTIAL PARDON FORM ---" << std::endl;
	try
	{
		form = someRandomIntern.makeForm("presidential pardon", "Arthur");
		if (form)
		{
			boss.signForm(*form);
			boss.executeForm(*form);
			delete form;
		}
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n--- TEST 4: FORMULARIO INVENTADO (ERROR ESPERADO) ---" << std::endl;
	try
	{
		form = someRandomIntern.makeForm("Form random", "Office");
		if (form)
		{
			boss.signForm(*form);
			boss.executeForm(*form);
			delete form;
		}
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n--- DESTRUCTORES ---" << std::endl;
	return 0;
}
