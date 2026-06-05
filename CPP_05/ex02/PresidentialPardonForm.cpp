/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 12:40:20 by carolinamc        #+#    #+#             */
/*   Updated: 2026/06/05 13:46:17 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

/* OCCF */
PresidentialPardonForm::PresidentialPardonForm(): AForm("presidential pardon form", "Default_target", SIGN_PRESIDENTIAL, EXEC_PRESIDENTIAL) {}

PresidentialPardonForm::PresidentialPardonForm( const std::string _target ): AForm("presidential pardon form", _target, SIGN_PRESIDENTIAL, EXEC_PRESIDENTIAL) {}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm& other ): AForm(other.getName(), other.getTarget(), other.getSignGrade(), other.getExecGrade()) {}

PresidentialPardonForm& PresidentialPardonForm::operator=( const PresidentialPardonForm& other )
{
	if (this != &other)
		this->setIsSigned(other.getIsSigned());
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

/* Public Methods */
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowException();
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox.\n";
}
