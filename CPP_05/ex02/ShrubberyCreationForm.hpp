/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 12:41:21 by carolinamc        #+#    #+#             */
/*   Updated: 2026/06/04 15:00:08 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include "AForm.hpp"

#define SIGN_SHRUBBERY 145
#define EXEC_SHRUBBERY 137

class ShrubberyCreationForm : public AForm
{
	private:
		/* Exceptions */
		class FileNotOpenException : public std::exception
		{
			const char* what() const throw();
		};
	public:
		/* OCCF */
		ShrubberyCreationForm();
		ShrubberyCreationForm( const std::string _target );
		ShrubberyCreationForm( const ShrubberyCreationForm& other );
		ShrubberyCreationForm& operator=( const ShrubberyCreationForm& other );
		~ShrubberyCreationForm();

		/* Public Methods */
		virtual void execute(Bureaucrat const & executor) const; // override
};
