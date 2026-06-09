/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:31:47 by carolinamc        #+#    #+#             */
/*   Updated: 2026/06/08 17:34:00 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
    try
    {
        Bureaucrat bad("Bad", 0);
        std::cout << bad << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "Bureaucrat error: " << e.what() << std::endl;
    }

    try
    {
        Form badForm("BadForm", 0, 10);
        std::cout << badForm << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "Form error: " << e.what() << std::endl;
    }

    Bureaucrat worker("Worker", 100);
    Bureaucrat boss("Boss", 1);
    Form tax("Tax", 50, 25);

    try
    {
        tax.beSigned(worker);
    }
    catch (std::exception& e)
    {
        std::cout << "Worker sign error: " << e.what() << std::endl;
    }

    try
    {
        tax.beSigned(boss);
        std::cout << "Boss signed successfully" << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "Boss sign error: " << e.what() << std::endl;
    }

    std::cout << tax << std::endl;
    return 0;
}
