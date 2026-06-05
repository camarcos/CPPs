/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:31:45 by carolinamc        #+#    #+#             */
/*   Updated: 2026/06/05 12:55:25 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

/* Orthodox Canonical Class Form */
Bureaucrat::Bureaucrat() : _name("Default"), _grade(150) {}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat& other ) : _name(other._name), _grade(other._grade) {}

Bureaucrat& Bureaucrat::operator=( const Bureaucrat& other )
{
	if (this != &other)
		this->_grade = other.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat() {}

/* Exceptions */

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low!";
}

/* Public Methods */
void	Bureaucrat::incrementGrade()
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void	Bureaucrat::signForm( AForm& form ) const
{
	try
	{
		form.beSigned( *this );
		std::cout << this->_name << " signed " << form.getName() << '\n'; 
	} catch (std::exception &e)
	{
		std::cout << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << '\n';
	}
}

void	Bureaucrat::executeForm( AForm const& form ) const
{
	try {
		form.execute( *this );
		std::cout << this->_name << " executed " << form.getName() << '\n';
	} catch (std::exception& e) {
		std::cout << this->getName() << " cannot execute the form because " << e.what() << '\n';
	}
}
/* Getters */
std::string const Bureaucrat::getName() const { return this->_name; }
unsigned int Bureaucrat::getGrade() const { return this->_grade; }

/* << operator overload */
std::ostream& operator<<( std::ostream& op, const Bureaucrat& bureaucrat )
{
	op << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return op;
}
