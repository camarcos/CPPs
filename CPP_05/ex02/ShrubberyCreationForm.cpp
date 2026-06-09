/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 12:41:18 by carolinamc        #+#    #+#             */
/*   Updated: 2026/06/09 09:51:52 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

/* OCCF */
ShrubberyCreationForm::ShrubberyCreationForm(): AForm("Shrubbery creation form", "Default_target", SIGN_SHRUBBERY, EXEC_SHRUBBERY) {}

ShrubberyCreationForm::ShrubberyCreationForm( const std::string _target ): AForm("Shrubbery creation form", _target, SIGN_SHRUBBERY, EXEC_SHRUBBERY) {}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm& other ): AForm(other.getName(), other.getTarget(), other.getSignGrade(), other.getExecGrade()) {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=( const ShrubberyCreationForm& other )
{
	if (this != &other)
		this->setIsSigned(other.getIsSigned());
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

/* Exceptions */
const char* ShrubberyCreationForm::FileNotOpenException::what() const throw()
{
	return "Error opening the file";
}

/* Public Methods */
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getExecGrade())
		throw AForm::GradeTooLowException();

	std::ofstream	file((this->getTarget() + "_shrubbery").c_str(), std::ios::out | std::ios::trunc);

	if (!file.is_open())
		throw ShrubberyCreationForm::FileNotOpenException();

	file << "      /\\            /\\           /\\\n";
	file << "     /**\\          /**\\         /**\\\n";
	file << "    /****\\        /****\\       /****\\\n";
	file << "   /******\\      /******\\     /******\\\n";
	file << "  /********\\    /********\\   /********\\\n";
	file << "      ||            ||           ||\n";
	file << "      ||            ||           ||\n";

	file.close();
}
