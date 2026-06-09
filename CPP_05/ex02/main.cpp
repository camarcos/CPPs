/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:31:47 by carolinamc        #+#    #+#             */
/*   Updated: 2026/06/08 17:38:39 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>
#include <ctime>

int	main(void)
{
    std::srand(std::time(NULL));

    std::cout << "===== BUREAUCRAT TESTS =====" << std::endl;
    try
    {
        Bureaucrat b1("Off limit", 0);
        std::cout << b1 << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException& e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat b2("Off limit", 151);
        std::cout << b2 << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException& e)
    {
        std::cout << "Error: " << e.what() << std::endl;
    }

    Bureaucrat boss("Boss", 1);
    Bureaucrat manager("Manager", 100);
    Bureaucrat worker("Worker", 150);

    std::cout << boss << std::endl;
    std::cout << manager << std::endl;
    std::cout << worker << std::endl;

    std::cout << "\n===== FORM TESTS =====" << std::endl;
    ShrubberyCreationForm	shrub("home");
    RobotomyRequestForm		robot("Bender");
    PresidentialPardonForm	pardon("Arthur Dent");

    std::cout << shrub << std::endl;
    std::cout << robot << std::endl;
    std::cout << pardon << std::endl;

    std::cout << "\n===== SIGN + EXECUTE TESTS =====" << std::endl;

    std::cout << "\n-- Shrubbery --" << std::endl;
    worker.signForm(shrub);
    manager.signForm(shrub);
    worker.executeForm(shrub);
    manager.executeForm(shrub);

    std::cout << "\n-- Robotomy --" << std::endl;
    manager.signForm(robot);
    boss.signForm(robot);
    manager.executeForm(robot);
    boss.executeForm(robot);

    std::cout << "\n-- Presidential --" << std::endl;
    manager.signForm(pardon);
    boss.signForm(pardon);
    manager.executeForm(pardon);
    boss.executeForm(pardon);

    return 0;
}
