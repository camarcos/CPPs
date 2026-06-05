/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 12:41:30 by carolinamc        #+#    #+#             */
/*   Updated: 2026/06/05 13:46:10 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

/* OCCF*/
RobotomyRequestForm::RobotomyRequestForm(): AForm("robotomy request form", "Default_target", SIGN_ROBOTOMY, EXEC_ROBOTOMY) {}

RobotomyRequestForm::RobotomyRequestForm( const std::string _target ): AForm("robotomy request form", _target, SIGN_ROBOTOMY, EXEC_ROBOTOMY) {}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm& other ): AForm(other.getName(), other.getTarget(), other.getSignGrade(), other.getExecGrade()) {}

RobotomyRequestForm& RobotomyRequestForm::operator=( const RobotomyRequestForm& other )
{
	if (this != &other)
		this->setIsSigned(other.getIsSigned());
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

/* Public Methods */
void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowException();
	int i = 0;
	while (i < 3)
	{
		std::cout << "Zzzzzz...\n";
		i++;
	}
	if (std::rand() % 2 == 0)
		std::cout << this->getTarget() << " has been successfully robotomized!\n";
	else
		std::cout << "Robotomy on " << this->getTarget() << " failed :(\n";
}
