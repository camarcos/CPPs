/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 12:41:21 by carolinamc        #+#    #+#             */
/*   Updated: 2026/06/05 11:07:17 by carolinamc       ###   ########.fr       */
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
		virtual void execute(Bureaucrat const & executor) const;
};
