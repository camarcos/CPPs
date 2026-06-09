/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 11:39:20 by carolinamc        #+#    #+#             */
/*   Updated: 2026/06/09 13:32:44 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Bureaucrat.hpp"
#include <iostream>

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		bool	_isSigned;
		const unsigned int _signGrade;
		const unsigned int _execGrade;

	public:
		/* Orthodox Canonical Class Form */
		Form();
		Form( std::string _name, int _signGrade = 1, int _execGrade = 1 );
		Form ( const Form& other );
		Form& operator=( const Form& other );
		~Form();
		
		/* Exceptions */
		class GradeTooHighException : public std::exception
		{
			public:
			const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
			const char* what() const throw();
		};
		class AlreadySingedException : public std::exception
		{
			public:
			const char* what() const throw();
		};
		
		/* Public Methods */
		std::string getName() const;
		const bool& getIsSigned() const;
		const unsigned int& getSignGrade() const;
		const unsigned int& getExecGrade() const;
		
		void beSigned( const Bureaucrat& bureaucrat );
		
};
/* << operator overload */
std::ostream& operator<<(std::ostream& op, const Form& form );