/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 12:41:21 by carolinamc        #+#    #+#             */
/*   Updated: 2026/06/09 13:30:29 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <iostream>
#include <fstream>

#define SIGN_SHRUBBERY 145
#define EXEC_SHRUBBERY 137

class ShrubberyCreationForm : public AForm
{
	public:
		/* OCCF */
		ShrubberyCreationForm();
		ShrubberyCreationForm( const std::string _target );
		ShrubberyCreationForm( const ShrubberyCreationForm& other );
		ShrubberyCreationForm& operator=( const ShrubberyCreationForm& other );
		~ShrubberyCreationForm();
		
		/* Exceptions */
		class FileNotOpenException : public std::exception
		{
			const char* what() const throw();
		};
		
		/* Public Methods */
		virtual void execute(Bureaucrat const & executor) const;
};
