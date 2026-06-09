/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:31:47 by carolinamc        #+#    #+#             */
/*   Updated: 2026/06/09 10:21:25 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	srand(time(NULL));

	std::cout << "\n--- CREANDO BURÓCRATAS ---" << std::endl;
	Bureaucrat boss("Boss", 1);       // Nivel máximo
	Bureaucrat mid("Employee", 50);   // Nivel medio
	Bureaucrat noob("Student", 150);   // Nivel mínimo

	std::cout << "\n--- TEST 1: SHRUBBERY CREATION FORM (Sign: 145, Exec: 137) ---" << std::endl;
	try
	{
		ShrubberyCreationForm shrub("Garden");
		noob.executeForm(shrub); // Error: no está firmado
		noob.signForm(shrub);    // Error: nivel 150 > 145 (no atrapado aquí, pero se imprime)
		boss.signForm(shrub);    // Éxito
		boss.executeForm(shrub); // Éxito: Crea el archivo Garden_shrubbery
	}
	catch (std::exception &e)
	{
		std::cerr << "Excepción atrapada en Test 1: " << e.what() << '\n';
	}

	std::cout << "\n--- TEST 2: ROBOTOMY REQUEST FORM (Sign: 72, Exec: 45) ---" << std::endl;
	try
	{
		RobotomyRequestForm robot("Ben");
		mid.signForm(robot);     // Éxito: 50 < 72
		mid.executeForm(robot);  // Error: nivel 50 > 45, lanza excepción
		boss.executeForm(robot); // Éxito si llega aquí (50% probabilidad de ruidos)
	}
	catch (std::exception &e)
	{
		std::cerr << "Excepción atrapada en Test 2: " << e.what() << '\n';
	}

	std::cout << "\n--- TEST 3: PRESIDENTIAL PARDON FORM (Sign: 25, Exec: 5) ---" << std::endl;
	try
	{
		PresidentialPardonForm pardon("Arthur");
		boss.signForm(pardon);   // Éxito: 1 < 25
		boss.executeForm(pardon); // Éxito: Imprime el perdón
	}
	catch (std::exception &e)
	{
		std::cerr << "Excepción atrapada en Test 3: " << e.what() << '\n';
	}

	std::cout << "\n--- DESTRUCTORES ---" << std::endl;
	return 0;
	
}

