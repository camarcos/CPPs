/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:31:40 by carolinamc        #+#    #+#             */
/*   Updated: 2026/06/02 10:58:05 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
	private: 
		const std::string	_name;
		unsigned int		_grade;
		
	public:
		/* Orthodox Canonical Class Form */
		Bureaucrat();
		Bureaucrat( const std::string& _name, int _grade = 150 );
		Bureaucrat( const Bureaucrat& other );
		Bureaucrat& operator=( const Bureaucrat& other );
		~Bureaucrat();
		
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

		/* Increment / Decrement grades */
		void	incrementGrade( void );
		void	decrementGrade( void );

		/* Getters */
		std::string const getName( void ) const;
		unsigned int getGrade( void ) const;
};

std::ostream& operator<<(std::ostream& os, Bureaucrat const& printobj);
